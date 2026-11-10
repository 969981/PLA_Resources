/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b602fc; name: FUN_02b602fc
 */


void FUN_02b602fc(undefined8 *param_1,undefined8 *param_2,undefined4 param_3)

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
  char acStack_60 [8];
  long *local_58;
  long *local_50 [2];
  char *local_38;
  
  pcVar9 = (char *)*param_2;
  sVar1 = strlen(pcVar9);
  pcVar2 = acStack_60 + -(sVar1 + 0x10 & 0xfffffffffffffff0);
  local_38 = pcVar2;
  pcVar9 = strcpy(pcVar2,pcVar9);
  pcVar9 = strrchr(pcVar9,0x2e);
  pcVar2 = strrchr(pcVar2,0x2f);
  if (pcVar2 < pcVar9) {
    *pcVar9 = '\0';
  }
  switch(param_3) {
  case 0:
    uVar3 = FUN_00d71f94(param_2);
    if ((uVar3 & 1) != 0) break;
    FUN_02b6078c(local_50,s_data___0427f778,&local_38);
    plVar4 = local_50[0];
    local_50[0] = (long *)0x0;
    *param_1 = plVar4;
    if (plVar4 == (long *)0x0) {
      lVar6 = *(long *)PTR_DAT_04379c88;
LAB_02b606fc:
      lVar7 = *(long *)PTR_PTR_04379d00;
      if (plVar4 != (long *)0x0) goto LAB_02b603e0;
LAB_02b6070c:
      lVar8 = 0;
    }
    else {
      lVar6 = plVar4[0xb];
      if (plVar4 == (long *)0x0) goto LAB_02b606fc;
      lVar7 = plVar4[0xc];
      if (plVar4 == (long *)0x0) goto LAB_02b6070c;
LAB_02b603e0:
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
    goto LAB_02b6051c;
  case 1:
    uVar3 = FUN_010c5690(param_2);
    if ((uVar3 & 1) == 0) {
      FUN_02b6082c(local_50,&local_38);
      plVar4 = local_50[0];
      local_50[0] = (long *)0x0;
      *param_1 = plVar4;
      if (plVar4 == (long *)0x0) {
        lVar6 = *(long *)PTR_DAT_04379c88;
LAB_02b60724:
        lVar7 = *(long *)PTR_PTR_04379d00;
        if (plVar4 != (long *)0x0) goto LAB_02b6043c;
LAB_02b60734:
        lVar8 = 0;
      }
      else {
        lVar6 = plVar4[0xb];
        if (plVar4 == (long *)0x0) goto LAB_02b60724;
        lVar7 = plVar4[0xc];
        if (plVar4 == (long *)0x0) goto LAB_02b60734;
LAB_02b6043c:
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
      goto LAB_02b6051c;
    }
    break;
  case 2:
    uVar3 = FUN_010c5790(param_2);
    if ((uVar3 & 1) == 0) {
      FUN_02b6078c(local_50,&DAT_0427f787,&local_38);
      plVar4 = local_50[0];
      local_50[0] = (long *)0x0;
      *param_1 = plVar4;
      if (plVar4 == (long *)0x0) {
        lVar6 = *(long *)PTR_DAT_04379c88;
LAB_02b6074c:
        lVar7 = *(long *)PTR_PTR_04379d00;
        if (plVar4 != (long *)0x0) goto LAB_02b604a4;
LAB_02b6075c:
        lVar8 = 0;
      }
      else {
        lVar6 = plVar4[0xb];
        if (plVar4 == (long *)0x0) goto LAB_02b6074c;
        lVar7 = plVar4[0xc];
        if (plVar4 == (long *)0x0) goto LAB_02b6075c;
LAB_02b604a4:
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
      goto LAB_02b6051c;
    }
    break;
  case 4:
    uVar3 = FUN_010c57d4(param_2);
    if ((uVar3 & 1) != 0) break;
    pcVar2 = (char *)*param_2;
    pcVar9 = strchr(pcVar2,0x2f);
    strncpy((char *)local_50,pcVar2,(long)pcVar9 - (long)pcVar2);
    *(undefined1 *)((long)local_50 + ((long)pcVar9 - (long)pcVar2)) = 0;
    FUN_02b6078c(&local_58,local_50,&local_38);
    plVar4 = local_58;
    local_58 = (long *)0x0;
    *param_1 = plVar4;
    if (plVar4 == (long *)0x0) {
      lVar6 = *(long *)PTR_DAT_04379c88;
LAB_02b60774:
      lVar7 = *(long *)PTR_PTR_04379d00;
      if (plVar4 != (long *)0x0) goto LAB_02b605b4;
LAB_02b60784:
      lVar8 = 0;
    }
    else {
      lVar6 = plVar4[0xb];
      if (plVar4 == (long *)0x0) goto LAB_02b60774;
      lVar7 = plVar4[0xc];
      if (plVar4 == (long *)0x0) goto LAB_02b60784;
LAB_02b605b4:
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
    plVar4 = local_58;
    if (local_58 == (long *)0x0) {
      return;
    }
    goto LAB_02b6052c;
  }
  FUN_02b608d4(local_50,&local_38);
  plVar4 = local_50[0];
  local_50[0] = (long *)0x0;
  *param_1 = plVar4;
  if (plVar4 == (long *)0x0) {
    lVar6 = *(long *)PTR_DAT_04379c88;
LAB_02b606d4:
    lVar7 = *(long *)PTR_PTR_04379d00;
    if (plVar4 != (long *)0x0) goto LAB_02b60504;
LAB_02b606e4:
    lVar8 = 0;
  }
  else {
    lVar6 = plVar4[0xb];
    if (plVar4 == (long *)0x0) goto LAB_02b606d4;
    lVar7 = plVar4[0xc];
    if (plVar4 == (long *)0x0) goto LAB_02b606e4;
LAB_02b60504:
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
  *(undefined4 *)(param_1 + 5) = param_3;
LAB_02b6051c:
  FUN_02a8eb50(param_1);
  plVar4 = local_50[0];
  if (local_50[0] != (long *)0x0) {
LAB_02b6052c:
    (**(code **)(*plVar4 + 0x20))();
  }
  return;
}


