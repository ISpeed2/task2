class Storage {
public:
    virtual void Save(const RestorePoint& restorePoint) = 0;
    virtual void Load(const std::string& restorePointName) = 0;
};