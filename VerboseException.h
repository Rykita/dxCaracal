#pragma once
#include <exception>
#include <string>

class VerboseException : public std::exception
{
public:
	VerboseException(int line, const char* file) noexcept;
	// What type of exception is it
	const char* what() const noexcept override;
	virtual const char* GetType() const noexcept;
	int GetLine() const noexcept;
	const std::string& GetFile() const noexcept;
	std::string GetOriginString() const noexcept;
private:
	int line;
	std::string file;
protected:
	mutable std::string whatBuffer;
};

