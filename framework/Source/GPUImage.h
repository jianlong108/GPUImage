//#import "GLProgram.h"
//
//// Base classes
//#import "GPUImageContext.h"
//#import "GPUImageOutput.h"
//#import "GPUImageView.h"
//#import "GPUImageVideoCamera.h"
//#import "GPUImageStillCamera.h"
//#import "GPUImageMovie.h"
//#import "GPUImagePicture.h"
//#import "GPUImageRawDataInput.h"
//#import "GPUImageRawDataOutput.h"
//#import "GPUImageMovieWriter.h"
//#import "GPUImageFilterPipeline.h"
//#import "GPUImageTextureOutput.h"
//#import "GPUImageFilterGroup.h"
//#import "GPUImageTextureInput.h"
//#import "GPUImageUIElement.h"
//#import "GPUImageBuffer.h"
//#import "GPUImageFramebuffer.h"
//#import "GPUImageFramebufferCache.h"
//
//// Filters
//#import "GPUImageFilter.h"
//#import "GPUImageTwoInputFilter.h"
//#import "GPUImagePixellateFilter.h"
//#import "GPUImagePixellatePositionFilter.h"
//#import "GPUImageSepiaFilter.h"
//#import "GPUImageColorInvertFilter.h"
//#import "GPUImageSaturationFilter.h"
//#import "GPUImageContrastFilter.h"
//#import "GPUImageExposureFilter.h"
//#import "GPUImageBrightnessFilter.h"
//#import "GPUImageLevelsFilter.h"
//#import "GPUImageSharpenFilter.h"
//#import "GPUImageGammaFilter.h"
//#import "GPUImageSobelEdgeDetectionFilter.h"
//#import "GPUImageSketchFilter.h"
//#import "GPUImageToonFilter.h"
//#import "GPUImageSmoothToonFilter.h"
//#import "GPUImageMultiplyBlendFilter.h"
//#import "GPUImageDissolveBlendFilter.h"
//#import "GPUImageKuwaharaFilter.h"
//#import "GPUImageKuwaharaRadius3Filter.h"
//#import "GPUImageVignetteFilter.h"
//#import "GPUImageGaussianBlurFilter.h"
//#import "GPUImageGaussianBlurPositionFilter.h"
//#import "GPUImageGaussianSelectiveBlurFilter.h"
//#import "GPUImageOverlayBlendFilter.h"
//#import "GPUImageDarkenBlendFilter.h"
//#import "GPUImageLightenBlendFilter.h"
//#import "GPUImageSwirlFilter.h"
//#import "GPUImageSourceOverBlendFilter.h"
//#import "GPUImageColorBurnBlendFilter.h"
//#import "GPUImageColorDodgeBlendFilter.h"
//#import "GPUImageScreenBlendFilter.h"
//#import "GPUImageExclusionBlendFilter.h"
//#import "GPUImageDifferenceBlendFilter.h"
//#import "GPUImageSubtractBlendFilter.h"
//#import "GPUImageHardLightBlendFilter.h"
//#import "GPUImageSoftLightBlendFilter.h"
//#import "GPUImageColorBlendFilter.h"
//#import "GPUImageHueBlendFilter.h"
//#import "GPUImageSaturationBlendFilter.h"
//#import "GPUImageLuminosityBlendFilter.h"
//#import "GPUImageCropFilter.h"
//#import "GPUImageGrayscaleFilter.h"
//#import "GPUImageTransformFilter.h"
//#import "GPUImageChromaKeyBlendFilter.h"
//#import "GPUImageHazeFilter.h"
//#import "GPUImageLuminanceThresholdFilter.h"
//#import "GPUImagePosterizeFilter.h"
//#import "GPUImageBoxBlurFilter.h"
//#import "GPUImageAdaptiveThresholdFilter.h"
//#import "GPUImageSolarizeFilter.h"
//#import "GPUImageUnsharpMaskFilter.h"
//#import "GPUImageBulgeDistortionFilter.h"
//#import "GPUImagePinchDistortionFilter.h"
//#import "GPUImageCrosshatchFilter.h"
//#import "GPUImageCGAColorspaceFilter.h"
//#import "GPUImagePolarPixellateFilter.h"
//#import "GPUImageStretchDistortionFilter.h"
//#import "GPUImagePerlinNoiseFilter.h"
//#import "GPUImageJFAVoronoiFilter.h"
//#import "GPUImageVoronoiConsumerFilter.h"
//#import "GPUImageMosaicFilter.h"
//#import "GPUImageTiltShiftFilter.h"
//#import "GPUImage3x3ConvolutionFilter.h"
//#import "GPUImageEmbossFilter.h"
//#import "GPUImageCannyEdgeDetectionFilter.h"
//#import "GPUImageThresholdEdgeDetectionFilter.h"
//#import "GPUImageMaskFilter.h"
//#import "GPUImageHistogramFilter.h"
//#import "GPUImageHistogramGenerator.h"
//#import "GPUImageHistogramEqualizationFilter.h"
//#import "GPUImagePrewittEdgeDetectionFilter.h"
//#import "GPUImageXYDerivativeFilter.h"
//#import "GPUImageHarrisCornerDetectionFilter.h"
//#import "GPUImageAlphaBlendFilter.h"
//#import "GPUImageNormalBlendFilter.h"
//#import "GPUImageNonMaximumSuppressionFilter.h"
//#import "GPUImageRGBFilter.h"
//#import "GPUImageMedianFilter.h"
//#import "GPUImageBilateralFilter.h"
//#import "GPUImageCrosshairGenerator.h"
//#import "GPUImageToneCurveFilter.h"
//#import "GPUImageNobleCornerDetectionFilter.h"
//#import "GPUImageShiTomasiFeatureDetectionFilter.h"
//#import "GPUImageErosionFilter.h"
//#import "GPUImageRGBErosionFilter.h"
//#import "GPUImageDilationFilter.h"
//#import "GPUImageRGBDilationFilter.h"
//#import "GPUImageOpeningFilter.h"
//#import "GPUImageRGBOpeningFilter.h"
//#import "GPUImageClosingFilter.h"
//#import "GPUImageRGBClosingFilter.h"
//#import "GPUImageColorPackingFilter.h"
//#import "GPUImageSphereRefractionFilter.h"
//#import "GPUImageMonochromeFilter.h"
//#import "GPUImageOpacityFilter.h"
//#import "GPUImageHighlightShadowFilter.h"
//#import "GPUImageFalseColorFilter.h"
//#import "GPUImageHSBFilter.h"
//#import "GPUImageHueFilter.h"
//#import "GPUImageGlassSphereFilter.h"
//#import "GPUImageLookupFilter.h"
//#import "GPUImageAmatorkaFilter.h"
//#import "GPUImageMissEtikateFilter.h"
//#import "GPUImageSoftEleganceFilter.h"
//#import "GPUImageAddBlendFilter.h"
//#import "GPUImageDivideBlendFilter.h"
//#import "GPUImagePolkaDotFilter.h"
//#import "GPUImageLocalBinaryPatternFilter.h"
//#import "GPUImageColorLocalBinaryPatternFilter.h"
//#import "GPUImageLanczosResamplingFilter.h"
//#import "GPUImageAverageColor.h"
//#import "GPUImageSolidColorGenerator.h"
//#import "GPUImageLuminosity.h"
//#import "GPUImageAverageLuminanceThresholdFilter.h"
//#import "GPUImageWhiteBalanceFilter.h"
//#import "GPUImageChromaKeyFilter.h"
//#import "GPUImageLowPassFilter.h"
//#import "GPUImageHighPassFilter.h"
//#import "GPUImageMotionDetector.h"
//#import "GPUImageHalftoneFilter.h"
//#import "GPUImageThresholdedNonMaximumSuppressionFilter.h"
//#import "GPUImageHoughTransformLineDetector.h"
//#import "GPUImageParallelCoordinateLineTransformFilter.h"
//#import "GPUImageThresholdSketchFilter.h"
//#import "GPUImageLineGenerator.h"
//#import "GPUImageLinearBurnBlendFilter.h"
//#import "GPUImageGaussianBlurPositionFilter.h"
//#import "GPUImagePixellatePositionFilter.h"
//#import "GPUImageTwoInputCrossTextureSamplingFilter.h"
//#import "GPUImagePoissonBlendFilter.h"
//#import "GPUImageMotionBlurFilter.h"
//#import "GPUImageZoomBlurFilter.h"
//#import "GPUImageLaplacianFilter.h"
//#import "GPUImageiOSBlurFilter.h"
//#import "GPUImageLuminanceRangeFilter.h"
//#import "GPUImageDirectionalNonMaximumSuppressionFilter.h"
//#import "GPUImageDirectionalSobelEdgeDetectionFilter.h"
//#import "GPUImageSingleComponentGaussianBlurFilter.h"
//#import "GPUImageThreeInputFilter.h"
//#import "GPUImageFourInputFilter.h"
//#import "GPUImageWeakPixelInclusionFilter.h"
//#import "GPUImageColorConversion.h"
//#import "GPUImageColourFASTFeatureDetector.h"
//#import "GPUImageColourFASTSamplingOperation.h"
//

