/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02bb69fc; name: FUN_02bb69fc
 */


void FUN_02bb69fc(long param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  undefined8 *puVar1;
  ulong uVar2;
  int *piVar3;
  undefined8 uVar4;
  int *piVar5;
  int iVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  long lVar10;
  int *piVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long *plVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  undefined8 uVar20;
  int local_b4;
  int local_b0;
  int iStack_ac;
  int local_a8;
  int iStack_a4;
  undefined8 local_a0;
  long local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined1 auStack_78 [24];
  
  local_a0 = *(undefined8 *)(param_1 + 8);
  lVar19 = *(long *)(param_1 + 400);
  local_b4 = param_6;
  local_b0 = param_5;
  iStack_ac = param_4;
  local_a8 = param_3;
  iStack_a4 = param_2;
  if (lVar19 == 0) {
    FUN_02bb93c0(&local_98,local_a0,&local_a0);
    lVar19 = local_98;
    local_98 = 0;
    lVar12 = *(long *)(param_1 + 400);
    *(long *)(param_1 + 400) = lVar19;
    if (lVar12 == 0) {
      *(undefined8 *)(param_1 + 0x1a0) = uStack_88;
      *(undefined8 *)(param_1 + 0x1a8) = local_80;
    }
    else {
      FUN_02bcbe58(auStack_78,0);
      FUN_02bad2b8(lVar12);
      plVar15 = *(long **)(param_1 + 0x198);
      uVar4 = *(undefined8 *)(param_1 + 0x1a0);
      uVar20 = *(undefined8 *)(param_1 + 0x1a8);
      uVar14 = (**(code **)(*plVar15 + 0xc0))(plVar15);
      if ((uVar14 & 1) == 0) {
LAB_02bb6af4:
        (**(code **)(*plVar15 + 0x18))(plVar15,lVar12,uVar4,uVar20);
      }
      else {
        lVar19 = tpidr_el0;
        if (*(char *)(lVar19 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar19 + 0x38d488) = 1;
          *(undefined8 *)(lVar19 + 0x38d478) = 0;
          *(undefined8 *)(lVar19 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar19 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (*(int *)(lVar19 + 0x38d480) < 1) goto LAB_02bb6af4;
        FUN_02bcc824(plVar15,lVar12,uVar4,uVar20);
      }
      lVar19 = tpidr_el0;
      if (*(char *)(lVar19 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar19 + 0x38d488) = 1;
        *(undefined8 *)(lVar19 + 0x38d478) = 0;
        *(undefined8 *)(lVar19 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar19 + 0x80078,&PTR_LOOP_0411a000);
      }
      iVar6 = *(int *)(lVar19 + 0x38d480) + -1;
      *(int *)(lVar19 + 0x38d480) = iVar6;
      if (iVar6 == 0) {
        FUN_02bcc320();
        if (*(char *)(lVar19 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar19 + 0x38d488) = 1;
          *(undefined8 *)(lVar19 + 0x38d478) = 0;
          *(undefined8 *)(lVar19 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar19 + 0x80078,&PTR_LOOP_0411a000);
        }
        *(undefined4 *)(lVar19 + 0x38d484) = 0;
      }
      *(undefined8 *)(param_1 + 0x1a0) = uStack_88;
      *(undefined8 *)(param_1 + 0x1a8) = local_80;
      lVar19 = *(long *)(param_1 + 400);
    }
    *(undefined8 *)(param_1 + 0x198) = local_90;
    bVar7 = true;
  }
  else {
    bVar7 = false;
  }
  piVar3 = *(int **)(lVar19 + 0x198);
  piVar5 = *(int **)(lVar19 + 0x1a0);
  if (piVar3 != piVar5) {
    piVar11 = piVar3;
    do {
      if (*piVar11 == param_2) {
        bVar8 = piVar11[1] != param_3;
        if (bVar8) {
          piVar11[1] = param_3;
        }
        bVar9 = piVar11[2] != param_4;
        if (bVar9) {
          piVar11[2] = param_4;
        }
        iVar6 = piVar11[3];
        if (iVar6 != param_5) {
          piVar11[3] = param_5;
        }
        if (piVar11[4] == param_6) {
          if ((!bVar8 && ((!bVar9 && !bVar8) && (iVar6 == param_5 && (!bVar9 && !bVar8)))) &&
             (!bVar7)) {
            return;
          }
        }
        else {
          piVar11[4] = param_6;
        }
        goto LAB_02bb6e18;
      }
      piVar11 = piVar11 + 5;
    } while (piVar5 != piVar11);
  }
  puVar1 = (undefined8 *)(lVar19 + 0x1b0);
  if (piVar5 < *(int **)(lVar19 + 0x1a8)) {
    FUN_02bb97a8(puVar1,piVar5,&iStack_a4,&local_a8,&iStack_ac,&local_b0,&local_b4);
    *(long *)(lVar19 + 0x1a0) = *(long *)(lVar19 + 0x1a0) + 0x14;
  }
  else {
    uVar14 = *(ulong *)(lVar19 + 0x1b8);
    lVar12 = (long)piVar5 - (long)piVar3 >> 2;
    if (0x7ffffffffffffffe < uVar14) {
      uVar14 = 0x7fffffffffffffff;
    }
    uVar2 = lVar12 * -0x3333333333333333 + 1;
    if (uVar14 < uVar2) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar10 = (long)*(int **)(lVar19 + 0x1a8) - (long)piVar3 >> 2;
    uVar13 = lVar10 * -0x6666666666666666;
    if (uVar2 <= uVar13) {
      uVar2 = uVar13;
    }
    if ((ulong)(lVar10 * -0x3333333333333333) < uVar14 >> 1) {
      uVar14 = uVar2;
    }
    if (uVar14 == 0) {
      lVar10 = 0;
    }
    else {
      lVar10 = (**(code **)(*(long *)*puVar1 + 0x10))((long *)*puVar1,uVar14 * 0x14,4);
      if (lVar10 == 0) {
        (**(code **)(*(long *)*puVar1 + 0xb8))();
      }
    }
    lVar17 = lVar10 + lVar12 * 4;
    FUN_02bb97a8(puVar1,lVar17,&iStack_a4,&local_a8,&iStack_ac,&local_b0,&local_b4);
    lVar16 = *(long *)(lVar19 + 0x198);
    lVar18 = *(long *)(lVar19 + 0x1a0);
    lVar12 = lVar17 + 0x14;
    if (lVar18 != lVar16) {
      do {
        lVar17 = lVar17 + -0x14;
        lVar18 = lVar18 + -0x14;
        FUN_02bb98b0(puVar1,lVar17,lVar18);
      } while (lVar16 != lVar18);
      lVar16 = *(long *)(lVar19 + 0x198);
    }
    lVar18 = *(long *)(lVar19 + 0x1a8);
    *(long *)(lVar19 + 0x198) = lVar17;
    *(long *)(lVar19 + 0x1a0) = lVar12;
    *(ulong *)(lVar19 + 0x1a8) = lVar10 + uVar14 * 0x14;
    if (lVar16 != 0) {
      plVar15 = (long *)*puVar1;
      lVar18 = lVar18 - lVar16;
      uVar14 = (**(code **)(*plVar15 + 0xc0))(plVar15);
      if ((uVar14 & 1) != 0) {
        lVar19 = tpidr_el0;
        if (*(char *)(lVar19 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar19 + 0x38d488) = 1;
          *(undefined8 *)(lVar19 + 0x38d478) = 0;
          *(undefined8 *)(lVar19 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar19 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar19 + 0x38d480)) {
          FUN_02bcc824(plVar15,lVar16,lVar18,4);
          goto LAB_02bb6e18;
        }
      }
      (**(code **)(*plVar15 + 0x18))(plVar15,lVar16,lVar18,4);
    }
  }
LAB_02bb6e18:
  lVar12 = *(long *)(param_1 + 0x240);
  for (lVar19 = *(long *)(param_1 + 0x238); lVar19 != lVar12; lVar19 = lVar19 + 0x18) {
    *(undefined1 *)(lVar19 + 0x10) = 1;
  }
  return;
}


