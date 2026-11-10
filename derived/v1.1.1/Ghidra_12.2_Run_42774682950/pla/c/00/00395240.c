/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00395240; name: FUN_00395240
 */


void FUN_00395240(long *param_1,long *param_2,long param_3,long param_4)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  int *piVar4;
  int iVar5;
  undefined8 *puVar6;
  
  plVar3 = param_2;
  if ((param_3 == 0) && (param_4 != 0)) {
    FUN_0038cc98(param_4,param_2);
  }
  else if (param_4 != param_3) {
    plVar3 = (long *)(**(code **)(*param_2 + 0x20))(param_2,param_4);
    FUN_00390ae8(param_2,plVar3);
    if (param_3 == 0) {
      (**(code **)*param_2)(param_2);
      FUN_002e2ea0(PTR_LAB_04373088,param_2);
    }
  }
  piVar4 = (int *)param_1[2];
  if (piVar4 == (int *)0x0) {
    iVar5 = *(int *)((long)param_1 + 0xc);
LAB_00395354:
    FUN_0032bcac(param_1,iVar5 + 1);
LAB_00395360:
    piVar4 = (int *)param_1[2];
    iVar1 = *piVar4;
  }
  else {
    iVar5 = (int)param_1[1];
    if (iVar5 == *(int *)((long)param_1 + 0xc)) goto LAB_00395354;
    iVar1 = *piVar4;
    if (iVar1 == *(int *)((long)param_1 + 0xc)) {
      puVar6 = *(undefined8 **)(piVar4 + (long)iVar5 * 2 + 2);
      if (puVar6 != (undefined8 *)0x0 && *param_1 == 0) {
        (**(code **)*puVar6)(puVar6);
        FUN_002e2ea0(PTR_LAB_04373088,puVar6);
        piVar4 = (int *)param_1[2];
      }
      goto LAB_00395370;
    }
    if (iVar5 < iVar1) {
      *(undefined8 *)(piVar4 + (long)iVar1 * 2 + 2) = *(undefined8 *)(piVar4 + (long)iVar5 * 2 + 2);
      goto LAB_00395360;
    }
  }
  *piVar4 = iVar1 + 1;
LAB_00395370:
  lVar2 = param_1[1];
  *(int *)(param_1 + 1) = (int)lVar2 + 1;
  *(long **)(piVar4 + (long)(int)lVar2 * 2 + 2) = plVar3;
  return;
}