#import "GLProgram.h"

// Base classes
#import "GPUImageContext.h"
#import "GPUImageOutput.h"
#import "GPUImageView.h"
#import "GPUImageVideoCamera.h"
#import "GPUImageStillCamera.h"
#import "GPUImageMovie.h"
#import "GPUImagePicture.h"
#import "GPUImageRawDataInput.h"
#import "GPUImageRawDataOutput.h"
#import "GPUImageMovieWriter.h"
#import "GPUImageFilterPipeline.h"
#import "GPUImageTextureOutput.h"
#import "GPUImageFilterGroup.h"
#import "GPUImageTextureInput.h"
#import "GPUImageUIElement.h"
#import "GPUImageBuffer.h"

// Filters
#import "GPUImageFilter.h"
#import "GPUImageTwoInputFilter.h"


#pragma mark - 调整颜色 Handle Color

#import "GPUImageBrightnessFilter.h" //亮度
#import "GPUImageExposureFilter.h" //曝光
#import "GPUImageContrastFilter.h" //对比度
#import "GPUImageSaturationFilter.h" //饱和度
#import "GPUImageGammaFilter.h" //伽马线
#import "GPUImageColorInvertFilter.h" //反色
#import "GPUImageSepiaFilter.h" //褐色（怀旧）
#import "GPUImageLevelsFilter.h" //色阶
#import "GPUImageGrayscaleFilter.h" //灰度
#import "GPUImageHistogramFilter.h" //色彩直方图，显示在图片上
#import "GPUImageHistogramGenerator.h" //色彩直方图
#import "GPUImageRGBFilter.h" //RGB
#import "GPUImageToneCurveFilter.h" //色调曲线
#import "GPUImageMonochromeFilter.h" //单色
#import "GPUImageOpacityFilter.h" //不透明度
#import "GPUImageHighlightShadowFilter.h" //提亮阴影
#import "GPUImageFalseColorFilter.h" //色彩替换（替换亮部和暗部色彩）
#import "GPUImageHueFilter.h" //色度
#import "GPUImageChromaKeyFilter.h" //色度键
#import "GPUImageWhiteBalanceFilter.h" //白平横
#import "GPUImageAverageColor.h" //像素平均色值
#import "GPUImageSolidColorGenerator.h" //纯色
#import "GPUImageLuminosity.h" //亮度平均
#import "GPUImageAverageLuminanceThresholdFilter.h" //像素色值亮度平均，图像黑白（有类似漫画效果）

