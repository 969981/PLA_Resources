/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01fada08; name: FUN_01fada08
 */


undefined8 FUN_01fada08(long *param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  plVar3 = (long *)*param_1;
  plVar1 = (long *)param_1[1];
  if (plVar3 != plVar1) {
    do {
      if ((*plVar3 != 0) && (lVar2 = FUN_01fad4bc(*plVar3 + 8), lVar2 != 0)) goto LAB_01fada64;
      plVar3 = plVar3 + 1;
    } while (plVar1 != plVar3);
    plVar3 = plVar1;
LAB_01fada64:
    if ((long *)param_1[1] != plVar3) {
      FUN_01faa154(param_1);
      return 1;
    }
  }
  return 0;
}


