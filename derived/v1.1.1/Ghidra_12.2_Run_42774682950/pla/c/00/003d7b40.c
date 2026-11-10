/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003d7b40; name: FUN_003d7b40
 */


void FUN_003d7b40(long param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = *(long *)(param_1 + 0x88);
  if (lVar1 != 0) {
    plVar2 = (long *)(param_1 + 0x90);
    do {
      (**(code **)(*plVar2 + 0x20))(plVar2,param_2);
      lVar1 = lVar1 + -1;
      plVar2 = plVar2 + 3;
    } while (lVar1 != 0);
  }
  return;
}


