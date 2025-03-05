class RestorePoint {
private:
    std::vector<BackupObject> objects;
    std::string timestamp;

public:
    RestorePoint(const std::vector<BackupObject>& objects);
    std::vector<BackupObject> GetObjects() const;
    std::string GetTimestamp() const;
};