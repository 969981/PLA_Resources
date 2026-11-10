/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 014b82a8; name: FUN_014b82a8
 */


void FUN_014b82a8(long param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_0142f970(*(undefined8 *)(param_1 + 0x98));
  if ((uVar1 & 1) == 0) {
    return;
  }
  FUN_014b8330(param_1);
  return;
}


