class StorageAlgorithm {
public:
    virtual void Backup(const std::vector<BackupObject>& objects, const std::string& destination) = 0;
};