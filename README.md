# SUID Shell Wrapper
Use the `suid-shell` to drop shell (`/bin/sh`) as the executable's owner (setuid). Use `setuid-wrapper` to run command with privileges of  the executable's owner.

## Compiling
Self compile using the command:
```
gcc -s -static -O3 -o suid-shell suid-shell.c
```

## Download
Download pre-compiled binary from [release](https://github.com/IceM4nn/suid-shell-wrapper/releases). MD5sum:
```
c54dddc1be85fe984f689fca5fef9f5a  suid-shell-x64
824317b7e3079daca242081bc5f22cc1  suid-shell-x86
bcbe305d409e87126565cd1e1e556703  setuid-wrapper-x86
130645a46a86f1f772709cd1ecb93307  setuid-wrapper-x64
```

x86 Architecture
```
suid-shell-x86: ELF 32-bit LSB executable, Intel 80386, version 1 (GNU/Linux), statically linked,
for GNU/Linux 2.6.32, BuildID[sha1]=973f85925a0b0bc69181d59dc3d0e77823583c2c, stripped

setuid-wrapper-x86: ELF 32-bit LSB executable, Intel 80386, version 1 (GNU/Linux), statically linked,
for GNU/Linux 2.6.32, BuildID[sha1]=fb56045215b56a4e260af22df1c577c8d47a17dd, stripped
```

x64 Architecture
```
suid-shell-x64: ELF 64-bit LSB executable, x86-64, version 1 (GNU/Linux), statically linked,
for GNU/Linux 2.6.32, BuildID[sha1]=4164de1d848943112efa31ce641235ebc6e64783, stripped

setuid-wrapper-x64: ELF 64-bit LSB executable, x86-64, version 1 (GNU/Linux), statically linked,
for GNU/Linux 2.6.32, BuildID[sha1]=586a22851cdbfcae869d1e8e44a32cf8a1e1819a, stripped
```

## Pre-compiled binary environment
Build system: x86
```
$ uname -a
Linux debian 4.9.0-16-686 #1 SMP Debian 4.9.272-2 (2021-07-19) i686 GNU/Linux
$ lsb_release -a
Distributor ID:	Debian
Description:	Debian GNU/Linux 9.13 (stretch)
Release:	9.13
Codename:	stretch
$ gcc --version
gcc (Debian 6.3.0-18+deb9u1) 6.3.0 20170516
```
Build system: x64
```
$ uname -a
Linux debian 4.9.0-16-amd64 #1 SMP Debian 4.9.272-2 (2021-07-19) x86_64 GNU/Linux
$ lsb_release -a
Distributor ID:	Debian
Description:	Debian GNU/Linux 9.13 (stretch)
Release:	9.13
Codename:	stretch
$ gcc --version
gcc (Debian 6.3.0-18+deb9u1) 6.3.0 20170516
```

## Usage
Instantly drop shell (`/bin/sh`): `suid-shell`
```
chown root:root suid-shell-x64
chmod 4755 suid-shell-x64
./suid-shell-x64
# id
uid=0(root) gid=0(root) groups=0(root)
```

Run command with elevated privileges in wrapper. `setuid-wrapper &lt;command&gt;`
```
chown root:root setuid-wrapper-x64
chmod 4755 setuid-wrapper-x64
./setuid-wrapper-x64 id
uid=0(root) gid=0(root) groups=0(root)
```