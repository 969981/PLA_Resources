/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00405f70; name: FUN_00405f70
 */


undefined8 FUN_00405f70(uint param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  
  if (DAT_0439e664 == '\x01') {
    FUN_004014b0(0xf,0x74,0x46,"external/openssl/crypto/init.c",0x272);
    return 0;
  }
  iVar1 = FUN_004001b0(&DAT_0439e688,&LAB_00406420);
  uVar2 = 0;
  if ((iVar1 != 0) && (DAT_0439e68c != 0)) {
    iVar1 = FUN_004001b0(&DAT_0439e690,&LAB_004064b0);
    uVar2 = 0;
    if ((iVar1 != 0) && (DAT_0439e674 != '\0')) {
      iVar1 = FUN_004001b0(&DAT_0439e694,&LAB_004064c0);
      uVar2 = 0;
      if ((iVar1 != 0) && (DAT_0439e678 != '\0')) {
        puVar3 = (undefined4 *)FUN_00405540(&DAT_04157c40);
        if (puVar3 == (undefined4 *)0x0) {
          puVar3 = (undefined4 *)FUN_004002a0(0xc,"external/openssl/crypto/init.c",0x42);
          if (puVar3 == (undefined4 *)0x0) {
            return 0;
          }
          iVar1 = FUN_00405560(&DAT_04157c40,puVar3);
          if (iVar1 == 0) {
            FUN_00400420(puVar3,"external/openssl/crypto/init.c",0x44);
            return 0;
          }
        }
        if ((param_1 & 1) != 0) {
          *puVar3 = 1;
        }
        if ((param_1 >> 1 & 1) != 0) {
          puVar3[1] = 1;
        }
        uVar2 = 1;
        if ((param_1 >> 2 & 1) != 0) {
          puVar3[2] = 1;
          return 1;
        }
      }
    }
  }
  return uVar2;
}


