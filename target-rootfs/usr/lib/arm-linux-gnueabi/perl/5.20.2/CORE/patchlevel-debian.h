	,"DEBPKG:debian/cpan_definstalldirs - Provide a sensible INSTALLDIRS default for modules installed from CPAN."
	,"DEBPKG:debian/db_file_ver - http://bugs.debian.org/340047 Remove overly restrictive DB_File version check."
	,"DEBPKG:debian/doc_info - Replace generic man(1) instructions with Debian-specific information."
	,"DEBPKG:debian/enc2xs_inc - http://bugs.debian.org/290336 Tweak enc2xs to follow symlinks and ignore missing @INC directories."
	,"DEBPKG:debian/errno_ver - http://bugs.debian.org/343351 Remove Errno version check due to upgrade problems with long-running processes."
	,"DEBPKG:debian/libperl_embed_doc - http://bugs.debian.org/186778 Note that libperl-dev package is required for embedded linking"
	,"DEBPKG:fixes/respect_umask - Respect umask during installation"
	,"DEBPKG:debian/writable_site_dirs - Set umask approproately for site install directories"
	,"DEBPKG:debian/extutils_set_libperl_path - EU:MM: set location of libperl.a under /usr/lib"
	,"DEBPKG:debian/no_packlist_perllocal - Don't install .packlist or perllocal.pod for perl or vendor"
	,"DEBPKG:debian/prefix_changes - Fiddle with *PREFIX and variables written to the makefile"
	,"DEBPKG:debian/fakeroot - Postpone LD_LIBRARY_PATH evaluation to the binary targets."
	,"DEBPKG:debian/instmodsh_doc - Debian policy doesn't install .packlist files for core or vendor."
	,"DEBPKG:debian/ld_run_path - Remove standard libs from LD_RUN_PATH as per Debian policy."
	,"DEBPKG:debian/libnet_config_path - Set location of libnet.cfg to /etc/perl/Net as /usr may not be writable."
	,"DEBPKG:debian/mod_paths - Tweak @INC ordering for Debian"
	,"DEBPKG:debian/module_build_man_extensions - http://bugs.debian.org/479460 Adjust Module::Build manual page extensions for the Debian Perl policy"
	,"DEBPKG:debian/prune_libs - http://bugs.debian.org/128355 Prune the list of libraries wanted to what we actually need."
	,"DEBPKG:fixes/net_smtp_docs - [rt.cpan.org #36038] http://bugs.debian.org/100195 Document the Net::SMTP 'Port' option"
	,"DEBPKG:debian/perlivp - http://bugs.debian.org/510895 Make perlivp skip include directories in /usr/local"
	,"DEBPKG:debian/deprecate-with-apt - http://bugs.debian.org/747628 Point users to Debian packages of deprecated core modules"
	,"DEBPKG:debian/squelch-locale-warnings - http://bugs.debian.org/508764 Squelch locale warnings in Debian package maintainer scripts"
	,"DEBPKG:debian/skip-upstream-git-tests - Skip tests specific to the upstream Git repository"
	,"DEBPKG:debian/patchlevel - http://bugs.debian.org/567489 List packaged patches for 5.20.2-3+deb8u3 in patchlevel.h"
	,"DEBPKG:debian/skip-kfreebsd-crash - http://bugs.debian.org/628493 [perl #96272] Skip a crashing test case in t/op/threads.t on GNU/kFreeBSD"
	,"DEBPKG:fixes/document_makemaker_ccflags - http://bugs.debian.org/628522 [rt.cpan.org #68613] Document that CCFLAGS should include $Config{ccflags}"
	,"DEBPKG:debian/find_html2text - http://bugs.debian.org/640479 Configure CPAN::Distribution with correct name of html2text"
	,"DEBPKG:debian/perl5db-x-terminal-emulator.patch - http://bugs.debian.org/668490 Invoke x-terminal-emulator rather than xterm in perl5db.pl"
	,"DEBPKG:debian/cpan-missing-site-dirs - http://bugs.debian.org/688842 Fix CPAN::FirstTime defaults with nonexisting site dirs if a parent is writable"
	,"DEBPKG:fixes/memoize_storable_nstore - [rt.cpan.org #77790] http://bugs.debian.org/587650 Memoize::Storable: respect 'nstore' option not respected"
	,"DEBPKG:debian/regen-skip - Skip a regeneration check in unrelated git repositories"
	,"DEBPKG:fixes/regcomp-mips-optim - [perl #122817] http://bugs.debian.org/754054 Downgrade the optimization of regcomp.c on mips and mipsel due to a gcc-4.9 bug"
	,"DEBPKG:debian/makemaker-pasthru - http://bugs.debian.org/758471 Pass LD settings through to subdirectories"
	,"DEBPKG:fixes/perldoc-less-R - [rt.cpan.org #98636] http://bugs.debian.org/758689 Tell the 'less' pager to allow terminal escape sequences"
	,"DEBPKG:fixes/pod_man_reproducible_date - http://bugs.debian.org/759405 Support POD_MAN_DATE in Pod::Man for the left-hand footer"
	,"DEBPKG:fixes/io_uncompress_gunzip_inmemory - http://bugs.debian.org/747363 [rt.cpan.org #95494] Fix gunzip to in-memory file handle"
	,"DEBPKG:fixes/socket_test_recv_fix - http://bugs.debian.org/758718 [perl #122657] Compare recv return value to peername in socket test"
	,"DEBPKG:fixes/hurd_socket_recv_todo - http://bugs.debian.org/758718 [perl #122657] TODO checking the result of recv() on hurd"
	,"DEBPKG:fixes/regexp-performance - [0fa70a0] http://bugs.debian.org/777556 [perl #123743] simpify and speed up /.*.../ handling"
	,"DEBPKG:fixes/failed_require_diagnostics - http://bugs.debian.org/781120 [perl #123270] Report inaccesible file on failed require"
	,"DEBPKG:fixes/array-cloning - http://bugs.debian.org/779357 [perl #124127] [902d169] fix cloning arrays with unused elements"
	,"DEBPKG:fixes/perldb-threads - http://bugs.debian.org/779357 [perl #124127] [41ef2c6] lib/perl5db.pl: Restore noop lock prototype"
	,"DEBPKG:fixes/CVE-2015-8607_file_spec_taint_fix - ensure File::Spec::canonpath() preserves taint"
	,"DEBPKG:fixes/encode-unicode-bom - http://bugs.debian.org/798727 [rt.cpan.org #107043] Address https://rt.cpan.org/Public/Bug/Display.html?id=107043"
	,"DEBPKG:debian/encode-unicode-bom-doc - http://bugs.debian.org/798727 Document Debian backport of Encode::Unicode fix"
