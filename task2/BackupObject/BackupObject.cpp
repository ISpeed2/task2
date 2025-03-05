class BackupObject {
private:
    std::string path;
    uintmax_t size;

public:
    BackupObject(const std::string& path);
    std::string GetPath() const;
    uintmax_t GetSize() const;
};
