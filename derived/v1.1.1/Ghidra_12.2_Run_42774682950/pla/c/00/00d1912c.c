/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d1912c; name: FUN_00d1912c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00d1912c(long param_1)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined1 auVar5 [16];
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 local_c0;
  char *pcStack_b8;
  undefined8 local_b0;
  long *local_a8;
  long *local_a0 [2];
  undefined1 local_90 [16];
  undefined8 local_80;
  undefined8 uStack_78;
  long *local_70;
  undefined1 auStack_68 [24];
  long *local_50;
  undefined8 *local_48 [2];
  long *local_38;
  
  puVar6 = PTR_DAT_04379558;
  if ((*(uint *)(*(long *)(param_1 + 0xd0) + 8) | 1) == 3) {
    if (((*PTR_DAT_04379558 & 1) == 0) &&
       (iVar9 = __cxa_guard_acquire(PTR_DAT_04379558), iVar9 != 0)) {
      FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379558);
    }
    puVar8 = PTR_DAT_04379568;
    puVar7 = PTR_DAT_04379560;
    *(undefined8 *)PTR_DAT_04379568 = *(undefined8 *)PTR_DAT_04379560;
    FUN_01148dc4(local_90);
    FUN_0113d58c(auStack_68,local_90._0_8_);
    if (((*puVar6 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04379558), iVar9 != 0)) {
      FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379558);
    }
    *(undefined8 *)puVar8 = *(undefined8 *)puVar7;
    FUN_01148dc4(&local_38);
    uVar10 = FUN_0113d600(local_38);
    if (((*puVar6 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04379558), iVar9 != 0)) {
      FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379558);
    }
    *(undefined8 *)puVar8 = *(undefined8 *)puVar7;
    FUN_01148dc4(&local_70);
    uVar11 = FUN_0113d608(local_70);
    FUN_01ef3aec(local_48,auStack_68,uVar10,uVar11,0,1);
    if (local_48[0] != (undefined8 *)0x0) {
      piVar1 = (int *)(local_48[0] + 1);
      do {
        iVar9 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar9 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar9 + -1 == 0) {
        local_48[0][2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar12 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar12;
        local_80 = *local_48[0];
        FUN_02a44274(lVar12 + 0xd8,&local_80);
      }
    }
    if (local_70 != (long *)0x0) {
      lVar12 = local_70[0xb];
      piVar1 = (int *)(lVar12 + 0xc);
      do {
        iVar9 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar9 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar9 + -1 == 0) {
        *(undefined8 *)(lVar12 + 0x18) = 0;
        (**(code **)(*local_70 + 0x20))();
      }
    }
    if (local_38 != (long *)0x0) {
      lVar12 = local_38[0xb];
      piVar1 = (int *)(lVar12 + 0xc);
      do {
        iVar9 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar9 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar9 + -1 == 0) {
        *(undefined8 *)(lVar12 + 0x18) = 0;
        (**(code **)(*local_38 + 0x20))();
      }
    }
    if (local_50 != (long *)0x0) {
      (**(code **)(*local_50 + 0x20))();
    }
    auVar5._8_8_ = local_90._8_8_;
    auVar5._0_8_ = local_90._0_8_;
    if ((long *)local_90._0_8_ == (long *)0x0) {
      return;
    }
    lVar12 = *(long *)(local_90._0_8_ + 0x58);
    piVar1 = (int *)(lVar12 + 0xc);
    do {
      iVar9 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar9 + -1 != 0) {
      return;
    }
    *(undefined8 *)(lVar12 + 0x18) = 0;
  }
  else {
    uStack_78 = _UNK_03889308;
    local_80 = _DAT_03889300;
    local_90 = FUN_009a7ff4((*(float *)PTR_FloatPi_04372cf0 / *(float *)PTR_FloatDegree180_04372ce0)
                            * 180.0,0,0);
    local_c0 = 0xe3bbee047a64586a;
    pcStack_b8 = "ha_area00";
    local_b0 = 9;
    local_a8 = (long *)0x0;
    FUN_01ef3aec(local_a0,&local_c0,&local_80,local_90,1,0);
    auVar5 = local_90;
    if (local_a0[0] != (long *)0x0) {
      plVar2 = local_a0[0] + 1;
      do {
        iVar9 = (int)*plVar2 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *(int *)plVar2 = iVar9;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar9 == 0) {
        local_a0[0][2] = 0;
        if ((*PTR_DAT_04379498 & 1) == 0) {
          iVar9 = __cxa_guard_acquire(PTR_DAT_04379498);
          if (iVar9 != 0) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
        }
        lVar12 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar12;
        local_38 = (long *)*local_a0[0];
        FUN_02a44274(lVar12 + 0xd8,&local_38);
        auVar5 = local_90;
      }
    }
    local_90._0_8_ = local_a8;
    if (local_a8 == (long *)0x0) {
      return;
    }
  }
  lVar12 = *(long *)local_90._0_8_;
  local_90 = auVar5;
  (**(code **)(lVar12 + 0x20))();
  return;
}


