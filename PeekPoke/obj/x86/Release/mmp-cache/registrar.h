#pragma clang diagnostic ignored "-Wdeprecated-declarations"
#pragma clang diagnostic ignored "-Wtypedef-redefinition"
#pragma clang diagnostic ignored "-Wobjc-designated-initializers"
#include <stdarg.h>
#include <objc/objc.h>
#include <objc/runtime.h>
#include <objc/message.h>
#import <Foundation/Foundation.h>
#import <VideoSubscriberAccount/VideoSubscriberAccount.h>
#import <UserNotifications/UserNotifications.h>
#import <WebKit/WebKit.h>
#import <AppKit/AppKit.h>
#import <Vision/Vision.h>
#import <StoreKit/StoreKit.h>
#import <SpriteKit/SpriteKit.h>
#import <Social/Social.h>
#import <ScriptingBridge/ScriptingBridge.h>
#import <SceneKit/SceneKit.h>
#import <SafariServices/SafariServices.h>
#import <Quartz/Quartz.h>
#import <Quartz/Quartz.h>
#import <QuartzCore/QuartzCore.h>
#import <PhotosUI/PhotosUI.h>
#import <Photos/Photos.h>
#import <Quartz/Quartz.h>
#import <NotificationCenter/NotificationCenter.h>
#import <NetworkExtension/NetworkExtension.h>
#import <NaturalLanguage/NaturalLanguage.h>
#import <MultipeerConnectivity/MultipeerConnectivity.h>
#import <ModelIO/ModelIO.h>
#import <MetalPerformanceShaders/MetalPerformanceShaders.h>
#import <MetalKit/MetalKit.h>
#import <Metal/Metal.h>
#import <MediaPlayer/MediaPlayer.h>
#import <MediaLibrary/MediaLibrary.h>
#import <MapKit/MapKit.h>
#import <CoreLocation/CoreLocation.h>
#import <JavaScriptCore/JavaScriptCore.h>
#import <iTunesLibrary/iTunesLibrary.h>
#import <IOSurface/IOSurfaceObjC.h>
#import <Intents/Intents.h>
#import <Quartz/Quartz.h>
#define GL_DO_NOT_WARN_IF_MULTI_GL_VERSION_HEADERS_INCLUDED 1
#import <GLKit/GLKit.h>
#import <GameplayKit/GameplayKit.h>
#import <GameKit/GameKit.h>
#import <GameController/GameController.h>
#import <ExternalAccessory/ExternalAccessory.h>
#import <EventKit/EventKit.h>
#import <CoreWlan/CoreWlan.h>
#import <CoreSpotlight/CoreSpotlight.h>
#import <CoreML/CoreML.h>
#import <CoreMIDI/CoreMIDI.h>
#import <QuartzCore/QuartzCore.h>
#import <CoreData/CoreData.h>
#import <IOBluetooth/IOBluetooth.h>
#import <CoreBluetooth/CoreBluetooth.h>
#import <CoreAudioKit/CoreAudioKit.h>
#import <ContactsUI/ContactsUI.h>
#import <Contacts/Contacts.h>
#import <CloudKit/CloudKit.h>
#import <BusinessChat/BusinessChat.h>
#import <AVKit/AVKit.h>
#import <AVFoundation/AVFoundation.h>
#import <AudioUnit/AudioUnit.h>
#import <CoreGraphics/CoreGraphics.h>
#import <AdSupport/AdSupport.h>
#import <Accounts/Accounts.h>
#import <LocalAuthentication/LocalAuthentication.h>
#import <FinderSync/FinderSync.h>

