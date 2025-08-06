#ifndef CAMERA_H
#define CAMERA_H

#include <string>
#include <vector>
#include <cstdint>

class Camera {
public:
    virtual void SetExplainUrl(const std::string& url, const std::string& token) = 0;
    virtual bool Capture() = 0;
    virtual bool SetHMirror(bool enabled) = 0;
    virtual bool SetVFlip(bool enabled) = 0;
    virtual std::string Explain(const std::string &question) = 0;
    virtual std::vector<uint8_t> GetJpegBuffer(int quality) = 0;
    virtual std::string GetJpegBase64(int quality) = 0; // Default implementation returns empty string
};

#endif // CAMERA_H
