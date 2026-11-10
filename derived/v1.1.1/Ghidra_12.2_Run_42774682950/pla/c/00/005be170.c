/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005be170; name: FUN_005be170
 */


void FUN_005be170(undefined8 param_1,double *param_2,undefined4 *param_3)

{
  char *pcVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  ulong uVar5;
  double dVar6;
  undefined8 uVar7;
  ulong *puVar8;
  long *plVar9;
  undefined8 local_38;
  
  switch(*param_3) {
  case 0:
    *(undefined4 *)(param_2 + 2) = 1;
    *(undefined4 *)param_2 = 0;
    break;
  case 1:
    *(undefined4 *)(param_2 + 2) = 4;
    *(undefined1 *)param_2 = 1;
    break;
  case 2:
    *(undefined4 *)(param_2 + 2) = 4;
    *(undefined1 *)param_2 = 0;
    break;
  case 3:
    pcVar1 = (char *)((long)param_3 + 9);
    if ((*(byte *)(param_3 + 2) & 1) != 0) {
      pcVar1 = *(char **)(param_3 + 6);
    }
    dVar6 = strtod(pcVar1,(char **)0x0);
    *(undefined4 *)(param_2 + 2) = 2;
    *param_2 = dVar6;
    break;
  case 4:
    pcVar1 = (char *)((long)param_3 + 9);
    if ((*(byte *)(param_3 + 2) & 1) != 0) {
      pcVar1 = *(char **)(param_3 + 6);
    }
    dVar6 = (double)strlen(pcVar1);
    *(undefined4 *)(param_2 + 2) = 3;
    *param_2 = (double)pcVar1;
    param_2[1] = dVar6;
    break;
  case 5:
    if (((*(int *)(param_2 + 2) != 5) || (dVar6 = *param_2, dVar6 == 0.0)) &&
       (dVar6 = (double)FUN_0053ee00(PTR_PTR_04375008,param_1), dVar6 != 0.0)) {
      *(undefined4 *)(param_2 + 2) = 5;
      *param_2 = dVar6;
    }
    FUN_005be030(param_1,dVar6,param_3 + 8);
    return;
  case 6:
    if (((*(int *)(param_2 + 2) != 6) || (plVar9 = (long *)*param_2, plVar9 == (long *)0x0)) &&
       (plVar9 = (long *)FUN_0053ee00(PTR_PTR_04375098,param_1), plVar9 != (long *)0x0)) {
      *(undefined4 *)(param_2 + 2) = 6;
      *param_2 = (double)plVar9;
    }
    puVar4 = PTR_PTR_04375010;
    lVar3 = *(long *)(param_3 + 0x10);
    for (lVar2 = *(long *)(param_3 + 0xe); lVar2 != lVar3; lVar2 = lVar2 + 0x50) {
      local_38 = FUN_0053ee00(puVar4,param_1);
      puVar8 = (ulong *)*plVar9;
      if ((puVar8 == (ulong *)0x0) || (puVar8[1] == puVar8[2])) {
        uVar5 = FUN_0053f0c0(plVar9,&local_38,6,param_1);
        if ((uVar5 & 1) != 0) goto LAB_005be2f8;
        uVar7 = 0;
      }
      else {
        *(undefined8 *)((*puVar8 & 0xfffffffffffffff8) + puVar8[1] * 8) = local_38;
        puVar8[1] = puVar8[1] + 1;
LAB_005be2f8:
        uVar7 = local_38;
      }
      FUN_005be170(param_1,uVar7,lVar2);
    }
  }
  return;
}


