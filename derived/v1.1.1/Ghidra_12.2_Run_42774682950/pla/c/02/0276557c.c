/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0276557c; name: FUN_0276557c
 */


long * FUN_0276557c(long param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  plVar3 = (long *)(param_1 + 8);
  if ((long *)*plVar3 == (long *)0x0) {
    *param_2 = plVar3;
    return plVar3;
  }
  plVar4 = (long *)(param_1 + 8);
  plVar3 = (long *)*plVar3;
  do {
    iVar1 = FUN_02765678(param_3,plVar3 + 4);
    if (iVar1 < 0) {
      plVar2 = (long *)*plVar3;
      if (plVar2 == (long *)0x0) {
        *param_2 = plVar3;
        return plVar3;
      }
      plVar4 = plVar3;
    }
    else {
      iVar1 = FUN_02765678(plVar3 + 4,param_3);
      if (-1 < iVar1) {
LAB_027655f4:
        *param_2 = plVar3;
        return plVar4;
      }
      plVar4 = plVar3 + 1;
      plVar2 = (long *)*plVar4;
      if (plVar2 == (long *)0x0) goto LAB_027655f4;
    }
    plVar3 = plVar2;
  } while( true );
}


