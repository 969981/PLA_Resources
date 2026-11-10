/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 033051cc; name: FUN_033051cc
 */


void FUN_033051cc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  
  FUN_032e0b78();
  *param_1 = &PTR_LAB_0434e400;
  uVar1 = param_2[1];
  param_1[2] = *param_2;
  param_1[3] = uVar1;
  uVar2 = param_2[2];
  param_1[4] = uVar2;
  if ((uVar2 & 1) != 0) {
    FUN_032e0c28(uVar2 & 0xfffffffffffffffe);
  }
  param_1[5] = param_2[3];
  *(undefined4 *)(param_1 + 1) = 0;
  *param_1 = &PTR_LAB_0434e348;
  return;
}


