/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0033d5c0; name: FUN_0033d5c0
 */


void FUN_0033d5c0(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  
  puVar1 = PTR_LAB_04373088;
  plVar4 = (long *)*param_1;
  if (plVar4 == (long *)0x0) {
    return;
  }
  if ((long *)param_1[1] == plVar4) {
    plVar3 = plVar4;
  }
  else {
    plVar3 = (long *)param_1[1] + -1;
    lVar2 = *plVar3;
    *plVar3 = 0;
    if (lVar2 != 0) goto LAB_0033d60c;
    while (plVar4 != plVar3) {
      while( true ) {
        plVar3 = plVar3 + -1;
        lVar2 = *plVar3;
        *plVar3 = 0;
        if (lVar2 == 0) break;
LAB_0033d60c:
        FUN_002e2ea0(puVar1);
        if (plVar4 == plVar3) goto LAB_0033d61c;
      }
    }
LAB_0033d61c:
    plVar3 = (long *)*param_1;
  }
  puVar1 = PTR_LAB_04373088;
  param_1[1] = plVar4;
  FUN_002e2ea0(puVar1,plVar3);
  return;
}


