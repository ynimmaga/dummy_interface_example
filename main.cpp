#include "dummy_text2text_pipeline.hpp"
#include <iostream>

using namespace onnx::genai;

int main() {
    auto pipeline = create_pipeline(BackendType::ONNXRuntime, "dummy_model.onnx", "CPU");
    GenerationResult result = (*pipeline)("Hello, world!");
    std::cout << "Generated text: " << result.text << std::endl;
    return 0;
}
