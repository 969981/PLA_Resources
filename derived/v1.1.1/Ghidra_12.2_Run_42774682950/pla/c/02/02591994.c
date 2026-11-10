/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02591994; name: FUN_02591994
 */


undefined8 * FUN_02591994(undefined8 *param_1,uint param_2,long param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  bool bVar8;
  int iVar9;
  undefined8 *puVar10;
  long *plVar11;
  undefined8 uVar12;
  long lVar13;
  long *plVar14;
  ulong local_100;
  char *local_f8;
  undefined8 local_f0;
  long *local_e8;
  undefined8 *local_e0;
  undefined8 local_d8;
  undefined8 *local_d0;
  undefined8 local_c8;
  long *local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 uStack_a8;
  undefined8 *local_a0;
  undefined8 uStack_98;
  undefined8 *local_90;
  undefined8 uStack_88;
  undefined8 *local_80;
  undefined8 uStack_78;
  undefined1 local_70;
  long *local_58;
  
  puVar10 = param_1;
  if (((*PTR_DAT_04379690 & 1) == 0) &&
     (puVar10 = (undefined8 *)__cxa_guard_acquire(PTR_DAT_04379690), (int)puVar10 != 0)) {
    FUN_00100250(PTR_LAB_043796a8,PTR_DAT_04379698,&PTR_LOOP_0411a000);
    puVar10 = (undefined8 *)__cxa_guard_release(PTR_DAT_04379690);
  }
  lVar13 = *(long *)PTR_DAT_04379698;
  *(long *)PTR_DAT_043796a0 = lVar13;
  plVar14 = *(long **)(*(long *)(lVar13 + 0x50) + 0x30);
  if (plVar14 != (long *)0x0) {
    lVar13 = plVar14[0xb];
    puVar10 = *(undefined8 **)(lVar13 + 0x18);
    if (puVar10 == (undefined8 *)0x0) goto LAB_025927e4;
    if (*(long *)(lVar13 + 0x10) == 0) {
      puVar10 = (undefined8 *)(**(code **)*puVar10)();
      *(undefined8 **)(lVar13 + 0x10) = puVar10;
    }
    piVar1 = (int *)(lVar13 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if ((*(byte *)(plVar14 + 0xda) & 3) == 0) {
    local_100 = 0x7f7e4efd5cc9936b;
    local_f8 = "FabhView";
    local_f0 = 8;
    local_e8 = (long *)0x0;
    lVar13 = FUN_0146fe3c(plVar14[0x99],&local_100);
    if (local_e8 != (long *)0x0) {
      (**(code **)(*local_e8 + 0x20))();
    }
    if (lVar13 == 0) {
LAB_025927e4:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    puVar10 = (undefined8 *)FUN_01474048(lVar13,param_3);
  }
  if (1 < param_2) {
    FUN_02593260();
    if (((*PTR_DAT_04382e98 & 1) == 0) &&
       (iVar9 = __cxa_guard_acquire(PTR_DAT_04382e98), puVar5 = PTR_DAT_04382ea0,
       puVar4 = PTR_DAT_043794d8, iVar9 != 0)) {
      if (((*PTR_DAT_043794d0 & 1) == 0) &&
         (iVar9 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar9 != 0)) {
        uVar12 = FUN_0087f8f0();
        *(undefined8 *)puVar4 = uVar12;
        __cxa_guard_release(PTR_DAT_043794d0);
      }
      *(undefined **)puVar5 = puVar4;
      __cxa_guard_release(PTR_DAT_04382e98);
    }
    return (undefined8 *)PTR_DAT_04382ea0;
  }
  param_1[(long)(int)param_2 * 10 + 0x3f] = *(undefined8 *)(param_3 + 0x28);
  param_1[(long)(int)param_2 * 10 + 0x3e] = *(undefined8 *)(param_3 + 0x20);
  param_1[(long)(int)param_2 * 10 + 0x41] = *(undefined8 *)(param_3 + 0x38);
  param_1[(long)(int)param_2 * 10 + 0x40] = *(undefined8 *)(param_3 + 0x30);
  *(undefined1 *)(param_1 + (long)(int)param_2 * 10 + 0x3c) = 1;
  iVar9 = *(int *)(param_3 + 0x40);
  if (iVar9 == 2) {
    local_70 = 0;
    local_ac = 0x3f800000;
    uStack_a8 = 0x3f800000;
    local_b0 = 0;
    local_c0 = (long *)0x0;
    local_b8 = 0;
    local_100 = CONCAT44(local_100._4_4_,4);
    local_d0 = (undefined8 *)0x0;
    local_c8 = 0;
    local_e0 = (undefined8 *)0x0;
    local_d8 = 0;
    local_f0 = 0;
    local_e8 = (long *)0x0;
    local_a0 = (undefined8 *)0x0;
    uStack_98 = 0;
    local_90 = (undefined8 *)0x0;
    uStack_88 = 0;
    local_80 = (undefined8 *)0x0;
    uStack_78 = 0;
    FUN_00b636fc(&local_e0,param_3 + 0x90);
    FUN_00b65954(&local_a0,param_3 + 0xa0);
    FUN_00b65bcc(&local_90,param_3 + 0xb0);
    FUN_017db6d4(&local_80,param_3 + 0xc0);
    local_70 = *(undefined1 *)(param_3 + 0xd0);
    if (*(char *)(param_1 + 0x16) == '\0') {
      FUN_02594b30(param_1 + 0x16,&local_100);
      puVar10 = local_80;
    }
    else {
      param_1[0x19] = local_f8;
      param_1[0x1b] = local_e8;
      param_1[0x1a] = local_f0;
      param_1[0x18] = local_100;
      FUN_00b636fc(param_1 + 0x1c,&local_e0);
      FUN_008c4b3c(param_1 + 0x1e,&local_d0);
      plVar7 = local_c0;
      if (local_c0 != (long *)0x0) {
        (**(code **)(*local_c0 + 0x18))(local_c0);
      }
      plVar11 = (long *)param_1[0x20];
      param_1[0x20] = plVar7;
      if (plVar11 != (long *)0x0) {
        (**(code **)(*plVar11 + 0x20))();
      }
      *(undefined4 *)(param_1 + 0x23) = uStack_a8;
      param_1[0x21] = local_b8;
      param_1[0x22] = CONCAT44(local_ac,local_b0);
      FUN_00b65954(param_1 + 0x24,&local_a0);
      FUN_00b65bcc(param_1 + 0x26,&local_90);
      FUN_017db6d4(param_1 + 0x28,&local_80);
      *(undefined1 *)(param_1 + 0x2a) = local_70;
      puVar10 = local_80;
    }
    local_80 = puVar10;
    if (puVar10 != (undefined8 *)0x0) {
      piVar1 = (int *)(puVar10 + 1);
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
        puVar10[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar13 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar13;
        local_58 = (long *)*puVar10;
        FUN_02a44274(lVar13 + 0xd8,&local_58);
      }
    }
    puVar10 = local_90;
    if (local_90 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_90 + 1);
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
        local_90[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar13 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar13;
        local_58 = (long *)*puVar10;
        FUN_02a44274(lVar13 + 0xd8,&local_58);
      }
    }
    puVar10 = local_a0;
    if (local_a0 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_a0 + 1);
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
        local_a0[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar13 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar13;
        local_58 = (long *)*puVar10;
        FUN_02a44274(lVar13 + 0xd8,&local_58);
      }
    }
    puVar10 = (undefined8 *)0x0;
    if (local_c0 != (long *)0x0) {
      puVar10 = (undefined8 *)(**(code **)(*local_c0 + 0x20))();
    }
    puVar6 = local_d0;
    if (local_d0 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_d0 + 1);
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
        local_d0[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar13 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar13;
        local_58 = (long *)*puVar6;
        puVar10 = (undefined8 *)FUN_02a44274(lVar13 + 0xd8,&local_58);
      }
    }
    if (local_e0 == (undefined8 *)0x0) goto LAB_02592218;
    piVar1 = (int *)(local_e0 + 1);
    do {
      bVar8 = *piVar1 + -1 == 0;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  else if (iVar9 == 1) {
    local_70 = 0;
    local_ac = 0x3f800000;
    uStack_a8 = 0x3f800000;
    local_b0 = 0;
    local_c0 = (long *)0x0;
    local_b8 = 0;
    local_100 = CONCAT44(local_100._4_4_,2);
    local_d0 = (undefined8 *)0x0;
    local_c8 = 0;
    local_e0 = (undefined8 *)0x0;
    local_d8 = 0;
    local_f0 = 0;
    local_e8 = (long *)0x0;
    local_a0 = (undefined8 *)0x0;
    uStack_98 = 0;
    local_90 = (undefined8 *)0x0;
    uStack_88 = 0;
    local_80 = (undefined8 *)0x0;
    uStack_78 = 0;
    FUN_008c4b3c(&local_d0,param_3 + 0x60);
    FUN_00947cf8(&local_58,*(undefined8 *)(param_3 + 0x78));
    plVar7 = local_c0;
    local_c0 = (long *)0x0;
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 0x20))();
    }
    local_c0 = local_58;
    FUN_00b65954(&local_a0,param_3 + 0xa0);
    FUN_00b65bcc(&local_90,param_3 + 0xb0);
    FUN_017db6d4(&local_80,param_3 + 0xc0);
    local_70 = *(undefined1 *)(param_3 + 0xd0);
    if (*(char *)(param_1 + 0x16) == '\0') {
      FUN_02594b30(param_1 + 0x16,&local_100);
      puVar10 = local_80;
    }
    else {
      param_1[0x19] = local_f8;
      param_1[0x1b] = local_e8;
      param_1[0x1a] = local_f0;
      param_1[0x18] = local_100;
      FUN_00b636fc(param_1 + 0x1c,&local_e0);
      FUN_008c4b3c(param_1 + 0x1e,&local_d0);
      plVar7 = local_c0;
      if (local_c0 != (long *)0x0) {
        (**(code **)(*local_c0 + 0x18))(local_c0);
      }
      plVar11 = (long *)param_1[0x20];
      param_1[0x20] = plVar7;
      if (plVar11 != (long *)0x0) {
        (**(code **)(*plVar11 + 0x20))();
      }
      *(undefined4 *)(param_1 + 0x23) = uStack_a8;
      param_1[0x21] = local_b8;
      param_1[0x22] = CONCAT44(local_ac,local_b0);
      FUN_00b65954(param_1 + 0x24,&local_a0);
      FUN_00b65bcc(param_1 + 0x26,&local_90);
      FUN_017db6d4(param_1 + 0x28,&local_80);
      *(undefined1 *)(param_1 + 0x2a) = local_70;
      puVar10 = local_80;
    }
    local_80 = puVar10;
    if (puVar10 != (undefined8 *)0x0) {
      piVar1 = (int *)(puVar10 + 1);
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
        puVar10[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar13 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar13;
        local_58 = (long *)*puVar10;
        FUN_02a44274(lVar13 + 0xd8,&local_58);
      }
    }
    puVar10 = local_90;
    if (local_90 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_90 + 1);
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
        local_90[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar13 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar13;
        local_58 = (long *)*puVar10;
        FUN_02a44274(lVar13 + 0xd8,&local_58);
      }
    }
    puVar10 = local_a0;
    if (local_a0 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_a0 + 1);
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
        local_a0[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar13 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar13;
        local_58 = (long *)*puVar10;
        FUN_02a44274(lVar13 + 0xd8,&local_58);
      }
    }
    puVar10 = (undefined8 *)0x0;
    if (local_c0 != (long *)0x0) {
      puVar10 = (undefined8 *)(**(code **)(*local_c0 + 0x20))();
    }
    puVar6 = local_d0;
    if (local_d0 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_d0 + 1);
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
        local_d0[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar13 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar13;
        local_58 = (long *)*puVar6;
        puVar10 = (undefined8 *)FUN_02a44274(lVar13 + 0xd8,&local_58);
      }
    }
    if (local_e0 == (undefined8 *)0x0) goto LAB_02592218;
    piVar1 = (int *)(local_e0 + 1);
    do {
      bVar8 = *piVar1 + -1 == 0;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  else {
    if (iVar9 != 0) goto LAB_02592218;
    uStack_a8 = 0x3f800000;
    local_a0 = (undefined8 *)0x0;
    uStack_98 = 0;
    local_70 = 0;
    local_100 = local_100 & 0xffffffff00000000;
    local_80 = (undefined8 *)0x0;
    uStack_78 = 0;
    local_90 = (undefined8 *)0x0;
    uStack_88 = 0;
    local_d8 = 0;
    local_d0 = (undefined8 *)0x0;
    local_c8 = 0;
    local_c0 = (long *)0x0;
    local_b8 = 0;
    local_b0 = 0;
    local_ac = 0x3f800000;
    local_e8 = *(long **)(param_3 + 0x58);
    local_e0 = (undefined8 *)0x0;
    local_f0 = *(undefined8 *)(param_3 + 0x50);
    FUN_00b65954(&local_a0,param_3 + 0xa0);
    FUN_00b65bcc(&local_90,param_3 + 0xb0);
    FUN_017db6d4(&local_80,param_3 + 0xc0);
    local_70 = *(undefined1 *)(param_3 + 0xd0);
    if (*(char *)(param_1 + 0x16) == '\0') {
      FUN_02594b30(param_1 + 0x16,&local_100);
      puVar10 = local_80;
    }
    else {
      param_1[0x19] = local_f8;
      param_1[0x1b] = local_e8;
      param_1[0x1a] = local_f0;
      param_1[0x18] = local_100;
      FUN_00b636fc(param_1 + 0x1c,&local_e0);
      FUN_008c4b3c(param_1 + 0x1e,&local_d0);
      plVar7 = local_c0;
      if (local_c0 != (long *)0x0) {
        (**(code **)(*local_c0 + 0x18))(local_c0);
      }
      plVar11 = (long *)param_1[0x20];
      param_1[0x20] = plVar7;
      if (plVar11 != (long *)0x0) {
        (**(code **)(*plVar11 + 0x20))();
      }
      *(undefined4 *)(param_1 + 0x23) = uStack_a8;
      param_1[0x21] = local_b8;
      param_1[0x22] = CONCAT44(local_ac,local_b0);
      FUN_00b65954(param_1 + 0x24,&local_a0);
      FUN_00b65bcc(param_1 + 0x26,&local_90);
      FUN_017db6d4(param_1 + 0x28,&local_80);
      *(undefined1 *)(param_1 + 0x2a) = local_70;
      puVar10 = local_80;
    }
    local_80 = puVar10;
    if (puVar10 != (undefined8 *)0x0) {
      piVar1 = (int *)(puVar10 + 1);
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
        puVar10[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar13 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar13;
        local_58 = (long *)*puVar10;
        FUN_02a44274(lVar13 + 0xd8,&local_58);
      }
    }
    puVar10 = local_90;
    if (local_90 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_90 + 1);
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
        local_90[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar13 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar13;
        local_58 = (long *)*puVar10;
        FUN_02a44274(lVar13 + 0xd8,&local_58);
      }
    }
    puVar10 = local_a0;
    if (local_a0 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_a0 + 1);
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
        local_a0[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar13 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar13;
        local_58 = (long *)*puVar10;
        FUN_02a44274(lVar13 + 0xd8,&local_58);
      }
    }
    puVar10 = (undefined8 *)0x0;
    if (local_c0 != (long *)0x0) {
      puVar10 = (undefined8 *)(**(code **)(*local_c0 + 0x20))();
    }
    puVar6 = local_d0;
    if (local_d0 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_d0 + 1);
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
        local_d0[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar13 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar13;
        local_58 = (long *)*puVar6;
        puVar10 = (undefined8 *)FUN_02a44274(lVar13 + 0xd8,&local_58);
      }
    }
    if (local_e0 == (undefined8 *)0x0) goto LAB_02592218;
    piVar1 = (int *)(local_e0 + 1);
    do {
      bVar8 = *piVar1 + -1 == 0;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  puVar6 = local_e0;
  if (bVar8) {
    local_e0[2] = 0;
    if (((*PTR_DAT_04379498 & 1) == 0) &&
       (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
      FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379498);
    }
    lVar13 = *(long *)PTR_DAT_043794a0;
    *(long *)PTR_DAT_043794a8 = lVar13;
    local_58 = (long *)*puVar6;
    puVar10 = (undefined8 *)FUN_02a44274(lVar13 + 0xd8,&local_58);
  }
LAB_02592218:
  lVar13 = plVar14[0xb];
  piVar1 = (int *)(lVar13 + 0xc);
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
    *(undefined8 *)(lVar13 + 0x18) = 0;
    puVar10 = (undefined8 *)(**(code **)(*plVar14 + 0x20))(plVar14);
  }
  return puVar10;
}