#import "GPUImageLookupFilter.h" //lookup 色彩调整
#import "GPUImageAmatorkaFilter.h" //Amatorka lookup
#import "GPUImageMissEtikateFilter.h" //MissEtikate lookup
#import "GPUImageSoftEleganceFilter.h" //SoftElegance lookup




#pragma mark - 图像处理 Handle Image

#import "GPUImageCrosshairGenerator.h" //十字
#import "GPUImageLineGenerator.h" //线条

#import "GPUImageTransformFilter.h" //形状变化
#import "GPUImageCropFilter.h" //剪裁
#import "GPUImageSharpenFilter.h" //锐化
#import "GPUImageUnsharpMaskFilter.h" //反遮罩锐化

//#import "GPUImageFastBlurFilter.h" //模糊
#import "GPUImageGaussianBlurFilter.h" //高斯模糊
#import "GPUImageGaussianSelectiveBlurFilter.h" //高斯模糊，选择部分清晰
#import "GPUImageBoxBlurFilter.h" //盒状模糊
#import "GPUImageTiltShiftFilter.h" //条纹模糊，中间清晰，上下两端模糊
#import "GPUImageMedianFilter.h" //中间值，有种稍微模糊边缘的效果
#import "GPUImageBilateralFilter.h" //双边模糊
#import "GPUImageErosionFilter.h" //侵蚀边缘模糊，变黑白
#import "GPUImageRGBErosionFilter.h" //RGB侵蚀边缘模糊，有色彩
#import "GPUImageDilationFilter.h" //扩展边缘模糊，变黑白
#import "GPUImageRGBDilationFilter.h" //RGB扩展边缘模糊，有色彩
#import "GPUImageOpeningFilter.h" //黑白色调模糊
#import "GPUImageRGBOpeningFilter.h" //彩色模糊
#import "GPUImageClosingFilter.h" //黑白色调模糊，暗色会被提亮
#import "GPUImageRGBClosingFilter.h" //彩色模糊，暗色会被提亮
#import "GPUImageLanczosResamplingFilter.h" //Lanczos重取样，模糊效果
#import "GPUImageNonMaximumSuppressionFilter.h" //非最大抑制，只显示亮度最高的像素，其他为黑
#import "GPUImageThresholdedNonMaximumSuppressionFilter.h" //与上相比，像素丢失更多

