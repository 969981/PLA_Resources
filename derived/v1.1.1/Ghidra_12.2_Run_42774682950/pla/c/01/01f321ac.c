/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01f321ac; name: FUN_01f321ac
 */


void FUN_01f321ac(long param_1,long *param_2,undefined8 *param_3,long *param_4,undefined8 *param_5)

{
  int *piVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  int iVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  ulong uVar19;
  long lVar20;
  long *plVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  undefined8 uVar24;
  long *plVar25;
  long lVar26;
  undefined8 *puVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined8 local_68;
  
  if (param_5 == param_3) {
    lVar26 = 0;
  }
  else {
    lVar26 = ((long)param_4 - (long)param_2 >> 3) * 0x66 +
             ((long)param_5 - *param_4 >> 3) * -0x3333333333333333 +
             ((long)param_3 - *param_2 >> 3) * 0x3333333333333333;
  }
  uVar15 = *(ulong *)(param_1 + 0x40);
  lVar13 = *(long *)(param_1 + 8);
  lVar14 = *(long *)(param_1 + 0x10);
  plVar25 = (long *)(lVar13 + (uVar15 / 0x66) * 8);
  plVar21 = plVar25;
  if (lVar14 == lVar13) {
    puVar27 = (undefined8 *)0x0;
    if (param_3 == (undefined8 *)0x0) goto LAB_01f32214;
LAB_01f32264:
    lVar16 = (long)puVar27 - *plVar25 >> 3;
    uVar17 = ((long)param_2 - (long)plVar25 >> 3) * 0x66 +
             ((long)param_3 - *param_2 >> 3) * -0x3333333333333333 + lVar16 * 0x3333333333333333;
    puVar22 = puVar27;
    if (uVar17 != 0) {
      uVar19 = uVar17 + lVar16 * -0x3333333333333333;
      if ((long)uVar19 < 1) {
        lVar16 = 0x65 - uVar19;
        lVar18 = SUB168(SEXT816(lVar16) * SEXT816(0x5f5f5f5f5f5f5f5f),8) - lVar16;
        plVar21 = plVar25 + ((lVar18 >> 6) - (lVar18 >> 0x3f));
        puVar22 = (undefined8 *)
                  (plVar25[(lVar18 >> 6) - (lVar18 >> 0x3f)] +
                   ((lVar16 / 0x66) * 0x66 - lVar16) * 0x28 + 0xfc8);
      }
      else {
        plVar21 = plVar25 + uVar19 / 0x66;
        puVar22 = (undefined8 *)(plVar25[uVar19 / 0x66] + (uVar19 % 0x66) * 0x28);
      }
    }
  }
  else {
    puVar27 = (undefined8 *)(*plVar25 + (uVar15 % 0x66) * 0x28);
    if (param_3 != puVar27) goto LAB_01f32264;
LAB_01f32214:
    uVar17 = 0;
    puVar22 = puVar27;
  }
  if (lVar26 < 1) {
    return;
  }
  auVar29._8_8_ = puVar22;
  auVar29._0_8_ = plVar21;
  lVar16 = *(long *)(param_1 + 0x48);
  lVar18 = ((long)puVar22 - *plVar21 >> 3) * -0x3333333333333333;
  uVar19 = lVar18 + lVar26;
  if (uVar17 <= (ulong)(lVar16 - lVar26) >> 1) {
    if ((long)uVar19 < 1) {
      lVar13 = 0x65 - uVar19;
      lVar14 = SUB168(SEXT816(lVar13) * SEXT816(0x5f5f5f5f5f5f5f5f),8) - lVar13;
      plVar5 = plVar21 + ((lVar14 >> 6) - (lVar14 >> 0x3f));
      puVar23 = (undefined8 *)(*plVar5 + ((lVar13 / 0x66) * 0x66 - lVar13) * 0x28 + 0xfc8);
    }
    else {
      plVar5 = plVar21 + uVar19 / 0x66;
      puVar23 = (undefined8 *)(*plVar5 + (uVar19 % 0x66) * 0x28);
    }
    auVar28._8_8_ = puVar23;
    auVar28._0_8_ = plVar5;
    puVar6 = PTR_DAT_04379498;
    puVar7 = PTR_DAT_043794a0;
    puVar8 = PTR_DAT_043794a8;
    if ((puVar22 != puVar27) &&
       (lVar13 = lVar18 + ((long)plVar21 - (long)plVar25 >> 3) * 0x66 +
                 ((long)puVar27 - *plVar25 >> 3) * 0x3333333333333333, 0 < lVar13)) {
      do {
        while( true ) {
          puVar23 = (undefined8 *)*plVar21;
          if (puVar23 == puVar22) {
            plVar21 = plVar21 + -1;
            puVar23 = (undefined8 *)*plVar21;
            puVar22 = puVar23 + 0x1fe;
          }
          lVar16 = ((long)puVar22 - (long)puVar23 >> 3) * -0x3333333333333333;
          puVar2 = puVar22 + lVar13 * -5;
          lVar14 = lVar13;
          if (lVar16 <= lVar13) {
            puVar2 = puVar23;
            lVar14 = lVar16;
          }
          auVar28 = FUN_01f37580(puVar2,puVar22,auVar28._0_8_,auVar28._8_8_);
          puVar23 = auVar28._8_8_;
          lVar13 = lVar13 - lVar14;
          puVar6 = PTR_DAT_04379498;
          puVar7 = PTR_DAT_043794a0;
          puVar8 = PTR_DAT_043794a8;
          if (1 - lVar14 == 0) break;
          uVar15 = (1 - lVar14) + ((long)(puVar22 + -5) - *plVar21 >> 3) * -0x3333333333333333;
          if ((long)uVar15 < 1) {
            lVar14 = 0x65 - uVar15;
            lVar16 = SUB168(SEXT816(lVar14) * SEXT816(0x5f5f5f5f5f5f5f5f),8) - lVar14;
            plVar21 = plVar21 + ((lVar16 >> 6) - (lVar16 >> 0x3f));
            puVar22 = (undefined8 *)(*plVar21 + ((lVar14 / 0x66) * 0x66 - lVar14) * 0x28 + 0xfc8);
          }
          else {
            plVar21 = plVar21 + uVar15 / 0x66;
            puVar22 = (undefined8 *)(*plVar21 + (uVar15 % 0x66) * 0x28);
          }
          if (lVar13 < 1) goto joined_r0x01f32338;
        }
        puVar22 = puVar22 + -5;
      } while (0 < lVar13);
    }
joined_r0x01f32338:
    while( true ) {
      puVar11 = PTR_DAT_043794a8;
      puVar10 = PTR_DAT_043794a0;
      puVar9 = PTR_DAT_04379498;
      PTR_DAT_04379498 = puVar6;
      PTR_DAT_043794a0 = puVar7;
      PTR_DAT_043794a8 = puVar8;
      if (puVar27 == puVar23) break;
      while( true ) {
        puVar22 = (undefined8 *)puVar27[2];
        if (puVar22 != (undefined8 *)0x0) {
          piVar1 = (int *)(puVar22 + 1);
          do {
            iVar12 = *piVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar12 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar12 + -1 == 0) {
            puVar22[2] = 0;
            if (((*puVar9 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar9), iVar12 != 0)) {
              FUN_00100250(PTR_LAB_04379590,puVar10,&PTR_LOOP_0411a000);
              __cxa_guard_release(puVar9);
            }
            lVar13 = *(long *)puVar10;
            *(long *)puVar11 = lVar13;
            local_68 = *puVar22;
            FUN_02a44274(lVar13 + 0xd8,&local_68);
          }
        }
        puVar22 = (undefined8 *)*puVar27;
        if (puVar22 != (undefined8 *)0x0) {
          piVar1 = (int *)(puVar22 + 1);
          do {
            iVar12 = *piVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar12 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar12 + -1 == 0) {
            puVar22[2] = 0;
            if (((*puVar9 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar9), iVar12 != 0)) {
              FUN_00100250(PTR_LAB_04379590,puVar10,&PTR_LOOP_0411a000);
              __cxa_guard_release(puVar9);
            }
            lVar13 = *(long *)puVar10;
            *(long *)puVar11 = lVar13;
            local_68 = *puVar22;
            FUN_02a44274(lVar13 + 0xd8,&local_68);
          }
        }
        puVar27 = puVar27 + 5;
        if ((long)puVar27 - *plVar25 == 0xff0) break;
        if (puVar27 == puVar23) goto LAB_01f32408;
      }
      plVar25 = plVar25 + 1;
      puVar27 = (undefined8 *)*plVar25;
      puVar6 = PTR_DAT_04379498;
      puVar7 = PTR_DAT_043794a0;
      puVar8 = PTR_DAT_043794a8;
      PTR_DAT_043794a8 = puVar11;
      PTR_DAT_043794a0 = puVar10;
      PTR_DAT_04379498 = puVar9;
    }
LAB_01f32408:
    uVar15 = *(long *)(param_1 + 0x40) + lVar26;
    *(ulong *)(param_1 + 0x40) = uVar15;
    *(long *)(param_1 + 0x48) = *(long *)(param_1 + 0x48) - lVar26;
    if (uVar15 < 0xcc) {
      return;
    }
    puVar27 = *(undefined8 **)(param_1 + 8);
    lVar26 = tpidr_el0;
    do {
      plVar25 = *(long **)(param_1 + 0x50);
      uVar24 = *puVar27;
      uVar15 = (**(code **)(*plVar25 + 0xc0))(plVar25);
      if ((uVar15 & 1) == 0) {
LAB_01f324a0:
        (**(code **)(*plVar25 + 0x18))(plVar25,uVar24,0xff0,8);
      }
      else {
        if (*(char *)(lVar26 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar26 + 0x38d488) = 1;
          *(undefined8 *)(lVar26 + 0x38d478) = 0;
          *(undefined8 *)(lVar26 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar26 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (*(int *)(lVar26 + 0x38d480) < 1) goto LAB_01f324a0;
        FUN_02bcc824(plVar25,uVar24,0xff0,8);
      }
      uVar15 = *(long *)(param_1 + 0x40) - 0x66;
      puVar27 = (undefined8 *)(*(long *)(param_1 + 8) + 8);
      *(undefined8 **)(param_1 + 8) = puVar27;
      *(ulong *)(param_1 + 0x40) = uVar15;
      if (uVar15 < 0xcc) {
        return;
      }
    } while( true );
  }
  if ((long)uVar19 < 1) {
    lVar20 = 0x65 - uVar19;
    lVar18 = SUB168(SEXT816(lVar20) * SEXT816(0x5f5f5f5f5f5f5f5f),8) - lVar20;
    plVar21 = plVar21 + ((lVar18 >> 6) - (lVar18 >> 0x3f));
    lVar18 = *plVar21;
    uVar19 = ((lVar20 / 0x66) * 0x66 - lVar20) + 0x65;
  }
  else {
    plVar21 = plVar21 + uVar19 / 0x66;
    lVar18 = *plVar21;
    uVar19 = uVar19 % 0x66;
  }
  lVar18 = lVar18 + uVar19 * 0x28;
  uVar17 = lVar16 + uVar15;
  plVar25 = (long *)(lVar13 + (uVar17 / 0x66) * 8);
  if (lVar14 == lVar13) {
    lVar20 = 0;
    if (lVar18 != 0) goto LAB_01f32aac;
LAB_01f3258c:
    if (lVar14 == lVar13) goto LAB_01f32594;
LAB_01f32b4c:
    puVar27 = (undefined8 *)(*(long *)(lVar13 + (uVar17 / 0x66) * 8) + (uVar17 % 0x66) * 0x28);
    if (puVar27 == auVar29._8_8_) goto LAB_01f32750;
  }
  else {
    lVar20 = *plVar25 + (uVar17 % 0x66) * 0x28;
    if (lVar18 == lVar20) goto LAB_01f3258c;
LAB_01f32aac:
    lVar20 = ((long)plVar25 - (long)plVar21 >> 3) * 0x66 +
             (lVar20 - *plVar25 >> 3) * -0x3333333333333333 +
             (lVar18 - *plVar21 >> 3) * 0x3333333333333333;
    if (lVar20 < 1) goto LAB_01f3258c;
    do {
      while( true ) {
        lVar16 = ((*plVar21 + 0xff0) - lVar18 >> 3) * -0x3333333333333333;
        lVar13 = lVar20;
        lVar14 = lVar18 + lVar20 * 0x28;
        if (lVar16 <= lVar20) {
          lVar13 = lVar16;
          lVar14 = *plVar21 + 0xff0;
        }
        auVar29 = FUN_01f37830(lVar18,lVar14,auVar29._0_8_,auVar29._8_8_);
        lVar20 = lVar20 - lVar13;
        if (lVar13 == 0) break;
        uVar15 = lVar13 + (lVar18 - *plVar21 >> 3) * -0x3333333333333333;
        if ((long)uVar15 < 1) {
          lVar13 = 0x65 - uVar15;
          lVar14 = SUB168(SEXT816(lVar13) * SEXT816(0x5f5f5f5f5f5f5f5f),8) - lVar13;
          plVar21 = plVar21 + ((lVar14 >> 6) - (lVar14 >> 0x3f));
          lVar18 = *plVar21 + ((lVar13 / 0x66) * 0x66 - lVar13) * 0x28 + 0xfc8;
        }
        else {
          plVar21 = plVar21 + uVar15 / 0x66;
          lVar18 = *plVar21 + (uVar15 % 0x66) * 0x28;
        }
        if (lVar20 < 1) goto LAB_01f32b38;
      }
    } while (0 < lVar20);
LAB_01f32b38:
    uVar15 = *(ulong *)(param_1 + 0x40);
    lVar16 = *(long *)(param_1 + 0x48);
    uVar17 = uVar15 + lVar16;
    lVar13 = *(long *)(param_1 + 8);
    lVar14 = *(long *)(param_1 + 0x10);
    if (lVar14 != lVar13) goto LAB_01f32b4c;
LAB_01f32594:
    puVar27 = (undefined8 *)0x0;
    if (auVar29._8_8_ == 0) goto LAB_01f32750;
  }
  puVar22 = auVar29._8_8_;
  plVar25 = auVar29._0_8_;
  puVar23 = (undefined8 *)puVar22[2];
  if (puVar23 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar23 + 1);
    do {
      iVar12 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar12 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar12 + -1 == 0) {
      puVar23[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar13 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar13;
      local_68 = *puVar23;
      FUN_02a44274(lVar13 + 0xd8,&local_68);
    }
  }
  puVar23 = (undefined8 *)*puVar22;
  if (puVar23 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar23 + 1);
    do {
      iVar12 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar12 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar12 + -1 == 0) {
      puVar23[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar13 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar13;
      local_68 = *puVar23;
      FUN_02a44274(lVar13 + 0xd8,&local_68);
    }
  }
  puVar8 = PTR_DAT_043794a8;
  puVar7 = PTR_DAT_043794a0;
  puVar6 = PTR_DAT_04379498;
  puVar22 = puVar22 + 5;
  if ((long)puVar22 - *plVar25 == 0xff0) {
    plVar25 = plVar25 + 1;
    puVar22 = (undefined8 *)*plVar25;
  }
  while (puVar27 != puVar22) {
    while( true ) {
      puVar23 = (undefined8 *)puVar22[2];
      if (puVar23 != (undefined8 *)0x0) {
        piVar1 = (int *)(puVar23 + 1);
        do {
          iVar12 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar12 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar12 + -1 == 0) {
          puVar23[2] = 0;
          if (((*puVar6 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar6), iVar12 != 0)) {
            FUN_00100250(PTR_LAB_04379590,puVar7,&PTR_LOOP_0411a000);
            __cxa_guard_release(puVar6);
          }
          lVar13 = *(long *)puVar7;
          *(long *)puVar8 = lVar13;
          local_68 = *puVar23;
          FUN_02a44274(lVar13 + 0xd8,&local_68);
        }
      }
      puVar23 = (undefined8 *)*puVar22;
      if (puVar23 != (undefined8 *)0x0) {
        piVar1 = (int *)(puVar23 + 1);
        do {
          iVar12 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar12 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar12 + -1 == 0) {
          puVar23[2] = 0;
          if (((*puVar6 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar6), iVar12 != 0)) {
            FUN_00100250(PTR_LAB_04379590,puVar7,&PTR_LOOP_0411a000);
            __cxa_guard_release(puVar6);
          }
          lVar13 = *(long *)puVar7;
          *(long *)puVar8 = lVar13;
          local_68 = *puVar23;
          FUN_02a44274(lVar13 + 0xd8,&local_68);
        }
      }
      puVar22 = puVar22 + 5;
      if ((long)puVar22 - *plVar25 != 0xff0) break;
      plVar25 = plVar25 + 1;
      puVar22 = (undefined8 *)*plVar25;
      if (puVar27 == puVar22) goto LAB_01f32748;
    }
  }
LAB_01f32748:
  uVar15 = *(ulong *)(param_1 + 0x40);
  lVar16 = *(long *)(param_1 + 0x48);
  lVar13 = *(long *)(param_1 + 8);
  lVar14 = *(long *)(param_1 + 0x10);
LAB_01f32750:
  *(long *)(param_1 + 0x48) = lVar16 - lVar26;
  lVar18 = 0;
  if (lVar14 - lVar13 != 0) {
    lVar18 = (lVar14 - lVar13 >> 3) * 0x66 + -1;
  }
  if (0xcb < lVar18 - ((lVar16 - lVar26) + uVar15)) {
    lVar26 = tpidr_el0;
    do {
      plVar25 = *(long **)(param_1 + 0x50);
      uVar24 = *(undefined8 *)(lVar14 + -8);
      uVar15 = (**(code **)(*plVar25 + 0xc0))(plVar25);
      if ((uVar15 & 1) == 0) {
LAB_01f32800:
        (**(code **)(*plVar25 + 0x18))(plVar25,uVar24,0xff0,8);
      }
      else {
        if (*(char *)(lVar26 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar26 + 0x38d488) = 1;
          *(undefined8 *)(lVar26 + 0x38d478) = 0;
          *(undefined8 *)(lVar26 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar26 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (*(int *)(lVar26 + 0x38d480) < 1) goto LAB_01f32800;
        FUN_02bcc824(plVar25,uVar24,0xff0,8);
      }
      lVar14 = *(long *)(param_1 + 0x10) + -8;
      lVar16 = lVar14 - *(long *)(param_1 + 8);
      lVar13 = 0;
      if (lVar16 != 0) {
        lVar13 = (lVar16 >> 3) * 0x66 + -1;
      }
      *(long *)(param_1 + 0x10) = lVar14;
    } while (0xcb < (ulong)(lVar13 - (*(long *)(param_1 + 0x48) + *(long *)(param_1 + 0x40))));
  }
  return;
}


