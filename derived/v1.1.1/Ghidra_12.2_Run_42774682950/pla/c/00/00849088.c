/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00849088; name: FUN_00849088
 */


void FUN_00849088(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 *param_5)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1 + (ulong)*(uint *)(param_1 + 0x768) * 0x28;
  *(undefined8 *)(lVar1 + 0x3d0) = param_2;
  *(undefined8 *)(lVar1 + 0x3d8) = param_3;
  *(undefined8 *)(lVar1 + 0x3e0) = param_4;
  uVar2 = *param_5;
  *(undefined2 *)(lVar1 + 0x3f0) = *(undefined2 *)(param_5 + 1);
  *(undefined8 *)(lVar1 + 1000) = uVar2;
  *(int *)(param_1 + 0x768) = *(int *)(param_1 + 0x768) + 1;
  return;
}


