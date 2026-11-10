/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f0c314; name: FUN_02f0c314
 */


undefined8 FUN_02f0c314(long *param_1)

{
  long *plVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long *local_70;
  long lStack_68;
  long local_60;
  undefined8 uStack_58;
  long *local_50;
  undefined8 local_48;
  long local_40;
  undefined8 local_38;
  
  iVar3 = (int)param_1[1];
  uVar2 = local_48._4_4_;
  if (iVar3 == 0) {
    local_48 = (ulong)local_48._4_4_ << 0x20;
  }
  else {
    local_48 = (ulong)local_48._4_4_ << 0x20;
    lVar5 = *(long *)*param_1;
    local_38 = 0;
    local_50 = param_1;
    if (lVar5 == 0) {
      if (iVar3 - 1U == 0) {
        local_48 = CONCAT44(uVar2,iVar3);
        goto LAB_02f0c398;
      }
      uVar4 = 0;
      do {
        local_40 = ((long *)*param_1)[uVar4 + 1];
        if (local_40 != 0) goto LAB_02f0c500;
        uVar4 = uVar4 + 1;
      } while (iVar3 - 1U != uVar4);
      local_40 = 0;
LAB_02f0c500:
      local_48 = CONCAT44(uVar2,(int)uVar4 + 1);
      lVar5 = local_40;
    }
    while (lVar5 != 0) {
      local_40 = lVar5;
      FUN_02f0c528(&local_70,param_1,&local_50);
      local_50 = local_70;
      local_48 = lStack_68;
      local_40 = local_60;
      local_38 = uStack_58;
      FUN_02f0d03c(lVar5);
      (*DAT_0442d150)(2,lVar5);
      lVar5 = local_40;
    }
  }
LAB_02f0c398:
  iVar3 = (int)param_1[4];
  plVar1 = param_1 + 3;
  uVar2 = local_48._4_4_;
  if (iVar3 == 0) {
    local_50 = (long *)0x0;
    local_48 = (ulong)local_48._4_4_ << 0x20;
    local_40 = 0;
  }
  else {
    local_48 = (ulong)local_48._4_4_ << 0x20;
    local_40 = *(long *)*plVar1;
    local_38 = 0;
    local_50 = plVar1;
    lVar5 = local_40;
    if (local_40 == 0) {
      if (iVar3 - 1U != 0) {
        uVar4 = 0;
        do {
          local_40 = ((long *)*plVar1)[uVar4 + 1];
          if (local_40 != 0) goto LAB_02f0c4b8;
          uVar4 = uVar4 + 1;
        } while (iVar3 - 1U != uVar4);
        local_40 = 0;
LAB_02f0c4b8:
        iVar3 = (int)uVar4 + 1;
      }
      local_48 = CONCAT44(uVar2,iVar3);
      lVar5 = local_40;
    }
    while (local_40 = lVar5, lVar5 != 0) {
      FUN_02f0c5a4(&local_70,plVar1,&local_50);
      local_48 = lStack_68;
      local_40 = local_60;
      local_50 = local_70;
      local_38 = uStack_58;
      FUN_02f0c620(param_1,lVar5);
      (*DAT_0442d150)(2,lVar5);
      lVar5 = local_40;
    }
  }
  if (*param_1 != 0) {
    *(undefined4 *)(param_1 + 1) = 0;
    (*DAT_0442d150)(0);
    *param_1 = 0;
    *(undefined4 *)((long)param_1 + 0xc) = 0;
  }
  if (*plVar1 != 0) {
    *(undefined4 *)(param_1 + 4) = 0;
    (*DAT_0442d150)(0);
    param_1[3] = 0;
    *(undefined4 *)((long)param_1 + 0x24) = 0;
  }
  FUN_02f0c660(param_1 + 6);
  return 1;
}


