/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008c3d74; name: FUN_008c3d74
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_008c3d74(long *param_1,long param_2,long param_3,undefined8 param_4)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 local_38;
  undefined1 auStack_28 [8];
  
  local_38 = param_4;
  lVar6 = FUN_008c43ec(auStack_28,param_4,&local_38);
  *param_1 = lVar6;
  if (lVar6 == 0) {
    param_1 = (long *)0x0;
    lVar6 = *(long *)(param_3 + 0x90);
  }
  else {
    piVar1 = (int *)(lVar6 + 0x50);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    param_1 = (long *)*param_1;
    lVar6 = *(long *)(param_3 + 0x90);
  }
  if (param_2 == 0) {
    if (lVar6 == 0) {
      lVar6 = *(long *)(param_3 + 0xf0);
    }
    else {
      (**(code **)(*param_1 + 0x28))(param_1);
      lVar6 = *(long *)(param_3 + 0xf0);
    }
    if (lVar6 == 0) {
      lVar6 = *(long *)(param_3 + 0x150);
    }
    else {
      (**(code **)(*param_1 + 0x28))(param_1);
      lVar6 = *(long *)(param_3 + 0x150);
    }
    if (lVar6 == 0) {
      lVar6 = *(long *)(param_3 + 0x1b0);
    }
    else {
      (**(code **)(*param_1 + 0x28))(param_1);
      lVar6 = *(long *)(param_3 + 0x1b0);
    }
    if (lVar6 == 0) {
      lVar6 = *(long *)(param_3 + 0x210);
    }
    else {
      (**(code **)(*param_1 + 0x28))(param_1);
      lVar6 = *(long *)(param_3 + 0x210);
    }
    if (lVar6 == 0) {
      lVar6 = *(long *)(param_3 + 0x270);
    }
    else {
      (**(code **)(*param_1 + 0x28))(param_1);
      lVar6 = *(long *)(param_3 + 0x270);
    }
    if (lVar6 != 0) {
      (**(code **)(*param_1 + 0x28))(param_1);
    }
    return;
  }
  if (lVar6 == 0) {
    lVar6 = *(long *)(param_3 + 0xf0);
  }
  else {
    (**(code **)(*param_1 + 0x28))(param_1);
    iVar3 = *(int *)(param_3 + 0xe0);
    *(undefined2 *)(param_2 + 0x20) = 0;
    *(undefined1 *)(param_2 + 0x22) = 0;
    uVar7 = 0;
    if (iVar3 - 1U < 3) {
      uVar7 = *(undefined4 *)(&DAT_03a756c0 + (long)(int)(iVar3 - 1U) * 4);
    }
    uVar8 = 1;
    if (iVar3 != 2) {
      uVar8 = 2;
    }
    uVar2 = 0;
    if (iVar3 != 1) {
      uVar2 = uVar8;
    }
    *(undefined4 *)(param_2 + 0x24) = uVar7;
    *(undefined4 *)(param_2 + 0x28) = uVar2;
    lVar6 = *(long *)(param_3 + 0xf0);
  }
  if (lVar6 == 0) {
    lVar6 = *(long *)(param_3 + 0x150);
  }
  else {
    (**(code **)(*param_1 + 0x28))(param_1);
    iVar3 = *(int *)(param_3 + 0x140);
    *(undefined2 *)(param_2 + 0xa0) = 0;
    *(undefined1 *)(param_2 + 0xa2) = 0;
    uVar7 = 0;
    if (iVar3 - 1U < 3) {
      uVar7 = *(undefined4 *)(&DAT_03a756c0 + (long)(int)(iVar3 - 1U) * 4);
    }
    uVar8 = 1;
    if (iVar3 != 2) {
      uVar8 = 2;
    }
    uVar2 = 0;
    if (iVar3 != 1) {
      uVar2 = uVar8;
    }
    *(undefined4 *)(param_2 + 0xa4) = uVar7;
    *(undefined4 *)(param_2 + 0xa8) = uVar2;
    lVar6 = *(long *)(param_3 + 0x150);
  }
  if (lVar6 == 0) {
    lVar6 = *(long *)(param_3 + 0x1b0);
  }
  else {
    (**(code **)(*param_1 + 0x28))(param_1);
    iVar3 = *(int *)(param_3 + 0x1a0);
    *(undefined2 *)(param_2 + 0x120) = 0;
    *(undefined1 *)(param_2 + 0x122) = 0;
    uVar7 = 0;
    if (iVar3 - 1U < 3) {
      uVar7 = *(undefined4 *)(&DAT_03a756c0 + (long)(int)(iVar3 - 1U) * 4);
    }
    *(undefined4 *)(param_2 + 0x124) = uVar7;
    uVar7 = 1;
    if (iVar3 != 2) {
      uVar7 = 2;
    }
    uVar8 = 0;
    if (iVar3 != 1) {
      uVar8 = uVar7;
    }
    *(undefined4 *)(param_2 + 0x128) = uVar8;
    lVar6 = *(long *)(param_3 + 0x1b0);
  }
  if (lVar6 == 0) {
    lVar6 = *(long *)(param_3 + 0x210);
  }
  else {
    (**(code **)(*param_1 + 0x28))(param_1);
    iVar3 = *(int *)(param_3 + 0x200);
    *(undefined2 *)(param_2 + 0x1a0) = 0;
    *(undefined1 *)(param_2 + 0x1a2) = 0;
    uVar7 = 0;
    if (iVar3 - 1U < 3) {
      uVar7 = *(undefined4 *)(&DAT_03a756c0 + (long)(int)(iVar3 - 1U) * 4);
    }
    *(undefined4 *)(param_2 + 0x1a4) = uVar7;
    uVar7 = 1;
    if (iVar3 != 2) {
      uVar7 = 2;
    }
    uVar8 = 0;
    if (iVar3 != 1) {
      uVar8 = uVar7;
    }
    *(undefined4 *)(param_2 + 0x1a8) = uVar8;
    lVar6 = *(long *)(param_3 + 0x210);
  }
  if (lVar6 == 0) {
    lVar6 = *(long *)(param_3 + 0x270);
  }
  else {
    (**(code **)(*param_1 + 0x28))(param_1);
    iVar3 = *(int *)(param_3 + 0x260);
    *(undefined2 *)(param_2 + 0x220) = 0;
    *(undefined1 *)(param_2 + 0x222) = 0;
    uVar7 = 0;
    if (iVar3 - 1U < 3) {
      uVar7 = *(undefined4 *)(&DAT_03a756c0 + (long)(int)(iVar3 - 1U) * 4);
    }
    *(undefined4 *)(param_2 + 0x224) = uVar7;
    uVar7 = 1;
    if (iVar3 != 2) {
      uVar7 = 2;
    }
    uVar8 = 0;
    if (iVar3 != 1) {
      uVar8 = uVar7;
    }
    *(undefined4 *)(param_2 + 0x228) = uVar8;
    lVar6 = *(long *)(param_3 + 0x270);
  }
  if (lVar6 == 0) {
    return;
  }
  (**(code **)(*param_1 + 0x28))(param_1);
  iVar3 = *(int *)(param_3 + 0x2c0);
  *(undefined2 *)(param_2 + 0x2a0) = 0;
  *(undefined1 *)(param_2 + 0x2a2) = 0;
  uVar7 = 0;
  if (iVar3 - 1U < 3) {
    uVar7 = *(undefined4 *)(&DAT_03a756c0 + (long)(int)(iVar3 - 1U) * 4);
  }
  *(undefined4 *)(param_2 + 0x2a4) = uVar7;
  uVar7 = 1;
  if (iVar3 != 2) {
    uVar7 = 2;
  }
  uVar8 = 0;
  if (iVar3 != 1) {
    uVar8 = uVar7;
  }
  *(undefined4 *)(param_2 + 0x2a8) = uVar8;
  return;
}


