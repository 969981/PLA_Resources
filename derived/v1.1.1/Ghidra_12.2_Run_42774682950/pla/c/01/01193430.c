/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01193430; name: FUN_01193430
 */


void FUN_01193430(long param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_00d5ea78(*(undefined8 *)(param_1 + 0x1a8));
  if ((uVar1 & 1) == 0) {
    return;
  }
  FUN_011953c8(param_1);
  return;
}


