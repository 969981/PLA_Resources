/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01ad9850; name: FUN_01ad9850
 */


void FUN_01ad9850(long param_1)

{
  long *plVar1;
  int *piVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  undefined8 *puVar7;
  int iVar8;
  ulong uVar9;
  undefined4 uVar10;
  long lVar11;
  long *local_60;
  undefined8 *local_58;
  undefined8 uStack_50;
  long *local_48 [2];
  long *local_38;
  
  (**(code **)(**(long **)(param_1 + 0x5c8) + 0x10))(local_48);
  local_58 = (undefined8 *)0x0;
  uStack_50 = 0;
  FUN_01ada348(&local_58,local_48);
  plVar6 = local_48[0];
  if (local_48[0] != (long *)0x0) {
    plVar1 = local_48[0] + 1;
    do {
      iVar8 = (int)*plVar1 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *(int *)plVar1 = iVar8;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar8 == 0) {
      local_48[0][2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar11 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar11;
      local_38 = (long *)*plVar6;
      FUN_02a44274(lVar11 + 0xd8,&local_38);
    }
  }
  if (local_58 == (undefined8 *)0x0) {
    local_38 = (long *)0x0;
    plVar6 = local_38;
  }
  else {
    FUN_00c9d0d4(&local_38);
    puVar7 = local_58;
    plVar6 = local_38;
    if (local_58 != (undefined8 *)0x0) {
      piVar2 = (int *)(local_58 + 1);
      do {
        iVar8 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = iVar8 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar8 + -1 == 0) {
        local_58[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar11 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar11;
        local_48[0] = (long *)*puVar7;
        FUN_02a44274(lVar11 + 0xd8,local_48);
        plVar6 = local_38;
      }
    }
  }
  if (plVar6 == (long *)0x0) {
    return;
  }
  local_38 = plVar6;
  FUN_01ad7df8(local_48,param_1);
  plVar1 = local_48[0];
  if (local_48[0] == (long *)0x0) {
    local_60 = (long *)0x0;
  }
  else {
    FUN_00b9e8a4(&local_60,local_48[0]);
    plVar3 = plVar1 + 1;
    do {
      iVar8 = (int)*plVar3 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar5) {
        *(int *)plVar3 = iVar8;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar8 == 0) {
      plVar1[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar11 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar11;
      local_58 = (undefined8 *)*plVar1;
      FUN_02a44274(lVar11 + 0xd8,&local_58);
    }
  }
  if (local_60 == (long *)0x0) goto joined_r0x01ad99b4;
  iVar8 = (int)plVar6[0x11];
  if ((0 < iVar8) && (local_48[0] = (long *)0x7400dcdd176778b6, iVar8 < 0x15)) {
    FUN_01a51334(local_60,local_48,*(undefined4 *)(&DAT_03a7cbd0 + (long)(iVar8 + -1) * 4));
  }
  plVar1 = local_60;
  iVar8 = *(int *)((long)plVar6 + 0x8c);
  if (0 < iVar8) {
    if (iVar8 == 100) {
      local_48[0] = (long *)0x0;
      uVar9 = FUN_01a5a0d4(local_60);
      if ((uVar9 & 1) != 0) {
        uVar10 = 1;
LAB_01ad9a74:
        local_48[0] = (long *)0x92f57e69f162f3ec;
        FUN_01a51334(plVar1,local_48,uVar10);
        FUN_01a5bd74(plVar1,&DAT_03a7cc50,1);
      }
    }
    else {
      local_48[0] = (long *)0x0;
      uVar9 = FUN_01a5a0d4(local_60);
      if (((uVar9 & 1) != 0) && (local_48[0] = (long *)0x92f57e69f162f3ec, iVar8 < 0x13)) {
        uVar10 = *(undefined4 *)(&DAT_03a7cb68 + (long)(iVar8 + -1) * 4);
        goto LAB_01ad9a74;
      }
    }
  }
  plVar1 = local_60;
  iVar8 = (int)plVar6[0x12];
  if ((0 < iVar8) && (local_48[0] = (long *)0xd5921e6394bb2fa1, iVar8 < 4)) {
    FUN_01a51334(local_60,local_48,*(undefined4 *)(&DAT_03a7cbb0 + (long)(iVar8 + -1) * 4));
    FUN_01a51334(plVar1,&DAT_03a7cc40,2);
  }
  plVar1 = local_60;
  iVar8 = *(int *)((long)plVar6 + 0x94);
  if (0 < iVar8) {
    local_48[0] = (long *)0xa99e3fac11764a7;
    FUN_01a51334(local_60,&DAT_03a7cc38,1);
    if (iVar8 < 3) {
      FUN_01a51334(plVar1,local_48,*(undefined4 *)(&DAT_0388a600 + (long)(iVar8 + -1) * 4));
    }
  }
  if (0 < (int)plVar6[0x13]) {
    FUN_01bde340(local_60,(int)plVar6[0x13] + -1);
  }
  if (local_60 != (long *)0x0) {
    lVar11 = local_60[0xb];
    piVar2 = (int *)(lVar11 + 0xc);
    do {
      iVar8 = *piVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = iVar8 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar8 + -1 == 0) {
      *(undefined8 *)(lVar11 + 0x18) = 0;
      (**(code **)(*local_60 + 0x20))();
    }
  }
joined_r0x01ad99b4:
  if (local_38 != (long *)0x0) {
    lVar11 = local_38[0xb];
    piVar2 = (int *)(lVar11 + 0xc);
    do {
      iVar8 = *piVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = iVar8 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar8 + -1 == 0) {
      *(undefined8 *)(lVar11 + 0x18) = 0;
      (**(code **)(*local_38 + 0x20))();
    }
  }
  return;
}


