/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0181c388; name: FUN_0181c388
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0181c388(long *param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  int *piVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 local_80 [16];
  long *local_70;
  undefined8 *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  long *local_48;
  undefined1 local_40 [16];
  
  if ((param_1[0x86] == 0) || (*(int *)(param_1[0x86] + 0xc) == 0)) {
    lVar8 = *param_2;
  }
  else {
    FUN_0181aef4(param_1);
    lVar8 = *param_2;
  }
  if (lVar8 == 0) {
    return;
  }
  FUN_00ba735c(&local_48);
  plVar2 = local_48;
  if (local_48 == (long *)0x0) {
    return;
  }
  (**(code **)(*param_1 + 0x10))(local_40,param_1);
  local_68 = (undefined8 *)0x0;
  local_60 = 0;
  FUN_00ac4a8c(&local_68,local_40);
  uVar10 = local_40._0_8_;
  if ((long *)local_40._0_8_ != (long *)0x0) {
    plVar1 = (long *)(local_40._0_8_ + 8);
    do {
      iVar7 = (int)*plVar1 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *(int *)plVar1 = iVar7;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar7 == 0) {
      *(long *)(local_40._0_8_ + 0x10) = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar8 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar8;
      local_80._0_8_ = *(undefined8 *)uVar10;
      FUN_02a44274(lVar8 + 0xd8,local_80);
    }
  }
  local_58 = (undefined8 *)0x0;
  uStack_50 = 0;
  FUN_025ae020(plVar2,&local_68);
  puVar6 = local_58;
  if (local_58 != (undefined8 *)0x0) {
    piVar3 = (int *)(local_58 + 1);
    do {
      iVar7 = *piVar3;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar5) {
        *piVar3 = iVar7 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar7 + -1 == 0) {
      local_58[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar8 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar8;
      local_40._0_8_ = *puVar6;
      FUN_02a44274(lVar8 + 0xd8,local_40);
    }
  }
  puVar6 = local_68;
  plVar2 = param_1 + 0x86;
  if (local_68 != (undefined8 *)0x0) {
    piVar3 = (int *)(local_68 + 1);
    do {
      iVar7 = *piVar3;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar5) {
        *piVar3 = iVar7 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar7 + -1 == 0) {
      local_68[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar8 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar8;
      local_40._0_8_ = *puVar6;
      FUN_02a44274(lVar8 + 0xd8,local_40);
    }
  }
  *(undefined1 *)(param_1 + 0x8e) = 0;
  *(bool *)((long)param_1 + 0x471) = *(int *)((long)param_2 + 0x14) == 1;
  *(undefined4 *)((long)param_1 + 0x474) = *(undefined4 *)((long)param_2 + 0x1c);
  *(char *)(param_1 + 0x8f) = (char)param_2[4];
  *(undefined1 *)((long)param_1 + 0x479) = *(undefined1 *)((long)param_2 + 0x21);
  local_60 = 0;
  local_58 = (undefined8 *)0x0;
  local_68 = (undefined8 *)0x0;
  FUN_01825340(&local_68,param_2);
  local_58 = (undefined8 *)CONCAT44((int)param_2[2],(int)param_2[3]);
  FUN_01089068(plVar2,&local_68);
  local_40._0_8_ = (long *)0x0;
  local_40._8_8_ = 0;
  FUN_00ac3fa4(local_40,param_1 + 0x3e);
  FUN_0099c748(&local_70,local_40);
  uVar10 = local_40._0_8_;
  if ((long *)local_40._0_8_ != (long *)0x0) {
    plVar1 = (long *)(local_40._0_8_ + 8);
    do {
      iVar7 = (int)*plVar1 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *(int *)plVar1 = iVar7;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar7 == 0) {
      *(long *)(local_40._0_8_ + 0x10) = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar8 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar8;
      local_80._0_8_ = *(undefined8 *)uVar10;
      FUN_02a44274(lVar8 + 0xd8,local_80);
    }
  }
  plVar1 = local_70;
  puVar6 = local_68;
  if (local_70 == (long *)0x0) goto joined_r0x0181c700;
  if (*plVar2 == 0) {
LAB_0181c63c:
    auVar11 = ZEXT816(0);
  }
  else {
    FUN_01089924(local_40);
    uVar10 = local_40._0_8_;
    if ((long *)local_40._0_8_ == (long *)0x0) goto LAB_0181c63c;
    FUN_01088458((int)param_1[0x89],local_40._0_8_);
    auVar11 = (**(code **)(*(long *)uVar10 + 0x40))(uVar10);
    if ((long *)local_40._0_8_ != (long *)0x0) {
      lVar8 = *(long *)(local_40._0_8_ + 0x58);
      piVar3 = (int *)(lVar8 + 0xc);
      do {
        iVar7 = *piVar3;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar5) {
          *piVar3 = iVar7 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar7 + -1 == 0) {
        *(undefined8 *)(lVar8 + 0x18) = 0;
        (**(code **)(*(long *)local_40._0_8_ + 0x20))();
      }
    }
  }
  if (*plVar2 == 0) {
LAB_0181c650:
    auVar12._8_8_ = _UNK_0388a138;
    auVar12._0_8_ = _DAT_0388a130;
  }
  else {
    local_40 = auVar11;
    FUN_01089924(local_80);
    uVar10 = local_80._0_8_;
    auVar11 = local_40;
    if ((long *)local_80._0_8_ == (long *)0x0) goto LAB_0181c650;
    FUN_01088458((int)param_1[0x89],local_80._0_8_);
    auVar12 = (**(code **)(*(long *)uVar10 + 0x50))(uVar10);
    auVar11 = local_40;
    if ((long *)local_80._0_8_ != (long *)0x0) {
      lVar8 = *(long *)(local_80._0_8_ + 0x58);
      piVar3 = (int *)(lVar8 + 0xc);
      do {
        iVar7 = *piVar3;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar5) {
          *piVar3 = iVar7 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar7 + -1 == 0) {
        *(undefined8 *)(lVar8 + 0x18) = 0;
        (**(code **)(*(long *)local_80._0_8_ + 0x20))();
        auVar11 = local_40;
      }
    }
  }
  local_80 = auVar12;
  local_40 = auVar11;
  FUN_01a83770(plVar1,local_40,local_80);
  if (*(char *)((long)param_1 + 0x471) != '\0') {
    uVar9 = (**(code **)(*local_70 + 0x1b0))();
    plVar2 = local_70;
    if ((uVar9 & 1) == 0) {
      uVar10 = FUN_01a831dc(local_70);
      (**(code **)(*plVar2 + 0x108))
                (uVar10,*(undefined4 *)
                         (local_70[0xb8] + (ulong)*(uint *)((long)param_1 + 0x474) * 4 + 0x6c),
                 plVar2);
    }
    else {
      (**(code **)(*local_70 + 0x1f8))(local_70,*(undefined4 *)((long)param_1 + 0x474));
    }
  }
  puVar6 = local_68;
  if (local_70 != (long *)0x0) {
    lVar8 = local_70[0xb];
    piVar3 = (int *)(lVar8 + 0xc);
    do {
      iVar7 = *piVar3;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar5) {
        *piVar3 = iVar7 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar7 + -1 == 0) {
      *(undefined8 *)(lVar8 + 0x18) = 0;
      (**(code **)(*local_70 + 0x20))();
      puVar6 = local_68;
    }
  }
joined_r0x0181c700:
  local_68 = puVar6;
  if (puVar6 != (undefined8 *)0x0) {
    piVar3 = (int *)(puVar6 + 1);
    do {
      iVar7 = *piVar3;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar5) {
        *piVar3 = iVar7 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar7 + -1 == 0) {
      puVar6[2] = 0;
      if ((*PTR_DAT_04379498 & 1) == 0) {
        iVar7 = __cxa_guard_acquire(PTR_DAT_04379498);
        if (iVar7 != 0) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
      }
      lVar8 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar8;
      local_40._0_8_ = *puVar6;
      FUN_02a44274(lVar8 + 0xd8,local_40);
    }
  }
  if (local_48 != (long *)0x0) {
    lVar8 = local_48[0xb];
    piVar3 = (int *)(lVar8 + 0xc);
    do {
      iVar7 = *piVar3;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar5) {
        *piVar3 = iVar7 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar7 + -1 == 0) {
      *(undefined8 *)(lVar8 + 0x18) = 0;
      (**(code **)(*local_48 + 0x20))();
    }
  }
  return;
}


