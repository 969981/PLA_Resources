/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b92bec; name: FUN_02b92bec
 */


void FUN_02b92bec(long *param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  
  plVar2 = (long *)*param_2;
  *(undefined4 *)(param_2 + 3) = 0;
  while( true ) {
    if ((plVar2 == param_1) ||
       (plVar1 = (long *)*plVar2, plVar1 == param_1 || *(int *)(plVar2 + 3) == 1))
    goto LAB_02b92d34;
    lVar5 = plVar1[1];
    *(undefined4 *)(plVar1 + 3) = 0;
    lVar8 = lVar5;
    if (plVar2 == (long *)lVar5) {
      lVar8 = plVar1[2];
    }
    if ((lVar8 == 0) || (*(int *)(lVar8 + 0x18) != 0)) break;
    *(undefined4 *)(lVar8 + 0x18) = 1;
    *(undefined4 *)(plVar2 + 3) = 1;
    plVar2 = (long *)*plVar1;
    param_2 = plVar1;
  }
  plVar4 = (long *)plVar2[1];
  if (plVar2 == (long *)lVar5) {
    if (plVar4 != param_2) {
      plVar4 = (long *)param_2[1];
      plVar2[2] = (long)plVar4;
      if (plVar4 != (long *)0x0) {
        *plVar4 = (long)plVar2;
      }
      param_2[1] = (long)plVar2;
      *plVar2 = (long)param_2;
      plVar2 = param_2;
    }
    plVar3 = (long *)*plVar1;
    plVar4 = (long *)plVar3[1];
    puVar7 = (undefined8 *)plVar2[2];
    plVar1[1] = (long)puVar7;
    if (puVar7 != (undefined8 *)0x0) {
      *puVar7 = plVar1;
    }
    plVar2[2] = (long)plVar1;
    *plVar1 = (long)plVar2;
    *plVar2 = (long)plVar3;
    if (plVar3 == param_1) goto LAB_02b92d28;
    if (plVar4 != plVar1) goto LAB_02b92ce0;
LAB_02b92d20:
    plVar3[1] = (long)plVar2;
  }
  else {
    if (plVar4 == param_2) {
      plVar4 = (long *)param_2[2];
      plVar2[1] = (long)plVar4;
      if (plVar4 != (long *)0x0) {
        *plVar4 = (long)plVar2;
      }
      param_2[2] = (long)plVar2;
      *plVar2 = (long)param_2;
      plVar4 = (long *)param_2[1];
      plVar2 = param_2;
    }
    else {
    }
    plVar3 = (long *)*plVar1;
    plVar6 = (long *)plVar3[1];
    plVar1[2] = (long)plVar4;
    if (plVar4 != (long *)0x0) {
      *plVar4 = (long)plVar1;
    }
    plVar2[1] = (long)plVar1;
    *plVar1 = (long)plVar2;
    *plVar2 = (long)plVar3;
    if (plVar3 == param_1) {
LAB_02b92d28:
      *param_1 = (long)plVar2;
    }
    else {
      if (plVar6 == plVar1) goto LAB_02b92d20;
LAB_02b92ce0:
      plVar3[2] = (long)plVar2;
    }
  }
  *(undefined4 *)(plVar2 + 3) = 1;
LAB_02b92d34:
  *(undefined4 *)(*param_1 + 0x18) = 1;
  return;
}


