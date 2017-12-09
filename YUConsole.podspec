
Pod::Spec.new do |s|
  s.name         = "YUConsole"
  s.version      = "1.0.0"
  s.summary      = "真机日志调试"
  s.homepage     = "https://github.com/c6357/YUConsole"
  s.license      = "MIT"
  s.author       = { "BruceYu" => "c6357@outlook.com" }
  s.platform     = :ios, "8.0"
  s.source       = { :git => "https://github.com/c6357/YUConsole.git", :tag => s.version}
  s.ios.vendored_frameworks = 'YUConsole.framework'
  s.frameworks = 'Foundation','UIKit'
  s.requires_arc = true
end
