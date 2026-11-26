# 42 Piscine - Shell 00

This repository contains the exercises and solutions for the **Shell 00** module (v5.1) of the 42 C Piscine. The goal of this module is to introduce core Unix/Linux command-line skills, including file permissions, archiving, Git workflows, shell commands, and basic scripting.

## 🛠️ Exercise Overview

| Directory | Deliverable / Command | Description | Status |
| :--- | :--- | :--- | :--- |
| **ex00/** | `z` | Outputs `"Z"` followed by a newline when read with `cat z`. | ✅ |
| **ex01/** | `testShell00.tar` | Archives `testShell00` with specific permissions and timestamp formatting (`tar -cf testShell00.tar testShell00`). | ✅ |
| **ex02/** | `exo2.tar` | Creates files, directories, permissions, and symbolic link `test6 -> testo`, then archives them (`tar -cf exo2.tar *`). | ✅ |
| **ex03/** | `id_ed25519_pub` | Stores the `ed25519` SSH public key configured on the 42 intranet. | ✅ |
| **ex04/** | `midLS` | Lists non-hidden entries sorted by modification date, comma-space separated, with `/` on directories. | ✅ |
| **ex05/** | `git_commit.sh` | Displays the commit hashes of the last 5 commits in the Git repository. | ✅ |
| **ex06/** | `git_ignore.sh` | Lists existing files in the repository ignored by Git. | ✅ |
| **ex07/** | `b` | Matches reference file `a` to produce the expected `sw.diff` output (`diff a b > sw.diff`). | ✅ |
| **ex08/** | `clean` | Single `find` command that displays and removes files ending with `~` or starting and ending with `#`. | ✅ |
| **ex09/** | `ft_magic` | Magic file formatted for `file` to detect `"42"` starting at the 42nd byte. | ✅ |

## ⚙️ Usage & Verification

All exercises must follow the subject rules, exact filenames, and repository cleanliness requirements before evaluation by peers and **Moulinette**.

```bash
ls -l ex01/ ex02/
bash ex05/git_commit.sh
```