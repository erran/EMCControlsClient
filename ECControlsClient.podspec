Pod::Spec.new do |s|
  s.name         = 'ECControlsClient'
  s.version      = '0.1.0'
  s.homepage     = 'https://github.com/ipwnstuff/ECControlsClient'
  s.screenshots  = 'www.example.com/screenshots_1', 'www.example.com/screenshots_2'
  s.author       = {
    'Erran Carey' => 'me@errancarey.com'
  }
  s.license      = 'MIT'
  s.summary      = 'ECControlsClient is a Rapid7 controlsinsight API client.'
  s.description  = <<-DESC
                   ECControlsClient is a Rapid7 **controls**insight API client.

                   **Caveats**:
                   * Doesn't yet support asset methods
                   DESC
  s.source       = {
    git: 'https://github.com/ipwnstuff/ECControlsClient.git',
    tag: "v#{s.version}"
  }
  s.source_files = 'ECControlsClient'
  s.requires_arc = true

  s.ios.deployment_target = '6.0'
  s.osx.deployment_target = '10.8'

  s.dependency 'AFNetworking', '~> 2.0'
end
