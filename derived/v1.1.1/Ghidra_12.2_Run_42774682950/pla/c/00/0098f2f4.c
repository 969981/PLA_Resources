/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0098f2f4; name: FUN_0098f2f4
 */


void FUN_0098f2f4(long param_1,undefined8 *param_2)

{
  long *plVar1;
  int *piVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  float extraout_var;
  long lVar14;
  long *local_60;
  long lStack_58;
  long *local_50;
  undefined8 uStack_48;
  long *local_38;
  
  puVar7 = PTR_DAT_04379578;
  if (((*PTR_DAT_04379578 & 1) == 0) &&
     (iVar10 = __cxa_guard_acquire(PTR_DAT_04379578), iVar10 != 0)) {
    FUN_00100250(PTR_LAB_043796d8,PTR_DAT_04379580,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379578);
  }
  puVar9 = PTR_DAT_04379588;
  puVar8 = PTR_DAT_04379580;
  lVar12 = *(long *)PTR_DAT_04379580;
  *(long *)PTR_DAT_04379588 = lVar12;
  FUN_0098f80c(&local_38,lVar12 + 0xd8);
  FUN_0199c220(&local_50,local_38);
  uVar11 = FUN_0098f934(&local_50);
  plVar6 = local_50;
  *(undefined8 *)(param_1 + 0x520) = uVar11;
  if (local_50 != (long *)0x0) {
    plVar1 = local_50 + 1;
    do {
      iVar10 = (int)*plVar1 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *(int *)plVar1 = iVar10;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar10 == 0) {
      local_50[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar12 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar12;
      local_60 = (long *)*plVar6;
      FUN_02a44274(lVar12 + 0xd8,&local_60);
    }
  }
  if (local_38 != (long *)0x0) {
    lVar12 = local_38[0xb];
    piVar2 = (int *)(lVar12 + 0xc);
    do {
      iVar10 = *piVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = iVar10 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar10 + -1 == 0) {
      *(undefined8 *)(lVar12 + 0x18) = 0;
      (**(code **)(*local_38 + 0x20))();
      bVar3 = *puVar7;
      goto joined_r0x0098f684;
    }
  }
  bVar3 = *puVar7;
joined_r0x0098f684:
  if (((bVar3 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04379578), iVar10 != 0)) {
    FUN_00100250(PTR_LAB_043796d8,PTR_DAT_04379580,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379578);
  }
  lVar12 = *(long *)puVar8;
  *(long *)puVar9 = lVar12;
  FUN_0098f80c(&local_38,lVar12 + 0xd8);
  FUN_0199bf58(&local_50,local_38);
  FUN_009643ac(param_1 + 0x510,&local_50);
  plVar6 = local_50;
  if (local_50 != (long *)0x0) {
    plVar1 = local_50 + 1;
    do {
      iVar10 = (int)*plVar1 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *(int *)plVar1 = iVar10;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar10 == 0) {
      local_50[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar12 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar12;
      local_60 = (long *)*plVar6;
      FUN_02a44274(lVar12 + 0xd8,&local_60);
    }
  }
  if (local_38 != (long *)0x0) {
    lVar12 = local_38[0xb];
    piVar2 = (int *)(lVar12 + 0xc);
    do {
      iVar10 = *piVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = iVar10 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar10 + -1 == 0) {
      *(undefined8 *)(lVar12 + 0x18) = 0;
      (**(code **)(*local_38 + 0x20))();
    }
  }
  *(undefined8 *)(param_1 + 0x330) = param_2[7];
  *(undefined1 *)(param_1 + 0x560) = *(undefined1 *)(param_2 + 0xd);
  *(undefined1 *)(param_1 + 0x561) = *(undefined1 *)((long)param_2 + 0x69);
  *(undefined1 *)(param_1 + 0x563) = *(undefined1 *)((long)param_2 + 0x6a);
  *(undefined1 *)(param_1 + 0x564) = *(undefined1 *)((long)param_2 + 0x6b);
  *(undefined4 *)(param_1 + 0x55c) = *(undefined4 *)((long)param_2 + 100);
  *(undefined1 *)(param_1 + 0x565) = *(undefined1 *)((long)param_2 + 0x6c);
  *(undefined1 *)(param_1 + 0x566) = *(undefined1 *)((long)param_2 + 0x6d);
  *(undefined1 *)(param_1 + 0x567) = *(undefined1 *)((long)param_2 + 0x6e);
  *(undefined1 *)(param_1 + 0x568) = *(undefined1 *)((long)param_2 + 0x6f);
  *(undefined1 *)(param_1 + 0x569) = *(undefined1 *)(param_2 + 0xe);
  lVar12 = FUN_0098fa40(*param_2,param_2[1],param_1);
  if (*(char *)(param_1 + 0x560) == '\0') {
    uVar11 = param_2[8];
    *(undefined8 *)(param_1 + 0x538) = param_2[9];
    *(undefined8 *)(param_1 + 0x530) = uVar11;
    *(undefined4 *)(param_1 + 0x540) = *(undefined4 *)(param_2 + 10);
  }
  else {
    local_50 = (long *)0x0;
    uStack_48 = 0;
    FUN_008c4b3c(&local_50,lVar12 + 8);
    FUN_00956dac(&local_60,&local_50);
    lVar14 = local_60[0x1b];
    lVar12 = local_60[0x1a];
    if (local_60 != (long *)0x0) {
      lVar13 = local_60[0xb];
      piVar2 = (int *)(lVar13 + 0xc);
      do {
        iVar10 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = iVar10 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar10 + -1 == 0) {
        *(undefined8 *)(lVar13 + 0x18) = 0;
        (**(code **)(*local_60 + 0x20))();
      }
    }
    *(long *)(param_1 + 0x538) = lVar14;
    *(long *)(param_1 + 0x530) = lVar12;
    FUN_00956dac(&local_38,&local_50);
    lStack_58 = local_38[0x19];
    local_60 = (long *)local_38[0x18];
    FUN_0098fad4(&local_60);
    *(float *)(param_1 + 0x540) =
         (*(float *)PTR_FloatDegree180_04372ce0 / *(float *)PTR_FloatPi_04372cf0) * extraout_var;
    plVar6 = local_50;
    if (local_38 != (long *)0x0) {
      lVar12 = local_38[0xb];
      piVar2 = (int *)(lVar12 + 0xc);
      do {
        iVar10 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = iVar10 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar10 + -1 == 0) {
        *(undefined8 *)(lVar12 + 0x18) = 0;
        (**(code **)(*local_38 + 0x20))();
        plVar6 = local_50;
      }
    }
    local_50 = plVar6;
    if (plVar6 != (long *)0x0) {
      plVar1 = plVar6 + 1;
      do {
        iVar10 = (int)*plVar1 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *(int *)plVar1 = iVar10;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar10 == 0) {
        plVar6[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar12 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar12;
        local_60 = (long *)*plVar6;
        FUN_02a44274(lVar12 + 0xd8,&local_60);
      }
    }
  }
  FUN_009907fc(param_1);
  FUN_009911c8(param_1,param_2);
  FUN_00991638(param_1,param_2);
  FUN_00991e3c(param_1,param_2);
  return;
}


