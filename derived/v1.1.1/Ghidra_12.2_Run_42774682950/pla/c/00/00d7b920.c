/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d7b920; name: FUN_00d7b920
 */


void FUN_00d7b920(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,int param_4)

{
  long *plVar1;
  int iVar2;
  size_t sVar3;
  char *pcVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  char *pcVar10;
  long *local_60;
  long *local_58 [2];
  char *local_48;
  
  pcVar10 = (char *)*param_2;
  sVar3 = strlen(pcVar10);
  pcVar4 = (char *)((long)local_58 + (-8 - (sVar3 + 0x10 & 0xfffffffffffffff0)));
  local_48 = pcVar4;
  pcVar10 = strcpy(pcVar4,pcVar10);
  pcVar10 = strrchr(pcVar10,0x2e);
  pcVar4 = strrchr(pcVar4,0x2f);
  if (pcVar4 < pcVar10) {
    *pcVar10 = '\0';
  }
  if (param_4 == 0) {
    pcVar10 = (char *)*param_2;
    sVar3 = strlen(s_data___0427f778);
    iVar2 = strncmp(pcVar10,s_data___0427f778,sVar3);
    if (iVar2 == 0) goto LAB_00d7b9c8;
    FUN_00d7bde4(local_58,s_data___0427f778,&local_48,param_3);
    plVar1 = local_58[0];
    local_58[0] = (long *)0x0;
    *param_1 = plVar1;
    if (plVar1 == (long *)0x0) {
      lVar7 = *(long *)PTR_DAT_04379c88;
LAB_00d7bd54:
      lVar8 = *(long *)PTR_PTR_04379d00;
      if (plVar1 != (long *)0x0) goto LAB_00d7bc4c;
LAB_00d7bd64:
      lVar9 = 0;
    }
    else {
      lVar7 = plVar1[0xb];
      if (plVar1 == (long *)0x0) goto LAB_00d7bd54;
      lVar8 = plVar1[0xc];
      if (plVar1 == (long *)0x0) goto LAB_00d7bd64;
LAB_00d7bc4c:
      lVar9 = plVar1[0xd];
    }
    param_1[1] = lVar7;
    param_1[2] = lVar8;
    param_1[3] = lVar9;
    param_1[4] = 0;
    if (plVar1 == (long *)0x0) {
      param_1[4] = 0;
      *(undefined4 *)(param_1 + 5) = 0;
    }
    else {
      (**(code **)(*plVar1 + 0x18))(plVar1);
      plVar5 = (long *)param_1[4];
      param_1[4] = plVar1;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x20))();
      }
      *(undefined4 *)(param_1 + 5) = 0;
    }
  }
  else if (param_4 == 1) {
    uVar6 = FUN_00d7be88(param_2);
    if ((uVar6 & 1) != 0) goto LAB_00d7b9c8;
    FUN_00d7bee4(local_58,&DAT_043eefc8,&local_48,param_3);
    plVar1 = local_58[0];
    local_58[0] = (long *)0x0;
    *param_1 = plVar1;
    if (plVar1 == (long *)0x0) {
      lVar7 = *(long *)PTR_DAT_04379c88;
LAB_00d7bda4:
      lVar8 = *(long *)PTR_PTR_04379d00;
      if (plVar1 != (long *)0x0) goto LAB_00d7bb80;
LAB_00d7bdb4:
      lVar9 = 0;
    }
    else {
      lVar7 = plVar1[0xb];
      if (plVar1 == (long *)0x0) goto LAB_00d7bda4;
      lVar8 = plVar1[0xc];
      if (plVar1 == (long *)0x0) goto LAB_00d7bdb4;
LAB_00d7bb80:
      lVar9 = plVar1[0xd];
    }
    param_1[1] = lVar7;
    param_1[2] = lVar8;
    param_1[3] = lVar9;
    param_1[4] = 0;
    if (plVar1 == (long *)0x0) {
      param_1[4] = 0;
    }
    else {
      (**(code **)(*plVar1 + 0x18))(plVar1);
      plVar5 = (long *)param_1[4];
      param_1[4] = plVar1;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x20))();
      }
    }
    *(undefined4 *)(param_1 + 5) = 1;
  }
  else if (param_4 == 2) {
    uVar6 = FUN_00d7bf88(param_2);
    if ((uVar6 & 1) != 0) goto LAB_00d7b9c8;
    FUN_00d7bde4(local_58,&DAT_0427f787,&local_48,param_3);
    plVar1 = local_58[0];
    local_58[0] = (long *)0x0;
    *param_1 = plVar1;
    if (plVar1 == (long *)0x0) {
      lVar7 = *(long *)PTR_DAT_04379c88;
LAB_00d7bdcc:
      lVar8 = *(long *)PTR_PTR_04379d00;
      if (plVar1 != (long *)0x0) goto LAB_00d7bbec;
LAB_00d7bddc:
      lVar9 = 0;
    }
    else {
      lVar7 = plVar1[0xb];
      if (plVar1 == (long *)0x0) goto LAB_00d7bdcc;
      lVar8 = plVar1[0xc];
      if (plVar1 == (long *)0x0) goto LAB_00d7bddc;
LAB_00d7bbec:
      lVar9 = plVar1[0xd];
    }
    param_1[1] = lVar7;
    param_1[2] = lVar8;
    param_1[3] = lVar9;
    param_1[4] = 0;
    if (plVar1 == (long *)0x0) {
      param_1[4] = 0;
    }
    else {
      (**(code **)(*plVar1 + 0x18))(plVar1);
      plVar5 = (long *)param_1[4];
      param_1[4] = plVar1;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x20))();
      }
    }
    *(undefined4 *)(param_1 + 5) = 2;
  }
  else {
    if ((param_4 == 4) && (uVar6 = FUN_00d7bfcc(param_2), (uVar6 & 1) == 0)) {
      pcVar4 = (char *)*param_2;
      pcVar10 = strchr(pcVar4,0x2f);
      strncpy((char *)local_58,pcVar4,(long)pcVar10 - (long)pcVar4);
      *(undefined1 *)((long)local_58 + ((long)pcVar10 - (long)pcVar4)) = 0;
      FUN_00d7bde4(&local_60,local_58,&local_48,param_3);
      plVar1 = local_60;
      local_60 = (long *)0x0;
      *param_1 = plVar1;
      if (plVar1 == (long *)0x0) {
        lVar7 = *(long *)PTR_DAT_04379c88;
LAB_00d7bd7c:
        lVar8 = *(long *)PTR_PTR_04379d00;
        if (plVar1 != (long *)0x0) goto LAB_00d7bb04;
LAB_00d7bd8c:
        lVar9 = 0;
      }
      else {
        lVar7 = plVar1[0xb];
        if (plVar1 == (long *)0x0) goto LAB_00d7bd7c;
        lVar8 = plVar1[0xc];
        if (plVar1 == (long *)0x0) goto LAB_00d7bd8c;
LAB_00d7bb04:
        lVar9 = plVar1[0xd];
      }
      param_1[1] = lVar7;
      param_1[2] = lVar8;
      param_1[3] = lVar9;
      param_1[4] = 0;
      if (plVar1 == (long *)0x0) {
        param_1[4] = 0;
      }
      else {
        (**(code **)(*plVar1 + 0x18))(plVar1);
        plVar5 = (long *)param_1[4];
        param_1[4] = plVar1;
        if (plVar5 != (long *)0x0) {
          (**(code **)(*plVar5 + 0x20))();
        }
      }
      *(undefined4 *)(param_1 + 5) = 4;
      FUN_02a8eb50(param_1);
      plVar1 = local_60;
      goto joined_r0x00d7bb2c;
    }
LAB_00d7b9c8:
    FUN_00d7c014(local_58,&local_48,param_3);
    plVar1 = local_58[0];
    local_58[0] = (long *)0x0;
    *param_1 = plVar1;
    if (plVar1 == (long *)0x0) {
      lVar7 = *(long *)PTR_DAT_04379c88;
LAB_00d7bd2c:
      lVar8 = *(long *)PTR_PTR_04379d00;
      if (plVar1 != (long *)0x0) goto LAB_00d7ba00;
LAB_00d7bd3c:
      lVar9 = 0;
    }
    else {
      lVar7 = plVar1[0xb];
      if (plVar1 == (long *)0x0) goto LAB_00d7bd2c;
      lVar8 = plVar1[0xc];
      if (plVar1 == (long *)0x0) goto LAB_00d7bd3c;
LAB_00d7ba00:
      lVar9 = plVar1[0xd];
    }
    param_1[1] = lVar7;
    param_1[2] = lVar8;
    param_1[3] = lVar9;
    param_1[4] = 0;
    if (plVar1 == (long *)0x0) {
      param_1[4] = 0;
    }
    else {
      (**(code **)(*plVar1 + 0x18))(plVar1);
      plVar5 = (long *)param_1[4];
      param_1[4] = plVar1;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x20))();
      }
    }
    *(int *)(param_1 + 5) = param_4;
  }
  FUN_02a8eb50(param_1);
  plVar1 = local_58[0];
joined_r0x00d7bb2c:
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x20))();
  }
  return;
}


