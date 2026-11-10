/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003d79f0; name: FUN_003d79f0
 */


void FUN_003d79f0(long param_1)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = *(long *)(param_1 + 0x88);
  if (lVar1 != 0) {
    plVar2 = (long *)(param_1 + 0xa0);
    do {
      (**(code **)(*plVar2 + 0x40))(plVar2);
      lVar1 = lVar1 + -1;
      plVar2 = plVar2 + 2;
    } while (lVar1 != 0);
  }
  return;
}


