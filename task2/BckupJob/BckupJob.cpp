class BackupJob {
private:
    std::vector<BackupObject> objects;
    std::vector<RestorePoint> restorePoints;

public:
    void AddObject(const BackupObject& object);
    void RemoveObject(const std::string& path);
    RestorePoint CreateRestorePoint();
    std::vector<RestorePoint> GetRestorePoints() const;
};