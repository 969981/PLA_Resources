/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0091f190; name: FUN_0091f190
 */


int FUN_0091f190(long param_1,long param_2,long param_3,undefined4 param_4)

{
  long *plVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  ushort uVar7;
  int iVar8;
  int iVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  char local_b0 [4];
  char local_ac [4];
  undefined8 local_a8;
  char *pcStack_a0;
  undefined8 local_98;
  long *local_90;
  undefined8 local_88;
  char *pcStack_80;
  undefined8 local_78;
  long *local_70;
  long *local_68;
  
  uVar10 = FUN_02c8dcf0(param_4);
  if ((uVar10 & 1) == 0) {
    iVar8 = 0;
    goto LAB_0091f2cc;
  }
  uVar2 = *(undefined1 *)(*(long *)(param_2 + 0x70) + 0x7d);
  uVar3 = *(undefined1 *)(*(long *)(param_3 + 0x70) + 0x7d);
  iVar8 = FUN_029506a8(*(long *)(param_3 + 0x70),0xd);
  puVar12 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x58);
  FUN_0295e190(puVar12[1],*puVar12);
  **(undefined8 **)(puVar12[5] + 0x10) = 0;
  local_88._0_2_ = CONCAT11(uVar3,uVar2);
  local_88 = CONCAT44(param_4,(undefined4)local_88);
  pcStack_80._0_7_ = 0x100000000;
  FUN_029f66ec(*(undefined8 *)(*(long *)(puVar12[5] + 0x130) + 0x1ce0),&local_a8,&local_88);
  uVar7 = (ushort)local_a8;
  uVar2 = *(undefined1 *)(*(long *)(param_2 + 0x70) + 0x7d);
  uVar3 = *(undefined1 *)(*(long *)(param_3 + 0x70) + 0x7d);
  iVar9 = FUN_029506a8(*(long *)(param_3 + 0x70),0xd);
  puVar12 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x58);
  FUN_0295e190(puVar12[1],*puVar12);
  **(undefined8 **)(puVar12[5] + 0x10) = 0;
  local_88._0_2_ = CONCAT11(uVar3,uVar2);
  local_88 = CONCAT44(param_4,(undefined4)local_88);
  pcStack_80 = (char *)CONCAT17(pcStack_80._7_1_,0x100000001);
  FUN_029f66ec(*(undefined8 *)(*(long *)(puVar12[5] + 0x130) + 0x1ce0),&local_a8,&local_88);
  if ((int)(uint)uVar7 < iVar8) {
    if ((int)(uint)(ushort)local_a8 < iVar9) {
      iVar8 = 0;
      goto LAB_0091f2cc;
    }
    local_88 = 0x63e2672f9e43a54e;
    pcStack_80 = "battle_logic";
    local_78 = 0xc;
    local_70 = (long *)0x0;
    local_a8 = 0x3d416d7bac7eb4ed;
    pcStack_a0 = "modeChangeAi_Powerful_Score_CanKill";
    local_98 = 0x23;
    local_90 = (long *)0x0;
    if (((*PTR_DAT_04379660 & 1) == 0) &&
       (iVar8 = __cxa_guard_acquire(PTR_DAT_04379660), iVar8 != 0)) {
      FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379660);
    }
    uVar11 = *(undefined8 *)PTR_DAT_04379668;
    *(undefined8 *)PTR_DAT_04379670 = uVar11;
    FUN_00d7d9e4(&local_68,uVar11,&local_88);
    if (local_68 == (long *)0x0) goto LAB_0091f94c;
    iVar8 = FUN_00d78f50(local_68,&local_a8);
    if (local_68 != (long *)0x0) {
      plVar1 = local_68 + 10;
      do {
        iVar9 = (int)*plVar1 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *(int *)plVar1 = iVar9;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      goto joined_r0x0091f4ec;
    }
  }
  else {
    local_88 = 0x63e2672f9e43a54e;
    pcStack_80 = "battle_logic";
    local_78 = 0xc;
    local_70 = (long *)0x0;
    local_a8 = 0x6de1f13882632115;
    pcStack_a0 = "modeChangeAi_Powerful_Score_Unnecessary";
    local_98 = 0x27;
    local_90 = (long *)0x0;
    if (((*PTR_DAT_04379660 & 1) == 0) &&
       (iVar8 = __cxa_guard_acquire(PTR_DAT_04379660), iVar8 != 0)) {
      FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379660);
    }
    uVar11 = *(undefined8 *)PTR_DAT_04379668;
    *(undefined8 *)PTR_DAT_04379670 = uVar11;
    FUN_00d7d9e4(&local_68,uVar11,&local_88);
    if (local_68 == (long *)0x0) {
LAB_0091f94c:
      iVar8 = 0;
    }
    else {
      iVar8 = FUN_00d78f50(local_68,&local_a8);
      if (local_68 != (long *)0x0) {
        plVar1 = local_68 + 10;
        do {
          iVar9 = (int)*plVar1 + -1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *(int *)plVar1 = iVar9;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
joined_r0x0091f4ec:
        if (iVar9 == 0) {
          (**(code **)(*local_68 + 0x10))();
        }
      }
    }
  }
  if (local_90 != (long *)0x0) {
    (**(code **)(*local_90 + 0x20))();
  }
  if (local_70 != (long *)0x0) {
    (**(code **)(*local_70 + 0x20))();
  }
