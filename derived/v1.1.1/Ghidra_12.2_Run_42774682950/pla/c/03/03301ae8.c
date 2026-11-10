/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03301ae8; name: FUN_03301ae8
 */


void FUN_03301ae8(undefined8 *param_1,ulong *param_2)

{
  ulong uVar1;
  
  FUN_032e0b78();
  *param_1 = &PTR_LAB_0434df80;
  uVar1 = *param_2;
  param_1[2] = uVar1;
  if ((uVar1 & 1) != 0) {
    FUN_032e0c28(uVar1 & 0xfffffffffffffffe);
  }
  param_1[3] = param_2[1];
  *(undefined4 *)(param_1 + 1) = 0;
  *param_1 = &PTR_LAB_0434dec8;
  return;
}


