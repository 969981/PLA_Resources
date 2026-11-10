/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004dbd50; name: FUN_004dbd50
 */


undefined8 FUN_004dbd50(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_38 [8];
  
  iVar1 = FUN_00460a70(param_3,0);
  if (iVar1 < 0) {
    uVar4 = 0x371;
    uVar3 = 7;
  }
  else {
    iVar2 = FUN_004cab10(param_2,(long)iVar1,auStack_38,3);
    if ((iVar2 != 0) && (iVar2 = FUN_00460a70(param_3,auStack_38), iVar2 == iVar1)) {
      if (((*(byte *)(*(long *)(*(int **)(param_1 + 8) + 0x30) + 0x60) >> 3 & 1) == 0) &&
         (((iVar1 = **(int **)(param_1 + 8), 0x303 < iVar1 && (iVar1 != 0x10000)) &&
          (uVar3 = FUN_004e4ba0(param_1,param_2,0x1000,param_3,(long)param_4), (int)uVar3 == 0)))) {
        return uVar3;
      }
      return 1;
    }
    uVar3 = 0x44;
    uVar4 = 0x377;
  }
  FUN_004c99a0(param_1,0x50,0x1ed,uVar3,"external/openssl/ssl/statem/statem_lib.c",uVar4);
  return 0;
}