@class VSAccountManagerDelegate;
@class UNUserNotificationCenterDelegate;
@class DOMEventListener;
@class DOMEventTarget;
@class Xamarin_Mac__WebKit_DomNodeFilter;
@class WebDocumentRepresentation;
@class WebDownloadDelegate;
@class WebFrameLoadDelegate;
@class Xamarin_Mac__WebKit_WebOpenPanelResultListener;
@class Xamarin_Mac__WebKit_WebPolicyDecisionListener;
@class WebPolicyDelegate;
@class WebResourceLoadDelegate;
@class WebUIDelegate;
@class WKNavigationDelegate;
@class WKScriptMessageHandler;
@class WKUIDelegate;
@class SKPaymentTransactionObserver;
@class SKRequestDelegate;
@class SKProductsRequestDelegate;
@class SKPhysicsContactDelegate;
@class SKSceneDelegate;
@class SKViewDelegate;
@class SBApplicationDelegate;
@class SCNActionable;
@class SCNAnimatable;
@class SCNAvoidOccluderConstraintDelegate;
@class SCNBoundingVolume;
@class SCNCameraControllerDelegate;
@class SCNNodeRendererDelegate;
@class SCNPhysicsContactDelegate;
@class SCNProgramDelegate;
@class SCNSceneExportDelegate;
@class SCNSceneRenderer;
@class SCNSceneRendererDelegate;
@class SCNShadable;
@class SCNTechniqueSupport;
@class QLPreviewItem;
@class QLPreviewPanelDataSource;
@class QLPreviewPanelDelegate;
@class PHLivePhotoViewDelegate;
@class PHProjectTypeDescriptionDataSource;
@class PHPhotoLibraryChangeObserver;
@class PDFDocumentDelegate;
@class PDFViewDelegate;
@class NCWidgetListViewDelegate;
@class NCWidgetProviding;
@class NCWidgetSearchViewDelegate;
@class NWTCPConnectionAuthenticationDelegate;
@class MCAdvertiserAssistantDelegate;
@class MCBrowserViewControllerDelegate;
@class MCNearbyServiceAdvertiserDelegate;
@class MCNearbyServiceBrowserDelegate;
@class MCSessionDelegate;
@class MDLLightProbeIrradianceDataSource;
@class MPSCNNConvolutionDataSource;
@class MTKViewDelegate;
@class Xamarin_Mac__Metal_MTLCaptureScope;
@class MTLDrawable;
@class MKAnnotation;
@class MKLocalSearchCompleterDelegate;
@class MKMapViewDelegate;
@class MKOverlay;
@class Xamarin_Mac__JavaScriptCore_JSExport;
@class IKCameraDeviceViewDelegate;
@class IKDeviceBrowserViewDelegate;
@class IKFilterCustomUIProvider;
@protocol IKImageBrowserDataSource;
@class IKImageBrowserDataSource;
@protocol IKImageBrowserDelegate;
@class IKImageBrowserDelegate;
@protocol IKImageBrowserItem;
@class IKImageBrowserItem;
@class IKImageEditPanelDataSource;
@protocol IKSaveOptionsDelegate;
@class IKSaveOptionsDelegate;
@class IKScannerDeviceViewDelegate;
@class IKSlideshowDataSource;
@class GLKNamedEffect;
@class GKAgentDelegate;
@class GKAchievementViewControllerDelegate;
@class GKChallengeEventHandlerDelegate;
@class GKChallengeListener;
@class GKChallengesViewControllerDelegate;
@class GKFriendRequestComposeViewControllerDelegate;
@class GKGameCenterControllerDelegate;
@class GKInviteEventListener;
@class GKLeaderboardViewControllerDelegate;
@class GKLocalPlayerListener;
@class GKMatchDelegate;
@class GKMatchmakerViewControllerDelegate;
@class GKSavedGameListener;
@class GKSessionDelegate;
@class GKTurnBasedEventHandlerDelegate;
@class GKTurnBasedEventListener;
@class GKTurnBasedMatchmakerViewControllerDelegate;
@class EAAccessoryDelegate;
@class CWEventDelegate;
@class CSSearchableIndexDelegate;
@class Xamarin_Mac__CoreML_MLCustomModel;
@class CLLocationManagerDelegate;
@class CoreImage_CIAccordionFoldTransition;
@class CoreImage_CICompositingFilter;
@class CoreImage_CIAdditionCompositing;
@class CoreImage_CIAffineFilter;
@class CoreImage_CIAffineClamp;
@class CoreImage_CIAffineTile;
@class CoreImage_CIAffineTransform;
@class CoreImage_CIAreaAverage;
@class CoreImage_CIAreaHistogram;
@class CoreImage_CIReductionFilter;
@class CoreImage_CIAreaMaximum;
@class CoreImage_CIAreaMaximumAlpha;
@class CoreImage_CIAreaMinimum;
@class CoreImage_CIAreaMinimumAlpha;
@class CoreImage_CIAreaMinMax;
@class CoreImage_CIAreaMinMaxRed;
@class CoreImage_CIImageGenerator;
@class CoreImage_CIAttributedTextImageGenerator;
@class CoreImage_CICodeGenerator;
@class CoreImage_CIAztecCodeGenerator;
@class CoreImage_CIBarcodeGenerator;
@class CoreImage_CITransitionFilter;
@class CoreImage_CIBarsSwipeTransition;
@class CoreImage_CIBicubicScaleTransform;
@class CoreImage_CIBlendFilter;
@class CoreImage_CIBlendWithMask;
@class CoreImage_CIBlendWithAlphaMask;
@class CoreImage_CIBlendWithBlueMask;
@class CoreImage_CIBlendWithRedMask;
@class CoreImage_CIBloom;
@class CoreImage_CILinearBlur;
@class CoreImage_CIBokehBlur;
@class CoreImage_CIBoxBlur;
@class CoreImage_CIDistortionFilter;
@class CoreImage_CIBumpDistortion;
@class CoreImage_CIBumpDistortionLinear;
@class CoreImage_CICameraCalibrationLensCorrection;
@class CoreImage_CICheckerboardGenerator;
@class CoreImage_CICircleSplashDistortion;
@class CoreImage_CIScreenFilter;
@class CoreImage_CICircularScreen;
@class CoreImage_CICircularWrap;
@class CoreImage_CIClamp;
@class CoreImage_CICmykHalftone;
@class CoreImage_CICode128BarcodeGenerator;
@class CoreImage_CIColorBlendMode;
@class CoreImage_CIColorBurnBlendMode;
@class CoreImage_CIColorClamp;
@class CoreImage_CIColorControls;
@class CoreImage_CIColorCrossPolynomial;
@class CoreImage_CIColorCube;
@class CoreImage_CIColorCubesMixedWithMask;
@class CoreImage_CIColorCubeWithColorSpace;
@class CoreImage_CIColorCurves;
@class CoreImage_CIColorDodgeBlendMode;
@class CoreImage_CIColorInvert;
@class CoreImage_CIColorMap;
@class CoreImage_CIColorMatrix;
@class CoreImage_CIColorMonochrome;
@class CoreImage_CIColorPolynomial;
@class CoreImage_CIColorPosterize;
@class CoreImage_CIColumnAverage;
@class CoreImage_CIComicEffect;
@class CoreImage_CIConstantColorGenerator;
@class CoreImage_CIConvolutionCore;
@class CoreImage_CIConvolution3X3;
@class CoreImage_CIConvolution5X5;
@class CoreImage_CIConvolution7X7;
@class CoreImage_CIConvolution9Horizontal;
@class CoreImage_CIConvolution9Vertical;
@class CoreImage_CICopyMachineTransition;
@class CoreImage_CICoreMLModelFilter;
@class CoreImage_CICrop;
@class CoreImage_CICrystallize;
@class CoreImage_CIDarkenBlendMode;
@class CoreImage_CIDepthBlurEffect;
@class CoreImage_CIDepthDisparityConverter;
@class CoreImage_CIDepthOfField;
@class CoreImage_CIDepthToDisparity;
@class CoreImage_CIDifferenceBlendMode;
@class CoreImage_CIDiscBlur;
@class CoreImage_CIDisintegrateWithMaskTransition;
@class CoreImage_CIDisparityToDepth;
@class CoreImage_CIDisplacementDistortion;
@class CoreImage_CIDissolveTransition;
@class CoreImage_CIDither;
@class CoreImage_CIDivideBlendMode;
@class CoreImage_CIDotScreen;
@class CoreImage_CIDroste;
@class CoreImage_CIEdgePreserveUpsampleFilter;
@class CoreImage_CIEdges;
@class CoreImage_CIEdgeWork;
@class CoreImage_CITileFilter;
@class CoreImage_CIEightfoldReflectedTile;
@class CoreImage_CIExclusionBlendMode;
@class CoreImage_CIExposureAdjust;
@class CoreImage_CIFaceBalance;
@class CoreImage_CIFalseColor;
@class CoreImage_CIFlashTransition;
@class CoreImage_CIFourfoldReflectedTile;
@class CoreImage_CIFourfoldRotatedTile;
@class CoreImage_CIFourfoldTranslatedTile;
@class CoreImage_CIGammaAdjust;
@class CoreImage_CIGaussianBlur;
@class CoreImage_CIGaussianGradient;
@class CoreImage_CIGlassDistortion;
@class CoreImage_CIGlassLozenge;
@class CoreImage_CIGlideReflectedTile;
@class CoreImage_CIGloom;
@class CoreImage_CIGuidedFilter;
@class CoreImage_CIHardLightBlendMode;
@class CoreImage_CIHatchedScreen;
@class CoreImage_CIHeightFieldFromMask;
@class CoreImage_CIHexagonalPixellate;
@class CoreImage_CIHighlightShadowAdjust;
@class CoreImage_CIHistogramDisplayFilter;
@class CoreImage_CIHoleDistortion;
@class CoreImage_CIHueAdjust;
@class CoreImage_CIHueBlendMode;
@class CoreImage_CIHueSaturationValueGradient;
@protocol CIImageProvider;
@class CoreImage_CIKaleidoscope;
@class CoreImage_CILabDeltaE;
@class CoreImage_CILanczosScaleTransform;
@class CoreImage_CILenticularHaloGenerator;
@class CoreImage_CILightenBlendMode;
@class CoreImage_CILightTunnel;
@class CoreImage_CILinearBurnBlendMode;
@class CoreImage_CILinearDodgeBlendMode;
@class CoreImage_CILinearGradient;
@class CoreImage_CILinearToSRGBToneCurve;
@class CoreImage_CILineOverlay;
@class CoreImage_CILineScreen;
@class CoreImage_CILuminosityBlendMode;
@class CoreImage_CIMaskedVariableBlur;
@class CoreImage_CIMaskToAlpha;
@class CoreImage_CIMaximumComponent;
@class CoreImage_CIMaximumCompositing;
@class CoreImage_CIMedianFilter;
@class CoreImage_CIMeshGenerator;
@class CoreImage_CIMinimumComponent;
@class CoreImage_CIMinimumCompositing;
@class CoreImage_CIMix;
@class CoreImage_CIModTransition;
@class CoreImage_CIMorphology;
@class CoreImage_CIMorphologyGradient;
@class CoreImage_CIMorphologyMaximum;
@class CoreImage_CIMorphologyMinimum;
@class CoreImage_CIMotionBlur;
@class CoreImage_CIMultiplyBlendMode;
@class CoreImage_CIMultiplyCompositing;
@class CoreImage_CINinePartStretched;
@class CoreImage_CINinePartTiled;
@class CoreImage_CINoiseReduction;
@class CoreImage_CIOpTile;
@class CoreImage_CIOverlayBlendMode;
@class CoreImage_CIPageCurlTransition;
@class CoreImage_CIPageCurlWithShadowTransition;
@class CoreImage_CIParallelogramTile;
@class CoreImage_CIPdf417BarcodeGenerator;
@class CoreImage_CIPerspectiveTransform;
@class CoreImage_CIPerspectiveCorrection;
@class CoreImage_CIPerspectiveTile;
@class CoreImage_CIPerspectiveTransformWithExtent;
@class CoreImage_CIPhotoEffect;
@class CoreImage_CIPhotoEffectChrome;
@class CoreImage_CIPhotoEffectFade;
@class CoreImage_CIPhotoEffectInstant;
@class CoreImage_CIPhotoEffectMono;
@class CoreImage_CIPhotoEffectNoir;
@class CoreImage_CIPhotoEffectProcess;
@class CoreImage_CIPhotoEffectTonal;
@class CoreImage_CIPhotoEffectTransfer;
@class CoreImage_CIPinchDistortion;
@class CoreImage_CIPinLightBlendMode;
@class CoreImage_CIPixellate;
@class CoreImage_CIPointillize;
@class CoreImage_CIQRCodeGenerator;
@class CoreImage_CIRadialGradient;
@class CoreImage_CIRandomGenerator;
@class CoreImage_CIRippleTransition;
@class CoreImage_CIRowAverage;
@class CoreImage_CISaliencyMapFilter;
@class CoreImage_CISampleNearest;
@class CoreImage_CISaturationBlendMode;
@class CoreImage_CIScreenBlendMode;
@class CoreImage_CISepiaTone;
@class CoreImage_CIShadedMaterial;
@class CoreImage_CISharpenLuminance;
@class CoreImage_CISixfoldReflectedTile;
@class CoreImage_CISixfoldRotatedTile;
@class CoreImage_CISmoothLinearGradient;
@class CoreImage_CISoftLightBlendMode;
@class CoreImage_CISourceAtopCompositing;
@class CoreImage_CISourceInCompositing;
@class CoreImage_CISourceOutCompositing;
@class CoreImage_CISourceOverCompositing;
@class CoreImage_CISpotColor;
@class CoreImage_CISpotLight;
@class CoreImage_CISRGBToneCurveToLinear;
@class CoreImage_CIStarShineGenerator;
@class CoreImage_CIStraightenFilter;
@class CoreImage_CIStretchCrop;
@class CoreImage_CIStripesGenerator;
@class CoreImage_CISubtractBlendMode;
@class CoreImage_CISunbeamsGenerator;
@class CoreImage_CISwipeTransition;
@class CoreImage_CITemperatureAndTint;
@class CoreImage_CITextImageGenerator;
@class CoreImage_CIThermal;
@class CoreImage_CIToneCurve;
@class CoreImage_CITorusLensDistortion;
@class CoreImage_CITriangleKaleidoscope;
@class CoreImage_CITriangleTile;
@class CoreImage_CITwelvefoldReflectedTile;
@class CoreImage_CITwirlDistortion;
@class CoreImage_CIUnsharpMask;
@class CoreImage_CIVibrance;
@class CoreImage_CIVignette;
@class CoreImage_CIVignetteEffect;
@class CoreImage_CIVortexDistortion;
@class CoreImage_CIWhitePointAdjust;
@class CoreImage_CIXRay;
@class CoreImage_CIZoomBlur;
@class CoreImage_CICMYKHalftone;
@class CBCentralManagerDelegate;
@class CBPeripheralDelegate;
@class CBPeripheralManagerDelegate;
@class CAAnimationDelegate;
@class CALayerDelegate;
@class CAMediaTiming;
@class CNContactPickerDelegate;
@class CKRecordValue;
@class AVCaptureViewDelegate;
@class AVAssetResourceLoaderDelegate;
@class AVAsynchronousKeyValueLoading;
@class AVAudio3DMixing;
@class AVAudioPlayerDelegate;
@class AVAudioRecorderDelegate;
@class AVAudioStereoMixing;
@class AVCaptureAudioDataOutputSampleBufferDelegate;
@class AVCaptureFileOutputDelegate;
@class AVCaptureFileOutputRecordingDelegate;
@class AVCaptureVideoDataOutputSampleBufferDelegate;
@class AVContentKeySessionDelegate;
@class AVPlayerItemOutputPushDelegate;
@class AVPlayerItemLegibleOutputPushDelegate;
@class AVPlayerItemMetadataCollectorPushDelegate;
@class AVPlayerItemMetadataOutputPushDelegate;
@class AVPlayerItemOutputPullDelegate;
@class AVVideoCompositing;
@class AVFoundation_AVCaptureDataOutputSynchronizer;
@class AVFoundation_AVCaptureDataOutputSynchronizerDelegate;
@class AVFoundation_InternalAVAudioPlayerDelegate;
@class AVFoundation_InternalAVAudioRecorderDelegate;
@class NSAccessibilityCustomRotorItemSearchDelegate;
@class NSAlertDelegate;
@class NSAlignmentFeedbackToken;
@class NSAnimationDelegate;
@class NSAppearanceCustomization;
@class NSApplicationDelegate;
@class NSBrowserDelegate;
@class NSCandidateListTouchBarItemDelegate;
@class NSSharingServiceDelegate;
@class NSCloudSharingServiceDelegate;
@class NSCollectionViewDataSource;
@class NSCollectionViewDelegate;
@class NSCollectionViewDelegateFlowLayout;
@class NSCollectionViewElement;
@class NSComboBoxCellDataSource;
@class NSComboBoxDataSource;
@class NSTextFieldDelegate;
@class NSComboBoxDelegate;
@class NSControlTextEditingDelegate;
@class NSDatePickerCellDelegate;
@class NSDockTilePlugIn;
@class NSDraggingDestination;
@class NSDraggingSource;
@class NSDrawerDelegate;
@class NSGestureRecognizerDelegate;
@class NSHapticFeedbackPerformer;
@class NSImageDelegate;
@protocol NSLayerDelegateContentsScaleUpdating;
@class NSLayoutManagerDelegate;
@class NSMatrixDelegate;
@class NSMenuDelegate;
@protocol NSMenuValidation;
@class NSOpenSavePanelDelegate;
@class NSOutlineViewDataSource;
@class NSOutlineViewDelegate;
@class NSPageControllerDelegate;
@class NSPasteboardItemDataProvider;
@class NSPasteboardReading;
@class NSPasteboardWriting;
@class NSPathCellDelegate;
@class NSPathControlDelegate;
@class NSPopoverDelegate;
@class NSPrintPanelAccessorizing;
@class NSRuleEditorDelegate;
@class NSScrubberDataSource;
@class NSScrubberDelegate;
@class NSScrubberFlowLayoutDelegate;
@class NSSearchFieldDelegate;
@class NSSeguePerforming;
@class NSSharingServicePickerDelegate;
@class NSSharingServicePickerTouchBarItemDelegate;
@class NSSoundDelegate;
@class NSSpeechRecognizerDelegate;
@class NSSpeechSynthesizerDelegate;
@class NSSplitViewDelegate;
@class NSSpringLoadingDestination;
@class NSStackViewDelegate;
@class NSTableViewDataSource;
@class NSTableViewDelegate;
@class NSTableViewSource;
@class NSTabViewDelegate;
@class NSTextAttachmentContainer;
@class NSTextDelegate;
@class NSTextFinderBarContainer;
@class NSTextFinderClient;
@class NSTextInputClient;
@class NSTextStorageDelegate;
@class NSTextViewDelegate;
@class NSTokenFieldCellDelegate;
@class NSTokenFieldDelegate;
@class NSToolbarDelegate;
@protocol NSToolTipOwner;
@class NSTouchBarDelegate;
@class NSViewControllerPresentationAnimator;
@class NSWindowDelegate;
@class NSWindowRestoration;
@class __monomac_internal_ActionDispatcher;
@class __MonoMac_NSAlertDidEndDispatcher;
@class NSCacheDelegate;
@class NSCoding;
@class NSConnectionDelegate;
@class NSCopying;
@class NSExtensionRequestHandling;
@class NSFileManagerDelegate;
@class NSFilePresenter;
@class NSKeyedArchiverDelegate;
@class NSKeyedUnarchiverDelegate;
@class NSPortDelegate;
@class NSMachPortDelegate;
@class NSMetadataQueryDelegate;
@class NSMutableCopying;
@class NSNetServiceBrowserDelegate;
@class NSNetServiceDelegate;
@class NSStreamDelegate;
@class NSURLAuthenticationChallengeSender;
@class NSURLConnectionDelegate;
@class NSURLConnectionDataDelegate;
@class NSURLConnectionDownloadDelegate;
@class NSUrlDownloadDelegate;
@class NSURLSessionDelegate;
@class NSURLSessionTaskDelegate;
@class NSURLSessionDataDelegate;
@class NSURLSessionDownloadDelegate;
@class NSURLSessionStreamDelegate;
@class NSUserActivityDelegate;
@class NSUserNotificationCenterDelegate;
@class Foundation_InternalNSNotificationHandler;
@class Foundation_NSUrlProtocolClient;
@class Foundation_NSDispatcher;
@class __MonoMac_NSActionDispatcher;
@class __MonoMac_NSSynchronizationContextDispatcher;
@class __Xamarin_NSTimerActionDispatcher;
@class Foundation_NSAsyncDispatcher;
@class __MonoMac_NSAsyncActionDispatcher;
@class __MonoMac_NSAsyncSynchronizationContextDispatcher;
@class WebKit_DomNode_DomNodeEventProxy;
@class WebKit_DomNode_DomNodeEventProxy2;
@class WebKit_WebView__WebFrameLoadDelegate;
@class WebKit_WebView__WebDownloadDelegate;
@class WebKit_WebView__WebResourceLoadDelegate;
@class WebKit_WebView__WebUIDelegate;
@class WebKit_WebView__WebPolicyDelegate;
@class StoreKit_SKRequest__SKRequestDelegate;
@class StoreKit_SKProductsRequest__SKProductsRequestDelegate;
@class SpriteKit_SKPhysicsWorld__SKPhysicsContactDelegate;
@class ScriptingBridge_SBApplication__SBApplicationDelegate;
@class SceneKit_SCNPhysicsWorld__SCNPhysicsContactDelegate;
@class PdfKit_PdfDocument__PdfDocumentDelegate;
@class PdfKit_PdfView__PdfViewDelegate;
@class NotificationCenter_NCWidgetListViewController__NCWidgetListViewDelegate;
@class NotificationCenter_NCWidgetSearchViewController__NCWidgetSearchViewDelegate;
@class MapKit_MKMapView__MKMapViewDelegate;
@class ImageKit_IKCameraDeviceView__IKCameraDeviceViewDelegate;
@class ImageKit_IKDeviceBrowserView__IKDeviceBrowserViewDelegate;
@class ImageKit_IKImageBrowserView__IKImageBrowserDelegate;
@class ImageKit_IKSaveOptions__IKSaveOptionsDelegate;
@class ImageKit_IKScannerDeviceView__IKScannerDeviceViewDelegate;
@class GameKit_GKGameCenterViewController__GKGameCenterControllerDelegate;
@class GameKit_GKAchievementViewController__GKAchievementViewControllerDelegate;
@class GameKit_GKChallengeEventHandler__GKChallengeEventHandlerDelegate;
@class GameKit_GKFriendRequestComposeViewController__GKFriendRequestComposeViewControllerDelegate;
@class GameKit_GKLeaderboardViewController__GKLeaderboardViewControllerDelegate;
@class GameKit_GKMatch__GKMatchDelegate;
@class GameKit_GKMatchmakerViewController__GKMatchmakerViewControllerDelegate;
@class ExternalAccessory_EAAccessory__EAAccessoryDelegate;
@class CoreLocation_CLLocationManager__CLLocationManagerDelegate;
@class CoreBluetooth_CBCentralManager__CBCentralManagerDelegate;
@class CoreBluetooth_CBPeripheral__CBPeripheralDelegate;
@class CoreBluetooth_CBPeripheralManager__CBPeripheralManagerDelegate;
@class CoreAnimation_CAAnimation__CAAnimationDelegate;
@class AVFoundation_AVCaptureFileOutput_recordingProxy;
@class AppKit_NSAlert__NSAlertDelegate;
@class AppKit_NSAnimation__NSAnimationDelegate;
@class AppKit_NSApplication__NSApplicationDelegate;
@class __NSGestureRecognizerToken;
@class __NSClickGestureRecognizer;
@class AppKit_NSTextField__NSTextFieldDelegate;
@class AppKit_NSComboBox__NSComboBoxDelegate;
@class AppKit_NSDatePicker__NSDatePickerCellDelegate;
@class AppKit_NSDatePickerCell__NSDatePickerCellDelegate;
@class __NSDocumentDuplicateCallback;
@class AppKit_NSDrawer__NSDrawerDelegate;
@class AppKit_NSGestureRecognizer__NSGestureRecognizerDelegate;
@class __NSGestureRecognizerParameterlessToken;
@class __NSGestureRecognizerParametrizedToken;
@class AppKit_NSImage__NSImageDelegate;
@class __NSMagnificationGestureRecognizer;
@class AppKit_NSMatrix__NSMatrixDelegate;
@class AppKit_NSPageController__NSPageControllerDelegate;
@class __NSPanGestureRecognizer;
@class AppKit_NSPathCell__NSPathCellDelegate;
@class __NSPressGestureRecognizer;
@class __NSRotationGestureRecognizer;
@class AppKit_NSRuleEditor__NSRuleEditorDelegate;
@class AppKit_NSSavePanel__NSOpenSavePanelDelegate;
@class AppKit_NSSearchField__NSSearchFieldDelegate;
@class AppKit_NSSharingService__NSSharingServiceDelegate;
@class AppKit_NSSharingServicePicker__NSSharingServicePickerDelegate;
@class AppKit_NSSound__NSSoundDelegate;
@class AppKit_NSTableView__NSTableViewDelegate;
@class AppKit_NSTabView__NSTabViewDelegate;
@class AppKit_NSText__NSTextDelegate;
@class AppKit_NSTextStorage__NSTextStorageDelegate;
@class AppKit_NSTextView__NSTextViewDelegate;
@class AppKit_NSToolbar__NSToolbarDelegate;
@class AppKit_NSTouchBar__NSTouchBarDelegate;
@class AppKit_NSWindow__NSWindowDelegate;
@class Foundation_NSUrlSessionHandler_WrappedNSInputStream;
@class Foundation_NSCache__NSCacheDelegate;
@class Foundation_NSKeyedArchiver__NSKeyedArchiverDelegate;
@class Foundation_NSKeyedUnarchiver__NSKeyedUnarchiverDelegate;
@class Foundation_NSMetadataQuery__NSMetadataQueryDelegate;
@class Foundation_NSNetService__NSNetServiceDelegate;
@class Foundation_NSNetServiceBrowser__NSNetServiceBrowserDelegate;
@class __NSObject_Disposer;
@class __XamarinObjectObserver;
@class Foundation_NSStream__NSStreamDelegate;
@class Foundation_NSThread_ActionThread;
@class Foundation_NSUserNotificationCenter__NSUserNotificationCenterDelegate;
@class Foundation_NSUrlSessionHandler_NSUrlSessionHandlerDelegate;
@class AppDelegate;
@class ViewController;
@class PeekPoke_ScanTableDataSource;
@class PeekPoke_ProductTableDelegate;
@class PeekPoke_OutputTableDataSource;
@class PeekPoke_OutputTableDelegate;
@class PeekPoke_PTTableDataSource;
@class PeekPoke_PTTableDelegate;

