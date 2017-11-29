Pod::Spec.new do |s|
          #1.
          s.name             = "SeonTest"
          #2.
          s.version          = "1.0.0"
          #3.  
          s.summary          = "SeonTest framework"
          #4.
          s.homepage         = "http://www.kindlebit.com"
          #5.
          s.license          = "OPEN"
          #6.
          s.author           = "Kindlebit"
          #7.
          s.platform         =  :ios, "10.0"
          #8.
          s.source           =  { :git => "https://github.com/mobilekbs/PodTesting.git", :tag => "1.0.0" }
          #9.
          s.source_files     =  "SeonTest", "SeonTest/**/*.{h,m,swift,framework}"
    end