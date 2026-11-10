/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004bcf80; name: FUN_004bcf80
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_004bcf80(void)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  int local_24;
  
  DAT_0439ea10 = 0;
  FUN_004bfcd0();
  lVar4 = 0;
  if (_USHORT_03a26ad0 != 0) goto LAB_004bcfd8;
  do {
    *(undefined8 *)((long)&DAT_0439eaf0 + lVar4) = 0;
    lVar5 = lVar4;
joined_r0x004bcfc8:
    lVar4 = lVar5 + 8;
    if (lVar4 == 0xb0) {
      DAT_0439ea14 = 0;
      FUN_00407d80(4);
      DAT_0439ea30 = FUN_00446540();
      if (DAT_0439ea30 == 0) {
        DAT_0439ea14 = DAT_0439ea14 | 1;
      }
      else {
        iVar2 = FUN_0041ccc0();
        if (iVar2 < 0) goto LAB_004bd508;
        DAT_0439ea90 = (long)iVar2;
      }
      FUN_00407d80(0x40);
      DAT_0439ea38 = FUN_00446540();
      if (DAT_0439ea38 == 0) {
        DAT_0439ea14 = DAT_0439ea14 | 2;
      }
      else {
        iVar2 = FUN_0041ccc0();
        if (iVar2 < 0) goto LAB_004bd508;
        DAT_0439ea98 = (long)iVar2;
      }
      FUN_00407d80(0x329);
      DAT_0439ea40 = FUN_00446540();
      if (DAT_0439ea40 == 0) {
        DAT_0439ea14 = DAT_0439ea14 | 4;
      }
      else {
        iVar2 = FUN_0041ccc0();
        if (iVar2 < 0) goto LAB_004bd508;
        DAT_0439eaa0 = (long)iVar2;
      }
      FUN_00407d80(0x32f);
      DAT_0439ea48 = FUN_00446540();
      if (DAT_0439ea48 == 0) {
        DAT_0439ea14 = DAT_0439ea14 | 8;
      }
      else {
        iVar2 = FUN_0041ccc0();
        if (iVar2 < 0) goto LAB_004bd508;
        DAT_0439eaa8 = (long)iVar2;
      }
      FUN_00407d80(0x2a0);
      DAT_0439ea50 = FUN_00446540();
      if (DAT_0439ea50 == 0) {
        DAT_0439ea14 = DAT_0439ea14 | 0x10;
      }
      else {
        iVar2 = FUN_0041ccc0();
        if (iVar2 < 0) goto LAB_004bd508;
        DAT_0439eab0 = (long)iVar2;
      }
      FUN_00407d80(0x2a1);
      DAT_0439ea58 = FUN_00446540();
      if (DAT_0439ea58 == 0) {
        DAT_0439ea14 = DAT_0439ea14 | 0x20;
      }
      else {
        iVar2 = FUN_0041ccc0();
        if (iVar2 < 0) goto LAB_004bd508;
        DAT_0439eab8 = (long)iVar2;
      }
      FUN_00407d80(0x3d6);
      DAT_0439ea60 = FUN_00446540();
      if (DAT_0439ea60 == 0) {
        DAT_0439ea14 = DAT_0439ea14 | 0x80;
      }
      else {
        iVar2 = FUN_0041ccc0();
        if (iVar2 < 0) goto LAB_004bd508;
        DAT_0439eac0 = (long)iVar2;
      }
      FUN_00407d80(0x3d0);
      DAT_0439ea68 = FUN_00446540();
      if (DAT_0439ea68 == 0) {
        DAT_0439ea14 = DAT_0439ea14 | 0x100;
      }
      else {
        iVar2 = FUN_0041ccc0();
        if (iVar2 < 0) goto LAB_004bd508;
        DAT_0439eac8 = (long)iVar2;
      }
      FUN_00407d80(0x3d7);
      DAT_0439ea70 = FUN_00446540();
      if (DAT_0439ea70 == 0) {
        DAT_0439ea14 = DAT_0439ea14 | 0x200;
      }
      else {
        iVar2 = FUN_0041ccc0();
        if (iVar2 < 0) goto LAB_004bd508;
        DAT_0439ead0 = (long)iVar2;
      }
      FUN_00407d80(0x72);
      DAT_0439ea78 = FUN_00446540();
      if (DAT_0439ea78 != 0) {
        iVar2 = FUN_0041ccc0();
        if (iVar2 < 0) goto LAB_004bd508;
        DAT_0439ead8 = (long)iVar2;
      }
      FUN_00407d80(0x2a3);
      DAT_0439ea80 = FUN_00446540();
      if (DAT_0439ea80 != 0) {
        iVar2 = FUN_0041ccc0();
        if (iVar2 < 0) goto LAB_004bd508;
        DAT_0439eae0 = (long)iVar2;
      }
      FUN_00407d80(0x2a2);
      DAT_0439ea88 = FUN_00446540();
      if (DAT_0439ea88 != 0) {
        iVar2 = FUN_0041ccc0();
        if (iVar2 < 0) {
LAB_004bd508:
                    /* WARNING: Subroutine does not return */
          FUN_00404dd0("Assertion failed: tmpsize >= 0","external/openssl/ssl/ssl_ciph.c",0x17e);
        }
        DAT_0439eae8 = (long)iVar2;
      }
      if (DAT_0439ea30 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00404dd0("Assertion failed: ssl_digest_methods[SSL_MD_MD5_IDX] != NULL",
                     "external/openssl/ssl/ssl_ciph.c",0x184);
      }
      if (DAT_0439ea38 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00404dd0("Assertion failed: ssl_digest_methods[SSL_MD_SHA1_IDX] != NULL",
                     "external/openssl/ssl/ssl_ciph.c",0x186);
      }
      DAT_0439ea18 = 0;
      local_24 = 0;
      lVar4 = FUN_0043e6e0(0,"gost-mac",0xffffffff);
      if ((lVar4 == 0) || (iVar2 = FUN_0043e7f0(&local_24,0,0,0,0,lVar4), iVar2 < 1)) {
        DAT_0417c63c = 0;
LAB_004bd338:
        DAT_0439ea14 = DAT_0439ea14 | 8;
      }
      else {
        DAT_0417c63c = local_24;
        if (local_24 == 0) goto LAB_004bd338;
        DAT_0439eaa8 = 0x20;
      }
      local_24 = 0;
      lVar4 = FUN_0043e6e0(0,"gost-mac-12",0xffffffff);
      if ((lVar4 == 0) || (iVar2 = FUN_0043e7f0(&local_24,0,0,0,0,lVar4), iVar2 < 1)) {
        DAT_0417c64c = 0;
      }
      else {
        DAT_0417c64c = local_24;
        if (local_24 != 0) {
          DAT_0439eac8 = 0x20;
          goto LAB_004bd3b8;
        }
      }
      DAT_0439ea14 = DAT_0439ea14 | 0x100;
LAB_004bd3b8:
      local_24 = 0;
      lVar4 = FUN_0043e6e0(0,"gost2001",0xffffffff);
      if (((lVar4 == 0) || (iVar2 = FUN_0043e7f0(&local_24,0,0,0,0,lVar4), iVar2 < 1)) ||
         (local_24 == 0)) {
        DAT_0439ea18 = DAT_0439ea18 | 0xa000000000;
      }
      local_24 = 0;
      lVar4 = FUN_0043e6e0(0,"gost2012_256",0xffffffff);
      if (((lVar4 == 0) || (iVar2 = FUN_0043e7f0(&local_24,0,0,0,0,lVar4), iVar2 < 1)) ||
         (local_24 == 0)) {
        DAT_0439ea18 = DAT_0439ea18 | 0x8000000000;
      }
      local_24 = 0;
      lVar4 = FUN_0043e6e0(0,"gost2012_512",0xffffffff);
      if (((lVar4 == 0) || (iVar2 = FUN_0043e7f0(&local_24,0,0,0,0,lVar4), iVar2 < 1)) ||
         (local_24 == 0)) {
        uVar1 = DAT_0439ea18._4_4_ | 0x80;
        DAT_0439ea18 = DAT_0439ea18 | 0x8000000000;
      }
      else {
        uVar1 = DAT_0439ea18._4_4_;
      }
      if (((uVar1 ^ 0xffffffff) & 0xa0) == 0) {
        DAT_0439ea18 = DAT_0439ea18 | 0x10;
      }
      return 1;
    }
  } while (*(int *)((long)&USHORT_03a26ad8 + lVar5) == 0);
LAB_004bcfd8:
  FUN_00407d80();
  lVar3 = FUN_00446500();
  *(long *)((long)&DAT_0439eaf0 + lVar4) = lVar3;
  lVar5 = lVar4;
  if (lVar3 == 0) {
    DAT_0439ea10 = DAT_0439ea10 | *(uint *)((long)&USHORT_03a26acc + lVar4);
  }
  goto joined_r0x004bcfc8;
}


