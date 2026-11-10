/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029195a8; name: FUN_029195a8
 */


undefined8 FUN_029195a8(long param_1,int *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined **local_90 [2];
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  
  if (*(int *)(param_1 + 0x448) != 1) {
    return 0;
  }
  iVar6 = *param_2;
  if (iVar6 == 1) {
    local_90[0] = &PTR_FUN_04287c08;
    local_78 = *(undefined8 *)(param_2 + 6);
    local_80 = *(undefined8 *)(param_2 + 4);
    local_70 = CONCAT44(local_70._4_4_,param_2[0x10]);
    FUN_02c05e04(local_90,param_2 + 0x12);
    plVar14 = *(long **)(param_1 + 0x458);
  }
  else if (iVar6 == 3) {
    local_90[0] = &PTR_FUN_04287c30;
    local_78 = *(undefined8 *)(param_2 + 6);
    local_80 = *(undefined8 *)(param_2 + 4);
    local_68 = *(undefined8 *)(param_2 + 0xe);
    local_70 = *(undefined8 *)(param_2 + 0xc);
    local_60 = *(undefined8 *)(param_2 + 0x10);
    FUN_02c06260(local_90,param_2 + 0x12);
    plVar14 = *(long **)(param_1 + 0x458);
  }
  else {
    if (iVar6 != 2) {
      return 0;
    }
    local_90[0] = &PTR_FUN_04287c58;
    local_78 = *(undefined8 *)(param_2 + 6);
    local_80 = *(undefined8 *)(param_2 + 4);
    local_68 = *(undefined8 *)(param_2 + 0xe);
    local_70 = *(undefined8 *)(param_2 + 0xc);
    local_58 = *(undefined8 *)(param_2 + 10);
    local_60 = *(undefined8 *)(param_2 + 8);
    FUN_02c05fb8(local_90,param_2 + 0x12);
    plVar14 = *(long **)(param_1 + 0x458);
  }
  if (plVar14 == (long *)0x0) {
    plVar15 = *(long **)(param_1 + 8);
    plVar14 = (long *)(**(code **)(*plVar15 + 0x10))(plVar15,0x38,8);
    puVar4 = PTR_DAT_04379520;
    if (plVar14 == (long *)0x0) {
      plVar15 = (long *)0x0;
      uVar18 = 0;
      uVar17 = 0;
    }
    else {
      if (((*PTR_DAT_04379520 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_04379520), puVar5 = PTR_DAT_04379528, iVar6 != 0)) {
        FUN_008a62a4(PTR_DAT_04379528);
        FUN_00100250(PTR_LAB_04379530,puVar5,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379520);
      }
      puVar5 = PTR_DAT_04379528;
      lVar7 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
      if (0xf < *(ulong *)(lVar7 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long **)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = plVar15;
      *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
      *plVar14 = 0;
      plVar14[5] = 0;
      plVar14[6] = 0;
      plVar14[3] = 0;
      plVar14[4] = 0;
      plVar14[1] = 0;
      plVar14[2] = 0;
      if (((*puVar4 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_04379520), puVar4 = PTR_DAT_04379528, iVar6 != 0)) {
        FUN_008a62a4(PTR_DAT_04379528);
        FUN_00100250(PTR_LAB_04379530,puVar4,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379520);
      }
      lVar8 = nn::os::GetTlsValue(*(undefined4 *)puVar5);
      lVar10 = DAT_043f1798;
      if (((lVar8 == 0) || (*(long *)(lVar8 + 0x80) == 0)) ||
         (lVar8 = *(long *)(lVar8 + *(long *)(lVar8 + 0x80) * 8 + -8), lVar8 == 0)) {
        lVar13 = tpidr_el0;
        lVar8 = *(long *)(lVar13 + 0x20);
        if (*(long *)(lVar13 + 0x20) == 0) {
          *(long *)(lVar13 + 0x20) = DAT_043f1798;
          lVar8 = lVar10;
        }
      }
      plVar14[5] = 0;
      plVar14[3] = lVar8;
      plVar14[4] = 0x333333333333333;
      uVar18 = 0x38;
      *(undefined4 *)(plVar14 + 6) = 0;
      *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
      uVar17 = 8;
    }
    lVar7 = *(long *)(param_1 + 0x458);
    *(long **)(param_1 + 0x458) = plVar14;
    if (lVar7 != 0) {
      FUN_0291aaa0(param_1 + 0x460);
      plVar14 = *(long **)(param_1 + 0x458);
    }
    *(long **)(param_1 + 0x460) = plVar15;
    *(undefined8 *)(param_1 + 0x468) = uVar18;
    *(undefined8 *)(param_1 + 0x470) = uVar17;
  }
  uVar9 = plVar14[1];
  plVar15 = plVar14 + 3;
  if (uVar9 < (ulong)plVar14[2]) {
    FUN_01d168e4(plVar15,uVar9,param_2);
    plVar14[1] = plVar14[1] + 0x50;
  }
  else {
    uVar12 = plVar14[4];
    lVar7 = (long)(uVar9 - *plVar14) >> 4;
    if (0x7ffffffffffffffe < uVar12) {
      uVar12 = 0x7fffffffffffffff;
    }
    uVar9 = lVar7 * -0x3333333333333333 + 1;
    if (uVar12 < uVar9) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar10 = plVar14[2] - *plVar14 >> 4;
    uVar11 = lVar10 * -0x6666666666666666;
    if (uVar9 <= uVar11) {
      uVar9 = uVar11;
    }
    if ((ulong)(lVar10 * -0x3333333333333333) < uVar12 >> 1) {
      uVar12 = uVar9;
    }
    if (uVar12 == 0) {
      lVar10 = 0;
    }
    else {
      lVar10 = (**(code **)(*(long *)*plVar15 + 0x10))((long *)*plVar15,uVar12 * 0x50,0x10);
      if (lVar10 == 0) {
        (**(code **)(*(long *)*plVar15 + 0xb8))();
      }
    }
    lVar16 = lVar10 + lVar7 * 0x10;
    FUN_01d168e4(plVar15,lVar16,param_2);
    lVar8 = *plVar14;
    lVar13 = plVar14[1];
    lVar7 = lVar16 + 0x50;
    if (lVar13 == lVar8) {
      lVar13 = lVar8;
    }
    else {
      do {
        lVar16 = lVar16 + -0x50;
        lVar13 = lVar13 + -0x50;
        FUN_01d16534(plVar15,lVar16,lVar13);
      } while (lVar8 != lVar13);
      lVar8 = *plVar14;
      lVar13 = plVar14[1];
    }
    *plVar14 = lVar16;
    plVar14[1] = lVar7;
    lVar7 = plVar14[2];
    plVar14[2] = lVar10 + uVar12 * 0x50;
    while (lVar13 != lVar8) {
      plVar14 = *(long **)(lVar13 + -8);
      lVar13 = lVar13 + -0x50;
      if ((plVar14 != (long *)0x0) && (plVar14[1] != 0)) {
        plVar1 = plVar14 + 2;
        do {
          lVar10 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar10 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar10 + -1 == 0) {
          (**(code **)(*plVar14 + 0x18))();
        }
      }
    }
    if (lVar8 != 0) {
      plVar15 = (long *)*plVar15;
      uVar9 = (**(code **)(*plVar15 + 0xc0))(plVar15);
      if ((uVar9 & 1) != 0) {
        lVar10 = tpidr_el0;
        if (*(char *)(lVar10 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar10 + 0x38d488) = 1;
          *(undefined8 *)(lVar10 + 0x38d478) = 0;
          *(undefined8 *)(lVar10 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar10 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar10 + 0x38d480)) {
          FUN_02bcc824(plVar15,lVar8,lVar7 - lVar8,0x10);
          return 1;
        }
      }
      (**(code **)(*plVar15 + 0x18))(plVar15,lVar8,lVar7 - lVar8,0x10);
    }
  }
  return 1;
}


