/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0120a65c; name: FUN_0120a65c
 */


void FUN_0120a65c(long param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_01220ce8(*(undefined8 *)(param_1 + 0x90));
  if ((uVar1 & 1) == 0) {
    return;
  }
  FUN_0120b9f0(param_1);
  return;
}