@interface VSAccountManagerDelegate : NSObject<VSAccountManagerDelegate> {
}
	-(id) init;
@end

@interface UNUserNotificationCenterDelegate : NSObject<UNUserNotificationCenterDelegate> {
}
	-(id) init;
@end

@interface DOMEventListener : NSObject<DOMEventListener> {
}
	-(id) init;
@end

@interface DOMEventTarget : NSObject<DOMEventTarget> {
}
	-(id) init;
@end

@interface Xamarin_Mac__WebKit_DomNodeFilter : NSObject<DOMNodeFilter> {
}
	-(id) init;
@end

@interface WebDocumentRepresentation : NSObject<WebDocumentRepresentation> {
}
	-(id) init;
@end

@interface WebDownloadDelegate : NSObject<WebDownloadDelegate> {
}
	-(id) init;
@end

@interface WebFrameLoadDelegate : NSObject<WebFrameLoadDelegate> {
}
	-(id) init;
@end

@interface Xamarin_Mac__WebKit_WebOpenPanelResultListener : NSObject<WebOpenPanelResultListener> {
}
	-(id) init;
@end

@interface Xamarin_Mac__WebKit_WebPolicyDecisionListener : NSObject<WebPolicyDecisionListener> {
}
	-(id) init;
@end

@interface WebPolicyDelegate : NSObject<WebPolicyDelegate> {
}
	-(id) init;
