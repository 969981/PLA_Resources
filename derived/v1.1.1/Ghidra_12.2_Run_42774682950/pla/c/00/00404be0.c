/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00404be0; name: FUN_00404be0
 */


long FUN_00404be0(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  if (param_1 == 0) {
    return param_2;
  }
  lVar1 = param_1;
  do {
    lVar2 = lVar1;
    lVar1 = *(long *)(lVar2 + 0x40);
  } while (*(long *)(lVar2 + 0x40) != 0);
  *(long *)(lVar2 + 0x40) = param_2;
  if (param_2 != 0) {
    *(long *)(param_2 + 0x48) = lVar2;
  }
  FUN_00404920(param_1,6,0);
  return param_1;
}


