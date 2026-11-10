/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00cd4a08; name: FUN_00cd4a08
 */


int FUN_00cd4a08(long *param_1)

{
  int iVar1;
  
  iVar1 = (uint)(*param_1 == 0x701b88277b0a01ea) << 1;
  if (*param_1 == 0x2753d3eccec82550) {
    iVar1 = 1;
  }
  return iVar1;
}


