/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01283af0; name: FUN_01283af0
 */


void FUN_01283af0(long param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_00d5ea78(*(undefined8 *)(param_1 + 0x1a8));
  if ((uVar1 & 1) == 0) {
    return;
  }
  FUN_012841f4(param_1);
  return;
}


