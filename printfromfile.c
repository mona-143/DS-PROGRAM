#include <stdio.h>
#include <zip.h>

int main() {
    int err = 0;
    zip_t *archive = zip_open("archive.zip", 0, &err);
    if (archive == NULL) {
        printf("Error opening ZIP archive: %d\n", err);
        return 1;
    }

    zip_int64_t num_entries = zip_get_num_entries(archive, 0);
    for (zip_int64_t i = 0; i < num_entries; i++) {
        const char *name = zip_get_name(archive, i, 0);
        if (name == NULL) {
            printf("Error reading file name at index %lld\n", i);
            continue;
        }
        printf("File: %s\n", name);

        zip_file_t *file = zip_fopen_index(archive, i, 0);
        if (file == NULL) {
            printf("Error opening file: %s\n", name);
            continue;
        }

        char buffer[100];
        zip_int64_t bytes_read;
        while ((bytes_read = zip_fread(file, buffer, sizeof(buffer))) > 0) {
            fwrite(buffer, 1, bytes_read, stdout);
        }
        printf("\n");

        zip_fclose(file);
    }

    zip_close(archive);
    return 0;
}
