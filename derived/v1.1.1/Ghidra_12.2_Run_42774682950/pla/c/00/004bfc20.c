/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004bfc20; name: FUN_004bfc20
 */


undefined8 FUN_004bfc20(long *param_1)

{
  undefined8 uVar1;
  int in_w4;
  
  if (*(code **)(*param_1 + 0x28) == (code *)0x0) {
    return 0xffffffff;
  }
  uVar1 = (**(code **)(*param_1 + 0x28))();
  if (0 < (int)uVar1) {
    param_1[4] = param_1[4] + (long)(int)uVar1;
    param_1[3] = param_1[3] + (long)in_w4;
  }
  return uVar1;
}


