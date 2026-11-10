/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e68e80; name: FUN_02e68e80
 */


undefined8 FUN_02e68e80(long param_1,long param_2,undefined4 param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  if (((*(int *)(param_2 + 0x14) == 0) ||
      ((*(int *)(param_2 + 8) != 0 && (*(float *)(param_2 + 0x40) < 0.0)))) ||
     (((*(byte *)(param_2 + 0x18) >> 1 & 1) != 0 && (0x3ff < *(int *)(param_2 + 0x44) - 1U)))) {
    uVar2 = 0x1f;
  }
  else {
    *(int *)(param_1 + 0x618) = *(int *)(param_2 + 0x14);
    *(undefined4 *)(param_1 + 0x61c) = *(undefined4 *)(param_2 + 0x40);
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 0x44);
    *(undefined4 *)(param_1 + 0x620) = param_3;
    *(undefined4 *)(param_1 + 0x624) = *(undefined4 *)(param_2 + 0x4c);
    iVar1 = FUN_02e6d41c(param_1 + 0x2a8,param_2,param_1);
    if (iVar1 == 1) {
      uVar2 = FUN_02e71748(param_1,param_2 + 0x20);
      return uVar2;
    }
    uVar2 = 2;
  }
  return uVar2;
}


