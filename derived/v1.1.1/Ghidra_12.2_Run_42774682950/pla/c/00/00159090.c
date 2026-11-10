/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00159090; name: FUN_00159090
 */


void FUN_00159090(long param_1,long param_2,uint param_3,undefined4 param_4)

{
  uint uVar1;
  long lVar2;
  
  lVar2 = 0;
  if (param_2 != 0 && param_3 != 0) {
    lVar2 = param_2;
  }
  if ((*(byte *)(*(long *)(param_1 + 0x20) + 0x42) >> 1 & 1) != 0) {
    *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28);
  }
  *(long *)(param_1 + 0xa8) = lVar2;
  uVar1 = 0;
  if (param_2 != 0 && param_3 != 0) {
    uVar1 = param_3 & 0xff;
  }
  *(undefined4 *)(param_1 + 0xbc) = param_4;
  *(undefined4 *)(param_1 + 0xc0) = param_4;
  *(uint *)(param_1 + 200) = uVar1;
  return;
}


