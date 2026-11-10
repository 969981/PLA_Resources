/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01ad3bac; name: FUN_01ad3bac
 */


undefined4 FUN_01ad3bac(long param_1,undefined4 *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  undefined1 auVar5 [16];
  undefined4 uVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  float fVar11;
  undefined1 auVar12 [16];
  undefined1 in_q3 [16];
  undefined8 uVar13;
  float fStack_a8;
  float fStack_a4;
  long *local_88;
  undefined4 local_80;
  undefined8 *local_78;
  undefined8 uStack_70;
  undefined8 *local_68;
  undefined8 uStack_60;
  undefined8 *local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 *local_40;
  undefined8 local_38;
  undefined1 local_30;
  long *local_28;
  undefined8 local_18;
  
  uVar13 = in_q3._8_8_;
  fVar11 = in_q3._0_4_;
  if (*(long *)(param_1 + 0x318) == 0) {
    local_88 = (long *)0x0;
LAB_01ad3bcc:
    lVar8 = *(long *)(param_1 + 0x820);
  }
  else {
    FUN_0131ff2c(&local_88);
    if (local_88 == (long *)0x0) goto LAB_01ad3bcc;
    uVar9 = FUN_01e80e78();
    if ((uVar9 & 1) != 0) {
      if (local_88 == (long *)0x0) {
        return 0;
      }
      lVar8 = local_88[0xb];
      piVar1 = (int *)(lVar8 + 0xc);
      do {
        iVar7 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar7 + -1 == 0) {
        *(undefined8 *)(lVar8 + 0x18) = 0;
        (**(code **)(*local_88 + 0x20))();
        return 0;
      }
      return 0;
    }
    if (local_88 == (long *)0x0) goto LAB_01ad3bcc;
    lVar8 = local_88[0xb];
    piVar1 = (int *)(lVar8 + 0xc);
    do {
      iVar7 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar7 + -1 != 0) goto LAB_01ad3bcc;
    *(undefined8 *)(lVar8 + 0x18) = 0;
    (**(code **)(*local_88 + 0x20))();
    lVar8 = *(long *)(param_1 + 0x820);
  }
  if (lVar8 == 0) {
    return 0;
  }
  FUN_00cfac20(&local_28);
  if (local_28 == (long *)0x0) {
    return 0;
  }
  uVar9 = FUN_01af7bf4();
  if ((uVar9 & 1) == 0) {
    FUN_009c69bc(&local_88,local_28);
    (**(code **)(*local_88 + 0x40))();
    if (local_88 != (long *)0x0) {
      lVar8 = local_88[0xb];
      piVar1 = (int *)(lVar8 + 0xc);
      do {
        iVar7 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar7 + -1 == 0) {
        *(undefined8 *)(lVar8 + 0x18) = 0;
        (**(code **)(*local_88 + 0x20))();
      }
    }
    puVar10 = (undefined8 *)(param_2 + 8);
    fStack_a8 = (float)uVar13;
    fStack_a4 = (float)((ulong)uVar13 >> 0x20);
    fVar11 = fVar11 - (float)*puVar10;
    fStack_a8 = fStack_a8 - (float)*(undefined8 *)(param_2 + 10);
    fStack_a4 = fStack_a4 - (float)((ulong)*(undefined8 *)(param_2 + 10) >> 0x20);
    fVar11 = fVar11 * fVar11;
    fStack_a8 = fStack_a8 * fStack_a8;
    fStack_a4 = fStack_a4 * fStack_a4;
    auVar12._4_4_ = 0;
    auVar12._0_4_ = fVar11;
    auVar12._8_4_ = fStack_a8;
    auVar12._12_4_ = fStack_a4;
    auVar5._4_4_ = 0;
    auVar5._0_4_ = fVar11;
    auVar5._8_4_ = fStack_a8;
    auVar5._12_4_ = fStack_a4;
    auVar12 = NEON_ext(auVar12,auVar5,8,1);
    if ((float)param_2[4] <= SQRT(auVar12._0_4_ + fVar11 + auVar12._4_4_ + 0.0)) {
      uVar6 = 0;
      bVar3 = false;
      goto joined_r0x01ad3f3c;
    }
    local_88 = (long *)((ulong)local_88 & 0xffffffffffff0000);
    local_80 = 0;
    local_78 = (undefined8 *)0x0;
    uStack_70 = 0;
    local_38 = 0;
    local_30 = 0;
    local_68 = (undefined8 *)0x0;
    uStack_60 = 0;
    local_58 = (undefined8 *)0x0;
    uStack_50 = 0;
    local_48 = 0;
    local_40 = (undefined8 *)0x0;
    uVar9 = FUN_01ad40b8(*param_2,param_1,puVar10,&local_88,0);
    if (((uVar9 & 1) == 0) &&
       ((*(char *)(param_2 + 0xc) == '\0' ||
        (uVar9 = FUN_01ad40b8(param_2[2],param_1,puVar10,&local_88,1), (uVar9 & 1) == 0)))) {
      uVar6 = 1;
      puVar10 = local_40;
    }
    else {
      uVar6 = 0;
      puVar10 = local_40;
    }
    local_40 = puVar10;
    if (puVar10 != (undefined8 *)0x0) {
      piVar1 = (int *)(puVar10 + 1);
      do {
        iVar7 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar7 + -1 == 0) {
        puVar10[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar8 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar8;
        local_18 = *puVar10;
        FUN_02a44274(lVar8 + 0xd8,&local_18);
      }
    }
    puVar10 = local_58;
    if (local_58 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_58 + 1);
      do {
        iVar7 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar7 + -1 == 0) {
        local_58[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar8 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar8;
        local_18 = *puVar10;
        FUN_02a44274(lVar8 + 0xd8,&local_18);
      }
    }
    puVar10 = local_68;
    if (local_68 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_68 + 1);
      do {
        iVar7 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar7 + -1 == 0) {
        local_68[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar8 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar8;
        local_18 = *puVar10;
        FUN_02a44274(lVar8 + 0xd8,&local_18);
      }
    }
    puVar10 = local_78;
    if (local_78 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_78 + 1);
      do {
        iVar7 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar7 + -1 == 0) {
        local_78[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar8 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar8;
        local_18 = *puVar10;
        FUN_02a44274(lVar8 + 0xd8,&local_18);
      }
    }
  }
  else {
    uVar6 = 0;
  }
  bVar3 = true;
joined_r0x01ad3f3c:
  if (local_28 != (long *)0x0) {
    lVar8 = local_28[0xb];
    piVar1 = (int *)(lVar8 + 0xc);
    do {
      iVar7 = *piVar1;
      cVar2 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar7 + -1 == 0) {
      *(undefined8 *)(lVar8 + 0x18) = 0;
      (**(code **)(*local_28 + 0x20))();
    }
  }
  if (bVar3) {
    return uVar6;
  }
  return 0;
}


