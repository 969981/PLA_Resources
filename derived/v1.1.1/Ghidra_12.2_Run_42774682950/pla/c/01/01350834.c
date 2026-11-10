/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01350834; name: FUN_01350834
 */


void FUN_01350834(long param_1)

{
  long *plVar1;
  long *plVar2;
  int *piVar3;
  bool bVar4;
  undefined8 *puVar5;
  char cVar6;
  int iVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  long *local_be8;
  undefined8 *local_be0;
  undefined8 uStack_bd8;
  undefined8 local_bd0;
  char *pcStack_bc8;
  undefined8 local_bc0;
  long *local_bb8;
  long *local_bb0;
  char *pcStack_ba8;
  undefined8 local_ba0;
  long *local_b98;
  long local_b90;
  long local_b88;
  long local_b80;
  long *plStack_b78;
  undefined8 local_b70;
  undefined8 uStack_b68;
  undefined4 local_b60;
  long *local_b58;
  undefined1 auStack_b50 [1168];
  undefined1 local_6c0;
  undefined8 *local_6b8;
  undefined8 *local_6a8;
  char local_698 [8];
  long *local_690;
  undefined1 *local_688;
  undefined8 local_680;
  long *local_678;
  long local_670;
  long local_668;
  long local_660;
  long *local_658;
  undefined2 local_1d8;
  undefined1 local_1d4;
  long *local_48;
  
  FUN_01353538(auStack_b50);
  local_1d8 = 0x101;
  local_1d4 = 1;
  local_6c0 = 1;
  if (((*PTR_DAT_04379558 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04379558), iVar7 != 0))
  {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  *(undefined8 *)PTR_DAT_04379568 = *(undefined8 *)PTR_DAT_04379560;
  FUN_01148cdc(&local_48);
  if (((*PTR_DAT_0437a780 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_0437a780), iVar7 != 0))
  {
    FUN_00100250(PTR_LAB_0437a8a0,PTR_DAT_0437a788,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437a780);
  }
  *(undefined8 *)PTR_DAT_0437a790 = *(undefined8 *)PTR_DAT_0437a788;
  FUN_01e65870(&local_bb0);
  if (local_bb0 == (long *)0x0) {
    local_b58 = (long *)0x0;
  }
  else {
    FUN_0135dddc(&local_b58);
    plVar2 = local_bb0;
    if (local_bb0 != (long *)0x0) {
      plVar1 = local_bb0 + 1;
      do {
        iVar7 = (int)*plVar1 + -1;
        cVar6 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *(int *)plVar1 = iVar7;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar7 == 0) {
        local_bb0[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar13 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar13;
        local_be0 = (undefined8 *)*plVar2;
        FUN_02a44274(lVar13 + 0xd8,&local_be0);
      }
    }
  }
  if (local_b58 != (long *)0x0) {
    plStack_b78 = *(long **)(param_1 + 8);
    local_b60 = 0;
    local_bb0 = (long *)&DAT_cbf29ce484222645;
    pcStack_ba8 = "";
    local_ba0 = 0;
    local_b98 = (long *)0x0;
    local_b90 = 0;
    local_b88 = 0;
    local_b80 = 0;
    local_b70 = 0x555555555555555;
    uStack_b68 = 0;
    cVar6 = FUN_01123ce8(local_48);
    local_bd0 = 0x2124b658d0eb9309;
    if (cVar6 != '\x01') {
      local_bd0 = 0x80178992e4add76;
    }
    pcStack_bc8 = "p2_face";
    if (cVar6 != '\x01') {
      pcStack_bc8 = "p1_face";
    }
    local_bc0 = 7;
    local_bb8 = (long *)0x0;
    uVar8 = FUN_00b1ebe8(local_b58,&local_bb0,&local_bd0);
    if (local_bb8 != (long *)0x0) {
      (**(code **)(*local_bb8 + 0x20))();
    }
    plVar2 = local_b98;
    lVar10 = local_b90;
    lVar13 = local_b88;
    if ((uVar8 & 1) != 0) {
      if (local_698[0] == '\0') {
        FUN_0135df50(local_698,&local_bb0);
        lVar10 = local_b90;
        lVar13 = local_b88;
      }
      else {
        local_688 = pcStack_ba8;
        local_690 = local_bb0;
        local_680 = local_ba0;
        if (local_b98 != (long *)0x0) {
          (**(code **)(*local_b98 + 0x18))(local_b98);
        }
        plVar1 = local_678;
        local_678 = plVar2;
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 0x20))();
        }
        FUN_0135e0a4(&local_670,&local_b90);
        lVar10 = local_b90;
        lVar13 = local_b88;
      }
    }
    lVar11 = lVar10;
    local_b88 = lVar13;
    plVar2 = plStack_b78;
    local_b90 = lVar10;
    if (lVar10 != 0) {
      while (local_b90 = lVar11, plStack_b78 = plVar2, lVar13 != lVar10) {
        plVar1 = (long *)(lVar13 + -0x18);
        lVar13 = lVar13 + -0x30;
        if ((long *)*plVar1 != (long *)0x0) {
          (**(code **)(*(long *)*plVar1 + 0x20))();
          lVar11 = local_b90;
          plVar2 = plStack_b78;
        }
      }
      lVar13 = local_b80 - lVar11;
      local_b88 = lVar10;
      uVar8 = (**(code **)(*plVar2 + 0xc0))(plVar2);
      if ((uVar8 & 1) != 0) {
        lVar10 = tpidr_el0;
        if (*(char *)(lVar10 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar10 + 0x38d488) = 1;
          *(undefined8 *)(lVar10 + 0x38d478) = 0;
          *(undefined8 *)(lVar10 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar10 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar10 + 0x38d480)) {
          FUN_02bcc824(plVar2,lVar11,lVar13,8);
          goto joined_r0x01350e90;
        }
      }
      (**(code **)(*plVar2 + 0x18))(plVar2,lVar11,lVar13,8);
    }
joined_r0x01350e90:
    if (local_b98 != (long *)0x0) {
      (**(code **)(*local_b98 + 0x20))();
    }
    if (local_b58 != (long *)0x0) {
      lVar13 = local_b58[0xb];
      piVar3 = (int *)(lVar13 + 0xc);
      do {
        iVar7 = *piVar3;
        cVar6 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar4) {
          *piVar3 = iVar7 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar7 + -1 == 0) {
        *(undefined8 *)(lVar13 + 0x18) = 0;
        (**(code **)(*local_b58 + 0x20))();
      }
    }
  }
  if (local_48 != (long *)0x0) {
    lVar13 = local_48[0xb];
    piVar3 = (int *)(lVar13 + 0xc);
    do {
      iVar7 = *piVar3;
      cVar6 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar4) {
        *piVar3 = iVar7 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar7 + -1 == 0) {
      *(undefined8 *)(lVar13 + 0x18) = 0;
      (**(code **)(*local_48 + 0x20))();
    }
  }
  local_bb0 = (long *)&DAT_817adb705f596ed9;
  pcStack_ba8 = "player_controller";
  local_ba0 = 0x11;
  local_b98 = (long *)0x0;
  FUN_01cb5a10(auStack_b50,&local_bb0);
  if (local_b98 != (long *)0x0) {
    (**(code **)(*local_b98 + 0x20))();
  }
  lVar13 = *(long *)(param_1 + 0x98);
  (**(code **)(**(long **)(param_1 + 0x88) + 0x10))(&local_bb0);
  local_be0 = (undefined8 *)0x0;
  uStack_bd8 = 0;
  FUN_01355c20(&local_be0,&local_bb0);
  plVar2 = local_bb0;
  if (local_bb0 != (long *)0x0) {
    plVar1 = local_bb0 + 1;
    do {
      iVar7 = (int)*plVar1 + -1;
      cVar6 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar7;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar7 == 0) {
      local_bb0[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar10 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar10;
      local_48 = (long *)*plVar2;
      FUN_02a44274(lVar10 + 0xd8,&local_48);
    }
  }
  lVar13 = FUN_0135e7c8(lVar13,*(undefined8 *)(lVar13 + 8),&local_be0,auStack_b50);
  puVar5 = local_be0;
  if (local_be0 != (undefined8 *)0x0) {
    piVar3 = (int *)(local_be0 + 1);
    do {
      iVar7 = *piVar3;
      cVar6 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar4) {
        *piVar3 = iVar7 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar7 + -1 == 0) {
      local_be0[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar10 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar10;
      local_bb0 = (long *)*puVar5;
      FUN_02a44274(lVar10 + 0xd8,&local_bb0);
    }
  }
  uVar12 = *(undefined8 *)(param_1 + 0x90);
  local_be8 = *(long **)(lVar13 + 0x1280);
  if (local_be8 != (long *)0x0) {
    lVar13 = local_be8[0xb];
    if (*(undefined8 **)(lVar13 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar13 + 0x10) == 0) {
      uVar9 = (**(code **)**(undefined8 **)(lVar13 + 0x18))();
      *(undefined8 *)(lVar13 + 0x10) = uVar9;
    }
    piVar3 = (int *)(lVar13 + 0xc);
    do {
      cVar6 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar4) {
        *piVar3 = *piVar3 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  FUN_01b313b0(uVar12,&local_be8);
  lVar13 = local_670;
  lVar10 = local_668;
  if (local_be8 != (long *)0x0) {
    lVar11 = local_be8[0xb];
    piVar3 = (int *)(lVar11 + 0xc);
    do {
      iVar7 = *piVar3;
      cVar6 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar4) {
        *piVar3 = iVar7 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar7 + -1 == 0) {
      *(undefined8 *)(lVar11 + 0x18) = 0;
      (**(code **)(*local_be8 + 0x20))();
      lVar13 = local_670;
      lVar10 = local_668;
    }
  }
  if (local_698[0] == '\0') goto LAB_01350d80;
  if (lVar13 != 0) {
    local_670 = lVar13;
    if (lVar10 == lVar13) {
    }
    else {
      do {
        plVar2 = (long *)(lVar10 + -0x18);
        lVar10 = lVar10 + -0x30;
        if ((long *)*plVar2 != (long *)0x0) {
          (**(code **)(*(long *)*plVar2 + 0x20))();
        }
      } while (lVar13 != lVar10);
      lVar13 = local_670;
    }
    uVar8 = (**(code **)(*local_658 + 0xc0))(local_658);
    if ((uVar8 & 1) != 0) {
      lVar10 = tpidr_el0;
      if (*(char *)(lVar10 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar10 + 0x38d488) = 1;
        *(undefined8 *)(lVar10 + 0x38d478) = 0;
        *(undefined8 *)(lVar10 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar10 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar10 + 0x38d480)) {
        FUN_02bcc824(local_658,lVar13,local_660 - lVar13,8);
        goto joined_r0x01350d6c;
      }
    }
    (**(code **)(*local_658 + 0x18))(local_658,lVar13,local_660 - lVar13,8);
  }
joined_r0x01350d6c:
  if (local_678 != (long *)0x0) {
    (**(code **)(*local_678 + 0x20))();
  }
  local_698[0] = '\0';
LAB_01350d80:
  if (local_6a8 != (undefined8 *)0x0) {
    piVar3 = (int *)(local_6a8 + 1);
    do {
      iVar7 = *piVar3;
      cVar6 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar4) {
        *piVar3 = iVar7 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar7 + -1 == 0) {
      local_6a8[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar13 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar13;
      local_bb0 = (long *)*local_6a8;
      FUN_02a44274(lVar13 + 0xd8,&local_bb0);
    }
  }
  if (local_6b8 != (undefined8 *)0x0) {
    piVar3 = (int *)(local_6b8 + 1);
    do {
      iVar7 = *piVar3;
      cVar6 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar4) {
        *piVar3 = iVar7 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar7 + -1 == 0) {
      local_6b8[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar13 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar13;
      local_bb0 = (long *)*local_6b8;
      FUN_02a44274(lVar13 + 0xd8,&local_bb0);
    }
  }
  return;
}


