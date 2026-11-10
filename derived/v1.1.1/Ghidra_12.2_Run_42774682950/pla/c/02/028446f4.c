/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028446f4; name: FUN_028446f4
 */


void FUN_028446f4(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  size_t sVar2;
  char *pcVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  char *pcVar10;
  long *local_60;
  long *local_58 [2];
  char *local_48;
  
  pcVar10 = (char *)*param_2;
  sVar2 = strlen(pcVar10);
  pcVar3 = (char *)((long)local_58 + (-8 - (sVar2 + 0x10 & 0xfffffffffffffff0)));
  local_48 = pcVar3;
  pcVar10 = strcpy(pcVar3,pcVar10);
  pcVar10 = strrchr(pcVar10,0x2e);
  pcVar3 = strrchr(pcVar3,0x2f);
  if (pcVar3 < pcVar10) {
    *pcVar10 = '\0';
  }
  switch(param_4) {
  case 0:
    pcVar10 = (char *)*param_2;
    sVar2 = strlen(s_data___0427f778);
    iVar1 = strncmp(pcVar10,s_data___0427f778,sVar2);
    if (iVar1 == 0) break;
    FUN_02844bb8(local_58,s_data___0427f778,&local_48,param_3);
    plVar5 = local_58[0];
    local_58[0] = (long *)0x0;
    *param_1 = plVar5;
    if (plVar5 == (long *)0x0) {
      lVar7 = *(long *)PTR_DAT_04379c88;
LAB_02844b28:
      lVar8 = *(long *)PTR_PTR_04379d00;
      if (plVar5 != (long *)0x0) goto LAB_028447fc;
LAB_02844b38:
      lVar9 = 0;
    }
    else {
      lVar7 = plVar5[0xb];
      if (plVar5 == (long *)0x0) goto LAB_02844b28;
      lVar8 = plVar5[0xc];
      if (plVar5 == (long *)0x0) goto LAB_02844b38;
LAB_028447fc:
      lVar9 = plVar5[0xd];
    }
    param_1[1] = lVar7;
    param_1[2] = lVar8;
    param_1[3] = lVar9;
    param_1[4] = 0;
    if (plVar5 == (long *)0x0) {
      param_1[4] = 0;
      *(undefined4 *)(param_1 + 5) = 0;
    }
    else {
      (**(code **)(*plVar5 + 0x18))(plVar5);
      plVar6 = (long *)param_1[4];
      param_1[4] = plVar5;
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x20))();
      }
      *(undefined4 *)(param_1 + 5) = 0;
    }
    goto LAB_02844944;
  case 1:
    uVar4 = FUN_00d7be88(param_2);
    if ((uVar4 & 1) == 0) {
      FUN_02844c5c(local_58,&local_48,param_3);
      plVar5 = local_58[0];
      local_58[0] = (long *)0x0;
      *param_1 = plVar5;
      if (plVar5 == (long *)0x0) {
        lVar7 = *(long *)PTR_DAT_04379c88;
LAB_02844b50:
        lVar8 = *(long *)PTR_PTR_04379d00;
        if (plVar5 != (long *)0x0) goto LAB_0284485c;
LAB_02844b60:
        lVar9 = 0;
      }
      else {
        lVar7 = plVar5[0xb];
        if (plVar5 == (long *)0x0) goto LAB_02844b50;
        lVar8 = plVar5[0xc];
        if (plVar5 == (long *)0x0) goto LAB_02844b60;
LAB_0284485c:
        lVar9 = plVar5[0xd];
      }
      param_1[1] = lVar7;
      param_1[2] = lVar8;
      param_1[3] = lVar9;
      param_1[4] = 0;
      if (plVar5 == (long *)0x0) {
        param_1[4] = 0;
      }
      else {
        (**(code **)(*plVar5 + 0x18))(plVar5);
        plVar6 = (long *)param_1[4];
        param_1[4] = plVar5;
        if (plVar6 != (long *)0x0) {
          (**(code **)(*plVar6 + 0x20))();
        }
      }
      *(undefined4 *)(param_1 + 5) = 1;
      goto LAB_02844944;
    }
    break;
  case 2:
    uVar4 = FUN_00d7bf88(param_2);
    if ((uVar4 & 1) == 0) {
      FUN_02844bb8(local_58,&DAT_0427f787,&local_48,param_3);
      plVar5 = local_58[0];
      local_58[0] = (long *)0x0;
      *param_1 = plVar5;
      if (plVar5 == (long *)0x0) {
        lVar7 = *(long *)PTR_DAT_04379c88;
LAB_02844b78:
        lVar8 = *(long *)PTR_PTR_04379d00;
        if (plVar5 != (long *)0x0) goto LAB_028448c8;
LAB_02844b88:
        lVar9 = 0;
      }
      else {
        lVar7 = plVar5[0xb];
        if (plVar5 == (long *)0x0) goto LAB_02844b78;
        lVar8 = plVar5[0xc];
        if (plVar5 == (long *)0x0) goto LAB_02844b88;
LAB_028448c8:
        lVar9 = plVar5[0xd];
      }
      param_1[1] = lVar7;
      param_1[2] = lVar8;
      param_1[3] = lVar9;
      param_1[4] = 0;
      if (plVar5 == (long *)0x0) {
        param_1[4] = 0;
      }
      else {
        (**(code **)(*plVar5 + 0x18))(plVar5);
        plVar6 = (long *)param_1[4];
        param_1[4] = plVar5;
        if (plVar6 != (long *)0x0) {
          (**(code **)(*plVar6 + 0x20))();
        }
      }
      *(undefined4 *)(param_1 + 5) = 2;
      goto LAB_02844944;
    }
    break;
  case 4:
    uVar4 = FUN_00d7bfcc(param_2);
    if ((uVar4 & 1) != 0) break;
    pcVar3 = (char *)*param_2;
    pcVar10 = strchr(pcVar3,0x2f);
    strncpy((char *)local_58,pcVar3,(long)pcVar10 - (long)pcVar3);
    *(undefined1 *)((long)local_58 + ((long)pcVar10 - (long)pcVar3)) = 0;
    FUN_02844bb8(&local_60,local_58,&local_48,param_3);
    plVar5 = local_60;
    local_60 = (long *)0x0;
    *param_1 = plVar5;
    if (plVar5 == (long *)0x0) {
      lVar7 = *(long *)PTR_DAT_04379c88;
LAB_02844ba0:
      lVar8 = *(long *)PTR_PTR_04379d00;
      if (plVar5 != (long *)0x0) goto LAB_028449e0;
LAB_02844bb0:
      lVar9 = 0;
    }
    else {
      lVar7 = plVar5[0xb];
      if (plVar5 == (long *)0x0) goto LAB_02844ba0;
      lVar8 = plVar5[0xc];
      if (plVar5 == (long *)0x0) goto LAB_02844bb0;
LAB_028449e0:
      lVar9 = plVar5[0xd];
    }
    param_1[1] = lVar7;
    param_1[2] = lVar8;
    param_1[3] = lVar9;
    param_1[4] = 0;
    if (plVar5 == (long *)0x0) {
      param_1[4] = 0;
    }
    else {
      (**(code **)(*plVar5 + 0x18))(plVar5);
      plVar6 = (long *)param_1[4];
      param_1[4] = plVar5;
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x20))();
      }
    }
    *(undefined4 *)(param_1 + 5) = 4;
    FUN_02a8eb50(param_1);
    plVar5 = local_60;
    if (local_60 == (long *)0x0) {
      return;
    }
    goto LAB_02844954;
  }
  FUN_02844d08(local_58,&local_48,param_3);
  plVar5 = local_58[0];
  local_58[0] = (long *)0x0;
  *param_1 = plVar5;
  if (plVar5 == (long *)0x0) {
    lVar7 = *(long *)PTR_DAT_04379c88;
LAB_02844b00:
    lVar8 = *(long *)PTR_PTR_04379d00;
    if (plVar5 != (long *)0x0) goto LAB_0284492c;
LAB_02844b10:
    lVar9 = 0;
  }
  else {
    lVar7 = plVar5[0xb];
    if (plVar5 == (long *)0x0) goto LAB_02844b00;
    lVar8 = plVar5[0xc];
    if (plVar5 == (long *)0x0) goto LAB_02844b10;
LAB_0284492c:
    lVar9 = plVar5[0xd];
  }
  param_1[1] = lVar7;
  param_1[2] = lVar8;
  param_1[3] = lVar9;
  param_1[4] = 0;
  if (plVar5 == (long *)0x0) {
    param_1[4] = 0;
  }
  else {
    (**(code **)(*plVar5 + 0x18))(plVar5);
    plVar6 = (long *)param_1[4];
    param_1[4] = plVar5;
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 0x20))();
    }
  }
  *(undefined4 *)(param_1 + 5) = param_4;
LAB_02844944:
  FUN_02a8eb50(param_1);
  plVar5 = local_58[0];
  if (local_58[0] != (long *)0x0) {
LAB_02844954:
    (**(code **)(*plVar5 + 0x20))();
  }
  return;
}


