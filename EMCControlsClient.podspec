Pod::Spec.new do |s|
  s.name         = 'EMCControlsClient'
  s.version      = '0.1.0'
  s.homepage     = 'https://github.com/ipwnstuff/EMCControlsClient'
  s.author       = {
    'Erran Carey' => 'me@errancarey.com'
  }
  s.license      = 'MIT'
  s.summary      = 'EMCControlsClient is a Rapid7 controlsinsight API client.'
  s.description  = <<-DESC
                   EMCControlsClient is a Rapid7 **controls**insight API client.

                   **Caveats**:
                   * Doesn't yet support asset methods
                   DESC
  s.source       = {
    git: 'https://github.com/ipwnstuff/EMCControlsClient.git',
    tag: "v#{s.version}"
  }
  s.source_files = 'EMCControlsClient'
  s.requires_arc = true

  s.ios.deployment_target = '6.0'
  s.osx.deployment_target = '10.8'

  s.dependency 'AFNetworking', '~> 2.0.0'
  s.dependency 'Mantle',       '~> 1.3.1'
end
