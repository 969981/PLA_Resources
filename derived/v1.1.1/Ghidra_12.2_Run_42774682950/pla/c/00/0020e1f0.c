/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0020e1f0; name: FUN_0020e1f0
 */


long FUN_0020e1f0(undefined8 param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar3 = param_3 * 0xc + 0xc;
  if (param_3 != 0) {
    plVar4 = (long *)(param_2 + 0x18);
    do {
      plVar1 = plVar4 + -1;
      lVar2 = *plVar4;
      plVar4 = plVar4 + 5;
      lVar3 = *plVar1 + lVar3 + lVar2;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return lVar3;
}


