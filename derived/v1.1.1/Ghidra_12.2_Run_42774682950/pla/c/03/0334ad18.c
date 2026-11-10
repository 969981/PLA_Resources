/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0334ad18; name: FUN_0334ad18
 */


void FUN_0334ad18(undefined8 *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  
  *param_1 = &PTR_LAB_0435d508;
  param_1[1] = 0xffffffff;
  param_1[2] = 1;
  param_1[3] = 0;
  param_1[4] = 0x8000000000000000;
  iVar3 = *(int *)(param_2 + 0x20);
  plVar6 = *(long **)(param_2 + 0x18);
  if (iVar3 < 1) {
    if (iVar3 == 0) goto LAB_0334ada4;
    plVar4 = (long *)0x0;
  }
  else {
    plVar4 = (long *)FUN_0334add0(PTR_PTR_0434a080,iVar3,(long)param_1 + 0x24);
    param_1[3] = plVar4;
  }
  plVar2 = plVar6 + (long)iVar3 * 2;
  do {
    lVar5 = *plVar6;
    *plVar4 = lVar5;
    if (lVar5 != 0) {
      FUN_032d645c();
    }
    plVar1 = plVar6 + 1;
    plVar6 = plVar6 + 2;
    *(short *)(plVar4 + 1) = (short)*plVar1;
    plVar4 = plVar4 + 2;
  } while (plVar6 != plVar2);
LAB_0334ada4:
  *(int *)(param_1 + 4) = iVar3;
  return;
}


