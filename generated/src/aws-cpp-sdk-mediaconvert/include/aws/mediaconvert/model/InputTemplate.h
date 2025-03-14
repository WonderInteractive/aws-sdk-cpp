﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/mediaconvert/model/AdvancedInputFilter.h>
#include <aws/mediaconvert/model/AdvancedInputFilterSettings.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/mediaconvert/model/Rectangle.h>
#include <aws/mediaconvert/model/InputDeblockFilter.h>
#include <aws/mediaconvert/model/InputDenoiseFilter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediaconvert/model/InputFilterEnable.h>
#include <aws/mediaconvert/model/ImageInserter.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mediaconvert/model/InputScanType.h>
#include <aws/mediaconvert/model/InputPsiControl.h>
#include <aws/mediaconvert/model/InputTimecodeSource.h>
#include <aws/mediaconvert/model/VideoSelector.h>
#include <aws/mediaconvert/model/AudioSelectorGroup.h>
#include <aws/mediaconvert/model/AudioSelector.h>
#include <aws/mediaconvert/model/CaptionSelector.h>
#include <aws/mediaconvert/model/DynamicAudioSelector.h>
#include <aws/mediaconvert/model/InputClipping.h>
#include <aws/mediaconvert/model/VideoOverlay.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace MediaConvert
{
namespace Model
{

  /**
   * Specified video input in a template.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/InputTemplate">AWS
   * API Reference</a></p>
   */
  class InputTemplate
  {
  public:
    AWS_MEDIACONVERT_API InputTemplate();
    AWS_MEDIACONVERT_API InputTemplate(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API InputTemplate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * Use to remove noise, blocking, blurriness, or ringing from your input as a
     * pre-filter step before encoding. The Advanced input filter removes more types of
     * compression artifacts and is an improvement when compared to basic Deblock and
     * Denoise filters. To remove video compression artifacts from your input and
     * improve the video quality: Choose Enabled. Additionally, this filter can help
     * increase the video quality of your output relative to its bitrate, since noisy
     * inputs are more complex and require more bits to encode. To help restore loss of
     * detail after applying the filter, you can optionally add texture or sharpening
     * as an additional step. Jobs that use this feature incur pro-tier pricing. To not
     * apply advanced input filtering: Choose Disabled. Note that you can still apply
     * basic filtering with Deblock and Denoise.
     */
    inline const AdvancedInputFilter& GetAdvancedInputFilter() const{ return m_advancedInputFilter; }
    inline bool AdvancedInputFilterHasBeenSet() const { return m_advancedInputFilterHasBeenSet; }
    inline void SetAdvancedInputFilter(const AdvancedInputFilter& value) { m_advancedInputFilterHasBeenSet = true; m_advancedInputFilter = value; }
    inline void SetAdvancedInputFilter(AdvancedInputFilter&& value) { m_advancedInputFilterHasBeenSet = true; m_advancedInputFilter = std::move(value); }
    inline InputTemplate& WithAdvancedInputFilter(const AdvancedInputFilter& value) { SetAdvancedInputFilter(value); return *this;}
    inline InputTemplate& WithAdvancedInputFilter(AdvancedInputFilter&& value) { SetAdvancedInputFilter(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Optional settings for Advanced input filter when you set Advanced input filter
     * to Enabled.
     */
    inline const AdvancedInputFilterSettings& GetAdvancedInputFilterSettings() const{ return m_advancedInputFilterSettings; }
    inline bool AdvancedInputFilterSettingsHasBeenSet() const { return m_advancedInputFilterSettingsHasBeenSet; }
    inline void SetAdvancedInputFilterSettings(const AdvancedInputFilterSettings& value) { m_advancedInputFilterSettingsHasBeenSet = true; m_advancedInputFilterSettings = value; }
    inline void SetAdvancedInputFilterSettings(AdvancedInputFilterSettings&& value) { m_advancedInputFilterSettingsHasBeenSet = true; m_advancedInputFilterSettings = std::move(value); }
    inline InputTemplate& WithAdvancedInputFilterSettings(const AdvancedInputFilterSettings& value) { SetAdvancedInputFilterSettings(value); return *this;}
    inline InputTemplate& WithAdvancedInputFilterSettings(AdvancedInputFilterSettings&& value) { SetAdvancedInputFilterSettings(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Use audio selector groups to combine multiple sidecar audio inputs so that you
     * can assign them to a single output audio tab. Note that, if you're working with
     * embedded audio, it's simpler to assign multiple input tracks into a single audio
     * selector rather than use an audio selector group.
     */
    inline const Aws::Map<Aws::String, AudioSelectorGroup>& GetAudioSelectorGroups() const{ return m_audioSelectorGroups; }
    inline bool AudioSelectorGroupsHasBeenSet() const { return m_audioSelectorGroupsHasBeenSet; }
    inline void SetAudioSelectorGroups(const Aws::Map<Aws::String, AudioSelectorGroup>& value) { m_audioSelectorGroupsHasBeenSet = true; m_audioSelectorGroups = value; }
    inline void SetAudioSelectorGroups(Aws::Map<Aws::String, AudioSelectorGroup>&& value) { m_audioSelectorGroupsHasBeenSet = true; m_audioSelectorGroups = std::move(value); }
    inline InputTemplate& WithAudioSelectorGroups(const Aws::Map<Aws::String, AudioSelectorGroup>& value) { SetAudioSelectorGroups(value); return *this;}
    inline InputTemplate& WithAudioSelectorGroups(Aws::Map<Aws::String, AudioSelectorGroup>&& value) { SetAudioSelectorGroups(std::move(value)); return *this;}
    inline InputTemplate& AddAudioSelectorGroups(const Aws::String& key, const AudioSelectorGroup& value) { m_audioSelectorGroupsHasBeenSet = true; m_audioSelectorGroups.emplace(key, value); return *this; }
    inline InputTemplate& AddAudioSelectorGroups(Aws::String&& key, const AudioSelectorGroup& value) { m_audioSelectorGroupsHasBeenSet = true; m_audioSelectorGroups.emplace(std::move(key), value); return *this; }
    inline InputTemplate& AddAudioSelectorGroups(const Aws::String& key, AudioSelectorGroup&& value) { m_audioSelectorGroupsHasBeenSet = true; m_audioSelectorGroups.emplace(key, std::move(value)); return *this; }
    inline InputTemplate& AddAudioSelectorGroups(Aws::String&& key, AudioSelectorGroup&& value) { m_audioSelectorGroupsHasBeenSet = true; m_audioSelectorGroups.emplace(std::move(key), std::move(value)); return *this; }
    inline InputTemplate& AddAudioSelectorGroups(const char* key, AudioSelectorGroup&& value) { m_audioSelectorGroupsHasBeenSet = true; m_audioSelectorGroups.emplace(key, std::move(value)); return *this; }
    inline InputTemplate& AddAudioSelectorGroups(const char* key, const AudioSelectorGroup& value) { m_audioSelectorGroupsHasBeenSet = true; m_audioSelectorGroups.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * Use Audio selectors to specify a track or set of tracks from the input that you
     * will use in your outputs. You can use multiple Audio selectors per input.
     */
    inline const Aws::Map<Aws::String, AudioSelector>& GetAudioSelectors() const{ return m_audioSelectors; }
    inline bool AudioSelectorsHasBeenSet() const { return m_audioSelectorsHasBeenSet; }
    inline void SetAudioSelectors(const Aws::Map<Aws::String, AudioSelector>& value) { m_audioSelectorsHasBeenSet = true; m_audioSelectors = value; }
    inline void SetAudioSelectors(Aws::Map<Aws::String, AudioSelector>&& value) { m_audioSelectorsHasBeenSet = true; m_audioSelectors = std::move(value); }
    inline InputTemplate& WithAudioSelectors(const Aws::Map<Aws::String, AudioSelector>& value) { SetAudioSelectors(value); return *this;}
    inline InputTemplate& WithAudioSelectors(Aws::Map<Aws::String, AudioSelector>&& value) { SetAudioSelectors(std::move(value)); return *this;}
    inline InputTemplate& AddAudioSelectors(const Aws::String& key, const AudioSelector& value) { m_audioSelectorsHasBeenSet = true; m_audioSelectors.emplace(key, value); return *this; }
    inline InputTemplate& AddAudioSelectors(Aws::String&& key, const AudioSelector& value) { m_audioSelectorsHasBeenSet = true; m_audioSelectors.emplace(std::move(key), value); return *this; }
    inline InputTemplate& AddAudioSelectors(const Aws::String& key, AudioSelector&& value) { m_audioSelectorsHasBeenSet = true; m_audioSelectors.emplace(key, std::move(value)); return *this; }
    inline InputTemplate& AddAudioSelectors(Aws::String&& key, AudioSelector&& value) { m_audioSelectorsHasBeenSet = true; m_audioSelectors.emplace(std::move(key), std::move(value)); return *this; }
    inline InputTemplate& AddAudioSelectors(const char* key, AudioSelector&& value) { m_audioSelectorsHasBeenSet = true; m_audioSelectors.emplace(key, std::move(value)); return *this; }
    inline InputTemplate& AddAudioSelectors(const char* key, const AudioSelector& value) { m_audioSelectorsHasBeenSet = true; m_audioSelectors.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * Use captions selectors to specify the captions data from your input that you use
     * in your outputs. You can use up to 100 captions selectors per input.
     */
    inline const Aws::Map<Aws::String, CaptionSelector>& GetCaptionSelectors() const{ return m_captionSelectors; }
    inline bool CaptionSelectorsHasBeenSet() const { return m_captionSelectorsHasBeenSet; }
    inline void SetCaptionSelectors(const Aws::Map<Aws::String, CaptionSelector>& value) { m_captionSelectorsHasBeenSet = true; m_captionSelectors = value; }
    inline void SetCaptionSelectors(Aws::Map<Aws::String, CaptionSelector>&& value) { m_captionSelectorsHasBeenSet = true; m_captionSelectors = std::move(value); }
    inline InputTemplate& WithCaptionSelectors(const Aws::Map<Aws::String, CaptionSelector>& value) { SetCaptionSelectors(value); return *this;}
    inline InputTemplate& WithCaptionSelectors(Aws::Map<Aws::String, CaptionSelector>&& value) { SetCaptionSelectors(std::move(value)); return *this;}
    inline InputTemplate& AddCaptionSelectors(const Aws::String& key, const CaptionSelector& value) { m_captionSelectorsHasBeenSet = true; m_captionSelectors.emplace(key, value); return *this; }
    inline InputTemplate& AddCaptionSelectors(Aws::String&& key, const CaptionSelector& value) { m_captionSelectorsHasBeenSet = true; m_captionSelectors.emplace(std::move(key), value); return *this; }
    inline InputTemplate& AddCaptionSelectors(const Aws::String& key, CaptionSelector&& value) { m_captionSelectorsHasBeenSet = true; m_captionSelectors.emplace(key, std::move(value)); return *this; }
    inline InputTemplate& AddCaptionSelectors(Aws::String&& key, CaptionSelector&& value) { m_captionSelectorsHasBeenSet = true; m_captionSelectors.emplace(std::move(key), std::move(value)); return *this; }
    inline InputTemplate& AddCaptionSelectors(const char* key, CaptionSelector&& value) { m_captionSelectorsHasBeenSet = true; m_captionSelectors.emplace(key, std::move(value)); return *this; }
    inline InputTemplate& AddCaptionSelectors(const char* key, const CaptionSelector& value) { m_captionSelectorsHasBeenSet = true; m_captionSelectors.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * Use Cropping selection to specify the video area that the service will include
     * in the output video frame. If you specify a value here, it will override any
     * value that you specify in the output setting Cropping selection.
     */
    inline const Rectangle& GetCrop() const{ return m_crop; }
    inline bool CropHasBeenSet() const { return m_cropHasBeenSet; }
    inline void SetCrop(const Rectangle& value) { m_cropHasBeenSet = true; m_crop = value; }
    inline void SetCrop(Rectangle&& value) { m_cropHasBeenSet = true; m_crop = std::move(value); }
    inline InputTemplate& WithCrop(const Rectangle& value) { SetCrop(value); return *this;}
    inline InputTemplate& WithCrop(Rectangle&& value) { SetCrop(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Enable Deblock to produce smoother motion in the output. Default is disabled.
     * Only manually controllable for MPEG2 and uncompressed video inputs.
     */
    inline const InputDeblockFilter& GetDeblockFilter() const{ return m_deblockFilter; }
    inline bool DeblockFilterHasBeenSet() const { return m_deblockFilterHasBeenSet; }
    inline void SetDeblockFilter(const InputDeblockFilter& value) { m_deblockFilterHasBeenSet = true; m_deblockFilter = value; }
    inline void SetDeblockFilter(InputDeblockFilter&& value) { m_deblockFilterHasBeenSet = true; m_deblockFilter = std::move(value); }
    inline InputTemplate& WithDeblockFilter(const InputDeblockFilter& value) { SetDeblockFilter(value); return *this;}
    inline InputTemplate& WithDeblockFilter(InputDeblockFilter&& value) { SetDeblockFilter(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Enable Denoise to filter noise from the input. Default is disabled. Only
     * applicable to MPEG2, H.264, H.265, and uncompressed video inputs.
     */
    inline const InputDenoiseFilter& GetDenoiseFilter() const{ return m_denoiseFilter; }
    inline bool DenoiseFilterHasBeenSet() const { return m_denoiseFilterHasBeenSet; }
    inline void SetDenoiseFilter(const InputDenoiseFilter& value) { m_denoiseFilterHasBeenSet = true; m_denoiseFilter = value; }
    inline void SetDenoiseFilter(InputDenoiseFilter&& value) { m_denoiseFilterHasBeenSet = true; m_denoiseFilter = std::move(value); }
    inline InputTemplate& WithDenoiseFilter(const InputDenoiseFilter& value) { SetDenoiseFilter(value); return *this;}
    inline InputTemplate& WithDenoiseFilter(InputDenoiseFilter&& value) { SetDenoiseFilter(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Use this setting only when your video source has Dolby Vision studio mastering
     * metadata that is carried in a separate XML file. Specify the Amazon S3 location
     * for the metadata XML file. MediaConvert uses this file to provide global and
     * frame-level metadata for Dolby Vision preprocessing. When you specify a file
     * here and your input also has interleaved global and frame level metadata,
     * MediaConvert ignores the interleaved metadata and uses only the the metadata
     * from this external XML file. Note that your IAM service role must grant
     * MediaConvert read permissions to this file. For more information, see
     * https://docs.aws.amazon.com/mediaconvert/latest/ug/iam-role.html.
     */
    inline const Aws::String& GetDolbyVisionMetadataXml() const{ return m_dolbyVisionMetadataXml; }
    inline bool DolbyVisionMetadataXmlHasBeenSet() const { return m_dolbyVisionMetadataXmlHasBeenSet; }
    inline void SetDolbyVisionMetadataXml(const Aws::String& value) { m_dolbyVisionMetadataXmlHasBeenSet = true; m_dolbyVisionMetadataXml = value; }
    inline void SetDolbyVisionMetadataXml(Aws::String&& value) { m_dolbyVisionMetadataXmlHasBeenSet = true; m_dolbyVisionMetadataXml = std::move(value); }
    inline void SetDolbyVisionMetadataXml(const char* value) { m_dolbyVisionMetadataXmlHasBeenSet = true; m_dolbyVisionMetadataXml.assign(value); }
    inline InputTemplate& WithDolbyVisionMetadataXml(const Aws::String& value) { SetDolbyVisionMetadataXml(value); return *this;}
    inline InputTemplate& WithDolbyVisionMetadataXml(Aws::String&& value) { SetDolbyVisionMetadataXml(std::move(value)); return *this;}
    inline InputTemplate& WithDolbyVisionMetadataXml(const char* value) { SetDolbyVisionMetadataXml(value); return *this;}
    ///@}

    ///@{
    /**
     * Use Dynamic audio selectors when you do not know the track layout of your source
     * when you submit your job, but want to select multiple audio tracks. When you
     * include an audio track in your output and specify this Dynamic audio selector as
     * the Audio source, MediaConvert creates an output audio track for each
     * dynamically selected track. Note that when you include a Dynamic audio selector
     * for two or more inputs, each input must have the same number of audio tracks and
     * audio channels.
     */
    inline const Aws::Map<Aws::String, DynamicAudioSelector>& GetDynamicAudioSelectors() const{ return m_dynamicAudioSelectors; }
    inline bool DynamicAudioSelectorsHasBeenSet() const { return m_dynamicAudioSelectorsHasBeenSet; }
    inline void SetDynamicAudioSelectors(const Aws::Map<Aws::String, DynamicAudioSelector>& value) { m_dynamicAudioSelectorsHasBeenSet = true; m_dynamicAudioSelectors = value; }
    inline void SetDynamicAudioSelectors(Aws::Map<Aws::String, DynamicAudioSelector>&& value) { m_dynamicAudioSelectorsHasBeenSet = true; m_dynamicAudioSelectors = std::move(value); }
    inline InputTemplate& WithDynamicAudioSelectors(const Aws::Map<Aws::String, DynamicAudioSelector>& value) { SetDynamicAudioSelectors(value); return *this;}
    inline InputTemplate& WithDynamicAudioSelectors(Aws::Map<Aws::String, DynamicAudioSelector>&& value) { SetDynamicAudioSelectors(std::move(value)); return *this;}
    inline InputTemplate& AddDynamicAudioSelectors(const Aws::String& key, const DynamicAudioSelector& value) { m_dynamicAudioSelectorsHasBeenSet = true; m_dynamicAudioSelectors.emplace(key, value); return *this; }
    inline InputTemplate& AddDynamicAudioSelectors(Aws::String&& key, const DynamicAudioSelector& value) { m_dynamicAudioSelectorsHasBeenSet = true; m_dynamicAudioSelectors.emplace(std::move(key), value); return *this; }
    inline InputTemplate& AddDynamicAudioSelectors(const Aws::String& key, DynamicAudioSelector&& value) { m_dynamicAudioSelectorsHasBeenSet = true; m_dynamicAudioSelectors.emplace(key, std::move(value)); return *this; }
    inline InputTemplate& AddDynamicAudioSelectors(Aws::String&& key, DynamicAudioSelector&& value) { m_dynamicAudioSelectorsHasBeenSet = true; m_dynamicAudioSelectors.emplace(std::move(key), std::move(value)); return *this; }
    inline InputTemplate& AddDynamicAudioSelectors(const char* key, DynamicAudioSelector&& value) { m_dynamicAudioSelectorsHasBeenSet = true; m_dynamicAudioSelectors.emplace(key, std::move(value)); return *this; }
    inline InputTemplate& AddDynamicAudioSelectors(const char* key, const DynamicAudioSelector& value) { m_dynamicAudioSelectorsHasBeenSet = true; m_dynamicAudioSelectors.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * Specify whether to apply input filtering to improve the video quality of your
     * input. To apply filtering depending on your input type and quality: Choose Auto.
     * To apply no filtering: Choose Disable. To apply filtering regardless of your
     * input type and quality: Choose Force. When you do, you must also specify a value
     * for Filter strength.
     */
    inline const InputFilterEnable& GetFilterEnable() const{ return m_filterEnable; }
    inline bool FilterEnableHasBeenSet() const { return m_filterEnableHasBeenSet; }
    inline void SetFilterEnable(const InputFilterEnable& value) { m_filterEnableHasBeenSet = true; m_filterEnable = value; }
    inline void SetFilterEnable(InputFilterEnable&& value) { m_filterEnableHasBeenSet = true; m_filterEnable = std::move(value); }
    inline InputTemplate& WithFilterEnable(const InputFilterEnable& value) { SetFilterEnable(value); return *this;}
    inline InputTemplate& WithFilterEnable(InputFilterEnable&& value) { SetFilterEnable(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Specify the strength of the input filter. To apply an automatic amount of
     * filtering based the compression artifacts measured in your input: We recommend
     * that you leave Filter strength blank and set Filter enable to Auto. To manually
     * apply filtering: Enter a value from 1 to 5, where 1 is the least amount of
     * filtering and 5 is the most. The value that you enter applies to the strength of
     * the Deblock or Denoise filters, or to the strength of the Advanced input filter.
     */
    inline int GetFilterStrength() const{ return m_filterStrength; }
    inline bool FilterStrengthHasBeenSet() const { return m_filterStrengthHasBeenSet; }
    inline void SetFilterStrength(int value) { m_filterStrengthHasBeenSet = true; m_filterStrength = value; }
    inline InputTemplate& WithFilterStrength(int value) { SetFilterStrength(value); return *this;}
    ///@}

    ///@{
    /**
     * Enable the image inserter feature to include a graphic overlay on your video.
     * Enable or disable this feature for each input individually. This setting is
     * disabled by default.
     */
    inline const ImageInserter& GetImageInserter() const{ return m_imageInserter; }
    inline bool ImageInserterHasBeenSet() const { return m_imageInserterHasBeenSet; }
    inline void SetImageInserter(const ImageInserter& value) { m_imageInserterHasBeenSet = true; m_imageInserter = value; }
    inline void SetImageInserter(ImageInserter&& value) { m_imageInserterHasBeenSet = true; m_imageInserter = std::move(value); }
    inline InputTemplate& WithImageInserter(const ImageInserter& value) { SetImageInserter(value); return *this;}
    inline InputTemplate& WithImageInserter(ImageInserter&& value) { SetImageInserter(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Contains sets of start and end times that together specify a portion of the
     * input to be used in the outputs. If you provide only a start time, the clip will
     * be the entire input from that point to the end. If you provide only an end time,
     * it will be the entire input up to that point. When you specify more than one
     * input clip, the transcoding service creates the job outputs by stringing the
     * clips together in the order you specify them.
     */
    inline const Aws::Vector<InputClipping>& GetInputClippings() const{ return m_inputClippings; }
    inline bool InputClippingsHasBeenSet() const { return m_inputClippingsHasBeenSet; }
    inline void SetInputClippings(const Aws::Vector<InputClipping>& value) { m_inputClippingsHasBeenSet = true; m_inputClippings = value; }
    inline void SetInputClippings(Aws::Vector<InputClipping>&& value) { m_inputClippingsHasBeenSet = true; m_inputClippings = std::move(value); }
    inline InputTemplate& WithInputClippings(const Aws::Vector<InputClipping>& value) { SetInputClippings(value); return *this;}
    inline InputTemplate& WithInputClippings(Aws::Vector<InputClipping>&& value) { SetInputClippings(std::move(value)); return *this;}
    inline InputTemplate& AddInputClippings(const InputClipping& value) { m_inputClippingsHasBeenSet = true; m_inputClippings.push_back(value); return *this; }
    inline InputTemplate& AddInputClippings(InputClipping&& value) { m_inputClippingsHasBeenSet = true; m_inputClippings.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * When you have a progressive segmented frame (PsF) input, use this setting to
     * flag the input as PsF. MediaConvert doesn't automatically detect PsF. Therefore,
     * flagging your input as PsF results in better preservation of video quality when
     * you do deinterlacing and frame rate conversion. If you don't specify, the
     * default value is Auto. Auto is the correct setting for all inputs that are not
     * PsF. Don't set this value to PsF when your input is interlaced. Doing so creates
     * horizontal interlacing artifacts.
     */
    inline const InputScanType& GetInputScanType() const{ return m_inputScanType; }
    inline bool InputScanTypeHasBeenSet() const { return m_inputScanTypeHasBeenSet; }
    inline void SetInputScanType(const InputScanType& value) { m_inputScanTypeHasBeenSet = true; m_inputScanType = value; }
    inline void SetInputScanType(InputScanType&& value) { m_inputScanTypeHasBeenSet = true; m_inputScanType = std::move(value); }
    inline InputTemplate& WithInputScanType(const InputScanType& value) { SetInputScanType(value); return *this;}
    inline InputTemplate& WithInputScanType(InputScanType&& value) { SetInputScanType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Use Selection placement to define the video area in your output frame. The area
     * outside of the rectangle that you specify here is black. If you specify a value
     * here, it will override any value that you specify in the output setting
     * Selection placement. If you specify a value here, this will override any AFD
     * values in your input, even if you set Respond to AFD to Respond. If you specify
     * a value here, this will ignore anything that you specify for the setting Scaling
     * Behavior.
     */
    inline const Rectangle& GetPosition() const{ return m_position; }
    inline bool PositionHasBeenSet() const { return m_positionHasBeenSet; }
    inline void SetPosition(const Rectangle& value) { m_positionHasBeenSet = true; m_position = value; }
    inline void SetPosition(Rectangle&& value) { m_positionHasBeenSet = true; m_position = std::move(value); }
    inline InputTemplate& WithPosition(const Rectangle& value) { SetPosition(value); return *this;}
    inline InputTemplate& WithPosition(Rectangle&& value) { SetPosition(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Use Program to select a specific program from within a multi-program transport
     * stream. Note that Quad 4K is not currently supported. Default is the first
     * program within the transport stream. If the program you specify doesn't exist,
     * the transcoding service will use this default.
     */
    inline int GetProgramNumber() const{ return m_programNumber; }
    inline bool ProgramNumberHasBeenSet() const { return m_programNumberHasBeenSet; }
    inline void SetProgramNumber(int value) { m_programNumberHasBeenSet = true; m_programNumber = value; }
    inline InputTemplate& WithProgramNumber(int value) { SetProgramNumber(value); return *this;}
    ///@}

    ///@{
    /**
     * Set PSI control for transport stream inputs to specify which data the demux
     * process to scans.
* Ignore PSI - Scan all PIDs for audio and video.
* Use PSI -
     * Scan only PSI data.
     */
    inline const InputPsiControl& GetPsiControl() const{ return m_psiControl; }
    inline bool PsiControlHasBeenSet() const { return m_psiControlHasBeenSet; }
    inline void SetPsiControl(const InputPsiControl& value) { m_psiControlHasBeenSet = true; m_psiControl = value; }
    inline void SetPsiControl(InputPsiControl&& value) { m_psiControlHasBeenSet = true; m_psiControl = std::move(value); }
    inline InputTemplate& WithPsiControl(const InputPsiControl& value) { SetPsiControl(value); return *this;}
    inline InputTemplate& WithPsiControl(InputPsiControl&& value) { SetPsiControl(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Use this Timecode source setting, located under the input settings, to specify
     * how the service counts input video frames. This input frame count affects only
     * the behavior of features that apply to a single input at a time, such as input
     * clipping and synchronizing some captions formats. Choose Embedded to use the
     * timecodes in your input video. Choose Start at zero to start the first frame at
     * zero. Choose Specified start to start the first frame at the timecode that you
     * specify in the setting Start timecode. If you don't specify a value for Timecode
     * source, the service will use Embedded by default. For more information about
     * timecodes, see https://docs.aws.amazon.com/console/mediaconvert/timecode.
     */
    inline const InputTimecodeSource& GetTimecodeSource() const{ return m_timecodeSource; }
    inline bool TimecodeSourceHasBeenSet() const { return m_timecodeSourceHasBeenSet; }
    inline void SetTimecodeSource(const InputTimecodeSource& value) { m_timecodeSourceHasBeenSet = true; m_timecodeSource = value; }
    inline void SetTimecodeSource(InputTimecodeSource&& value) { m_timecodeSourceHasBeenSet = true; m_timecodeSource = std::move(value); }
    inline InputTemplate& WithTimecodeSource(const InputTimecodeSource& value) { SetTimecodeSource(value); return *this;}
    inline InputTemplate& WithTimecodeSource(InputTimecodeSource&& value) { SetTimecodeSource(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Specify the timecode that you want the service to use for this input's initial
     * frame. To use this setting, you must set the Timecode source setting, located
     * under the input settings, to Specified start. For more information about
     * timecodes, see https://docs.aws.amazon.com/console/mediaconvert/timecode.
     */
    inline const Aws::String& GetTimecodeStart() const{ return m_timecodeStart; }
    inline bool TimecodeStartHasBeenSet() const { return m_timecodeStartHasBeenSet; }
    inline void SetTimecodeStart(const Aws::String& value) { m_timecodeStartHasBeenSet = true; m_timecodeStart = value; }
    inline void SetTimecodeStart(Aws::String&& value) { m_timecodeStartHasBeenSet = true; m_timecodeStart = std::move(value); }
    inline void SetTimecodeStart(const char* value) { m_timecodeStartHasBeenSet = true; m_timecodeStart.assign(value); }
    inline InputTemplate& WithTimecodeStart(const Aws::String& value) { SetTimecodeStart(value); return *this;}
    inline InputTemplate& WithTimecodeStart(Aws::String&& value) { SetTimecodeStart(std::move(value)); return *this;}
    inline InputTemplate& WithTimecodeStart(const char* value) { SetTimecodeStart(value); return *this;}
    ///@}

    ///@{
    /**
     * Contains an array of video overlays.
     */
    inline const Aws::Vector<VideoOverlay>& GetVideoOverlays() const{ return m_videoOverlays; }
    inline bool VideoOverlaysHasBeenSet() const { return m_videoOverlaysHasBeenSet; }
    inline void SetVideoOverlays(const Aws::Vector<VideoOverlay>& value) { m_videoOverlaysHasBeenSet = true; m_videoOverlays = value; }
    inline void SetVideoOverlays(Aws::Vector<VideoOverlay>&& value) { m_videoOverlaysHasBeenSet = true; m_videoOverlays = std::move(value); }
    inline InputTemplate& WithVideoOverlays(const Aws::Vector<VideoOverlay>& value) { SetVideoOverlays(value); return *this;}
    inline InputTemplate& WithVideoOverlays(Aws::Vector<VideoOverlay>&& value) { SetVideoOverlays(std::move(value)); return *this;}
    inline InputTemplate& AddVideoOverlays(const VideoOverlay& value) { m_videoOverlaysHasBeenSet = true; m_videoOverlays.push_back(value); return *this; }
    inline InputTemplate& AddVideoOverlays(VideoOverlay&& value) { m_videoOverlaysHasBeenSet = true; m_videoOverlays.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * Input video selectors contain the video settings for the input. Each of your
     * inputs can have up to one video selector.
     */
    inline const VideoSelector& GetVideoSelector() const{ return m_videoSelector; }
    inline bool VideoSelectorHasBeenSet() const { return m_videoSelectorHasBeenSet; }
    inline void SetVideoSelector(const VideoSelector& value) { m_videoSelectorHasBeenSet = true; m_videoSelector = value; }
    inline void SetVideoSelector(VideoSelector&& value) { m_videoSelectorHasBeenSet = true; m_videoSelector = std::move(value); }
    inline InputTemplate& WithVideoSelector(const VideoSelector& value) { SetVideoSelector(value); return *this;}
    inline InputTemplate& WithVideoSelector(VideoSelector&& value) { SetVideoSelector(std::move(value)); return *this;}
    ///@}
  private:

    AdvancedInputFilter m_advancedInputFilter;
    bool m_advancedInputFilterHasBeenSet = false;

    AdvancedInputFilterSettings m_advancedInputFilterSettings;
    bool m_advancedInputFilterSettingsHasBeenSet = false;

    Aws::Map<Aws::String, AudioSelectorGroup> m_audioSelectorGroups;
    bool m_audioSelectorGroupsHasBeenSet = false;

    Aws::Map<Aws::String, AudioSelector> m_audioSelectors;
    bool m_audioSelectorsHasBeenSet = false;

    Aws::Map<Aws::String, CaptionSelector> m_captionSelectors;
    bool m_captionSelectorsHasBeenSet = false;

    Rectangle m_crop;
    bool m_cropHasBeenSet = false;

    InputDeblockFilter m_deblockFilter;
    bool m_deblockFilterHasBeenSet = false;

    InputDenoiseFilter m_denoiseFilter;
    bool m_denoiseFilterHasBeenSet = false;

    Aws::String m_dolbyVisionMetadataXml;
    bool m_dolbyVisionMetadataXmlHasBeenSet = false;

    Aws::Map<Aws::String, DynamicAudioSelector> m_dynamicAudioSelectors;
    bool m_dynamicAudioSelectorsHasBeenSet = false;

    InputFilterEnable m_filterEnable;
    bool m_filterEnableHasBeenSet = false;

    int m_filterStrength;
    bool m_filterStrengthHasBeenSet = false;

    ImageInserter m_imageInserter;
    bool m_imageInserterHasBeenSet = false;

    Aws::Vector<InputClipping> m_inputClippings;
    bool m_inputClippingsHasBeenSet = false;

    InputScanType m_inputScanType;
    bool m_inputScanTypeHasBeenSet = false;

    Rectangle m_position;
    bool m_positionHasBeenSet = false;

    int m_programNumber;
    bool m_programNumberHasBeenSet = false;

    InputPsiControl m_psiControl;
    bool m_psiControlHasBeenSet = false;

    InputTimecodeSource m_timecodeSource;
    bool m_timecodeSourceHasBeenSet = false;

    Aws::String m_timecodeStart;
    bool m_timecodeStartHasBeenSet = false;

    Aws::Vector<VideoOverlay> m_videoOverlays;
    bool m_videoOverlaysHasBeenSet = false;

    VideoSelector m_videoSelector;
    bool m_videoSelectorHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
