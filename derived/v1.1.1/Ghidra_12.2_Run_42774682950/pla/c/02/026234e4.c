/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 026234e4; name: FUN_026234e4
 */


void FUN_026234e4(long *param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_02623358(param_1 + 0xb);
  if ((uVar1 & 1) != 0) {
    (**(code **)(*param_1 + 0x20))(param_1);
  }
  return;
}


