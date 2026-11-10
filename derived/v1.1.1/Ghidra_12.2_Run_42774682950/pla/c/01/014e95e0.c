/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 014e95e0; name: FUN_014e95e0
 */


void FUN_014e95e0(long param_1,int param_2)

{
  if (param_2 == 1) {
    FUN_00d42690(param_1,0,1);
    FUN_00d42438(param_1,0,1);
    *(undefined1 *)(param_1 + 0x5ab) = 1;
  }
  else if (param_2 == 0) {
    FUN_00d7331c(param_1,1);
    return;
  }
  return;
}


