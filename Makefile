DEBUG = 0
FINALPACKAGE = 1
FOR_RELEASE = 1
GO_EASY_ON_ME = 1

ARCHS = arm64




TARGET = iphone:latest

#THEOS_PACKAGE_SCHEME = rootless

include $(THEOS)/makefiles/common.mk

TWEAK_NAME = Menu



LAYS_FRAMEWORKS =  UIKit Foundation Security QuartzCore CoreGraphics CoreText  AVFoundation Accelerate GLKit SystemConfiguration GameController CydiaSubstrate


LAYS_CCFLAGS = -std=c++17 -fno-rtti -fno-exceptions -DNDEBUG -fvisibility=hidden -Wc++11-narrowing -Wno-narrowing -Wundefined-bool-conversion -Wreturn-stack-address -Wno-error=format-security -fvisibility=hidden -fpermissive -fexceptions -w -s -Wno-error=format-security -fvisibility=hidden -Werror -fpermissive -Wall -fexceptions
LAYS_CFLAGS = -fobjc-arc -Wno-deprecated-declarations -Wno-unused-variable -Wno-unused-value -fvisibility=hidden -Wc++11-narrowing -Wno-narrowing -Wundefined-bool-conversion -Wreturn-stack-address -Wno-error=format-security -fvisibility=hidden -fpermissive -fexceptions -w -s -Wno-error=format-security -fvisibility=hidden -Werror -fpermissive -Wall -fexceptions 



LAYS_FILES = $(wildcard ESP/*.mm) $(wildcard ESP/*.m) $(wildcard ESP/*.cpp)

$(TWEAK_NAME)_LIBRARIES += substrate

include $(THEOS_MAKE_PATH)/tweak.mk
after-install::
   install.exec "killall -9 ShadowTrackerExtra || :"

