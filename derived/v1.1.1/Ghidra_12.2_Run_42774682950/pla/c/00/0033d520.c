/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0033d520; name: FUN_0033d520
 */


void FUN_0033d520(undefined8 *param_1)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  
  puVar1 = PTR_LAB_04373088;
  plVar4 = (long *)*param_1;
  if (plVar4 == (long *)0x0) {
    return;
  }
  if ((long *)param_1[1] == plVar4) {
    plVar2 = plVar4;
  }
  else {
    plVar2 = (long *)param_1[1] + -1;
    lVar3 = *plVar2;
    *plVar2 = 0;
    if (lVar3 != 0) goto LAB_0033d56c;
    while (plVar4 != plVar2) {
      while( true ) {
        plVar2 = plVar2 + -1;
        lVar3 = *plVar2;
        *plVar2 = 0;
        if (lVar3 == 0) break;
LAB_0033d56c:
        FUN_0033e9f8(lVar3);
        FUN_002e2ea0(puVar1,lVar3);
        if (plVar4 == plVar2) goto LAB_0033d588;
      }
    }
LAB_0033d588:
    plVar2 = (long *)*param_1;
  }
  puVar1 = PTR_LAB_04373088;
  param_1[1] = plVar4;
  FUN_002e2ea0(puVar1,plVar2);
  return;
}


