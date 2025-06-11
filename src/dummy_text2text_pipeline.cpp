#include "dummy_text2text_pipeline.hpp"
#include <stdexcept>
#include <iostream>

namespace onnx::genai {

DummyText2TextPipeline::DummyText2TextPipeline(const std::string& model_path, const std::string& device)
    : model_path_(model_path), device_(device) {
    std::cout << "Initialized DummyText2TextPipeline with model: " << model_path_
              << " on device: " << device_ << std::endl;
}

GenerationResult DummyText2TextPipeline::operator()(const std::string& input) {
    std::cout << "Generating text for input: " << input << std::endl;
    return GenerationResult{"[Dummy output for: " + input + "]"};
}

BackendType DummyText2TextPipeline::get_backend_type() const {
    return BackendType::ONNXRuntime;
}

std::shared_ptr<Text2TextPipeline> create_pipeline(
    BackendType backend,
    const std::string& model_path,
    const std::string& device) {
    if (backend == BackendType::ONNXRuntime) {
        return std::make_shared<DummyText2TextPipeline>(model_path, device);
    }
    throw std::runtime_error("Unsupported backend");
}

} // namespace onnx::genai
