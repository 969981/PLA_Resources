/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010c513c; name: FUN_010c513c
 */


void FUN_010c513c(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined4 param_4)

{
  size_t sVar1;
  char *pcVar2;
  ulong uVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  char *pcVar9;
  long *local_60;
  long *local_58 [2];
  char *local_48;
  
  pcVar9 = (char *)*param_2;
  sVar1 = strlen(pcVar9);
  pcVar2 = (char *)((long)local_58 + (-8 - (sVar1 + 0x10 & 0xfffffffffffffff0)));
  local_48 = pcVar2;
  pcVar9 = strcpy(pcVar2,pcVar9);
  pcVar9 = strrchr(pcVar9,0x2e);
  pcVar2 = strrchr(pcVar2,0x2f);
  if (pcVar2 < pcVar9) {
    *pcVar9 = '\0';
  }
  switch(param_4) {
  case 0:
    uVar3 = FUN_00d71f94(param_2);
    if ((uVar3 & 1) != 0) break;
    FUN_010c55ec(local_58,s_data___0427f778,&local_48,param_3);
    plVar4 = local_58[0];
    local_58[0] = (long *)0x0;
    *param_1 = plVar4;
    if (plVar4 == (long *)0x0) {
      lVar6 = *(long *)PTR_DAT_04379c88;
LAB_010c555c:
      lVar7 = *(long *)PTR_PTR_04379d00;
      if (plVar4 != (long *)0x0) goto LAB_010c5228;
LAB_010c556c:
      lVar8 = 0;
    }
    else {
      lVar6 = plVar4[0xb];
      if (plVar4 == (long *)0x0) goto LAB_010c555c;
      lVar7 = plVar4[0xc];
      if (plVar4 == (long *)0x0) goto LAB_010c556c;
LAB_010c5228:
      lVar8 = plVar4[0xd];
    }
    param_1[1] = lVar6;
    param_1[2] = lVar7;
    param_1[3] = lVar8;
    param_1[4] = 0;
    if (plVar4 == (long *)0x0) {
      param_1[4] = 0;
      *(undefined4 *)(param_1 + 5) = 0;
    }
    else {
      (**(code **)(*plVar4 + 0x18))(plVar4);
      plVar5 = (long *)param_1[4];
      param_1[4] = plVar4;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x20))();
      }
      *(undefined4 *)(param_1 + 5) = 0;
    }
    goto LAB_010c5378;
  case 1:
    uVar3 = FUN_010c5690(param_2);
    if ((uVar3 & 1) == 0) {
      FUN_010c56ec(local_58,&DAT_043eefc8,&local_48,param_3);
      plVar4 = local_58[0];
      local_58[0] = (long *)0x0;
      *param_1 = plVar4;
      if (plVar4 == (long *)0x0) {
        lVar6 = *(long *)PTR_DAT_04379c88;
LAB_010c5584:
        lVar7 = *(long *)PTR_PTR_04379d00;
        if (plVar4 != (long *)0x0) goto LAB_010c5290;
LAB_010c5594:
        lVar8 = 0;
      }
      else {
        lVar6 = plVar4[0xb];
        if (plVar4 == (long *)0x0) goto LAB_010c5584;
        lVar7 = plVar4[0xc];
        if (plVar4 == (long *)0x0) goto LAB_010c5594;
LAB_010c5290:
        lVar8 = plVar4[0xd];
      }
      param_1[1] = lVar6;
      param_1[2] = lVar7;
      param_1[3] = lVar8;
      param_1[4] = 0;
      if (plVar4 == (long *)0x0) {
        param_1[4] = 0;
      }
      else {
        (**(code **)(*plVar4 + 0x18))(plVar4);
        plVar5 = (long *)param_1[4];
        param_1[4] = plVar4;
        if (plVar5 != (long *)0x0) {
          (**(code **)(*plVar5 + 0x20))();
        }
      }
      *(undefined4 *)(param_1 + 5) = 1;
      goto LAB_010c5378;
    }
    break;
  case 2:
    uVar3 = FUN_010c5790(param_2);
    if ((uVar3 & 1) == 0) {
      FUN_010c55ec(local_58,&DAT_0427f787,&local_48,param_3);
      plVar4 = local_58[0];
      local_58[0] = (long *)0x0;
      *param_1 = plVar4;
      if (plVar4 == (long *)0x0) {
        lVar6 = *(long *)PTR_DAT_04379c88;
LAB_010c55ac:
        lVar7 = *(long *)PTR_PTR_04379d00;
        if (plVar4 != (long *)0x0) goto LAB_010c52fc;
LAB_010c55bc:
        lVar8 = 0;
      }
      else {
        lVar6 = plVar4[0xb];
        if (plVar4 == (long *)0x0) goto LAB_010c55ac;
        lVar7 = plVar4[0xc];
        if (plVar4 == (long *)0x0) goto LAB_010c55bc;
LAB_010c52fc:
        lVar8 = plVar4[0xd];
      }
      param_1[1] = lVar6;
      param_1[2] = lVar7;
      param_1[3] = lVar8;
      param_1[4] = 0;
      if (plVar4 == (long *)0x0) {
        param_1[4] = 0;
      }
      else {
        (**(code **)(*plVar4 + 0x18))(plVar4);
        plVar5 = (long *)param_1[4];
        param_1[4] = plVar4;
        if (plVar5 != (long *)0x0) {
          (**(code **)(*plVar5 + 0x20))();
        }
      }
      *(undefined4 *)(param_1 + 5) = 2;
      goto LAB_010c5378;
    }
    break;
  case 4:
    uVar3 = FUN_010c57d4(param_2);
    if ((uVar3 & 1) != 0) break;
    pcVar2 = (char *)*param_2;
    pcVar9 = strchr(pcVar2,0x2f);
    strncpy((char *)local_58,pcVar2,(long)pcVar9 - (long)pcVar2);
    *(undefined1 *)((long)local_58 + ((long)pcVar9 - (long)pcVar2)) = 0;
    FUN_010c55ec(&local_60,local_58,&local_48,param_3);
    plVar4 = local_60;
    local_60 = (long *)0x0;
    *param_1 = plVar4;
    if (plVar4 == (long *)0x0) {
      lVar6 = *(long *)PTR_DAT_04379c88;
LAB_010c55d4:
      lVar7 = *(long *)PTR_PTR_04379d00;
      if (plVar4 != (long *)0x0) goto LAB_010c5414;
LAB_010c55e4:
      lVar8 = 0;
    }
    else {
      lVar6 = plVar4[0xb];
      if (plVar4 == (long *)0x0) goto LAB_010c55d4;
      lVar7 = plVar4[0xc];
      if (plVar4 == (long *)0x0) goto LAB_010c55e4;
LAB_010c5414:
      lVar8 = plVar4[0xd];
    }
    param_1[1] = lVar6;
    param_1[2] = lVar7;
    param_1[3] = lVar8;
    param_1[4] = 0;
    if (plVar4 == (long *)0x0) {
      param_1[4] = 0;
    }
    else {
      (**(code **)(*plVar4 + 0x18))(plVar4);
      plVar5 = (long *)param_1[4];
      param_1[4] = plVar4;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x20))();
      }
    }
    *(undefined4 *)(param_1 + 5) = 4;
    FUN_02a8eb50(param_1);
    plVar4 = local_60;
    if (local_60 == (long *)0x0) {
      return;
    }
    goto LAB_010c5388;
  }
  FUN_010c581c(local_58,&local_48,param_3);
  plVar4 = local_58[0];
  local_58[0] = (long *)0x0;
  *param_1 = plVar4;
  if (plVar4 == (long *)0x0) {
    lVar6 = *(long *)PTR_DAT_04379c88;
LAB_010c5534:
    lVar7 = *(long *)PTR_PTR_04379d00;
    if (plVar4 != (long *)0x0) goto LAB_010c5360;
LAB_010c5544:
    lVar8 = 0;
  }
  else {
    lVar6 = plVar4[0xb];
    if (plVar4 == (long *)0x0) goto LAB_010c5534;
    lVar7 = plVar4[0xc];
    if (plVar4 == (long *)0x0) goto LAB_010c5544;
LAB_010c5360:
    lVar8 = plVar4[0xd];
  }
  param_1[1] = lVar6;
  param_1[2] = lVar7;
  param_1[3] = lVar8;
  param_1[4] = 0;
  if (plVar4 == (long *)0x0) {
    param_1[4] = 0;
  }
  else {
    (**(code **)(*plVar4 + 0x18))(plVar4);
    plVar5 = (long *)param_1[4];
    param_1[4] = plVar4;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x20))();
    }
  }
  *(undefined4 *)(param_1 + 5) = param_4;
LAB_010c5378:
  FUN_02a8eb50(param_1);
  plVar4 = local_58[0];
  if (local_58[0] != (long *)0x0) {
LAB_010c5388:
    (**(code **)(*plVar4 + 0x20))();
  }
  return;
}


