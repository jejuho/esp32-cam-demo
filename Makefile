PROJECT_NAME := esp32-cam-demo

CPPFLAGS ?= -DMQTT_SUPPORTED_FEATURE_EVENT_LOOP=1

include $(IDF_PATH)/make/project.mk