@end

@interface WebResourceLoadDelegate : NSObject<WebResourceLoadDelegate> {
}
	-(id) init;
@end

@interface WebUIDelegate : NSObject<WebUIDelegate> {
}
	-(id) init;
@end

@interface WKNavigationDelegate : NSObject<WKNavigationDelegate> {
}
	-(id) init;
@end

@interface WKScriptMessageHandler : NSObject<WKScriptMessageHandler> {
}
	-(id) init;
@end

@interface WKUIDelegate : NSObject<WKUIDelegate> {
}
	-(id) init;
@end

@interface SKPaymentTransactionObserver : NSObject<SKPaymentTransactionObserver> {
}
	-(id) init;
@end

@interface SKRequestDelegate : NSObject<SKRequestDelegate> {
}
	-(id) init;
@end

@interface SKProductsRequestDelegate : NSObject<SKProductsRequestDelegate, SKRequestDelegate> {
}
	-(id) init;
@end

@interface SKPhysicsContactDelegate : NSObject<SKPhysicsContactDelegate> {
}
	-(id) init;
@end

@interface SKSceneDelegate : NSObject<SKSceneDelegate> {
}
	-(id) init;
@end

@interface SKViewDelegate : NSObject<SKViewDelegate> {
}
	-(id) init;
@end

@interface SBApplicationDelegate : NSObject<SBApplicationDelegate> {
}
	-(id) init;
@end

@interface SCNActionable : NSObject<SCNActionable> {
}
	-(id) init;
@end

@interface SCNAnimatable : NSObject<SCNAnimatable> {
}
	-(id) init;
@end

@interface SCNAvoidOccluderConstraintDelegate : NSObject<SCNAvoidOccluderConstraintDelegate> {
}
	-(id) init;
@end

@interface SCNBoundingVolume : NSObject<SCNBoundingVolume> {
}
	-(id) init;
@end

@interface SCNCameraControllerDelegate : NSObject<SCNCameraControllerDelegate> {
}
	-(id) init;
@end

@interface SCNNodeRendererDelegate : NSObject<SCNNodeRendererDelegate> {
}
	-(id) init;
@end

@interface SCNPhysicsContactDelegate : NSObject<SCNPhysicsContactDelegate> {
}
	-(id) init;
@end

@interface SCNProgramDelegate : NSObject<SCNProgramDelegate> {
}
	-(id) init;
@end

@interface SCNSceneExportDelegate : NSObject<SCNSceneExportDelegate> {
}
	-(id) init;
@end

@interface SCNSceneRenderer : NSObject<SCNSceneRenderer> {
}
	-(id) init;
@end

@interface SCNSceneRendererDelegate : NSObject<SCNSceneRendererDelegate> {
}
	-(id) init;
@end

@interface SCNShadable : NSObject<SCNShadable> {
}
	-(id) init;
@end

@interface SCNTechniqueSupport : NSObject<SCNTechniqueSupport> {
}
	-(id) init;
@end

@interface QLPreviewItem : NSObject<QLPreviewItem> {
}
	-(id) init;
@end

@interface QLPreviewPanelDataSource : NSObject<QLPreviewPanelDataSource> {
}
	-(id) init;
@end

@interface QLPreviewPanelDelegate : NSObject<QLPreviewPanelDelegate> {
}
	-(id) init;
@end

@interface PHLivePhotoViewDelegate : NSObject<PHLivePhotoViewDelegate> {
}
	-(id) init;
@end

@interface PHProjectTypeDescriptionDataSource : NSObject<PHProjectTypeDescriptionDataSource> {
}
	-(id) init;
@end

@interface PHPhotoLibraryChangeObserver : NSObject<PHPhotoLibraryChangeObserver> {
}
	-(id) init;
@end

@interface PDFDocumentDelegate : NSObject<PDFDocumentDelegate> {
}
	-(id) init;
@end

@interface PDFViewDelegate : NSObject<PDFViewDelegate> {
}
	-(id) init;
@end

@interface NCWidgetListViewDelegate : NSObject<NCWidgetListViewDelegate> {
}
	-(id) init;
@end

@interface NCWidgetProviding : NSObject<NCWidgetProviding> {
}
	-(id) init;
@end

@interface NCWidgetSearchViewDelegate : NSObject<NCWidgetSearchViewDelegate> {
}
	-(id) init;
@end

@interface NWTCPConnectionAuthenticationDelegate : NSObject<NWTCPConnectionAuthenticationDelegate> {
}
	-(id) init;
@end

@interface MCAdvertiserAssistantDelegate : NSObject<MCAdvertiserAssistantDelegate> {
}
	-(id) init;
@end

@interface MCBrowserViewControllerDelegate : NSObject<MCBrowserViewControllerDelegate> {
}
	-(id) init;
@end

@interface MCNearbyServiceAdvertiserDelegate : NSObject<MCNearbyServiceAdvertiserDelegate> {
}
	-(id) init;
@end

@interface MCNearbyServiceBrowserDelegate : NSObject<MCNearbyServiceBrowserDelegate> {
}
	-(id) init;
@end

@interface MCSessionDelegate : NSObject<MCSessionDelegate> {
}
	-(id) init;
@end

@interface MDLLightProbeIrradianceDataSource : NSObject<MDLLightProbeIrradianceDataSource> {
}
	-(id) init;
@end

@interface MPSCNNConvolutionDataSource : NSObject<MPSCNNConvolutionDataSource> {
}
	-(id) init;
@end

@interface MTKViewDelegate : NSObject<MTKViewDelegate> {
}
	-(id) init;
@end

@interface Xamarin_Mac__Metal_MTLCaptureScope : NSObject<MTLCaptureScope> {
}
	-(id) init;
@end

@interface MTLDrawable : NSObject<MTLDrawable> {
}
	-(id) init;
@end

@interface MKAnnotation : NSObject<MKAnnotation> {
}
	-(id) init;
@end

@interface MKLocalSearchCompleterDelegate : NSObject<MKLocalSearchCompleterDelegate> {
}
	-(id) init;
@end

@interface MKMapViewDelegate : NSObject<MKMapViewDelegate> {
}
	-(id) init;
@end

@interface MKOverlay : NSObject<MKOverlay, MKAnnotation> {
}
	-(id) init;
@end

@interface Xamarin_Mac__JavaScriptCore_JSExport : NSObject<JSExport> {
}
	-(id) init;
@end

@interface IKCameraDeviceViewDelegate : NSObject<IKCameraDeviceViewDelegate> {
}
	-(id) init;
@end

@interface IKDeviceBrowserViewDelegate : NSObject<IKDeviceBrowserViewDelegate> {
}
	-(id) init;
@end

@interface IKFilterCustomUIProvider : NSObject<IKFilterCustomUIProvider> {
}
	-(id) init;
@end

@protocol IKImageBrowserDataSource
	@required -(NSInteger) numberOfItemsInImageBrowser:(IKImageBrowserView *)p0;
	@required -(id) imageBrowser:(IKImageBrowserView *)p0 itemAtIndex:(NSInteger)p1;
@end

@interface IKImageBrowserDataSource : NSObject {
}
	-(id) init;
@end

@protocol IKImageBrowserDelegate
@end

@interface IKImageBrowserDelegate : NSObject {
}
	-(id) init;
@end

@protocol IKImageBrowserItem
	@required -(NSString *) imageUID;
	@required -(NSString *) imageRepresentationType;
	@required -(NSObject *) imageRepresentation;
@end

@interface IKImageBrowserItem : NSObject {
}
	-(id) init;
@end

@interface IKImageEditPanelDataSource : NSObject<IKImageEditPanelDataSource> {
}
	-(id) init;
@end

@protocol IKSaveOptionsDelegate
@end

@interface IKSaveOptionsDelegate : NSObject {
}
	-(id) init;
@end

@interface IKScannerDeviceViewDelegate : NSObject<IKScannerDeviceViewDelegate> {
}
	-(id) init;
@end

@interface IKSlideshowDataSource : NSObject<IKSlideshowDataSource> {
}
	-(id) init;
@end

@interface GLKNamedEffect : NSObject<GLKNamedEffect> {
}
	-(id) init;
@end

@interface GKAgentDelegate : NSObject<GKAgentDelegate> {
}
	-(id) init;
@end

@interface GKAchievementViewControllerDelegate : NSObject<GKAchievementViewControllerDelegate> {
}
	-(id) init;
@end

@interface GKChallengeEventHandlerDelegate : NSObject<GKChallengeEventHandlerDelegate> {
}
	-(id) init;
@end

@interface GKChallengeListener : NSObject<GKChallengeListener> {
}
	-(id) init;
@end

@interface GKChallengesViewControllerDelegate : NSObject<GKChallengesViewControllerDelegate> {
}
	-(id) init;
@end

@interface GKFriendRequestComposeViewControllerDelegate : NSObject<GKFriendRequestComposeViewControllerDelegate> {
}
	-(id) init;
@end

@interface GKGameCenterControllerDelegate : NSObject<GKGameCenterControllerDelegate> {
}
	-(id) init;
@end

@interface GKInviteEventListener : NSObject<GKInviteEventListener> {
}
	-(id) init;
@end

@interface GKLeaderboardViewControllerDelegate : NSObject<GKLeaderboardViewControllerDelegate> {
}
	-(id) init;
@end

@interface GKLocalPlayerListener : NSObject<GKLocalPlayerListener> {
}
	-(id) init;
@end

@interface GKMatchDelegate : NSObject<GKMatchDelegate> {
}
	-(id) init;
@end

@interface GKMatchmakerViewControllerDelegate : NSObject<GKMatchmakerViewControllerDelegate> {
}
	-(id) init;
@end

@interface GKSavedGameListener : NSObject<GKSavedGameListener> {
}
	-(id) init;
@end

@interface GKSessionDelegate : NSObject<GKSessionDelegate> {
}
	-(id) init;
@end

@interface GKTurnBasedEventHandlerDelegate : NSObject<GKTurnBasedEventHandlerDelegate> {
}
	-(id) init;
@end

@interface GKTurnBasedEventListener : NSObject<GKTurnBasedEventListener> {
}
	-(id) init;
