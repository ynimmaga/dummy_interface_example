#ifndef DUMMY_TEXT2TEXT_PIPELINE_HPP
#define DUMMY_TEXT2TEXT_PIPELINE_HPP

#include "backend_types.hpp"
#include "factory.hpp"
#include "pipelines/text2text_pipeline.hpp"
#include <iostream>

namespace onnx::genai {

class DummyText2TextPipeline : public Text2TextPipeline {
public:
    DummyText2TextPipeline(const std::string& model_path, const std::string& device);

    GenerationResult operator()(const std::string& input) override;

    BackendType get_backend_type() const override;

private:
    std::string model_path_;
    std::string device_;
};

std::shared_ptr<Text2TextPipeline> create_pipeline(
    BackendType backend,
    const std::string& model_path,
    const std::string& device);

} // namespace onnx::genai

#endif // DUMMY_TEXT2TEXT_PIPELINE_HPP
