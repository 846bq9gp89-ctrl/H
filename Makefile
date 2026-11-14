DEBUG = 0
FINALPACKAGE = 1
FOR_RELEASE = 1
GO_EASY_ON_ME = 1

ARCHS = arm64

TARGET = iphone:latest

#THEOS_PACKAGE_SCHEME = rootless

include $(THEOS)/makefiles/common.mk

TWEAK_NAME = Menu

Menu_FILES = $(wildcard Menu/*.mm) $(wildcard Menu/*.m) $(wildcard Menu/*.cpp)

Menu_FRAMEWORKS = UIKit Foundation Security QuartzCore CoreGraphics CoreText AVFoundation Accelerate GLKit SystemConfiguration GameController

Menu_CCFLAGS = -std=c++17 -fno-rtti -fno-exceptions -DNDEBUG -fvisibility=hidden \
	-Wno-narrowing -Wno-error=format-security -fpermissive -fexceptions -w -s

Menu_CFLAGS = -fobjc-arc -Wno-deprecated-declarations -Wno-unused-variable \
	-Wno-unused-value -fvisibility=hidden -Wno-narrowing \
	-Wno-error=format-security -fpermissive -fexceptions -w -s

Menu_LIBRARIES += substrate

include $(THEOS_MAKE_PATH)/tweak.mk

after-install::
	install.exec "killall -9 ShadowTrackerExtra || :"
