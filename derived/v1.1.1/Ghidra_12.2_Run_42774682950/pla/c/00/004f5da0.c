/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004f5da0; name: FUN_004f5da0
 */


void FUN_004f5da0(long *param_1)

{
  if ((param_1 != (long *)0x0) && (*param_1 != 0)) {
    *param_1 = *(long *)(*param_1 + 0x10);
  }
  return;
}


