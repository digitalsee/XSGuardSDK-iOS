#
#  Be sure to run `pod spec lint AotterTrek-iOS-SDK.podspec' to ensure this is a
#  valid spec and to remove all comments including this before submitting the spec.
#
#  To learn more about Podspec attributes see https://guides.cocoapods.org/syntax/podspec.html
#  To see working Podspecs in the CocoaPods repo see https://github.com/CocoaPods/Specs/
#

Pod::Spec.new do |spec|
  spec.name         = "XSGuardSDK-iOS"
  spec.version      = "1.0.0"
  spec.summary      = "XSGuard SDK for iOS developer."
  spec.description  = <<-DESC
  XSGuard SDK for iOS developer.
                   DESC

  spec.homepage     = "https://digitalsee.cn"

  spec.authors            = { "Digitalsee" => "tinkertoy@digitalsee.cn" }

  spec.platform     = :ios, "9.0"

  spec.source       = { :git => "https://github.com/digitalsee/XSGuardSDK-iOS.git", :tag => spec.version.to_s }

  spec.vendored_frameworks = "LegoSandBox.framework"

  #spec.frameworks = "SystemConfiguration", "CoreMedia", "WebKit", "CoreTelephony", "AdSupport", "AVKit", "AVFoundation", "Foundation", "UIKit" , "OMSDK_Aotternet"
  # spec.libraries = "iconv", "xml2"

  spec.pod_target_xcconfig = { 'OTHER_LDFLAGS' => "-ObjC -lz -lc++" }
end
