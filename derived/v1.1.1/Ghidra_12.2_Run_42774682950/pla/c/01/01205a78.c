/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01205a78; name: FUN_01205a78
 */


void FUN_01205a78(long param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_01220ce8(*(undefined8 *)(param_1 + 0x90));
  if ((uVar1 & 1) == 0) {
    return;
  }
  FUN_01206c08(param_1);
  return;
}


