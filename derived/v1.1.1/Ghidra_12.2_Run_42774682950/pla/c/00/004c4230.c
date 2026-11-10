/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004c4230; name: FUN_004c4230
 */


undefined8 FUN_004c4230(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  
  lVar3 = FUN_004bdd30(*param_1,param_1[3],param_1 + 1,param_1 + 2,param_2,param_1[0x28]);
  if (lVar3 == 0) {
    return 0;
  }
  iVar1 = FUN_00407950();
  if (0 < iVar1) {
    iVar5 = 0;
    iVar1 = 0;
    do {
      lVar4 = FUN_00407970(lVar3,iVar1);
      if (*(int *)(lVar4 + 0x2c) < 0x304) {
        iVar5 = iVar5 + 1;
      }
      iVar1 = iVar1 + 1;
      iVar2 = FUN_00407950(lVar3);
    } while (iVar1 < iVar2);
    if (iVar5 != 0) {
      return 1;
    }
  }
  FUN_004014b0(0x14,0x10d,0xb9,"external/openssl/ssl/ssl_lib.c",0x9f5);
  return 0;
}


