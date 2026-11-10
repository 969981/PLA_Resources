/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028bcc18; name: FUN_028bcc18
 */


void FUN_028bcc18(undefined8 *param_1,long *param_2,undefined8 param_3,uint param_4,
                 undefined8 *param_5)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  uint uVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  ulong uVar16;
  long local_a8;
  long *plStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  long local_88;
  long local_80;
  long local_78;
  long local_70;
  undefined8 *puStack_68;
  
  uVar10 = (ulong)param_4;
  *param_1 = &PTR_FUN_04273028;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  if ((*PTR_DAT_04379520 & 1) == 0) {
    iVar4 = __cxa_guard_acquire(PTR_DAT_04379520);
    puVar3 = PTR_DAT_04379528;
    if (iVar4 != 0) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar3,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
  }
  lVar5 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  lVar7 = DAT_043f1798;
  lVar2 = tpidr_el0;
  if ((((lVar5 == 0) || (*(long *)(lVar5 + 0x80) == 0)) ||
      (lVar5 = *(long *)(lVar5 + *(long *)(lVar5 + 0x80) * 8 + -8), lVar5 == 0)) &&
     (lVar5 = *(long *)(lVar2 + 0x20), *(long *)(lVar2 + 0x20) == 0)) {
    *(long *)(lVar2 + 0x20) = DAT_043f1798;
    lVar5 = lVar7;
  }
  param_1[4] = lVar5;
  param_1[5] = 0x7ffffffffffffff;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  FUN_028bd2f4();
  FUN_028bd2f4(param_1 + 0xf);
  lVar7 = param_1[1];
  if ((ulong)(param_1[3] - lVar7 >> 5) < uVar10) {
    puVar1 = param_1 + 4;
    lVar5 = param_1[2];
    local_70 = 0;
    puStack_68 = puVar1;
    local_88 = (**(code **)(*(long *)param_1[4] + 0x10))((long *)param_1[4],uVar10 << 5,8);
    if (local_88 == 0) {
      (**(code **)(*(long *)*puVar1 + 0xb8))();
    }
    lVar7 = local_88 + (lVar5 - lVar7 >> 5) * 0x20;
    lVar5 = local_88 + uVar10 * 0x20;
    lVar13 = param_1[1];
    lVar11 = param_1[2];
    lVar15 = lVar7;
    local_80 = lVar7;
    local_78 = lVar7;
    local_70 = lVar5;
    if (lVar11 == lVar13) {
      local_78 = lVar13;
    }
    else {
      do {
        lVar15 = lVar15 + -0x20;
        lVar11 = lVar11 + -0x20;
        FUN_028be550(puVar1,lVar15,lVar11);
      } while (lVar13 != lVar11);
      lVar13 = param_1[1];
      local_78 = param_1[2];
    }
    param_1[1] = lVar15;
    param_1[2] = lVar7;
    local_70 = param_1[3];
    param_1[3] = lVar5;
    local_88 = lVar13;
    local_80 = lVar13;
    FUN_028be194(&local_88);
  }
  FUN_028bd3e4(param_1 + 8,uVar10);
  FUN_028bd3e4(param_1 + 0xf,uVar10);
  if (param_4 != 0) {
    uVar12 = 0;
    puVar1 = param_1 + 4;
    do {
      lVar7 = (**(code **)(*param_2 + 0x10))(param_2,0x160,8);
      if (lVar7 == 0) {
        local_98 = 0;
        uStack_90 = 0;
        local_a8 = 0;
        plStack_a0 = (long *)0x0;
      }
      else {
        if ((*PTR_DAT_04379520 & 1) == 0) {
          iVar4 = __cxa_guard_acquire(PTR_DAT_04379520);
          puVar3 = PTR_DAT_04379528;
          if (iVar4 != 0) {
            FUN_008a62a4(PTR_DAT_04379528);
            FUN_00100250(PTR_LAB_04379530,puVar3,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379520);
          }
        }
        lVar5 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
        if (0xf < *(ulong *)(lVar5 + 0x80)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(long **)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = param_2;
        *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
        FUN_028c0020(lVar7,param_2,param_3,*param_5);
        local_98 = 0x160;
        uStack_90 = 8;
        *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
        local_a8 = lVar7;
        plStack_a0 = param_2;
      }
      uVar16 = param_1[2];
      if (uVar16 < (ulong)param_1[3]) {
        FUN_028bfe5c(puVar1,uVar16,&local_a8);
        param_1[2] = param_1[2] + 0x20;
      }
      else {
        uVar6 = param_1[5];
        lVar7 = (long)(uVar16 - param_1[1]) >> 5;
        uVar16 = lVar7 + 1;
        if (0x7ffffffffffffffe < uVar6) {
          uVar6 = 0x7fffffffffffffff;
        }
        if (uVar6 < uVar16) {
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
        lVar5 = param_1[3] - param_1[1];
        if ((ulong)(lVar5 >> 5) < uVar6 >> 1) {
          uVar9 = lVar5 >> 4;
          uVar6 = uVar16;
          if (uVar16 <= uVar9) {
            uVar6 = uVar9;
          }
        }
        local_70 = 0;
        puStack_68 = puVar1;
        if (uVar6 == 0) {
          lVar5 = 0;
        }
        else {
          lVar5 = (**(code **)(*(long *)*puVar1 + 0x10))((long *)*puVar1,uVar6 << 5,8);
          if (lVar5 == 0) {
            (**(code **)(*(long *)*puVar1 + 0xb8))();
          }
        }
        lVar13 = lVar5 + lVar7 * 0x20;
        lVar11 = lVar5 + uVar6 * 0x20;
        local_88 = lVar5;
        local_80 = lVar13;
        local_70 = lVar11;
        FUN_028bfe5c(puVar1,lVar13,&local_a8);
        lVar7 = lVar13 + 0x20;
        lVar5 = param_1[1];
        lVar15 = param_1[2];
        local_78 = lVar7;
        if (lVar15 == lVar5) {
          local_78 = lVar5;
        }
        else {
          do {
            lVar13 = lVar13 + -0x20;
            lVar15 = lVar15 + -0x20;
            FUN_028be550(puVar1,lVar13,lVar15);
          } while (lVar5 != lVar15);
          lVar5 = param_1[1];
          local_78 = param_1[2];
        }
        param_1[1] = lVar13;
        param_1[2] = lVar7;
        local_70 = param_1[3];
        param_1[3] = lVar11;
        local_88 = lVar5;
        local_80 = lVar5;
        FUN_028be194(&local_88);
      }
      lVar7 = local_a8;
      local_a8 = 0;
      if (lVar7 != 0) {
        FUN_028be70c(&plStack_a0);
      }
      uVar12 = uVar12 + 1;
    } while (uVar12 != param_4);
    uVar16 = 0;
    puVar1 = param_1 + 0xb;
    do {
      local_88 = *(long *)(param_1[1] + uVar16 * 0x20);
      uVar6 = param_1[9];
      if (uVar6 < (ulong)param_1[10]) {
        FUN_028be634(puVar1,uVar6,&local_88);
        param_1[9] = param_1[9] + 8;
      }
      else {
        uVar9 = param_1[0xc];
        lVar7 = (long)(uVar6 - param_1[8]) >> 3;
        uVar6 = lVar7 + 1;
        if (0x7ffffffffffffffe < uVar9) {
          uVar9 = 0x7fffffffffffffff;
        }
        if (uVar9 < uVar6) {
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
        lVar5 = param_1[10] - param_1[8];
        uVar8 = lVar5 >> 2;
        if (uVar6 <= uVar8) {
          uVar6 = uVar8;
        }
        if ((ulong)(lVar5 >> 3) < uVar9 >> 1) {
          uVar9 = uVar6;
        }
        if (uVar9 == 0) {
          lVar5 = 0;
        }
        else {
          lVar5 = (**(code **)(*(long *)*puVar1 + 0x10))((long *)*puVar1,uVar9 << 3,8);
          if (lVar5 == 0) {
            (**(code **)(*(long *)*puVar1 + 0xb8))();
          }
        }
        lVar13 = lVar5 + lVar7 * 8;
        FUN_028be634(puVar1,lVar13,&local_88);
        lVar11 = param_1[8];
        lVar15 = param_1[9];
        lVar7 = lVar13 + 8;
        if (lVar15 != lVar11) {
          do {
            lVar13 = lVar13 + -8;
            lVar15 = lVar15 + -8;
            FUN_028be634(puVar1,lVar13,lVar15);
          } while (lVar11 != lVar15);
          lVar11 = param_1[8];
        }
        param_1[8] = lVar13;
        param_1[9] = lVar7;
        lVar7 = param_1[10];
        param_1[10] = lVar5 + uVar9 * 8;
        if (lVar11 != 0) {
          plVar14 = (long *)*puVar1;
          uVar6 = (**(code **)(*plVar14 + 0xc0))(plVar14);
          if ((uVar6 & 1) != 0) {
            if (*(char *)(lVar2 + 0x38d488) == '\0') {
              *(undefined1 *)(lVar2 + 0x38d488) = 1;
              *(undefined8 *)(lVar2 + 0x38d478) = 0;
              *(undefined8 *)(lVar2 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
            }
            if (0 < *(int *)(lVar2 + 0x38d480)) {
              FUN_02bcc824(plVar14,lVar11,lVar7 - lVar11,8);
              goto LAB_028bd06c;
            }
          }
          (**(code **)(*plVar14 + 0x18))(plVar14,lVar11,lVar7 - lVar11,8);
        }
      }
LAB_028bd06c:
      uVar16 = uVar16 + 1;
    } while (uVar16 != uVar10);
  }
  return;
}


