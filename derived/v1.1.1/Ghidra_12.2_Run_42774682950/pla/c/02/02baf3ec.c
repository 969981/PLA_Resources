/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02baf3ec; name: FUN_02baf3ec
 */


void FUN_02baf3ec(float param_1,float param_2,float param_3,float param_4,long param_5,int param_6)

{
  undefined8 *puVar1;
  ulong uVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  long lVar9;
  int *piVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  undefined8 uVar14;
  long lVar15;
  int *piVar16;
  ulong uVar17;
  long *plVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  undefined8 uVar23;
  float fVar24;
  float local_d4;
  float fStack_d0;
  float local_cc;
  float fStack_c8;
  int local_c4;
  undefined8 local_c0;
  long local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined1 auStack_98 [24];
  
  local_c0 = *(undefined8 *)(param_5 + 8);
  lVar19 = *(long *)(param_5 + 0x58);
  local_d4 = param_4;
  fStack_d0 = param_3;
  local_cc = param_2;
  fStack_c8 = param_1;
  local_c4 = param_6;
  if (lVar19 == 0) {
    FUN_02bb07f0(&local_b8,local_c0,&local_c0);
    lVar19 = local_b8;
    local_b8 = 0;
    lVar15 = *(long *)(param_5 + 0x58);
    *(long *)(param_5 + 0x58) = lVar19;
    if (lVar15 == 0) {
      *(undefined8 *)(param_5 + 0x68) = uStack_a8;
      *(undefined8 *)(param_5 + 0x70) = local_a0;
    }
    else {
      FUN_02bcbe58(auStack_98,0);
      FUN_02bacee4(lVar15);
      plVar18 = *(long **)(param_5 + 0x60);
      uVar23 = *(undefined8 *)(param_5 + 0x68);
      uVar14 = *(undefined8 *)(param_5 + 0x70);
      uVar17 = (**(code **)(*plVar18 + 0xc0))(plVar18);
      if ((uVar17 & 1) == 0) {
LAB_02baf4e4:
        (**(code **)(*plVar18 + 0x18))(plVar18,lVar15,uVar23,uVar14);
      }
      else {
        lVar19 = tpidr_el0;
        if (*(char *)(lVar19 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar19 + 0x38d488) = 1;
          *(undefined8 *)(lVar19 + 0x38d478) = 0;
          *(undefined8 *)(lVar19 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar19 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (*(int *)(lVar19 + 0x38d480) < 1) goto LAB_02baf4e4;
        FUN_02bcc824(plVar18,lVar15,uVar23,uVar14);
      }
      lVar19 = tpidr_el0;
      if (*(char *)(lVar19 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar19 + 0x38d488) = 1;
        *(undefined8 *)(lVar19 + 0x38d478) = 0;
        *(undefined8 *)(lVar19 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar19 + 0x80078,&PTR_LOOP_0411a000);
      }
      iVar8 = *(int *)(lVar19 + 0x38d480) + -1;
      *(int *)(lVar19 + 0x38d480) = iVar8;
      if (iVar8 == 0) {
        FUN_02bcc320();
        if (*(char *)(lVar19 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar19 + 0x38d488) = 1;
          *(undefined8 *)(lVar19 + 0x38d478) = 0;
          *(undefined8 *)(lVar19 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar19 + 0x80078,&PTR_LOOP_0411a000);
        }
        *(undefined4 *)(lVar19 + 0x38d484) = 0;
      }
      *(undefined8 *)(param_5 + 0x68) = uStack_a8;
      *(undefined8 *)(param_5 + 0x70) = local_a0;
      lVar19 = *(long *)(param_5 + 0x58);
    }
    *(undefined8 *)(param_5 + 0x60) = local_b0;
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  piVar16 = *(int **)(lVar19 + 0x88);
  piVar10 = *(int **)(lVar19 + 0x90);
  if (piVar16 != piVar10) {
    piVar13 = piVar16;
    do {
      if (*piVar13 == param_6) {
        bVar6 = (float)piVar13[1] != param_1;
        if (bVar6) {
          piVar13[1] = (int)param_1;
        }
        bVar7 = (float)piVar13[2] != param_2;
        if (bVar7) {
          piVar13[2] = (int)param_2;
        }
        fVar24 = (float)piVar13[3];
        if (fVar24 != param_3) {
          piVar13[3] = (int)param_3;
        }
        if ((float)piVar13[4] == param_4) {
          if ((!bVar6 && ((!bVar7 && !bVar6) && (fVar24 == param_3 && (!bVar7 && !bVar6)))) &&
             (!bVar3)) {
            return;
          }
        }
        else {
          piVar13[4] = (int)param_4;
        }
        goto LAB_02baf8d8;
      }
      piVar13 = piVar13 + 5;
    } while (piVar10 != piVar13);
  }
  puVar1 = (undefined8 *)(lVar19 + 0xa0);
  if (piVar10 < *(int **)(lVar19 + 0x98)) {
    FUN_02bb0b80(puVar1,piVar10,&local_c4,&fStack_c8,&local_cc,&fStack_d0,&local_d4);
    *(long *)(lVar19 + 0x90) = *(long *)(lVar19 + 0x90) + 0x14;
  }
  else {
    uVar17 = *(ulong *)(lVar19 + 0xa8);
    lVar15 = (long)piVar10 - (long)piVar16 >> 2;
    if (0x7ffffffffffffffe < uVar17) {
      uVar17 = 0x7fffffffffffffff;
    }
    uVar2 = lVar15 * -0x3333333333333333 + 1;
    if (uVar17 < uVar2) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar11 = (long)*(int **)(lVar19 + 0x98) - (long)piVar16 >> 2;
    if ((ulong)(lVar11 * -0x3333333333333333) < uVar17 >> 1) {
      uVar12 = lVar11 * -0x6666666666666666;
      uVar17 = uVar2;
      if (uVar2 <= uVar12) {
        uVar17 = uVar12;
      }
    }
    if (uVar17 == 0) {
      lVar11 = 0;
    }
    else {
      lVar11 = (**(code **)(*(long *)*puVar1 + 0x10))((long *)*puVar1,uVar17 * 0x14,4);
      if (lVar11 == 0) {
        (**(code **)(*(long *)*puVar1 + 0xb8))();
      }
    }
    lVar21 = lVar11 + lVar15 * 4;
    FUN_02bb0b80(puVar1,lVar21,&local_c4,&fStack_c8,&local_cc,&fStack_d0,&local_d4);
    puVar5 = PTR_DAT_04379528;
    puVar4 = PTR_DAT_04379520;
    lVar15 = *(long *)(lVar19 + 0x88);
    lVar20 = *(long *)(lVar19 + 0x90);
    lVar22 = lVar21;
    if (lVar20 != lVar15) {
      do {
        uVar23 = *puVar1;
        if (((*puVar4 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar4), iVar8 != 0)) {
          FUN_008a62a4(puVar5);
          FUN_00100250(PTR_LAB_04379530,puVar5,&PTR_LOOP_0411a000);
          __cxa_guard_release(puVar4);
        }
        lVar9 = nn::os::GetTlsValue(*(undefined4 *)puVar5);
        if (lVar9 == 0) {
          uVar23 = *(undefined8 *)(lVar20 + -0x14);
          uVar14 = *(undefined8 *)(lVar20 + -0xc);
          *(undefined4 *)(lVar22 + -4) = *(undefined4 *)(lVar20 + -4);
          *(undefined8 *)(lVar22 + -0xc) = uVar14;
          *(undefined8 *)(lVar22 + -0x14) = uVar23;
        }
        else {
          if (0xf < *(ulong *)(lVar9 + 0x80)) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          *(undefined8 *)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = uVar23;
          *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
          uVar23 = *(undefined8 *)(lVar20 + -0x14);
          uVar14 = *(undefined8 *)(lVar20 + -0xc);
          *(undefined4 *)(lVar22 + -4) = *(undefined4 *)(lVar20 + -4);
          *(undefined8 *)(lVar22 + -0xc) = uVar14;
          *(undefined8 *)(lVar22 + -0x14) = uVar23;
          *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
        }
        lVar20 = lVar20 + -0x14;
        lVar22 = lVar22 + -0x14;
      } while (lVar15 != lVar20);
      lVar15 = *(long *)(lVar19 + 0x88);
    }
    *(long *)(lVar19 + 0x88) = lVar22;
    *(long *)(lVar19 + 0x90) = lVar21 + 0x14;
    lVar20 = *(long *)(lVar19 + 0x98);
    *(ulong *)(lVar19 + 0x98) = lVar11 + uVar17 * 0x14;
    if (lVar15 != 0) {
      plVar18 = (long *)*puVar1;
      lVar20 = lVar20 - lVar15;
      uVar17 = (**(code **)(*plVar18 + 0xc0))(plVar18);
      if ((uVar17 & 1) != 0) {
        lVar19 = tpidr_el0;
        if (*(char *)(lVar19 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar19 + 0x38d488) = 1;
          *(undefined8 *)(lVar19 + 0x38d478) = 0;
          *(undefined8 *)(lVar19 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar19 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar19 + 0x38d480)) {
          FUN_02bcc824(plVar18,lVar15,lVar20,4);
          goto LAB_02baf8d8;
        }
      }
      (**(code **)(*plVar18 + 0x18))(plVar18,lVar15,lVar20,4);
    }
  }
LAB_02baf8d8:
  lVar15 = *(long *)(param_5 + 0x240);
  for (lVar19 = *(long *)(param_5 + 0x238); lVar19 != lVar15; lVar19 = lVar19 + 0x18) {
    *(undefined1 *)(lVar19 + 0x10) = 1;
  }
  return;
}


