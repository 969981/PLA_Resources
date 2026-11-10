/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02eee368; name: FUN_02eee368
 */


undefined8 FUN_02eee368(long param_1,int param_2)

{
  int *piVar1;
  long lVar2;
  
  if (*(uint *)(param_1 + 0x10) != 0) {
    lVar2 = (ulong)*(uint *)(param_1 + 0x10) << 3;
    piVar1 = *(int **)(param_1 + 8);
    do {
      if (*piVar1 == param_2) {
        return 1;
      }
      lVar2 = lVar2 + -8;
      piVar1 = piVar1 + 2;
    } while (lVar2 != 0);
  }
  return 0;
}


