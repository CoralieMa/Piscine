#!/bin/sh
find . -iregex ".*\.\sh" -type f -exec basename {} .sh \;
