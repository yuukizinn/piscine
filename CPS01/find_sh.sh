#!/bin/bash
find . -name "*.sh" -exec basename {} \; | sed -e "s/.sh$//g"