@end

@interface GKTurnBasedMatchmakerViewControllerDelegate : NSObject<GKTurnBasedMatchmakerViewControllerDelegate> {
}
	-(id) init;
@end

@interface EAAccessoryDelegate : NSObject<EAAccessoryDelegate> {
}
	-(id) init;
@end

@interface CWEventDelegate : NSObject<CWEventDelegate> {
}
	-(id) init;
@end

@interface CSSearchableIndexDelegate : NSObject<CSSearchableIndexDelegate> {
}
	-(id) init;
@end

@interface Xamarin_Mac__CoreML_MLCustomModel : NSObject<MLCustomModel> {
}
	-(id) init;
	-(id) initWithModelDescription:(MLModelDescription *)p0 parameterDictionary:(NSDictionary <NSString *, NSObject *>*)p1 error:(NSError **)p2;
@end

@interface CLLocationManagerDelegate : NSObject<CLLocationManagerDelegate> {
}
	-(id) init;
@end

@interface CoreImage_CIAccordionFoldTransition : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CICompositingFilter : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIAdditionCompositing : CoreImage_CICompositingFilter {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIAffineFilter : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIAffineClamp : CoreImage_CIAffineFilter {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIAffineTile : CoreImage_CIAffineFilter {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIAffineTransform : CoreImage_CIAffineFilter {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIAreaAverage : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIAreaHistogram : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIReductionFilter : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIAreaMaximum : CoreImage_CIReductionFilter {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIAreaMaximumAlpha : CoreImage_CIReductionFilter {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIAreaMinimum : CoreImage_CIReductionFilter {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIAreaMinimumAlpha : CoreImage_CIReductionFilter {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIAreaMinMax : CoreImage_CIReductionFilter {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIAreaMinMaxRed : CoreImage_CIAreaMaximum {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIImageGenerator : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIAttributedTextImageGenerator : CoreImage_CIImageGenerator {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CICodeGenerator : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIAztecCodeGenerator : CoreImage_CICodeGenerator {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIBarcodeGenerator : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CITransitionFilter : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIBarsSwipeTransition : CoreImage_CITransitionFilter {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIBicubicScaleTransform : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIBlendFilter : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIBlendWithMask : CoreImage_CIBlendFilter {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIBlendWithAlphaMask : CoreImage_CIBlendWithMask {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIBlendWithBlueMask : CoreImage_CIBlendWithMask {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIBlendWithRedMask : CoreImage_CIBlendWithMask {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIBloom : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CILinearBlur : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIBokehBlur : CoreImage_CILinearBlur {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIBoxBlur : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIDistortionFilter : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIBumpDistortion : CoreImage_CIDistortionFilter {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIBumpDistortionLinear : CoreImage_CIDistortionFilter {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CICameraCalibrationLensCorrection : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CICheckerboardGenerator : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CICircleSplashDistortion : CoreImage_CIDistortionFilter {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIScreenFilter : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CICircularScreen : CoreImage_CIScreenFilter {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CICircularWrap : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIClamp : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CICmykHalftone : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CICode128BarcodeGenerator : CoreImage_CICodeGenerator {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIColorBlendMode : CoreImage_CIBlendFilter {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIColorBurnBlendMode : CoreImage_CIBlendFilter {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIColorClamp : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIColorControls : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIColorCrossPolynomial : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIColorCube : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIColorCubesMixedWithMask : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIColorCubeWithColorSpace : CoreImage_CIColorCube {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIColorCurves : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIColorDodgeBlendMode : CoreImage_CIBlendFilter {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIColorInvert : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIColorMap : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIColorMatrix : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIColorMonochrome : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIColorPolynomial : CoreImage_CIColorCrossPolynomial {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIColorPosterize : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIColumnAverage : CoreImage_CIReductionFilter {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIComicEffect : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIConstantColorGenerator : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIConvolutionCore : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIConvolution3X3 : CoreImage_CIConvolutionCore {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIConvolution5X5 : CoreImage_CIConvolutionCore {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIConvolution7X7 : CoreImage_CIConvolutionCore {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIConvolution9Horizontal : CoreImage_CIConvolutionCore {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIConvolution9Vertical : CoreImage_CIConvolutionCore {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CICopyMachineTransition : CoreImage_CITransitionFilter {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CICoreMLModelFilter : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CICrop : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CICrystallize : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIDarkenBlendMode : CoreImage_CIBlendFilter {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIDepthBlurEffect : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIDepthDisparityConverter : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIDepthOfField : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIDepthToDisparity : CoreImage_CIDepthDisparityConverter {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIDifferenceBlendMode : CoreImage_CIBlendFilter {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIDiscBlur : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIDisintegrateWithMaskTransition : CoreImage_CITransitionFilter {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIDisparityToDepth : CoreImage_CIDepthDisparityConverter {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIDisplacementDistortion : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIDissolveTransition : CoreImage_CITransitionFilter {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIDither : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIDivideBlendMode : CoreImage_CIBlendFilter {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIDotScreen : CoreImage_CIScreenFilter {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIDroste : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIEdgePreserveUpsampleFilter : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIEdges : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIEdgeWork : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CITileFilter : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIEightfoldReflectedTile : CoreImage_CITileFilter {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIExclusionBlendMode : CoreImage_CIBlendFilter {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIExposureAdjust : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIFaceBalance : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIFalseColor : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIFlashTransition : CoreImage_CITransitionFilter {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIFourfoldReflectedTile : CoreImage_CITileFilter {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIFourfoldRotatedTile : CoreImage_CITileFilter {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIFourfoldTranslatedTile : CoreImage_CITileFilter {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIGammaAdjust : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIGaussianBlur : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIGaussianGradient : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIGlassDistortion : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIGlassLozenge : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIGlideReflectedTile : CoreImage_CITileFilter {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIGloom : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIGuidedFilter : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIHardLightBlendMode : CoreImage_CIBlendFilter {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIHatchedScreen : CoreImage_CIScreenFilter {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIHeightFieldFromMask : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIHexagonalPixellate : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIHighlightShadowAdjust : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIHistogramDisplayFilter : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIHoleDistortion : CoreImage_CIDistortionFilter {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIHueAdjust : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIHueBlendMode : CoreImage_CIBlendFilter {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIHueSaturationValueGradient : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@protocol CIImageProvider
	@required -(void) provideImageData:(void *)p0 bytesPerRow:(NSUInteger)p1 origin:(NSUInteger)p2 :(NSUInteger)p3 size:(NSUInteger)p4 :(NSUInteger)p5 userInfo:(NSObject *)p6;
@end

@interface CoreImage_CIKaleidoscope : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CILabDeltaE : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CILanczosScaleTransform : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CILenticularHaloGenerator : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CILightenBlendMode : CoreImage_CIBlendFilter {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CILightTunnel : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CILinearBurnBlendMode : CoreImage_CIBlendFilter {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CILinearDodgeBlendMode : CoreImage_CIBlendFilter {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CILinearGradient : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CILinearToSRGBToneCurve : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CILineOverlay : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CILineScreen : CoreImage_CIScreenFilter {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CILuminosityBlendMode : CoreImage_CIBlendFilter {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIMaskedVariableBlur : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIMaskToAlpha : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIMaximumComponent : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIMaximumCompositing : CoreImage_CICompositingFilter {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIMedianFilter : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIMeshGenerator : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIMinimumComponent : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIMinimumCompositing : CoreImage_CICompositingFilter {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIMix : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIModTransition : CoreImage_CITransitionFilter {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIMorphology : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIMorphologyGradient : CoreImage_CIMorphology {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIMorphologyMaximum : CoreImage_CIMorphology {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIMorphologyMinimum : CoreImage_CIMorphology {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIMotionBlur : CoreImage_CILinearBlur {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIMultiplyBlendMode : CoreImage_CIBlendFilter {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIMultiplyCompositing : CoreImage_CICompositingFilter {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CINinePartStretched : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CINinePartTiled : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CINoiseReduction : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIOpTile : CoreImage_CITileFilter {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIOverlayBlendMode : CoreImage_CIBlendFilter {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIPageCurlTransition : CoreImage_CITransitionFilter {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIPageCurlWithShadowTransition : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIParallelogramTile : CoreImage_CITileFilter {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIPdf417BarcodeGenerator : CoreImage_CICodeGenerator {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIPerspectiveTransform : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIPerspectiveCorrection : CoreImage_CIPerspectiveTransform {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIPerspectiveTile : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIPerspectiveTransformWithExtent : CoreImage_CIPerspectiveTransform {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIPhotoEffect : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIPhotoEffectChrome : CoreImage_CIPhotoEffect {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIPhotoEffectFade : CoreImage_CIPhotoEffect {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIPhotoEffectInstant : CoreImage_CIPhotoEffect {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIPhotoEffectMono : CoreImage_CIPhotoEffect {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIPhotoEffectNoir : CoreImage_CIPhotoEffect {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIPhotoEffectProcess : CoreImage_CIPhotoEffect {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIPhotoEffectTonal : CoreImage_CIPhotoEffect {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIPhotoEffectTransfer : CoreImage_CIPhotoEffect {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIPinchDistortion : CoreImage_CIDistortionFilter {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIPinLightBlendMode : CoreImage_CIBlendFilter {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIPixellate : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIPointillize : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIQRCodeGenerator : CoreImage_CICodeGenerator {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIRadialGradient : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIRandomGenerator : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIRippleTransition : CoreImage_CITransitionFilter {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIRowAverage : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CISaliencyMapFilter : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CISampleNearest : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CISaturationBlendMode : CoreImage_CIBlendFilter {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIScreenBlendMode : CoreImage_CIBlendFilter {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CISepiaTone : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIShadedMaterial : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CISharpenLuminance : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CISixfoldReflectedTile : CoreImage_CITileFilter {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CISixfoldRotatedTile : CoreImage_CITileFilter {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CISmoothLinearGradient : CoreImage_CILinearGradient {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CISoftLightBlendMode : CoreImage_CIBlendFilter {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CISourceAtopCompositing : CoreImage_CICompositingFilter {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CISourceInCompositing : CoreImage_CICompositingFilter {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CISourceOutCompositing : CoreImage_CICompositingFilter {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CISourceOverCompositing : CoreImage_CICompositingFilter {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CISpotColor : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CISpotLight : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CISRGBToneCurveToLinear : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIStarShineGenerator : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIStraightenFilter : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIStretchCrop : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIStripesGenerator : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CISubtractBlendMode : CoreImage_CIBlendFilter {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CISunbeamsGenerator : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CISwipeTransition : CoreImage_CITransitionFilter {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CITemperatureAndTint : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CITextImageGenerator : CoreImage_CIImageGenerator {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIThermal : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIToneCurve : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CITorusLensDistortion : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CITriangleKaleidoscope : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CITriangleTile : CoreImage_CITileFilter {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CITwelvefoldReflectedTile : CoreImage_CITileFilter {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CITwirlDistortion : CoreImage_CIDistortionFilter {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIUnsharpMask : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIVibrance : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIVignette : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIVignetteEffect : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIVortexDistortion : CoreImage_CIDistortionFilter {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIWhitePointAdjust : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIXRay : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIZoomBlur : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CICMYKHalftone : CoreImage_CICmykHalftone {
}
	-(id) init;
@end

@interface CBCentralManagerDelegate : NSObject<CBCentralManagerDelegate> {
}
	-(id) init;
@end

@interface CBPeripheralDelegate : NSObject<CBPeripheralDelegate> {
}
	-(id) init;
@end

@interface CBPeripheralManagerDelegate : NSObject<CBPeripheralManagerDelegate> {
}
	-(id) init;
@end

@interface CAAnimationDelegate : NSObject<CAAnimationDelegate> {
}
	-(id) init;
@end

@interface CALayerDelegate : NSObject<CALayerDelegate> {
}
	-(id) init;
@end

@interface CAMediaTiming : NSObject<CAMediaTiming> {
}
	-(id) init;
@end

@interface CNContactPickerDelegate : NSObject<CNContactPickerDelegate> {
}
	-(id) init;
@end

@interface CKRecordValue : NSObject<CKRecordValue> {
}
	-(id) init;
@end

@interface AVCaptureViewDelegate : NSObject<AVCaptureViewDelegate> {
}
	-(id) init;
@end

@interface AVAssetResourceLoaderDelegate : NSObject<AVAssetResourceLoaderDelegate> {
}
	-(id) init;
@end

@interface AVAsynchronousKeyValueLoading : NSObject<AVAsynchronousKeyValueLoading> {
}
	-(id) init;
@end

@interface AVAudio3DMixing : NSObject<AVAudio3DMixing> {
}
	-(id) init;
@end

@interface AVAudioPlayerDelegate : NSObject<AVAudioPlayerDelegate> {
}
	-(id) init;
@end

@interface AVAudioRecorderDelegate : NSObject<AVAudioRecorderDelegate> {
}
	-(id) init;
@end

@interface AVAudioStereoMixing : NSObject<AVAudioStereoMixing> {
}
	-(id) init;
@end

@interface AVCaptureAudioDataOutputSampleBufferDelegate : NSObject<AVCaptureAudioDataOutputSampleBufferDelegate> {
}
	-(id) init;
@end

@interface AVCaptureFileOutputDelegate : NSObject<AVCaptureFileOutputDelegate> {
}
	-(id) init;
@end

@interface AVCaptureFileOutputRecordingDelegate : NSObject<AVCaptureFileOutputRecordingDelegate> {
}
	-(id) init;
@end

@interface AVCaptureVideoDataOutputSampleBufferDelegate : NSObject<AVCaptureVideoDataOutputSampleBufferDelegate> {
}
	-(id) init;
@end

@interface AVContentKeySessionDelegate : NSObject<AVContentKeySessionDelegate> {
}
	-(id) init;
@end

@interface AVPlayerItemOutputPushDelegate : NSObject<AVPlayerItemOutputPushDelegate> {
}
	-(id) init;
@end

@interface AVPlayerItemLegibleOutputPushDelegate : NSObject<AVPlayerItemLegibleOutputPushDelegate, AVPlayerItemOutputPushDelegate> {
}
	-(id) init;
@end

@interface AVPlayerItemMetadataCollectorPushDelegate : NSObject<AVPlayerItemMetadataCollectorPushDelegate> {
}
	-(id) init;
@end

@interface AVPlayerItemMetadataOutputPushDelegate : NSObject<AVPlayerItemMetadataOutputPushDelegate> {
}
	-(id) init;
@end

@interface AVPlayerItemOutputPullDelegate : NSObject<AVPlayerItemOutputPullDelegate> {
}
	-(id) init;
@end

@interface AVVideoCompositing : NSObject<AVVideoCompositing> {
}
	-(id) init;
@end

@interface AVFoundation_AVCaptureDataOutputSynchronizer : NSObject {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
@end

@interface AVFoundation_AVCaptureDataOutputSynchronizerDelegate : NSObject {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
@end

@interface NSAccessibilityCustomRotorItemSearchDelegate : NSObject<NSAccessibilityCustomRotorItemSearchDelegate> {
}
	-(id) init;
@end

@interface NSAlertDelegate : NSObject<NSAlertDelegate> {
}
	-(id) init;
@end

@interface NSAlignmentFeedbackToken : NSObject<NSAlignmentFeedbackToken> {
}
	-(id) init;
@end

@interface NSAnimationDelegate : NSObject<NSAnimationDelegate> {
}
	-(id) init;
@end

@interface NSAppearanceCustomization : NSObject<NSAppearanceCustomization> {
}
	-(id) init;
@end

@interface NSApplicationDelegate : NSObject<NSApplicationDelegate> {
}
	-(id) init;
@end

@interface NSBrowserDelegate : NSObject<NSBrowserDelegate> {
}
	-(id) init;
@end

@interface NSCandidateListTouchBarItemDelegate : NSObject<NSCandidateListTouchBarItemDelegate> {
}
	-(id) init;
@end

@interface NSSharingServiceDelegate : NSObject<NSSharingServiceDelegate> {
}
	-(id) init;
@end

@interface NSCloudSharingServiceDelegate : NSObject<NSCloudSharingServiceDelegate, NSSharingServiceDelegate> {
}
	-(id) init;
@end

@interface NSCollectionViewDataSource : NSObject<NSCollectionViewDataSource> {
}
	-(id) init;
@end

@interface NSCollectionViewDelegate : NSObject<NSCollectionViewDelegate> {
}
	-(id) init;
@end

@interface NSCollectionViewDelegateFlowLayout : NSObject<NSCollectionViewDelegateFlowLayout> {
}
	-(id) init;
@end

@interface NSCollectionViewElement : NSObject<NSCollectionViewElement> {
}
	-(id) init;
@end

@interface NSComboBoxCellDataSource : NSObject<NSComboBoxCellDataSource> {
}
	-(id) init;
@end

@interface NSComboBoxDataSource : NSObject<NSComboBoxDataSource> {
}
	-(id) init;
@end

@interface NSTextFieldDelegate : NSObject<NSTextFieldDelegate> {
}
	-(id) init;
@end

@interface NSComboBoxDelegate : NSObject<NSComboBoxDelegate, NSTextFieldDelegate> {
}
	-(id) init;
@end

@interface NSControlTextEditingDelegate : NSObject<NSControlTextEditingDelegate> {
}
	-(id) init;
@end

@interface NSDatePickerCellDelegate : NSObject<NSDatePickerCellDelegate> {
}
	-(id) init;
@end

@interface NSDockTilePlugIn : NSObject<NSDockTilePlugIn> {
}
	-(id) init;
@end

@interface NSDraggingDestination : NSObject<NSDraggingDestination> {
}
	-(id) init;
@end

@interface NSDraggingSource : NSObject<NSDraggingSource> {
}
	-(id) init;
@end

@interface NSDrawerDelegate : NSObject<NSDrawerDelegate> {
}
	-(id) init;
@end

@interface NSGestureRecognizerDelegate : NSObject<NSGestureRecognizerDelegate> {
}
	-(id) init;
@end

@interface NSHapticFeedbackPerformer : NSObject<NSHapticFeedbackPerformer> {
}
	-(id) init;
@end

@interface NSImageDelegate : NSObject<NSImageDelegate> {
}
	-(id) init;
@end

@protocol NSLayerDelegateContentsScaleUpdating
@end

@interface NSLayoutManagerDelegate : NSObject<NSLayoutManagerDelegate> {
}
	-(id) init;
@end

@interface NSMatrixDelegate : NSObject<NSMatrixDelegate> {
}
	-(id) init;
@end

@interface NSMenuDelegate : NSObject<NSMenuDelegate> {
}
	-(id) init;
@end

@protocol NSMenuValidation
	@required -(BOOL) validateMenuItem:(NSMenuItem *)p0;
@end

@interface NSOpenSavePanelDelegate : NSObject<NSOpenSavePanelDelegate> {
}
	-(id) init;
@end

@interface NSOutlineViewDataSource : NSObject<NSOutlineViewDataSource> {
}
	-(id) init;
@end

@interface NSOutlineViewDelegate : NSObject<NSOutlineViewDelegate> {
}
	-(id) init;
@end

@interface NSPageControllerDelegate : NSObject<NSPageControllerDelegate> {
}
	-(id) init;
@end

@interface NSPasteboardItemDataProvider : NSObject<NSPasteboardItemDataProvider> {
}
	-(id) init;
@end

@interface NSPasteboardReading : NSObject<NSPasteboardReading> {
}
	-(id) init;
@end

@interface NSPasteboardWriting : NSObject<NSPasteboardWriting> {
}
	-(id) init;
@end

@interface NSPathCellDelegate : NSObject<NSPathCellDelegate> {
}
	-(id) init;
@end

@interface NSPathControlDelegate : NSObject<NSPathControlDelegate> {
}
	-(id) init;
@end

@interface NSPopoverDelegate : NSObject<NSPopoverDelegate> {
}
	-(id) init;
@end

@interface NSPrintPanelAccessorizing : NSObject<NSPrintPanelAccessorizing> {
}
	-(id) init;
@end

@interface NSRuleEditorDelegate : NSObject<NSRuleEditorDelegate> {
}
	-(id) init;
@end

@interface NSScrubberDataSource : NSObject<NSScrubberDataSource> {
}
	-(id) init;
@end

@interface NSScrubberDelegate : NSObject<NSScrubberDelegate> {
}
	-(id) init;
@end

@interface NSScrubberFlowLayoutDelegate : NSObject<NSScrubberFlowLayoutDelegate> {
}
	-(id) init;
@end

@interface NSSearchFieldDelegate : NSObject<NSSearchFieldDelegate> {
}
	-(id) init;
@end

@interface NSSeguePerforming : NSObject<NSSeguePerforming> {
}
	-(id) init;
@end

@interface NSSharingServicePickerDelegate : NSObject<NSSharingServicePickerDelegate> {
}
	-(id) init;
@end

@interface NSSharingServicePickerTouchBarItemDelegate : NSObject<NSSharingServicePickerTouchBarItemDelegate> {
}
	-(id) init;
@end

@interface NSSoundDelegate : NSObject<NSSoundDelegate> {
}
	-(id) init;
@end

@interface NSSpeechRecognizerDelegate : NSObject<NSSpeechRecognizerDelegate> {
}
	-(id) init;
@end

@interface NSSpeechSynthesizerDelegate : NSObject<NSSpeechSynthesizerDelegate> {
}
	-(id) init;
@end

@interface NSSplitViewDelegate : NSObject<NSSplitViewDelegate> {
}
	-(id) init;
@end

@interface NSSpringLoadingDestination : NSObject<NSSpringLoadingDestination> {
}
	-(id) init;
@end

@interface NSStackViewDelegate : NSObject<NSStackViewDelegate> {
}
	-(id) init;
@end

@interface NSTableViewDataSource : NSObject<NSTableViewDataSource> {
}
	-(id) init;
@end

@interface NSTableViewDelegate : NSObject<NSTableViewDelegate> {
}
	-(id) init;
@end

@interface NSTableViewSource : NSObject {
}
	-(id) init;
@end

@interface NSTabViewDelegate : NSObject<NSTabViewDelegate> {
}
	-(id) init;
@end

@interface NSTextAttachmentContainer : NSObject<NSTextAttachmentContainer> {
}
	-(id) init;
@end

@interface NSTextDelegate : NSObject<NSTextDelegate> {
}
	-(id) init;
@end

@interface NSTextFinderBarContainer : NSObject<NSTextFinderBarContainer> {
}
	-(id) init;
@end

@interface NSTextFinderClient : NSObject<NSTextFinderClient> {
}
	-(id) init;
@end

@interface NSTextInputClient : NSObject<NSTextInputClient> {
}
	-(id) init;
@end

@interface NSTextStorageDelegate : NSObject<NSTextStorageDelegate> {
}
	-(id) init;
@end

@interface NSTextViewDelegate : NSObject<NSTextViewDelegate, NSTextDelegate> {
}
	-(id) init;
@end

@interface NSTokenFieldCellDelegate : NSObject<NSTokenFieldCellDelegate> {
}
	-(id) init;
@end

@interface NSTokenFieldDelegate : NSObject<NSTokenFieldDelegate> {
}
	-(id) init;
@end

@interface NSToolbarDelegate : NSObject<NSToolbarDelegate> {
}
	-(id) init;
@end

@protocol NSToolTipOwner
	@required -(NSString *) view:(NSView *)p0 stringForToolTip:(NSInteger)p1 point:(CGPoint)p2 userData:(void *)p3;
@end

@interface NSTouchBarDelegate : NSObject<NSTouchBarDelegate> {
}
	-(id) init;
@end

@interface NSViewControllerPresentationAnimator : NSObject<NSViewControllerPresentationAnimator> {
}
	-(id) init;
@end

@interface NSWindowDelegate : NSObject<NSWindowDelegate> {
}
	-(id) init;
@end

@interface NSWindowRestoration : NSObject<NSWindowRestoration> {
}
	-(id) init;
@end

@interface NSCacheDelegate : NSObject<NSCacheDelegate> {
}
	-(id) init;
@end

@interface NSCoding : NSObject<NSCoding> {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface NSConnectionDelegate : NSObject<NSConnectionDelegate> {
}
	-(id) init;
@end

@interface NSCopying : NSObject<NSCopying> {
}
	-(id) init;
@end

@interface NSExtensionRequestHandling : NSObject<NSExtensionRequestHandling> {
}
	-(id) init;
@end

@interface NSFileManagerDelegate : NSObject<NSFileManagerDelegate> {
}
	-(id) init;
@end

@interface NSFilePresenter : NSObject<NSFilePresenter> {
}
	-(id) init;
@end

@interface NSKeyedArchiverDelegate : NSObject<NSKeyedArchiverDelegate> {
}
	-(id) init;
@end

@interface NSKeyedUnarchiverDelegate : NSObject<NSKeyedUnarchiverDelegate> {
}
	-(id) init;
@end

@interface NSPortDelegate : NSObject<NSPortDelegate> {
}
	-(id) init;
@end

@interface NSMachPortDelegate : NSObject<NSMachPortDelegate, NSPortDelegate> {
}
	-(id) init;
@end

@interface NSMetadataQueryDelegate : NSObject<NSMetadataQueryDelegate> {
}
	-(id) init;
@end

@interface NSMutableCopying : NSObject<NSMutableCopying> {
}
	-(id) init;
@end

@interface NSNetServiceBrowserDelegate : NSObject<NSNetServiceBrowserDelegate> {
}
	-(id) init;
@end

@interface NSNetServiceDelegate : NSObject<NSNetServiceDelegate> {
}
	-(id) init;
@end

@interface NSStreamDelegate : NSObject<NSStreamDelegate> {
}
	-(id) init;
@end

@interface NSURLAuthenticationChallengeSender : NSObject<NSURLAuthenticationChallengeSender> {
}
	-(id) init;
@end

@interface NSURLConnectionDelegate : NSObject<NSURLConnectionDelegate> {
}
	-(id) init;
@end

@interface NSURLConnectionDataDelegate : NSObject<NSURLConnectionDataDelegate, NSURLConnectionDelegate> {
}
	-(id) init;
@end

@interface NSURLConnectionDownloadDelegate : NSObject<NSURLConnectionDownloadDelegate, NSURLConnectionDelegate> {
}
	-(id) init;
@end

@interface NSUrlDownloadDelegate : NSObject<NSURLDownloadDelegate> {
}
	-(id) init;
@end

@interface NSURLSessionDelegate : NSObject<NSURLSessionDelegate> {
}
	-(id) init;
@end

@interface NSURLSessionTaskDelegate : NSObject<NSURLSessionTaskDelegate, NSURLSessionDelegate> {
}
	-(id) init;
@end

@interface NSURLSessionDataDelegate : NSObject<NSURLSessionDataDelegate, NSURLSessionTaskDelegate, NSURLSessionDelegate> {
}
	-(id) init;
@end

@interface NSURLSessionDownloadDelegate : NSObject<NSURLSessionDownloadDelegate, NSURLSessionTaskDelegate, NSURLSessionDelegate> {
}
	-(id) init;
@end

@interface NSURLSessionStreamDelegate : NSObject<NSURLSessionStreamDelegate, NSURLSessionTaskDelegate, NSURLSessionDelegate> {
}
	-(id) init;
@end

@interface NSUserActivityDelegate : NSObject<NSUserActivityDelegate> {
}
	-(id) init;
@end

@interface NSUserNotificationCenterDelegate : NSObject<NSUserNotificationCenterDelegate> {
}
	-(id) init;
@end

@interface Foundation_NSUrlProtocolClient : NSObject {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
@end

@interface __NSGestureRecognizerToken : NSObject {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
@end

@interface __NSGestureRecognizerParameterlessToken : __NSGestureRecognizerToken {
}
	-(void) target;
@end

@interface __NSGestureRecognizerParametrizedToken : __NSGestureRecognizerToken {
}
	-(void) target:(NSGestureRecognizer *)p0;
@end

@interface AppDelegate : NSObject<NSApplicationDelegate> {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(void) applicationDidFinishLaunching:(NSNotification *)p0;
	-(void) applicationWillTerminate:(NSNotification *)p0;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
@end

@interface ViewController : NSViewController {
}
	@property (nonatomic, assign) NSTextField * addrBox;
	@property (nonatomic, assign) NSTextField * addressTable;
	@property (nonatomic, assign) NSTextField * bpIndex;
	@property (nonatomic, assign) NSStepper * bpStepper;
	@property (nonatomic, assign) NSTextFieldCell * byteBoxx;
	@property (nonatomic, assign) NSTextField * bytes;
	@property (nonatomic, assign) NSButton * clearWP;
	@property (nonatomic, assign) NSComboBox * comPort;
	@property (nonatomic, assign) NSTextView * convertFrom;
	@property (nonatomic, assign) NSComboBox * convertFromItems;
	@property (nonatomic, assign) NSTextField * convertResults;
	@property (nonatomic, assign) NSTextField * convertTo;
	@property (nonatomic, assign) NSComboBox * convertToItems;
	@property (nonatomic, assign) NSTextField * descTable;
	@property (nonatomic, assign) NSTextField * dissassembleField;
	@property (nonatomic, assign) NSTextView * dissassField;
	@property (nonatomic, assign) NSTextField * elfPath;
	@property (nonatomic, assign) NSButton * filterTextUart;
	@property (nonatomic, assign) NSButton * getMemory;
	@property (nonatomic, assign) NSButton * grabMemTable;
	@property (nonatomic, assign) NSTextView * hexView;
	@property (nonatomic, assign) NSTextView * idk;
	@property (nonatomic, assign) NSScrollView * idkLOL;
	@property (nonatomic, assign) NSTextField * instructionField;
	@property (nonatomic, assign) NSTextField * ipTextBox;
	@property (nonatomic, assign) NSTextView * justATest;
	@property (nonatomic, assign) NSScrollView * justTes;
	@property (nonatomic, assign) NSView * mainWindow;
	@property (nonatomic, assign) NSTextField * memScanFrom;
	@property (nonatomic, assign) NSProgressIndicator * memScanProgress;
	@property (nonatomic, assign) NSTextField * memScanRange;
	@property (nonatomic, assign) NSTextField * memScanTotalRange;
	@property (nonatomic, assign) NSComboBox * memScanType;
	@property (nonatomic, assign) NSTextField * memScanValue;
	@property (nonatomic, assign) NSTableView * OutPutTable;
	@property (nonatomic, assign) NSComboBox * processBox;
	@property (nonatomic, assign) NSTableView * ptTable;
	@property (nonatomic, assign) NSTextField * ptTableFilePath;
	@property (nonatomic, assign) NSTextField * ptTableSaveName;
	@property (nonatomic, assign) NSTextView * scanRes;
	@property (nonatomic, assign) NSTableView * ScanTable;
	@property (nonatomic, assign) NSTableColumn * scanTableOffset;
	@property (nonatomic, assign) NSTableColumn * scanTableValue;
	@property (nonatomic, assign) NSView * selectPTTable;
	@property (nonatomic, assign) NSTextField * setMemAddrBox;
	@property (nonatomic, assign) NSTextField * setMemByteBox;
	@property (nonatomic, assign) NSTextField * setStringAddr;
	@property (nonatomic, assign) NSButton * setStringBtn;
	@property (nonatomic, assign) NSTextField * setStringString;
	@property (nonatomic, assign) NSTextField * statusLabel;
	@property (nonatomic, assign) NSClipView * test;
	@property (nonatomic, assign) NSScrollView * testin;
	@property (nonatomic, assign) NSCollectionView * testing;
	@property (nonatomic, assign) NSTextFieldCell * testingAGAIN;
	@property (nonatomic, assign) NSTextFieldCell * testingText;
	@property (nonatomic, assign) NSTextField * testinLOL;
	@property (nonatomic, assign) NSTextField * testLabel;
	@property (nonatomic, assign) NSTextField * textToFilter;
	@property (nonatomic, assign) NSTextField * textView;
	@property (nonatomic, assign) NSComboBox * typeTable;
	@property (nonatomic, assign) NSScrollView * uartOutputBox;
	@property (nonatomic, assign) NSTextField * wpIndex;
	@property (nonatomic, assign) NSComboBox * wpLength;
	@property (nonatomic, assign) NSStepper * wpStepper;
	@property (nonatomic, assign) NSComboBox * wpType;
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(NSTextField *) addrBox;
	-(void) setAddrBox:(NSTextField *)p0;
	-(NSTextField *) addressTable;
	-(void) setAddressTable:(NSTextField *)p0;
	-(NSTextField *) bpIndex;
	-(void) setBpIndex:(NSTextField *)p0;
	-(NSStepper *) bpStepper;
	-(void) setBpStepper:(NSStepper *)p0;
	-(NSTextFieldCell *) byteBoxx;
	-(void) setByteBoxx:(NSTextFieldCell *)p0;
	-(NSTextField *) bytes;
	-(void) setBytes:(NSTextField *)p0;
	-(NSButton *) clearWP;
	-(void) setClearWP:(NSButton *)p0;
	-(NSComboBox *) comPort;
	-(void) setComPort:(NSComboBox *)p0;
	-(NSTextView *) convertFrom;
	-(void) setConvertFrom:(NSTextView *)p0;
	-(NSComboBox *) convertFromItems;
	-(void) setConvertFromItems:(NSComboBox *)p0;
	-(NSTextField *) convertResults;
	-(void) setConvertResults:(NSTextField *)p0;
	-(NSTextField *) convertTo;
	-(void) setConvertTo:(NSTextField *)p0;
	-(NSComboBox *) convertToItems;
	-(void) setConvertToItems:(NSComboBox *)p0;
	-(NSTextField *) descTable;
	-(void) setDescTable:(NSTextField *)p0;
	-(NSTextField *) dissassembleField;
	-(void) setDissassembleField:(NSTextField *)p0;
	-(NSTextView *) dissassField;
	-(void) setDissassField:(NSTextView *)p0;
	-(NSTextField *) elfPath;
	-(void) setElfPath:(NSTextField *)p0;
	-(NSButton *) filterTextUart;
	-(void) setFilterTextUart:(NSButton *)p0;
	-(NSButton *) getMemory;
	-(void) setGetMemory:(NSButton *)p0;
	-(NSButton *) grabMemTable;
	-(void) setGrabMemTable:(NSButton *)p0;
	-(NSTextView *) hexView;
	-(void) setHexView:(NSTextView *)p0;
	-(NSTextView *) idk;
	-(void) setIdk:(NSTextView *)p0;
	-(NSScrollView *) idkLOL;
	-(void) setIdkLOL:(NSScrollView *)p0;
	-(NSTextField *) instructionField;
	-(void) setInstructionField:(NSTextField *)p0;
	-(NSTextField *) ipTextBox;
	-(void) setIpTextBox:(NSTextField *)p0;
	-(NSTextView *) justATest;
	-(void) setJustATest:(NSTextView *)p0;
	-(NSScrollView *) justTes;
	-(void) setJustTes:(NSScrollView *)p0;
	-(NSView *) mainWindow;
	-(void) setMainWindow:(NSView *)p0;
	-(NSTextField *) memScanFrom;
	-(void) setMemScanFrom:(NSTextField *)p0;
	-(NSProgressIndicator *) memScanProgress;
	-(void) setMemScanProgress:(NSProgressIndicator *)p0;
	-(NSTextField *) memScanRange;
	-(void) setMemScanRange:(NSTextField *)p0;
	-(NSTextField *) memScanTotalRange;
	-(void) setMemScanTotalRange:(NSTextField *)p0;
	-(NSComboBox *) memScanType;
	-(void) setMemScanType:(NSComboBox *)p0;
	-(NSTextField *) memScanValue;
	-(void) setMemScanValue:(NSTextField *)p0;
	-(NSTableView *) OutPutTable;
	-(void) setOutPutTable:(NSTableView *)p0;
	-(NSComboBox *) processBox;
	-(void) setProcessBox:(NSComboBox *)p0;
	-(NSTableView *) ptTable;
	-(void) setPtTable:(NSTableView *)p0;
	-(NSTextField *) ptTableFilePath;
	-(void) setPtTableFilePath:(NSTextField *)p0;
	-(NSTextField *) ptTableSaveName;
	-(void) setPtTableSaveName:(NSTextField *)p0;
	-(NSTextView *) scanRes;
	-(void) setScanRes:(NSTextView *)p0;
	-(NSTableView *) ScanTable;
	-(void) setScanTable:(NSTableView *)p0;
	-(NSTableColumn *) scanTableOffset;
	-(void) setScanTableOffset:(NSTableColumn *)p0;
	-(NSTableColumn *) scanTableValue;
	-(void) setScanTableValue:(NSTableColumn *)p0;
	-(NSView *) selectPTTable;
	-(void) setSelectPTTable:(NSView *)p0;
	-(NSTextField *) setMemAddrBox;
	-(void) setSetMemAddrBox:(NSTextField *)p0;
	-(NSTextField *) setMemByteBox;
	-(void) setSetMemByteBox:(NSTextField *)p0;
	-(NSTextField *) setStringAddr;
	-(void) setSetStringAddr:(NSTextField *)p0;
	-(NSButton *) setStringBtn;
	-(void) setSetStringBtn:(NSButton *)p0;
	-(NSTextField *) setStringString;
	-(void) setSetStringString:(NSTextField *)p0;
	-(NSTextField *) statusLabel;
	-(void) setStatusLabel:(NSTextField *)p0;
	-(NSClipView *) test;
	-(void) setTest:(NSClipView *)p0;
	-(NSScrollView *) testin;
	-(void) setTestin:(NSScrollView *)p0;
	-(NSCollectionView *) testing;
	-(void) setTesting:(NSCollectionView *)p0;
	-(NSTextFieldCell *) testingAGAIN;
	-(void) setTestingAGAIN:(NSTextFieldCell *)p0;
	-(NSTextFieldCell *) testingText;
	-(void) setTestingText:(NSTextFieldCell *)p0;
	-(NSTextField *) testinLOL;
	-(void) setTestinLOL:(NSTextField *)p0;
	-(NSTextField *) testLabel;
	-(void) setTestLabel:(NSTextField *)p0;
	-(NSTextField *) textToFilter;
	-(void) setTextToFilter:(NSTextField *)p0;
	-(NSTextField *) textView;
	-(void) setTextView:(NSTextField *)p0;
	-(NSComboBox *) typeTable;
	-(void) setTypeTable:(NSComboBox *)p0;
	-(NSScrollView *) uartOutputBox;
	-(void) setUartOutputBox:(NSScrollView *)p0;
	-(NSTextField *) wpIndex;
	-(void) setWpIndex:(NSTextField *)p0;
	-(NSComboBox *) wpLength;
	-(void) setWpLength:(NSComboBox *)p0;
	-(NSStepper *) wpStepper;
	-(void) setWpStepper:(NSStepper *)p0;
	-(NSComboBox *) wpType;
	-(void) setWpType:(NSComboBox *)p0;
	-(void) viewDidLoad;
	-(NSObject *) representedObject;
	-(void) setRepresentedObject:(NSObject *)p0;
	-(void) attachProcess:(NSObject *)p0;
	-(void) clearBtn:(NSObject *)p0;
	-(void) clearOutput:(NSObject *)p0;
	-(void) connectBtn:(NSObject *)p0;
	-(void) convertBtn:(NSObject *)p0;
	-(void) copyAddress:(NSObject *)p0;
	-(void) copyValue:(NSObject *)p0;
	-(void) disassembleBtn:(NSObject *)p0;
	-(void) disconnectBtn:(NSObject *)p0;
	-(void) discordBtn:(NSObject *)p0;
	-(void) grabMem:(NSObject *)p0;
	-(void) insertToTable:(NSObject *)p0;
	-(void) loadElf:(NSObject *)p0;
	-(void) loadPTTable:(NSObject *)p0;
	-(void) memScanButton:(NSObject *)p0;
	-(void) ptTableClear:(NSObject *)p0;
	-(void) ptTableSelect:(NSObject *)p0;
	-(void) rebootBtn:(NSObject *)p0;
	-(void) refreshProcess:(NSObject *)p0;
	-(void) savePTTable:(NSObject *)p0;
	-(void) selectelf:(NSObject *)p0;
	-(void) sendPayloadBtn:(NSObject *)p0;
	-(void) setMemBtn:(NSObject *)p0;
	-(void) setStringButtn:(NSObject *)p0;
	-(BOOL) conformsToProtocol:(void *)p0;
@end

@interface PeekPoke_ScanTableDataSource : NSObject<NSTableViewDataSource> {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(NSInteger) numberOfRowsInTableView:(NSTableView *)p0;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
@end

@interface PeekPoke_ProductTableDelegate : NSObject<NSTableViewDelegate> {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(NSView *) tableView:(NSTableView *)p0 viewForTableColumn:(NSTableColumn *)p1 row:(NSInteger)p2;
	-(BOOL) conformsToProtocol:(void *)p0;
@end

@interface PeekPoke_OutputTableDataSource : NSObject<NSTableViewDataSource> {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(NSInteger) numberOfRowsInTableView:(NSTableView *)p0;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
@end

@interface PeekPoke_OutputTableDelegate : NSObject<NSTableViewDelegate> {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(NSView *) tableView:(NSTableView *)p0 viewForTableColumn:(NSTableColumn *)p1 row:(NSInteger)p2;
	-(BOOL) conformsToProtocol:(void *)p0;
@end

@interface PeekPoke_PTTableDataSource : NSObject<NSTableViewDataSource> {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(NSInteger) numberOfRowsInTableView:(NSTableView *)p0;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
@end

@interface PeekPoke_PTTableDelegate : NSObject<NSTableViewDelegate> {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(NSView *) tableView:(NSTableView *)p0 viewForTableColumn:(NSTableColumn *)p1 row:(NSInteger)p2;
	-(BOOL) conformsToProtocol:(void *)p0;
@end


