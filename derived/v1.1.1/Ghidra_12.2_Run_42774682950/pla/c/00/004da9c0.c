/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004da9c0; name: FUN_004da9c0
 */


int FUN_004da9c0(int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = &DAT_03a27e18;
  do {
    piVar2 = piVar1;
    if (*piVar2 == 0) break;
    piVar1 = piVar2 + 2;
  } while (*piVar2 != param_1);
  return piVar2[1];
}


