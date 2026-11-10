/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0085e96c; name: FUN_0085e96c
 */


long * FUN_0085e96c(ushort *param_1,long param_2)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  
  if ((ulong)*param_1 != 0) {
    uVar2 = 0;
    plVar1 = (long *)**(long **)(param_1 + 4);
    lVar3 = *plVar1;
    while( true ) {
      if ((lVar3 != -1) && (plVar1[1] == param_2)) {
        return plVar1;
      }
      uVar2 = uVar2 + 1;
      if (*param_1 <= uVar2) break;
      plVar1 = (long *)(*(long **)(param_1 + 4))[uVar2];
      lVar3 = *plVar1;
    }
  }
  return (long *)0x0;
}


