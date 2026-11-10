/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b45240; name: FUN_02b45240
 */


void FUN_02b45240(long param_1,long *param_2,ulong param_3,undefined8 param_4,undefined8 param_5)

{
  int *piVar1;
  undefined8 *puVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  ulong uVar11;
  undefined8 uVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  long *plVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  long *plVar20;
  long lVar21;
  undefined **local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  long *local_68;
  
  uVar12 = DAT_0437ae18;
  puVar9 = PTR_DAT_0437a7d0;
  puVar8 = PTR_DAT_0437a7c8;
  puVar7 = PTR_DAT_0437a7c0;
  puVar6 = PTR_DAT_0437a798;
  lVar13 = *(long *)(param_1 + 0x58);
  lVar15 = *(long *)(param_1 + 0x60);
  if (lVar13 != lVar15) {
    plVar20 = (long *)PTR_DAT_04379c88;
    do {
      if (*(long *)(lVar13 + 8) == 0) {
        plVar16 = (long *)puVar8;
        if ((*puVar6 & 1) == 0) {
          iVar10 = __cxa_guard_acquire();
          if (iVar10 != 0) {
            if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar7), iVar10 != 0)) {
              local_90 = (undefined **)FUN_00938550();
              FUN_00b0fde8(puVar9,&local_90);
              FUN_00100250(PTR_LAB_0437a8d8,puVar9,&PTR_LOOP_0411a000);
              __cxa_guard_release(puVar7);
            }
            FUN_00b0fd18(puVar8,puVar9,0);
            FUN_00100250(uVar12,puVar8,&PTR_LOOP_0411a000);
            __cxa_guard_release(puVar6);
          }
          param_3 = param_3 & 0xffffffff;
          plVar20 = (long *)PTR_DAT_04379c88;
        }
      }
      else {
        plVar16 = (long *)(*(long *)(lVar13 + 8) + 0x68);
      }
      plVar3 = plVar20;
      if (*plVar16 != 0) {
        plVar3 = (long *)(*plVar16 + 0x58);
      }
      plVar16 = plVar20;
      if (*param_2 != 0) {
        plVar16 = (long *)(*param_2 + 0x58);
      }
      if (*plVar3 == *plVar16) {
        return;
      }
      lVar13 = lVar13 + 0x30;
    } while (lVar15 != lVar13);
  }
  local_70 = 0;
  local_68 = (long *)0x0;
  local_80 = 0;
  uStack_78 = 0;
  local_90 = &PTR_LAB_04284e00;
  uStack_88 = 0;
  if ((param_3 & 1) == 0) {
    FUN_02b48878(&local_90,0,param_2,param_4,param_5);
  }
  else {
    uVar11 = FUN_02b48878(&local_90,1,param_2,param_4,param_5);
    plVar20 = local_68;
    if (((uVar11 & 1) != 0) && (local_68 != (long *)0x0)) {
      lVar13 = local_68[0xb];
      if (*(undefined8 **)(lVar13 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0);
      }
      if (*(long *)(lVar13 + 0x10) == 0) {
        uVar12 = (**(code **)**(undefined8 **)(lVar13 + 0x18))();
        *(undefined8 *)(lVar13 + 0x10) = uVar12;
      }
      piVar1 = (int *)(lVar13 + 0xc);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = *piVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      lVar13 = plVar20[0xb];
      piVar1 = (int *)(lVar13 + 0xc);
      do {
        iVar10 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar10 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar10 + -1 == 0) {
        *(undefined8 *)(lVar13 + 0x18) = 0;
        (**(code **)(*plVar20 + 0x20))(plVar20);
      }
    }
  }
  uVar11 = *(ulong *)(param_1 + 0x60);
  puVar2 = (undefined8 *)(param_1 + 0x70);
  if (uVar11 < *(ulong *)(param_1 + 0x68)) {
    FUN_02b49dec(puVar2,uVar11,&local_90);
    *(long *)(param_1 + 0x60) = *(long *)(param_1 + 0x60) + 0x30;
  }
  else {
    uVar17 = *(ulong *)(param_1 + 0x78);
    lVar13 = (long)(uVar11 - *(long *)(param_1 + 0x58)) >> 4;
    if (0x7ffffffffffffffe < uVar17) {
      uVar17 = 0x7fffffffffffffff;
    }
    uVar11 = lVar13 * -0x5555555555555555 + 1;
    if (uVar17 < uVar11) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar15 = (long)(*(ulong *)(param_1 + 0x68) - *(long *)(param_1 + 0x58)) >> 4;
    uVar14 = lVar15 * 0x5555555555555556;
    if (uVar11 <= uVar14) {
      uVar11 = uVar14;
    }
    if ((ulong)(lVar15 * -0x5555555555555555) < uVar17 >> 1) {
      uVar17 = uVar11;
    }
    if (uVar17 == 0) {
      lVar15 = 0;
    }
    else {
      lVar15 = (**(code **)(*(long *)*puVar2 + 0x10))((long *)*puVar2,uVar17 * 0x30,8);
      if (lVar15 == 0) {
        (**(code **)(*(long *)*puVar2 + 0xb8))();
      }
    }
    lVar21 = lVar15 + lVar13 * 0x10;
    FUN_02b49dec(puVar2,lVar21,&local_90);
    lVar19 = *(long *)(param_1 + 0x58);
    lVar18 = *(long *)(param_1 + 0x60);
    lVar13 = lVar21 + 0x30;
    if (lVar18 == lVar19) {
      lVar18 = lVar19;
    }
    else {
      do {
        lVar21 = lVar21 + -0x30;
        lVar18 = lVar18 + -0x30;
        FUN_02b486e4(puVar2,lVar21,lVar18);
      } while (lVar19 != lVar18);
      lVar19 = *(long *)(param_1 + 0x58);
      lVar18 = *(long *)(param_1 + 0x60);
    }
    *(long *)(param_1 + 0x58) = lVar21;
    *(long *)(param_1 + 0x60) = lVar13;
    lVar13 = *(long *)(param_1 + 0x68);
    *(ulong *)(param_1 + 0x68) = lVar15 + uVar17 * 0x30;
    while (lVar18 != lVar19) {
      lVar18 = lVar18 + -0x30;
      FUN_02b456fc(lVar18);
    }
    if (lVar19 != 0) {
      plVar20 = (long *)*puVar2;
      lVar13 = lVar13 - lVar19;
      uVar11 = (**(code **)(*plVar20 + 0xc0))(plVar20);
      if ((uVar11 & 1) != 0) {
        lVar15 = tpidr_el0;
        if (*(char *)(lVar15 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar15 + 0x38d488) = 1;
          *(undefined8 *)(lVar15 + 0x38d478) = 0;
          *(undefined8 *)(lVar15 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar15 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar15 + 0x38d480)) {
          FUN_02bcc824(plVar20,lVar19,lVar13,8);
          goto LAB_02b45648;
        }
      }
      (**(code **)(*plVar20 + 0x18))(plVar20,lVar19,lVar13,8);
    }
  }
LAB_02b45648:
  FUN_02b456fc(&local_90);
  return;
}


