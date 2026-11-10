/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01f345c4; name: FUN_01f345c4
 */


undefined8 * FUN_01f345c4(undefined8 *param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 *local_b8;
  undefined8 uStack_b0;
  long *local_a8;
  char local_a0;
  undefined8 *local_90;
  undefined8 uStack_88;
  undefined8 *local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined1 local_60;
  undefined8 *local_48 [2];
  undefined8 local_38;
  
  local_a0 = 0;
  if (*(char *)(param_1 + 0x1c) == '\0') {
    return (undefined8 *)0x0;
  }
  local_90 = (undefined8 *)0x0;
  uStack_88 = 0;
  FUN_008c4b3c(&local_90,param_1 + 0x1e);
  local_80 = (undefined8 *)0x0;
  uStack_78 = 0;
  FUN_00b63bec(&local_80,param_1 + 0x20);
  local_68 = param_1[0x23];
  local_60 = *(undefined1 *)(param_1 + 0x24);
  local_70 = param_1[0x22];
  local_a0 = '\x01';
  FUN_00c1e8d8(&local_a8,&local_90);
  if (local_a8 == (long *)0x0) {
    bVar3 = false;
    puVar13 = local_80;
    goto joined_r0x01f34890;
  }
  (**(code **)(*local_a8 + 0x10))(local_48);
  local_b8 = (undefined8 *)0x0;
  uStack_b0 = 0;
  FUN_0087f944(&local_b8,local_48);
  puVar13 = local_48[0];
  if (local_48[0] != (undefined8 *)0x0) {
    piVar1 = (int *)(local_48[0] + 1);
    do {
      iVar9 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar9 + -1 == 0) {
      local_48[0][2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar12 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar12;
      local_38 = *puVar13;
      FUN_02a44274(lVar12 + 0xd8,&local_38);
    }
  }
  if (local_b8 == (undefined8 *)0x0) {
    param_1 = (undefined8 *)0x0;
  }
  else {
    puVar13 = (undefined8 *)local_b8[3];
    if (puVar13 == (undefined8 *)0x0) {
LAB_01f34914:
      param_1 = (undefined8 *)0x0;
      puVar6 = local_b8;
    }
    else {
      puVar10 = (undefined8 *)(**(code **)*puVar13)(puVar13);
      puVar5 = (undefined8 *)PTR_DAT_043794b8;
      if (((*PTR_DAT_043794b0 & 1) == 0) &&
         (iVar9 = __cxa_guard_acquire(PTR_DAT_043794b0), puVar7 = PTR_DAT_043794c8,
         puVar5 = (undefined8 *)PTR_DAT_043794b8, iVar9 != 0)) {
        if (((*PTR_DAT_043794c0 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_043794c0), puVar8 = PTR_DAT_043794d8, iVar9 != 0)) {
          if (((*PTR_DAT_043794d0 & 1) == 0) &&
             (iVar9 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar9 != 0)) {
            uVar11 = FUN_0087f8f0();
            *(undefined8 *)puVar8 = uVar11;
            __cxa_guard_release(PTR_DAT_043794d0);
          }
          *(undefined **)puVar7 = puVar8;
          __cxa_guard_release(PTR_DAT_043794c0);
        }
        puVar5 = (undefined8 *)PTR_DAT_043794b8;
        *(undefined **)PTR_DAT_043794b8 = puVar7;
        __cxa_guard_release(PTR_DAT_043794b0);
      }
      if (puVar10 == (undefined8 *)0x0) goto LAB_01f34914;
      do {
        puVar6 = local_b8;
        if (puVar10 == puVar5) {
          param_1 = puVar13 + -10;
          break;
        }
        puVar10 = (undefined8 *)*puVar10;
        param_1 = (undefined8 *)0x0;
      } while (puVar10 != (undefined8 *)0x0);
    }
    local_b8 = puVar6;
    if (puVar6 != (undefined8 *)0x0) {
      piVar1 = (int *)(puVar6 + 1);
      do {
        iVar9 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar9 + -1 == 0) {
        puVar6[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar12 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar12;
        local_48[0] = (undefined8 *)*puVar6;
        FUN_02a44274(lVar12 + 0xd8,local_48);
      }
    }
  }
  if (local_a8 != (long *)0x0) {
    lVar12 = local_a8[0xb];
    piVar1 = (int *)(lVar12 + 0xc);
    do {
      iVar9 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar9 == 1) {
      *(undefined8 *)(lVar12 + 0x18) = 0;
      (**(code **)(*local_a8 + 0x20))();
    }
  }
  bVar3 = true;
  puVar13 = local_80;
joined_r0x01f34890:
  if (local_a0 != '\0') {
    local_80 = puVar13;
    if (puVar13 != (undefined8 *)0x0) {
      piVar1 = (int *)(puVar13 + 1);
      do {
        iVar9 = *piVar1;
        cVar2 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar9 + -1 == 0) {
        puVar13[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar12 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar12;
        local_48[0] = (undefined8 *)*puVar13;
        FUN_02a44274(lVar12 + 0xd8,local_48);
      }
    }
    puVar13 = local_90;
    if (local_90 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_90 + 1);
      do {
        iVar9 = *piVar1;
        cVar2 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar9 + -1 == 0) {
        local_90[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar12 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar12;
        local_48[0] = (undefined8 *)*puVar13;
        FUN_02a44274(lVar12 + 0xd8,local_48);
      }
    }
  }
  if (bVar3) {
    return param_1;
  }
  return (undefined8 *)0x0;
}


