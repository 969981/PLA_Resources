/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004d7020; name: FUN_004d7020
 */


undefined8 FUN_004d7020(long param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  if (*(int *)(param_1 + 200) == 0) {
LAB_004d706c:
    uVar2 = *(undefined4 *)(*(long *)(param_1 + 0x508) + 0x1e0);
  }
  else {
    if ((*(byte *)(*(long *)(*(int **)(param_1 + 8) + 0x30) + 0x60) >> 3 & 1) != 0) {
      iVar1 = FUN_004cb590(param_2,0,4);
      goto joined_r0x004d7108;
    }
    iVar1 = **(int **)(param_1 + 8);
    uVar2 = 0;
    if ((0x303 < iVar1) && (iVar1 != 0x10000)) goto LAB_004d706c;
  }
  iVar1 = FUN_004cb590(param_2,uVar2,4);
joined_r0x004d7108:
  if (iVar1 == 0) {
    uVar3 = 0xee6;
  }
  else if (((((*(byte *)(*(long *)(*(int **)(param_1 + 8) + 0x30) + 0x60) >> 3 & 1) == 0) &&
            (iVar1 = **(int **)(param_1 + 8), 0x303 < iVar1)) && (iVar1 != 0x10000)) &&
          ((iVar1 = FUN_004cb590(param_2,param_3,4), iVar1 == 0 ||
           (iVar1 = FUN_004cb8e0(param_2,param_4,8,1), iVar1 == 0)))) {
    uVar3 = 0xeee;
  }
  else {
    iVar1 = FUN_004cac70(param_2,2);
    if (iVar1 != 0) {
      return 1;
    }
    uVar3 = 0xef6;
  }
  FUN_004c99a0(param_1,0x50,0x27e,0x44,"external/openssl/ssl/statem/statem_srvr.c",uVar3);
  return 0;
}