#import "GPUImageSobelEdgeDetectionFilter.h" //Sobel边缘检测算法(白边，黑内容，有点漫画的反色效果)
#import "GPUImageCannyEdgeDetectionFilter.h" //Canny边缘检测算法（比上更强烈的黑白对比度）
#import "GPUImageThresholdEdgeDetectionFilter.h" //阈值边缘检测（效果与上差别不大）
#import "GPUImagePrewittEdgeDetectionFilter.h" //普瑞维特(Prewitt)边缘检测(效果与Sobel差不多，貌似更平滑)
#import "GPUImageXYDerivativeFilter.h" //XYDerivative边缘检测，画面以蓝色为主，绿色为边缘，带彩色
#import "GPUImageHarrisCornerDetectionFilter.h" //Harris角点检测，会有绿色小十字显示在图片角点处
#import "GPUImageNobleCornerDetectionFilter.h" //Noble角点检测，检测点更多
#import "GPUImageShiTomasiFeatureDetectionFilter.h" //ShiTomasi角点检测，与上差别不大
#import "GPUImageMotionDetector.h" //动作检测
#import "GPUImageHoughTransformLineDetector.h" //线条检测
#import "GPUImageParallelCoordinateLineTransformFilter.h" //平行线检测

#import "GPUImageLocalBinaryPatternFilter.h" //图像黑白化，并有大量噪点

#import "GPUImageLowPassFilter.h" //用于图像加亮
#import "GPUImageHighPassFilter.h" //图像低于某值时显示为黑


#pragma mark - 视觉效果 Visual Effect

#import "GPUImageSketchFilter.h" //素描
#import "GPUImageThresholdSketchFilter.h" //阀值素描，形成有噪点的素描
#import "GPUImageToonFilter.h" //卡通效果（黑色粗线描边）
#import "GPUImageSmoothToonFilter.h" //相比上面的效果更细腻，上面是粗旷的画风
#import "GPUImageKuwaharaFilter.h" //桑原(Kuwahara)滤波,水粉画的模糊效果；处理时间比较长，慎用

