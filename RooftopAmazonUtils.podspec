Pod::Spec.new do |s|
  s.name        = 'RooftopAmazonUtils'
  s.version     = '0.5.0'
  s.summary     = 'Rooftop Amazon utils for Apple platforms.'
  s.description = 'Rooftop Amazon utils for Apple platforms.'
  s.authors     = 'RFTP Technologies Ltd'
  s.homepage    = 'https://www.rftp.io/'
  s.license     = { :type => 'BSD', :file => 'LICENSE' }
  s.source      = { :git => "https://github.com/Rooftoptek/RooftopAmazonUtils-xOS.git", :tag => s.version.to_s }

  s.platform = :ios
  s.requires_arc = true

  s.ios.deployment_target = '9.0'
  s.ios.vendored_framework = 'iOS/RooftopAmazonUtils.framework'
  
  s.frameworks = 'SafariServices', 'Security', 'CoreGraphics'

  s.dependency 'Rooftop', '~> 0.5.0'

end
