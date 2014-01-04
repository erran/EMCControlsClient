# vi: set ft=ruby :

Pod::Spec.new do |s|
  s.name         = 'ECControlsClient'
  s.version      = '0.1.0'
  s.homepage     = 'https://github.com/ipwnstuff/ECControlsClient'
  s.screenshots  = 'www.example.com/screenshots_1', 'www.example.com/screenshots_2'
  s.author       = {
    'Erran Carey' => 'me@errancarey.com'
  }
  s.license      = 'MIT'
  s.summary      = 'A short description of ECControlsClient.'
#  s.description  = <<-DESC
#                    An optional longer description of ECControlsClient
#
#                    * Markdown format.
#                    * Don't worry about the indent, we strip it!
#                   DESC
  s.source       = {
    git: 'https://github.com/ipwnstuff/ECControlsClient.git',
    tag: s.version
  }
  s.source_files = 'ECControlsClient'
  s.requires_arc = true

  s.ios.deployment_target = '6.0'
  s.osx.deployment_target = '10.8'

  s.dependency 'AFNetworking', '~> 2.0'
end
