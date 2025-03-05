int main() {
    BackupJob job;
    job.AddObject(BackupObject("example.txt"));
    RestorePoint point = job.CreateRestorePoint();

    ExceptionHandling::LogError("Тестовая ошибка");
    return 0;
}
