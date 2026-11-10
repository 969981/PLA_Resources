/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02edf8b8; name: FUN_02edf8b8
 */


undefined8 FUN_02edf8b8(long *param_1)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  ulong uVar5;
  long *local_70;
  long lStack_68;
  long local_60;
  undefined8 uStack_58;
  long *local_50;
  undefined8 local_48;
  long local_40;
  undefined8 local_38;
  
  iVar4 = (int)param_1[1];
  uVar2 = local_48._4_4_;
  if (iVar4 == 0) {
    local_48 = (ulong)local_48._4_4_ << 0x20;
  }
  else {
    local_48 = (ulong)local_48._4_4_ << 0x20;
    local_40 = *(long *)*param_1;
    local_38 = 0;
    lVar3 = local_40;
    local_50 = param_1;
    if (local_40 == 0) {
      if (iVar4 - 1U != 0) {
        uVar5 = 0;
        do {
          local_40 = ((long *)*param_1)[uVar5 + 1];
          if (local_40 != 0) goto LAB_02edfc50;
          uVar5 = uVar5 + 1;
        } while (iVar4 - 1U != uVar5);
        local_40 = 0;
LAB_02edfc50:
        iVar4 = (int)uVar5 + 1;
      }
      local_48 = CONCAT44(uVar2,iVar4);
      lVar3 = local_40;
    }
    while (lVar3 != 0) {
      local_40 = lVar3;
      FUN_02edfc74(&local_70,param_1,&local_50);
      local_50 = local_70;
      local_48 = lStack_68;
      local_40 = local_60;
      local_38 = uStack_58;
      FUN_02edebc0(lVar3);
      (*DAT_0442d150)(0,lVar3);
      lVar3 = local_40;
    }
  }
  iVar4 = (int)param_1[4];
  plVar1 = param_1 + 3;
  uVar2 = local_48._4_4_;
  if (iVar4 == 0) {
    local_50 = (long *)0x0;
    local_48 = (ulong)local_48._4_4_ << 0x20;
    lVar3 = *param_1;
  }
  else {
    local_48 = (ulong)local_48._4_4_ << 0x20;
    local_40 = *(long *)*plVar1;
    local_38 = 0;
    local_50 = plVar1;
    lVar3 = local_40;
    if (local_40 == 0) {
      if (iVar4 - 1U != 0) {
        uVar5 = 0;
        do {
          local_40 = ((long *)*plVar1)[uVar5 + 1];
          if (local_40 != 0) goto LAB_02edfc64;
          uVar5 = uVar5 + 1;
        } while (iVar4 - 1U != uVar5);
        local_40 = 0;
LAB_02edfc64:
        iVar4 = (int)uVar5 + 1;
      }
      local_48 = CONCAT44(uVar2,iVar4);
      lVar3 = local_40;
    }
    while (lVar3 != 0) {
      local_40 = lVar3;
      FUN_02edfcf0(&local_70,plVar1,&local_50);
      local_48 = lStack_68;
      local_40 = local_60;
      local_50 = local_70;
      local_38 = uStack_58;
      FUN_02edfd6c(param_1,lVar3);
      if (*(long *)(lVar3 + 0x50) != 0) {
        *(undefined4 *)(lVar3 + 0x58) = 0;
        (*DAT_0442d150)(0);
        *(undefined8 *)(lVar3 + 0x50) = 0;
        *(undefined4 *)(lVar3 + 0x5c) = 0;
      }
      (*DAT_0442d150)(0,lVar3);
      lVar3 = local_40;
    }
    lVar3 = *param_1;
  }
  local_40 = 0;
  if (lVar3 == 0) {
    lVar3 = *plVar1;
  }
  else {
    *(undefined4 *)(param_1 + 1) = 0;
    (*DAT_0442d150)(0);
    *param_1 = 0;
    *(undefined4 *)((long)param_1 + 0xc) = 0;
    lVar3 = *plVar1;
  }
  if (lVar3 == 0) {
    lVar3 = param_1[6];
  }
  else {
    *(undefined4 *)(param_1 + 4) = 0;
    (*DAT_0442d150)(0);
    param_1[3] = 0;
    *(undefined4 *)((long)param_1 + 0x24) = 0;
    lVar3 = param_1[6];
  }
  if (lVar3 == 0) {
    lVar3 = param_1[8];
  }
  else {
    *(undefined4 *)(param_1 + 7) = 0;
    (*DAT_0442d150)(0);
    param_1[6] = 0;
    *(undefined4 *)((long)param_1 + 0x3c) = 0;
    lVar3 = param_1[8];
  }
  if (lVar3 == 0) {
    lVar3 = param_1[10];
  }
  else {
    *(undefined4 *)(param_1 + 9) = 0;
    (*DAT_0442d150)(0);
    param_1[8] = 0;
    *(undefined4 *)((long)param_1 + 0x4c) = 0;
    lVar3 = param_1[10];
  }
  if (lVar3 == 0) {
    lVar3 = param_1[0xc];
  }
  else {
    *(undefined4 *)(param_1 + 0xb) = 0;
    (*DAT_0442d150)(0);
    param_1[10] = 0;
    *(undefined4 *)((long)param_1 + 0x5c) = 0;
    lVar3 = param_1[0xc];
  }
  if (lVar3 == 0) {
    lVar3 = param_1[0xe];
  }
  else {
    *(undefined4 *)(param_1 + 0xd) = 0;
    (*DAT_0442d150)(0);
    param_1[0xc] = 0;
    *(undefined4 *)((long)param_1 + 0x6c) = 0;
    lVar3 = param_1[0xe];
  }
  if (lVar3 == 0) {
    lVar3 = param_1[0x10];
  }
  else {
    *(undefined4 *)(param_1 + 0xf) = 0;
    (*DAT_0442d150)(0);
    param_1[0xe] = 0;
    *(undefined4 *)((long)param_1 + 0x7c) = 0;
    lVar3 = param_1[0x10];
  }
  if (lVar3 == 0) {
    lVar3 = param_1[0x12];
  }
  else {
    *(undefined4 *)(param_1 + 0x11) = 0;
    (*DAT_0442d150)(0);
    param_1[0x10] = 0;
    *(undefined4 *)((long)param_1 + 0x8c) = 0;
    lVar3 = param_1[0x12];
  }
  if (lVar3 == 0) {
    lVar3 = param_1[0x14];
  }
  else {
    *(undefined4 *)(param_1 + 0x13) = 0;
    (*DAT_0442d150)(0);
    param_1[0x12] = 0;
    *(undefined4 *)((long)param_1 + 0x9c) = 0;
    lVar3 = param_1[0x14];
  }
  if (lVar3 == 0) {
    lVar3 = param_1[0x16];
  }
  else {
    *(undefined4 *)(param_1 + 0x15) = 0;
    (*DAT_0442d150)(0);
    param_1[0x14] = 0;
    *(undefined4 *)((long)param_1 + 0xac) = 0;
    lVar3 = param_1[0x16];
  }
  if (lVar3 != 0) {
    *(undefined4 *)(param_1 + 0x17) = 0;
    (*DAT_0442d150)(0);
    param_1[0x16] = 0;
    *(undefined4 *)((long)param_1 + 0xbc) = 0;
  }
  return 1;
}