#import "GPUImageMosaicFilter.h" //黑白马赛克
#import "GPUImagePixellateFilter.h" //像素化
#import "GPUImagePolarPixellateFilter.h" //同心圆像素化
#import "GPUImageCrosshatchFilter.h" //交叉线阴影，形成黑白网状画面
#import "GPUImageColorPackingFilter.h" //色彩丢失，模糊（类似监控摄像效果）

#import "GPUImageVignetteFilter.h" //晕影，形成黑色圆形边缘，突出中间图像的效果
#import "GPUImageSwirlFilter.h" //漩涡，中间形成卷曲的画面
#import "GPUImageBulgeDistortionFilter.h" //凸起失真，鱼眼效果
#import "GPUImagePinchDistortionFilter.h" //收缩失真，凹面镜
#import "GPUImageStretchDistortionFilter.h" //伸展失真，哈哈镜
#import "GPUImageGlassSphereFilter.h" //水晶球效果
#import "GPUImageSphereRefractionFilter.h" //球形折射，图形倒立

#import "GPUImagePosterizeFilter.h" //色调分离，形成噪点效果
#import "GPUImageCGAColorspaceFilter.h" //CGA色彩滤镜，形成黑、浅蓝、紫色块的画面
#import "GPUImagePerlinNoiseFilter.h" //柏林噪点，花边噪点
#import "GPUImage3x3ConvolutionFilter.h" //3x3卷积，高亮大色块变黑，加亮边缘、线条等
#import "GPUImageEmbossFilter.h" //浮雕效果，带有点3d的感觉
#import "GPUImagePolkaDotFilter.h" //像素圆点花样
#import "GPUImageHalftoneFilter.h" //点染,图像黑白化，由黑点构成原图的大致图形


#pragma mark - 混合模式 Blend

#import "GPUImageMultiplyBlendFilter.h" //通常用于创建阴影和深度效果
#import "GPUImageNormalBlendFilter.h" //正常
#import "GPUImageAlphaBlendFilter.h" //透明混合,通常用于在背景上应用前景的透明度
#import "GPUImageDissolveBlendFilter.h" //溶解
#import "GPUImageOverlayBlendFilter.h" //叠加,通常用于创建阴影效果
#import "GPUImageDarkenBlendFilter.h" //加深混合,通常用于重叠类型
#import "GPUImageLightenBlendFilter.h" //减淡混合,通常用于重叠类型
#import "GPUImageSourceOverBlendFilter.h" //源混合
#import "GPUImageColorBurnBlendFilter.h" //色彩加深混合
#import "GPUImageColorDodgeBlendFilter.h" //色彩减淡混合
#import "GPUImageScreenBlendFilter.h" //屏幕包裹,通常用于创建亮点和镜头眩光
#import "GPUImageExclusionBlendFilter.h" //排除混合
#import "GPUImageDifferenceBlendFilter.h" //差异混合,通常用于创建更多变动的颜色
#import "GPUImageSubtractBlendFilter.h" //差值混合,通常用于创建两个图像之间的动画变暗模糊效果
#import "GPUImageHardLightBlendFilter.h" //强光混合,通常用于创建阴影效果
#import "GPUImageSoftLightBlendFilter.h" //柔光混合
#import "GPUImageChromaKeyBlendFilter.h" //色度键混合
#import "GPUImageMaskFilter.h" //遮罩混合
#import "GPUImageHazeFilter.h" //朦胧加暗
#import "GPUImageLuminanceThresholdFilter.h" //亮度阈
#import "GPUImageAdaptiveThresholdFilter.h" //自适应阈值
#import "GPUImageAddBlendFilter.h" //通常用于创建两个图像之间的动画变亮模糊效果
#import "GPUImageDivideBlendFilter.h" //通常用于创建两个图像之间的动画变暗模糊效果
