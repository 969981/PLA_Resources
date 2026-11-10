/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004060f0; name: FUN_004060f0
 */


undefined8 FUN_004060f0(uint param_1,undefined8 param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  
  if (DAT_0439e664 == '\x01') {
    if ((param_1 >> 0x12 & 1) == 0) {
      FUN_004014b0(0xf,0x74,0x46,"external/openssl/crypto/init.c",0x272);
    }
    return 0;
  }
  iVar2 = FUN_004001b0(&DAT_0439e688,&LAB_00406420);
  if (iVar2 == 0) {
    return 0;
  }
  if (DAT_0439e68c == 0) {
    return 0;
  }
  if ((param_1 >> 0x12 & 1) == 0) {
    if ((param_1 >> 0x13 & 1) == 0) {
      iVar2 = FUN_004001b0(&DAT_0439e690,&LAB_004064b0);
      bVar1 = DAT_0439e674;
      if (iVar2 == 0) {
        return 0;
      }
    }
    else {
      iVar2 = FUN_004001b0(&DAT_0439e690,&LAB_004064a0);
      if (iVar2 == 0) {
        return 0;
      }
      bVar1 = DAT_0439e674 & 1;
    }
    if (bVar1 == 0) {
      return 0;
    }
    iVar2 = FUN_004001b0(&DAT_0439e694,&LAB_004064c0);
    if (iVar2 == 0) {
      return 0;
    }
    if (DAT_0439e678 == '\0') {
      return 0;
    }
    if ((param_1 & 1) != 0) {
      iVar2 = FUN_004001b0(&DAT_0439e698,&LAB_004064d0);
      if (iVar2 == 0) {
        return 0;
      }
      if (DAT_0439e69c == 0) {
        return 0;
      }
    }
    if ((param_1 >> 1 & 1) != 0) {
      iVar2 = FUN_004001b0(&DAT_0439e698,&LAB_004064e0);
      if (iVar2 == 0) {
        return 0;
      }
      if (DAT_0439e69c == 0) {
        return 0;
      }
    }
    if ((param_1 >> 4 & 1) != 0) {
      iVar2 = FUN_004001b0(&DAT_0439e6a0,&LAB_00406510);
      if (iVar2 == 0) {
        return 0;
      }
      if (DAT_0439e67c == '\0') {
        return 0;
      }
    }
    if ((param_1 >> 2 & 1) != 0) {
      iVar2 = FUN_004001b0(&DAT_0439e6a0,&LAB_00406520);
      if (iVar2 == 0) {
        return 0;
      }
      if (DAT_0439e67c == '\0') {
        return 0;
      }
    }
    if ((param_1 >> 5 & 1) != 0) {
      iVar2 = FUN_004001b0(&DAT_0439e6a4,&LAB_00406540);
      if (iVar2 == 0) {
        return 0;
      }
      if (DAT_0439e680 == '\0') {
        return 0;
      }
    }
    if ((param_1 >> 3 & 1) != 0) {
      iVar2 = FUN_004001b0(&DAT_0439e6a4,&LAB_00406550);
      if (iVar2 == 0) {
        return 0;
      }
      if (DAT_0439e680 == '\0') {
        return 0;
      }
    }
    if (((param_1 >> 0x11 & 1) != 0) && (uVar4 = FUN_00400210(0), (int)uVar4 == 0)) {
      return uVar4;
    }
    if ((param_1 >> 7 & 1) != 0) {
      iVar2 = FUN_004001b0(&DAT_0439e6a8,&LAB_00406570);
      if (iVar2 == 0) {
        return 0;
      }
      if (DAT_0439e6ac == 0) {
        return 0;
      }
    }
    if ((param_1 >> 6 & 1) != 0) {
      FUN_00400140(DAT_0439e6c8);
      DAT_0439e6d0 = param_2;
      iVar3 = FUN_004001b0(&DAT_0439e6a8,&LAB_00406590);
      iVar2 = DAT_0439e6ac;
      DAT_0439e6d0 = 0;
      FUN_00400160(DAT_0439e6c8);
      if (iVar3 == 0) {
        return 0;
      }
      if (iVar2 < 1) {
        return 0;
      }
    }
    if ((param_1 >> 8 & 1) != 0) {
      iVar2 = FUN_004001b0(&DAT_0439e6b0,&LAB_004065b0);
      if (iVar2 == 0) {
        return 0;
      }
      if (DAT_0439e6b4 == 0) {
        return 0;
      }
    }
    if ((param_1 >> 0x10 & 1) != 0) {
      iVar2 = FUN_004001b0(&DAT_0439e6b8,&LAB_004065f0);
      if (iVar2 == 0) {
        return 0;
      }
      if (DAT_0439e684 == '\0') {
        return 0;
      }
    }
  }
  return 1;
}


