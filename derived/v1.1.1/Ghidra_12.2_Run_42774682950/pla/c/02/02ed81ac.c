/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ed81ac; name: FUN_02ed81ac
 */


long * FUN_02ed81ac(undefined8 *param_1,long param_2,long *param_3)

{
  long *plVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  
  plVar5 = (long *)*param_1;
  uVar2 = *(uint *)(param_1 + 1);
  if ((uVar2 == 0) || (*plVar5 == param_2)) {
    plVar3 = plVar5;
  }
  else {
    lVar4 = (ulong)uVar2 * 0x10;
    plVar6 = plVar5;
    do {
      lVar4 = lVar4 + -0x10;
      if (lVar4 == 0) goto LAB_02ed822c;
      plVar3 = plVar6 + 2;
      plVar1 = plVar6 + 2;
      plVar6 = plVar3;
    } while (*plVar1 != param_2);
  }
  if (plVar3 == plVar5 + (ulong)uVar2 * 2) {
LAB_02ed822c:
    plVar3 = (long *)FUN_02edb30c();
    if (plVar3 == (long *)0x0) {
      return (long *)0x0;
    }
    *plVar3 = param_2;
  }
  plVar3[1] = *param_3;
  return plVar3 + 1;
}


