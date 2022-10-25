=========================================
Project Mu Silicon Intel Tiano Repository
=========================================

============================= ================= =============== ===================
 Host Type & Toolchain        Build Status      Test Status     Code Coverage
============================= ================= =============== ===================
Windows_VS2019_               |WindowsCiBuild|  |WindowsCiTest| |WindowsCiCoverage|
Ubuntu_GCC5_                  |UbuntuCiBuild|   |UbuntuCiTest|  |UbuntuCiCoverage|
============================= ================= =============== ===================

This repository is part of Project Mu.  Please see Project Mu for details https://microsoft.github.io/mu

Branch Status - release/202202
==============================

:Status:
  In Development

:Entered Development:
  Febryary 2022

:Anticipated Stabilization:
  May 2022

Branch Changes - release/202202
===============================

Breaking Changes-dev
--------------------

- Incomplete

Main Changes-dev
----------------

- Incomplete

Bug Fixes-dev
-------------

- Incomplete

2202_RefBoot Changes
--------------------

- Incomplete

2202_CIBuild Changes
--------------------

- None

2202_Rebase Changes
-------------------

| Starting commit: 074220c23b
| Destination commit: eec9d2ac24


Repo Maintenance
================

Upstream Sync Details
---------------------

- edk2 - b24306f15d (edk2-stable202202)
- edk2_platforms - c9e377b00f ("Platform/Overdrive: enable resizable BAR support", 2022-02-25)

Instructions
------------

This repo is a composite repo of packages from 'edk2' and packages from 'edk2-platforms'. To maintain it simply, we have
established an 'upstream' branch and an 'upstream-edk2-platforms' branch to track the current state of things. To take
a new integration, follow the steps below:

1) Update 'edk2' commits
    a. Add 'edk2' as a remote, if it doesn't already exist
    b. 'git fetch edk2'
    c. On 'upstream' branch, 'git merge <target-commit, ideally a stable tag>'
2) Update 'upstream-edk2-platforms'
    a. In edk2-platforms repo... 'git format-patch <last_sync_commit>..<new_sync_commit> -- Silicon/Intel/IntelSiliconPkg
        - For <sync_commit>, reference `Upstream Sync Details`_
        - Note, in this case, you may not have a tag to work with, so try to perform this immediately after upstream stabilization
    b. On 'upstream-edk2-platforms' branch in this repo... 'git am -p 3 ../../edk2-platforms/\*.patch'
        - '-p 3' will drop 3 path elements, including 'a' or 'b' off the diff path
    c. On 'upstream' branch in this repo, 'git merge --allow-unrelated-histories 'upstream-edk2-platforms''

Make sure to update the `Upstream Sync Details`_ once done.

To perform an integration, simply set your XXXX_Upstream tag to the top of 'upstream' and rebase as normal. Make sure
to push 'upstream' and 'upstream-edk2-platforms' to the server after integration, along with new release branch.

Code of Conduct
===============

This project has adopted the Microsoft Open Source Code of Conduct https://opensource.microsoft.com/codeofconduct/

For more information see the Code of Conduct FAQ https://opensource.microsoft.com/codeofconduct/faq/
or contact `opencode@microsoft.com <mailto:opencode@microsoft.com>`_. with any additional questions or comments.

Contributions
=============

Contributions are always welcome and encouraged!
Please open any issues in the Project Mu GitHub tracker and read https://microsoft.github.io/mu/How/contributing/


Copyright & License
===================

Copyright (c) Microsoft Corporation. All rights reserved.
SPDX-License-Identifier: BSD-2-Clause-Patent

Upstream License (TianoCore)
============================

Copyright (c) 2019, TianoCore and contributors.  All rights reserved.

SPDX-License-Identifier: BSD-2-Clause-Patent

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions are met:

1. Redistributions of source code must retain the above copyright notice,
   this list of conditions and the following disclaimer.

2. Redistributions in binary form must reproduce the above copyright notice,
   this list of conditions and the following disclaimer in the documentation
   and/or other materials provided with the distribution.

Subject to the terms and conditions of this license, each copyright holder
and contributor hereby grants to those receiving rights under this license
a perpetual, worldwide, non-exclusive, no-charge, royalty-free, irrevocable
(except for failure to satisfy the conditions of this license) patent
license to make, have made, use, offer to sell, sell, import, and otherwise
transfer this software, where such license applies only to those patent
claims, already acquired or hereafter acquired, licensable by such copyright
holder or contributor that are necessarily infringed by:

(a) their Contribution(s) (the licensed copyrights of copyright holders and
    non-copyrightable additions of contributors, in source or binary form)
    alone; or

(b) combination of their Contribution(s) with the work of authorship to
    which such Contribution(s) was added by such copyright holder or
    contributor, if, at the time the Contribution is added, such addition
    causes such combination to be necessarily infringed. The patent license
    shall not apply to any other combinations which include the
    Contribution.

Except as expressly stated above, no rights or licenses from any copyright
holder or contributor is granted under this license, whether expressly, by
implication, estoppel or otherwise.

DISCLAIMER

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDERS OR CONTRIBUTORS BE
LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
POSSIBILITY OF SUCH DAMAGE.

.. ===================================================================
.. This is a bunch of directives to make the README file more readable
.. ===================================================================

.. CoreCI

.. _Windows_VS2019: https://dev.azure.com/projectmu/mu/_build/latest?definitionId=53&&branchName=release%2F202202
.. |WindowsCiBuild| image:: https://dev.azure.com/projectmu/mu/_apis/build/status/CI/Mu%20Silicon%20Intel%20Tiano%20CI%20VS2019?branchName=release%2F202202
.. |WindowsCiTest| image:: https://img.shields.io/azure-devops/tests/projectmu/mu/53.svg
.. |WindowsCiCoverage| image:: https://img.shields.io/badge/coverage-coming_soon-blue

.. _Ubuntu_GCC5: https://dev.azure.com/projectmu/mu/_build/latest?definitionId=54&branchName=release%2F202202
.. |UbuntuCiBuild| image:: https://dev.azure.com/projectmu/mu/_apis/build/status/CI/Mu%20Silicon%20Intel%20Tiano%20CI%20Ubuntu%20GCC5?branchName=release%2F202202
.. |UbuntuCiTest| image:: https://img.shields.io/azure-devops/tests/projectmu/mu/54.svg
.. |UbuntuCiCoverage| image:: https://img.shields.io/badge/coverage-coming_soon-blue
