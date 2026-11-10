/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00404c40; name: FUN_00404c40
 */


long FUN_00404c40(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  
  if (param_1 == 0) {
    return 0;
  }
  plVar3 = (long *)(param_1 + 0x40);
  lVar2 = *plVar3;
  FUN_00404920(param_1,7,0,param_1);
  lVar1 = *(long *)(param_1 + 0x48);
  if (lVar1 != 0) {
    *(long *)(lVar1 + 0x40) = *plVar3;
  }
  if (*plVar3 != 0) {
    *(long *)(*plVar3 + 0x48) = lVar1;
  }
  *plVar3 = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  return lVar2;
}


