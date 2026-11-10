/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004bcbe0; name: FUN_004bcbe0
 */


undefined8 FUN_004bcbe0(ulong param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  if (DAT_0439e9ec == '\x01') {
    if ((DAT_0439e9e8 & 1) == 0) {
      DAT_0439e9e8 = 1;
      FUN_004014b0(0x14,0x156,0x46,"external/openssl/ssl/ssl_init.c",0xdb);
      return 0;
    }
    return 0;
  }
  uVar2 = FUN_004060f0(param_1 | 0xc);
  if ((int)uVar2 != 0) {
    iVar1 = FUN_004001b0(&DAT_0439e9fc,&LAB_004bcd10);
    uVar2 = 0;
    if ((iVar1 != 0) && (DAT_0439ea00 != 0)) {
      if (((uint)param_1 >> 0x14 & 1) != 0) {
        iVar1 = FUN_004001b0(&DAT_0439ea04,&LAB_004bce80);
        if (iVar1 == 0) {
          return 0;
        }
        if (DAT_0439e9f0 == '\0') {
          return 0;
        }
      }
      if (((uint)param_1 >> 0x15 & 1) != 0) {
        iVar1 = FUN_004001b0(&DAT_0439ea04,&LAB_004bce90);
        if (iVar1 == 0) {
          return 0;
        }
        if (DAT_0439e9f0 == '\0') {
          return 0;
        }
      }
      FUN_004001b0(&DAT_0439ea08,&LAB_004bcec0);
      uVar2 = 1;
    }
  }
  return uVar2;
}


