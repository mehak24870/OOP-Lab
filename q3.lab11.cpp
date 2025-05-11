#include <iostream>
#include <exception>
#include <string>

// Base exception class
class FileException : public std::exception {
public:
    virtual const char* what() const noexcept override {
        return "File exception occurred.";
    }
};

// Derived: File not found
class FileNotFoundException : public FileException {
public:
    const char* what() const noexcept override {
        return "File not found!";
    }
};

// Derived: Permission denied
class PermissionDeniedException : public FileException {
public:
    const char* what() const noexcept override {
        return "Access denied!";
    }
};

// Simulated file-reading function
void readFile(const std::string& filename) {
    if (filename == "missing.txt") {
        throw FileNotFoundException();
    } else if (filename == "secret.txt") {
        throw PermissionDeniedException();
    } else {
        std::cout << "Reading file: " << filename << std::endl;
        // Simulate reading success
    }
}

// Main
int main() {
    std::string testFiles[] = {"document.txt", "missing.txt", "secret.txt"};

    for (const auto& file : testFiles) {
        std::cout << "Reading '" << file << "':\n";
        try {
            readFile(file);
        }
        catch (const PermissionDeniedException& e) {
            std::cout << "PermissionDeniedException\n- " << e.what() << "\n\n";
        }
        catch (const FileNotFoundException& e) {
            std::cout << "FileNotFoundException\n- " << e.what() << "\n\n";
        }
        catch (const FileException& e) {
            std::cout << "FileException\n- " << e.what() << "\n\n";
        }
    }

    return 0;
}