LAB_0091f2cc:
  FUN_0091fdcc(param_1,local_ac,param_2,param_3,param_4,0);
  FUN_0091fdcc(param_1,local_b0,param_2,param_3,param_4,1);
  if ((local_ac[0] != '\0') && (local_b0[0] == '\0')) {
    local_88 = 0x63e2672f9e43a54e;
    pcStack_80 = "battle_logic";
    local_78 = 0xc;
    local_70 = (long *)0x0;
    local_a8 = 0xd4c61fa457a42835;
    pcStack_a0 = "modeChangeAi_Powerful_Score_Behind";
    local_98 = 0x22;
    local_90 = (long *)0x0;
    if (((*PTR_DAT_04379660 & 1) == 0) &&
       (iVar9 = __cxa_guard_acquire(PTR_DAT_04379660), iVar9 != 0)) {
      FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379660);
    }
    uVar11 = *(undefined8 *)PTR_DAT_04379668;
    *(undefined8 *)PTR_DAT_04379670 = uVar11;
    FUN_00d7d9e4(&local_68,uVar11,&local_88);
    if (local_68 == (long *)0x0) {
      iVar9 = 0;
    }
    else {
      iVar9 = FUN_00d78f50(local_68,&local_a8);
      if (local_68 != (long *)0x0) {
        plVar1 = local_68 + 10;
        do {
          iVar6 = (int)*plVar1 + -1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *(int *)plVar1 = iVar6;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar6 == 0) {
          (**(code **)(*local_68 + 0x10))();
        }
      }
    }
    if (local_90 != (long *)0x0) {
      (**(code **)(*local_90 + 0x20))();
    }
    iVar8 = iVar9 + iVar8;
    if (local_70 != (long *)0x0) {
      (**(code **)(*local_70 + 0x20))();
    }
  }
  if ((local_b0[0] != '\0') && (local_ac[0] != '\0')) {
    local_88 = 0x63e2672f9e43a54e;
    pcStack_80 = "battle_logic";
    local_78 = 0xc;
    local_70 = (long *)0x0;
    local_a8 = 0x6a2b654ae995a262;
    pcStack_a0 = "modeChangeAi_Powerful_Score_NotBehind";
    local_98 = 0x25;
    local_90 = (long *)0x0;
    if (((*PTR_DAT_04379660 & 1) == 0) &&
       (iVar9 = __cxa_guard_acquire(PTR_DAT_04379660), iVar9 != 0)) {
      FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379660);
    }
    uVar11 = *(undefined8 *)PTR_DAT_04379668;
    *(undefined8 *)PTR_DAT_04379670 = uVar11;
    FUN_00d7d9e4(&local_68,uVar11,&local_88);
    if (local_68 == (long *)0x0) {
      iVar9 = 0;
    }
    else {
      iVar9 = FUN_00d78f50(local_68,&local_a8);
      if (local_68 != (long *)0x0) {
        plVar1 = local_68 + 10;
        do {
          iVar6 = (int)*plVar1 + -1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *(int *)plVar1 = iVar6;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar6 == 0) {
          (**(code **)(*local_68 + 0x10))();
        }
      }
    }
    if (local_90 != (long *)0x0) {
      (**(code **)(*local_90 + 0x20))();
    }
    iVar8 = iVar9 + iVar8;
    if (local_70 != (long *)0x0) {
      (**(code **)(*local_70 + 0x20))();
    }
  }
  uVar10 = FUN_009203c8(param_1,param_3,param_2);
  if ((uVar10 & 1) != 0) {
    local_88 = 0x63e2672f9e43a54e;
    pcStack_80 = "battle_logic";
    local_78 = 0xc;
    local_70 = (long *)0x0;
    local_a8 = 0xd27523d41b472cf2;
    pcStack_a0 = "modeChangeAi_Powerful_Score_Danger";
    local_98 = 0x22;
    local_90 = (long *)0x0;
    if (((*PTR_DAT_04379660 & 1) == 0) &&
       (iVar9 = __cxa_guard_acquire(PTR_DAT_04379660), iVar9 != 0)) {
      FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379660);
    }
    uVar11 = *(undefined8 *)PTR_DAT_04379668;
    *(undefined8 *)PTR_DAT_04379670 = uVar11;
    FUN_00d7d9e4(&local_68,uVar11,&local_88);
    if (local_68 == (long *)0x0) {
      iVar9 = 0;
    }
    else {
      iVar9 = FUN_00d78f50(local_68,&local_a8);
      if (local_68 != (long *)0x0) {
        plVar1 = local_68 + 10;
        do {
          iVar6 = (int)*plVar1 + -1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *(int *)plVar1 = iVar6;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar6 == 0) {
          (**(code **)(*local_68 + 0x10))();
        }
      }
    }
    if (local_90 != (long *)0x0) {
      (**(code **)(*local_90 + 0x20))();
    }
    iVar8 = iVar9 + iVar8;
    if (local_70 != (long *)0x0) {
      (**(code **)(*local_70 + 0x20))();
    }
  }
  return iVar8;
}


