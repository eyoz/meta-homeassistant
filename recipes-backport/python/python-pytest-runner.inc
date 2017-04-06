SUMMARY = "Invoke py.test as distutils command with dependency resolution"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://LICENSE;md5=e38b971c2b4c33b978d1b9c9ece9ae63"

SRC_URI[md5sum] = "041f3624f450d87a242e3907d7f90e8f"
SRC_URI[sha256sum] = "1ec44deddaa551f85fd563c40a4c483a2609aca1f284a95399566a74d0680d5c"

inherit pypi

DEPENDS += " \
    ${PYTHON_PN}-setuptools-scm-native"

RDEPENDS_${PN}_class-target = "${PYTHON_PN}-setuptools ${PYTHON_PN}-argparse ${PYTHON_PN}-debugger ${PYTHON_PN}-json"
RDEPENDS_${PN}_class-native = "${PYTHON_PN}-setuptools-native"

BBCLASSEXTEND = "native nativesdk"