/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004ca860; name: FUN_004ca860
 */


undefined8 FUN_004ca860(long param_1)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0x28) = 2;
  iVar1 = FUN_00404920(*(undefined8 *)(param_1 + 0x18),0xb,0,0);
  if (iVar1 < 1) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0x28) = 1;
  return 1;
}


