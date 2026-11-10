/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028ff5fc; name: FUN_028ff5fc
 */


void FUN_028ff5fc(undefined8 *param_1,long *param_2,undefined8 param_3)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  long *plVar9;
  int *piVar10;
  ulong uVar11;
  long *plVar12;
  long *plVar13;
  ulong uVar14;
  long *plVar15;
  ulong uVar16;
  uint *puVar17;
  undefined8 uVar18;
  long *plVar19;
  ulong unaff_x24;
  long *plVar20;
  uint *puVar21;
  ulong unaff_x27;
  float fVar22;
  undefined1 auStack_78 [24];
  
  *param_1 = param_3;
  plVar20 = param_1 + 1;
  *plVar20 = 0;
  param_1[2] = 0;
  if (((*PTR_DAT_04379520 & 1) == 0) &&
     (iVar5 = __cxa_guard_acquire(PTR_DAT_04379520), puVar4 = PTR_DAT_04379528, iVar5 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar4,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  lVar8 = DAT_043f1798;
  lVar3 = tpidr_el0;
  if ((((lVar6 == 0) || (*(long *)(lVar6 + 0x80) == 0)) ||
      (lVar6 = *(long *)(lVar6 + *(long *)(lVar6 + 0x80) * 8 + -8), lVar6 == 0)) &&
     (lVar6 = *(long *)(lVar3 + 0x20), *(long *)(lVar3 + 0x20) == 0)) {
    *(long *)(lVar3 + 0x20) = DAT_043f1798;
    lVar6 = lVar8;
  }
  param_1[3] = lVar6;
  param_1[4] = 0x3ffffffffffffff;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[7] = 0;
  if (((*PTR_DAT_04379520 & 1) == 0) &&
     (iVar5 = __cxa_guard_acquire(PTR_DAT_04379520), puVar4 = PTR_DAT_04379528, iVar5 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar4,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  lVar8 = DAT_043f1798;
  if ((((lVar6 == 0) || (*(long *)(lVar6 + 0x80) == 0)) ||
      (lVar6 = *(long *)(lVar6 + *(long *)(lVar6 + 0x80) * 8 + -8), lVar6 == 0)) &&
     (lVar6 = *(long *)(lVar3 + 0x20), *(long *)(lVar3 + 0x20) == 0)) {
    *(long *)(lVar3 + 0x20) = DAT_043f1798;
    lVar6 = lVar8;
  }
  plVar15 = param_1 + 0xe;
  *plVar15 = 0;
  param_1[8] = lVar6;
  param_1[9] = 0x3ffffffffffffff;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0x3f800000;
  param_1[0xf] = 0;
  if (((*PTR_DAT_04379520 & 1) == 0) &&
     (iVar5 = __cxa_guard_acquire(PTR_DAT_04379520), puVar4 = PTR_DAT_04379528, iVar5 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar4,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  lVar8 = DAT_043f1798;
  if ((((lVar6 == 0) || (*(long *)(lVar6 + 0x80) == 0)) ||
      (lVar6 = *(long *)(lVar6 + *(long *)(lVar6 + 0x80) * 8 + -8), lVar6 == 0)) &&
     (lVar6 = *(long *)(lVar3 + 0x20), *(long *)(lVar3 + 0x20) == 0)) {
    *(long *)(lVar3 + 0x20) = DAT_043f1798;
    lVar6 = lVar8;
  }
  param_1[0x10] = lVar6;
  param_1[0x11] = 0x3ffffffffffffff;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  param_1[0x14] = 0;
  if (((*PTR_DAT_04379520 & 1) == 0) &&
     (iVar5 = __cxa_guard_acquire(PTR_DAT_04379520), puVar4 = PTR_DAT_04379528, iVar5 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar4,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  lVar8 = DAT_043f1798;
  if ((((lVar6 == 0) || (*(long *)(lVar6 + 0x80) == 0)) ||
      (lVar6 = *(long *)(lVar6 + *(long *)(lVar6 + 0x80) * 8 + -8), lVar6 == 0)) &&
     (lVar6 = *(long *)(lVar3 + 0x20), *(long *)(lVar3 + 0x20) == 0)) {
    *(long *)(lVar3 + 0x20) = DAT_043f1798;
    lVar6 = lVar8;
  }
  plVar19 = param_1 + 0x1b;
  *plVar19 = 0;
  param_1[0x15] = lVar6;
  param_1[0x16] = 0x3ffffffffffffff;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0x3f800000;
  param_1[0x1c] = 0;
  if (((*PTR_DAT_04379520 & 1) == 0) &&
     (iVar5 = __cxa_guard_acquire(PTR_DAT_04379520), puVar4 = PTR_DAT_04379528, iVar5 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar4,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  lVar8 = DAT_043f1798;
  if ((((lVar6 == 0) || (*(long *)(lVar6 + 0x80) == 0)) ||
      (lVar6 = *(long *)(lVar6 + *(long *)(lVar6 + 0x80) * 8 + -8), lVar6 == 0)) &&
     (lVar6 = *(long *)(lVar3 + 0x20), *(long *)(lVar3 + 0x20) == 0)) {
    *(long *)(lVar3 + 0x20) = DAT_043f1798;
    lVar6 = lVar8;
  }
  param_1[0x1d] = lVar6;
  param_1[0x1e] = 0x3ffffffffffffff;
  param_1[0x1f] = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  param_1[0x21] = 0;
  if (((*PTR_DAT_04379520 & 1) == 0) &&
     (iVar5 = __cxa_guard_acquire(PTR_DAT_04379520), puVar4 = PTR_DAT_04379528, iVar5 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar4,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  lVar8 = DAT_043f1798;
  if ((((lVar6 == 0) || (*(long *)(lVar6 + 0x80) == 0)) ||
      (lVar6 = *(long *)(lVar6 + *(long *)(lVar6 + 0x80) * 8 + -8), lVar6 == 0)) &&
     (lVar6 = *(long *)(lVar3 + 0x20), *(long *)(lVar3 + 0x20) == 0)) {
    *(long *)(lVar3 + 0x20) = DAT_043f1798;
    lVar6 = lVar8;
  }
  param_1[0x24] = 0;
  *(undefined4 *)(param_1 + 0x25) = 0;
  param_1[0x26] = 0;
  param_1[0x22] = lVar6;
  param_1[0x23] = 0x3ffffffffffffff;
  piVar10 = (int *)*param_1;
  *(undefined4 *)(param_1 + 0x27) = 0x3f800000;
  if (piVar10 != (int *)0x0) {
    if ((4 < *(ushort *)((long)piVar10 - (long)*piVar10)) &&
       (uVar16 = (ulong)((ushort *)((long)piVar10 - (long)*piVar10))[2], uVar16 != 0)) {
      puVar21 = (uint *)((long)piVar10 + uVar16);
      puVar21 = (uint *)((long)puVar21 + (ulong)*puVar21);
      fVar22 = (float)NEON_ucvtf(*puVar21);
      FUN_029012cc(plVar20,(long)(fVar22 / *(float *)(param_1 + 0xd)));
      puVar17 = puVar21 + 1;
      if ((ulong)*puVar21 != 0) {
        puVar21 = puVar17 + *puVar21;
        plVar13 = param_1 + 7;
        do {
          uVar1 = *puVar17;
          puVar7 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0xd0,8);
          if (((*PTR_DAT_04379520 & 1) == 0) &&
             (iVar5 = __cxa_guard_acquire(PTR_DAT_04379520), puVar4 = PTR_DAT_04379528, iVar5 != 0))
          {
            FUN_008a62a4(PTR_DAT_04379528);
            FUN_00100250(PTR_LAB_04379530,puVar4,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379520);
          }
          lVar8 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
          if (0xf < *(ulong *)(lVar8 + 0x80)) goto LAB_02900e4c;
          *(long **)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = param_2;
          *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
          FUN_02902324(puVar7,(long)puVar17 + (ulong)uVar1);
          *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
          uVar16 = puVar7[1];
          unaff_x27 = param_1[2];
          if (unaff_x27 == 0) {
LAB_028ffb40:
            plVar12 = (long *)(**(code **)(*(long *)param_1[8] + 0x10))((long *)param_1[8],0x50,8);
            if (plVar12 == (long *)0x0) {
              (**(code **)(*(long *)param_1[8] + 0xb8))();
            }
            uVar18 = param_1[8];
            if (((*PTR_DAT_04379520 & 1) == 0) &&
               (iVar5 = __cxa_guard_acquire(PTR_DAT_04379520), puVar4 = PTR_DAT_04379528, iVar5 != 0
               )) {
              FUN_008a62a4(PTR_DAT_04379528);
              FUN_00100250(PTR_LAB_04379530,puVar4,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379520);
            }
            lVar8 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
            if (lVar8 != 0) {
              if (0xf < *(ulong *)(lVar8 + 0x80)) goto LAB_02900e4c;
              *(undefined8 *)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = uVar18;
              *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
            }
            plVar12[2] = puVar7[1];
            plVar12[3] = puVar7[2];
            plVar12[4] = puVar7[3];
            plVar9 = (long *)puVar7[4];
            plVar12[5] = (long)plVar9;
            if (plVar9 != (long *)0x0) {
              (**(code **)(*plVar9 + 0x18))();
            }
            plVar12[6] = (long)puVar7;
            plVar12[7] = (long)param_2;
            plVar12[8] = 0xd0;
            plVar12[9] = 8;
            if (lVar8 != 0) {
              *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
            }
            *plVar12 = 0;
            plVar12[1] = uVar16;
            if ((unaff_x27 == 0) ||
               (*(float *)(param_1 + 0xd) * (float)unaff_x27 < (float)(param_1[0xc] + 1))) {
              uVar11 = (ulong)(unaff_x27 < 3 || (unaff_x27 & unaff_x27 - 1) != 0) | unaff_x27 << 1;
              uVar14 = (ulong)((float)(param_1[0xc] + 1) / *(float *)(param_1 + 0xd));
              if (uVar14 <= uVar11) {
                uVar14 = uVar11;
              }
              FUN_029012cc(plVar20,uVar14);
              unaff_x27 = param_1[2];
              if ((unaff_x27 & unaff_x27 - 1) == 0) {
                unaff_x24 = unaff_x27 - 1 & uVar16;
              }
              else if (uVar16 < unaff_x27) {
                unaff_x24 = uVar16;
              }
              else {
                uVar11 = 0;
                if (unaff_x27 != 0) {
                  uVar11 = uVar16 / unaff_x27;
                }
                unaff_x24 = uVar16 - uVar11 * unaff_x27;
              }
            }
            plVar9 = *(long **)(*plVar20 + unaff_x24 * 8);
            if (plVar9 == (long *)0x0) {
              *plVar12 = *plVar13;
              *plVar13 = (long)plVar12;
              *(long **)(*plVar20 + unaff_x24 * 8) = plVar13;
              if (*plVar12 != 0) {
                uVar16 = *(ulong *)(*plVar12 + 8);
                if ((unaff_x27 & unaff_x27 - 1) == 0) {
                  uVar16 = uVar16 & unaff_x27 - 1;
                }
                else if (unaff_x27 <= uVar16) {
                  uVar11 = 0;
                  if (unaff_x27 != 0) {
                    uVar11 = uVar16 / unaff_x27;
                  }
                  uVar16 = uVar16 - uVar11 * unaff_x27;
                }
                plVar9 = (long *)(*plVar20 + uVar16 * 8);
                goto LAB_028ff980;
              }
            }
            else {
              *plVar12 = *plVar9;
LAB_028ff980:
              *plVar9 = (long)plVar12;
            }
            param_1[0xc] = param_1[0xc] + 1;
          }
          else {
            uVar11 = unaff_x27 - (unaff_x27 >> 1 & 0x5555555555555555);
            uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
            uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
            if (uVar11 < 2) {
              unaff_x24 = unaff_x27 - 1 & uVar16;
            }
            else {
              unaff_x24 = uVar16;
              if (unaff_x27 <= uVar16) {
                uVar14 = 0;
                if (unaff_x27 != 0) {
                  uVar14 = uVar16 / unaff_x27;
                }
                unaff_x24 = uVar16 - uVar14 * unaff_x27;
              }
            }
            plVar12 = *(long **)(*plVar20 + unaff_x24 * 8);
            if (plVar12 == (long *)0x0) goto LAB_028ffb40;
            if (uVar11 < 2) {
              do {
                plVar12 = (long *)*plVar12;
                if ((plVar12 == (long *)0x0) ||
                   (plVar12[1] != uVar16 && (plVar12[1] & unaff_x27 - 1) != unaff_x24))
                goto LAB_028ffb40;
              } while (plVar12[2] != uVar16);
            }
            else {
              do {
                plVar12 = (long *)*plVar12;
                if (plVar12 == (long *)0x0) goto LAB_028ffb40;
                uVar11 = plVar12[1];
                if (uVar11 != uVar16) {
                  if (unaff_x27 <= uVar11) {
                    uVar14 = 0;
                    if (unaff_x27 != 0) {
                      uVar14 = uVar11 / unaff_x27;
                    }
                    uVar11 = uVar11 - uVar14 * unaff_x27;
                  }
                  if (uVar11 != unaff_x24) goto LAB_028ffb40;
                }
              } while (plVar12[2] != uVar16);
            }
            if (puVar7 != (undefined8 *)0x0) {
              FUN_02bcbe58(auStack_78,0);
              (**(code **)*puVar7)(puVar7);
              uVar16 = (**(code **)(*param_2 + 0xc0))(param_2);
              if ((uVar16 & 1) == 0) {
LAB_028ffd00:
                (**(code **)(*param_2 + 0x18))(param_2,puVar7,0xd0,8);
              }
              else {
                if (*(char *)(lVar3 + 0x38d488) == '\0') {
                  *(undefined1 *)(lVar3 + 0x38d488) = 1;
                  *(undefined8 *)(lVar3 + 0x38d478) = 0;
                  *(undefined8 *)(lVar3 + 0x38d480) = 0;
                  __cxa_thread_atexit(&LAB_02bcbe54,lVar3 + 0x80078,&PTR_LOOP_0411a000);
                }
                if (*(int *)(lVar3 + 0x38d480) < 1) goto LAB_028ffd00;
                FUN_02bcc824(param_2,puVar7,0xd0,8);
              }
              if (*(char *)(lVar3 + 0x38d488) == '\0') {
                *(undefined1 *)(lVar3 + 0x38d488) = 1;
                *(undefined8 *)(lVar3 + 0x38d478) = 0;
                *(undefined8 *)(lVar3 + 0x38d480) = 0;
                __cxa_thread_atexit(&LAB_02bcbe54,lVar3 + 0x80078,&PTR_LOOP_0411a000);
              }
              iVar5 = *(int *)(lVar3 + 0x38d480) + -1;
              *(int *)(lVar3 + 0x38d480) = iVar5;
              if (iVar5 == 0) {
                FUN_02bcc320();
                if (*(char *)(lVar3 + 0x38d488) == '\0') {
                  *(undefined1 *)(lVar3 + 0x38d488) = 1;
                  *(undefined8 *)(lVar3 + 0x38d478) = 0;
                  *(undefined8 *)(lVar3 + 0x38d480) = 0;
                  __cxa_thread_atexit(&LAB_02bcbe54,lVar3 + 0x80078,&PTR_LOOP_0411a000);
                }
                *(undefined4 *)(lVar3 + 0x38d484) = 0;
              }
            }
          }
          puVar17 = puVar17 + 1;
        } while (puVar17 != puVar21);
      }
    }
    piVar10 = (int *)*param_1;
    if (((6 < *(ushort *)((long)piVar10 - (long)*piVar10)) &&
        (uVar16 = (ulong)((ushort *)((long)piVar10 - (long)*piVar10))[3], uVar16 != 0)) &&
       (puVar17 = (uint *)((long)piVar10 + uVar16),
       puVar17 = (uint *)((long)puVar17 + (ulong)*puVar17), puVar17 != (uint *)0x0)) {
      fVar22 = (float)NEON_ucvtf(*puVar17);
      FUN_0290182c(plVar15,(long)(fVar22 / *(float *)(param_1 + 0x1a)));
      puVar21 = puVar17 + 1;
      if ((ulong)*puVar17 != 0) {
        puVar17 = puVar21 + *puVar17;
        plVar20 = param_1 + 0x14;
        do {
          uVar1 = *puVar21;
          puVar7 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x70,8);
          if (((*PTR_DAT_04379520 & 1) == 0) &&
             (iVar5 = __cxa_guard_acquire(PTR_DAT_04379520), puVar4 = PTR_DAT_04379528, iVar5 != 0))
          {
            FUN_008a62a4(PTR_DAT_04379528);
            FUN_00100250(PTR_LAB_04379530,puVar4,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379520);
          }
          lVar8 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
          if (0xf < *(ulong *)(lVar8 + 0x80)) goto LAB_02900e4c;
          *(long **)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = param_2;
          *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
          FUN_02904784(puVar7,param_2,param_1,(long)puVar21 + (ulong)uVar1);
          *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
          unaff_x27 = puVar7[1];
          uVar16 = param_1[0xf];
          if (uVar16 == 0) {
LAB_029001c8:
            plVar13 = (long *)(**(code **)(*(long *)param_1[0x15] + 0x10))
                                        ((long *)param_1[0x15],0x50,8);
            if (plVar13 == (long *)0x0) {
              (**(code **)(*(long *)param_1[0x15] + 0xb8))();
            }
            uVar18 = param_1[0x15];
            if (((*PTR_DAT_04379520 & 1) == 0) &&
               (iVar5 = __cxa_guard_acquire(PTR_DAT_04379520), puVar4 = PTR_DAT_04379528, iVar5 != 0
               )) {
              FUN_008a62a4(PTR_DAT_04379528);
              FUN_00100250(PTR_LAB_04379530,puVar4,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379520);
            }
            lVar8 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
            if (lVar8 != 0) {
              if (0xf < *(ulong *)(lVar8 + 0x80)) goto LAB_02900e4c;
              *(undefined8 *)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = uVar18;
              *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
            }
            plVar13[2] = puVar7[1];
            plVar13[3] = puVar7[2];
            plVar13[4] = puVar7[3];
            plVar12 = (long *)puVar7[4];
            plVar13[5] = (long)plVar12;
            if (plVar12 != (long *)0x0) {
              (**(code **)(*plVar12 + 0x18))();
            }
            plVar13[6] = (long)puVar7;
            plVar13[7] = (long)param_2;
            plVar13[8] = 0x70;
            plVar13[9] = 8;
            if (lVar8 != 0) {
              *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
            }
            *plVar13 = 0;
            plVar13[1] = unaff_x27;
            if ((uVar16 == 0) ||
               (*(float *)(param_1 + 0x1a) * (float)uVar16 < (float)(param_1[0x19] + 1))) {
              uVar16 = (ulong)(uVar16 < 3 || (uVar16 & uVar16 - 1) != 0) | uVar16 << 1;
              uVar11 = (ulong)((float)(param_1[0x19] + 1) / *(float *)(param_1 + 0x1a));
              if (uVar11 <= uVar16) {
                uVar11 = uVar16;
              }
              FUN_0290182c(plVar15,uVar11);
              uVar16 = param_1[0xf];
              if ((uVar16 & uVar16 - 1) == 0) {
                unaff_x24 = uVar16 - 1 & unaff_x27;
              }
              else if (unaff_x27 < uVar16) {
                unaff_x24 = unaff_x27;
              }
              else {
                uVar11 = 0;
                if (uVar16 != 0) {
                  uVar11 = unaff_x27 / uVar16;
                }
                unaff_x24 = unaff_x27 - uVar11 * uVar16;
              }
            }
            plVar12 = *(long **)(*plVar15 + unaff_x24 * 8);
            if (plVar12 == (long *)0x0) {
              *plVar13 = *plVar20;
              *plVar20 = (long)plVar13;
              *(long **)(*plVar15 + unaff_x24 * 8) = plVar20;
              if (*plVar13 != 0) {
                uVar11 = *(ulong *)(*plVar13 + 8);
                if ((uVar16 & uVar16 - 1) == 0) {
                  uVar11 = uVar11 & uVar16 - 1;
                }
                else if (uVar16 <= uVar11) {
                  uVar14 = 0;
                  if (uVar16 != 0) {
                    uVar14 = uVar11 / uVar16;
                  }
                  uVar11 = uVar11 - uVar14 * uVar16;
                }
                plVar12 = (long *)(*plVar15 + uVar11 * 8);
                goto LAB_02900000;
              }
            }
            else {
              *plVar13 = *plVar12;
LAB_02900000:
              *plVar12 = (long)plVar13;
            }
            param_1[0x19] = param_1[0x19] + 1;
          }
          else {
            uVar11 = uVar16 - (uVar16 >> 1 & 0x5555555555555555);
            uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
            uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
            if (uVar11 < 2) {
              unaff_x24 = uVar16 - 1 & unaff_x27;
            }
            else {
              unaff_x24 = unaff_x27;
              if (uVar16 <= unaff_x27) {
                uVar14 = 0;
                if (uVar16 != 0) {
                  uVar14 = unaff_x27 / uVar16;
                }
                unaff_x24 = unaff_x27 - uVar14 * uVar16;
              }
            }
            plVar13 = *(long **)(*plVar15 + unaff_x24 * 8);
            if (plVar13 == (long *)0x0) goto LAB_029001c8;
            if (uVar11 < 2) {
              do {
                plVar13 = (long *)*plVar13;
                if ((plVar13 == (long *)0x0) ||
                   (plVar13[1] != unaff_x27 && (plVar13[1] & uVar16 - 1) != unaff_x24))
                goto LAB_029001c8;
              } while (plVar13[2] != unaff_x27);
            }
            else {
              do {
                plVar13 = (long *)*plVar13;
                if (plVar13 == (long *)0x0) goto LAB_029001c8;
                uVar11 = plVar13[1];
                if (uVar11 != unaff_x27) {
                  if (uVar16 <= uVar11) {
                    uVar14 = 0;
                    if (uVar16 != 0) {
                      uVar14 = uVar11 / uVar16;
                    }
                    uVar11 = uVar11 - uVar14 * uVar16;
                  }
                  if (uVar11 != unaff_x24) goto LAB_029001c8;
                }
              } while (plVar13[2] != unaff_x27);
            }
            if (puVar7 != (undefined8 *)0x0) {
              FUN_02bcbe58(auStack_78,0);
              (**(code **)*puVar7)(puVar7);
              uVar16 = (**(code **)(*param_2 + 0xc0))(param_2);
              if ((uVar16 & 1) == 0) {
LAB_02900380:
                (**(code **)(*param_2 + 0x18))(param_2,puVar7,0x70,8);
              }
              else {
                if (*(char *)(lVar3 + 0x38d488) == '\0') {
                  *(undefined1 *)(lVar3 + 0x38d488) = 1;
                  *(undefined8 *)(lVar3 + 0x38d478) = 0;
                  *(undefined8 *)(lVar3 + 0x38d480) = 0;
                  __cxa_thread_atexit(&LAB_02bcbe54,lVar3 + 0x80078,&PTR_LOOP_0411a000);
                }
                if (*(int *)(lVar3 + 0x38d480) < 1) goto LAB_02900380;
                FUN_02bcc824(param_2,puVar7,0x70,8);
              }
              if (*(char *)(lVar3 + 0x38d488) == '\0') {
                *(undefined1 *)(lVar3 + 0x38d488) = 1;
                *(undefined8 *)(lVar3 + 0x38d478) = 0;
                *(undefined8 *)(lVar3 + 0x38d480) = 0;
                __cxa_thread_atexit(&LAB_02bcbe54,lVar3 + 0x80078,&PTR_LOOP_0411a000);
              }
              iVar5 = *(int *)(lVar3 + 0x38d480) + -1;
              *(int *)(lVar3 + 0x38d480) = iVar5;
              if (iVar5 == 0) {
                FUN_02bcc320();
                if (*(char *)(lVar3 + 0x38d488) == '\0') {
                  *(undefined1 *)(lVar3 + 0x38d488) = 1;
                  *(undefined8 *)(lVar3 + 0x38d478) = 0;
                  *(undefined8 *)(lVar3 + 0x38d480) = 0;
                  __cxa_thread_atexit(&LAB_02bcbe54,lVar3 + 0x80078,&PTR_LOOP_0411a000);
                }
                *(undefined4 *)(lVar3 + 0x38d484) = 0;
              }
            }
          }
          puVar21 = puVar21 + 1;
        } while (puVar21 != puVar17);
      }
    }
    piVar10 = (int *)*param_1;
    if (((8 < *(ushort *)((long)piVar10 - (long)*piVar10)) &&
        (uVar16 = (ulong)((ushort *)((long)piVar10 - (long)*piVar10))[4], uVar16 != 0)) &&
       (puVar17 = (uint *)((long)piVar10 + uVar16),
       puVar17 = (uint *)((long)puVar17 + (ulong)*puVar17), puVar17 != (uint *)0x0)) {
      fVar22 = (float)NEON_ucvtf(*puVar17);
      FUN_02901d8c(plVar19,(long)(fVar22 / *(float *)(param_1 + 0x27)));
      puVar21 = puVar17 + 1;
      if ((ulong)*puVar17 != 0) {
        puVar17 = puVar21 + *puVar17;
        plVar20 = param_1 + 0x21;
        do {
          uVar1 = *puVar21;
          puVar7 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x70,8);
          if (((*PTR_DAT_04379520 & 1) == 0) &&
             (iVar5 = __cxa_guard_acquire(PTR_DAT_04379520), puVar4 = PTR_DAT_04379528, iVar5 != 0))
          {
            FUN_008a62a4(PTR_DAT_04379528);
            FUN_00100250(PTR_LAB_04379530,puVar4,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379520);
          }
          lVar8 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
          if (0xf < *(ulong *)(lVar8 + 0x80)) {
LAB_02900e4c:
                    /* WARNING: Subroutine does not return */
            abort();
          }
          *(long **)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = param_2;
          *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
          FUN_02905ffc(puVar7,param_2,param_1,(long)puVar21 + (ulong)uVar1);
          *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
          uVar11 = puVar7[1];
          uVar16 = param_1[0x1c];
          if (uVar16 == 0) {
LAB_0290084c:
            plVar15 = (long *)(**(code **)(*(long *)param_1[0x22] + 0x10))
                                        ((long *)param_1[0x22],0x50,8);
            if (plVar15 == (long *)0x0) {
              (**(code **)(*(long *)param_1[0x22] + 0xb8))();
            }
            uVar18 = param_1[0x22];
            if (((*PTR_DAT_04379520 & 1) == 0) &&
               (iVar5 = __cxa_guard_acquire(PTR_DAT_04379520), puVar4 = PTR_DAT_04379528, iVar5 != 0
               )) {
              FUN_008a62a4(PTR_DAT_04379528);
              FUN_00100250(PTR_LAB_04379530,puVar4,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379520);
            }
            lVar8 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
            if (lVar8 != 0) {
              if (0xf < *(ulong *)(lVar8 + 0x80)) goto LAB_02900e4c;
              *(undefined8 *)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = uVar18;
              *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
            }
            plVar15[2] = puVar7[1];
            plVar15[3] = puVar7[2];
            plVar15[4] = puVar7[3];
            plVar13 = (long *)puVar7[4];
            plVar15[5] = (long)plVar13;
            if (plVar13 != (long *)0x0) {
              (**(code **)(*plVar13 + 0x18))();
            }
            plVar15[8] = 0x70;
            plVar15[6] = (long)puVar7;
            plVar15[7] = (long)param_2;
            plVar15[9] = 8;
            if (lVar8 != 0) {
              *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
            }
            *plVar15 = 0;
            plVar15[1] = uVar11;
            if ((uVar16 == 0) ||
               (*(float *)(param_1 + 0x27) * (float)uVar16 < (float)(param_1[0x26] + 1))) {
              uVar16 = (ulong)(uVar16 < 3 || (uVar16 & uVar16 - 1) != 0) | uVar16 << 1;
              uVar14 = (ulong)((float)(param_1[0x26] + 1) / *(float *)(param_1 + 0x27));
              if (uVar14 <= uVar16) {
                uVar14 = uVar16;
              }
              FUN_02901d8c(plVar19,uVar14);
              uVar16 = param_1[0x1c];
              if ((uVar16 & uVar16 - 1) == 0) {
                unaff_x27 = uVar16 - 1 & uVar11;
              }
              else if (uVar11 < uVar16) {
                unaff_x27 = uVar11;
              }
              else {
                uVar14 = 0;
                if (uVar16 != 0) {
                  uVar14 = uVar11 / uVar16;
                }
                unaff_x27 = uVar11 - uVar14 * uVar16;
              }
            }
            plVar13 = *(long **)(*plVar19 + unaff_x27 * 8);
            if (plVar13 == (long *)0x0) {
              *plVar15 = *plVar20;
              *plVar20 = (long)plVar15;
              *(long **)(*plVar19 + unaff_x27 * 8) = plVar20;
              if (*plVar15 != 0) {
                uVar11 = *(ulong *)(*plVar15 + 8);
                if ((uVar16 & uVar16 - 1) == 0) {
                  uVar11 = uVar11 & uVar16 - 1;
                }
                else if (uVar16 <= uVar11) {
                  uVar14 = 0;
                  if (uVar16 != 0) {
                    uVar14 = uVar11 / uVar16;
                  }
                  uVar11 = uVar11 - uVar14 * uVar16;
                }
                plVar13 = (long *)(*plVar19 + uVar11 * 8);
                goto LAB_02900680;
              }
            }
            else {
              *plVar15 = *plVar13;
LAB_02900680:
              *plVar13 = (long)plVar15;
            }
            param_1[0x26] = param_1[0x26] + 1;
          }
          else {
            uVar14 = uVar16 - (uVar16 >> 1 & 0x5555555555555555);
            uVar14 = (uVar14 & 0x3333333333333333) + (uVar14 >> 2 & 0x3333333333333333);
            uVar14 = (uVar14 + (uVar14 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
            if (uVar14 < 2) {
              unaff_x27 = uVar16 - 1 & uVar11;
            }
            else {
              unaff_x27 = uVar11;
              if (uVar16 <= uVar11) {
                uVar2 = 0;
                if (uVar16 != 0) {
                  uVar2 = uVar11 / uVar16;
                }
                unaff_x27 = uVar11 - uVar2 * uVar16;
              }
            }
            plVar15 = *(long **)(*plVar19 + unaff_x27 * 8);
            if (plVar15 == (long *)0x0) goto LAB_0290084c;
            if (uVar14 < 2) {
              do {
                plVar15 = (long *)*plVar15;
                if ((plVar15 == (long *)0x0) ||
                   (plVar15[1] != uVar11 && (plVar15[1] & uVar16 - 1) != unaff_x27))
                goto LAB_0290084c;
              } while (plVar15[2] != uVar11);
            }
            else {
              do {
                plVar15 = (long *)*plVar15;
                if (plVar15 == (long *)0x0) goto LAB_0290084c;
                uVar14 = plVar15[1];
                if (uVar14 != uVar11) {
                  if (uVar16 <= uVar14) {
                    uVar2 = 0;
                    if (uVar16 != 0) {
                      uVar2 = uVar14 / uVar16;
                    }
                    uVar14 = uVar14 - uVar2 * uVar16;
                  }
                  if (uVar14 != unaff_x27) goto LAB_0290084c;
                }
              } while (plVar15[2] != uVar11);
            }
            if (puVar7 != (undefined8 *)0x0) {
              FUN_02bcbe58(auStack_78,0);
              (**(code **)*puVar7)(puVar7);
              uVar16 = (**(code **)(*param_2 + 0xc0))(param_2);
              if ((uVar16 & 1) == 0) {
LAB_02900a04:
                (**(code **)(*param_2 + 0x18))(param_2,puVar7,0x70,8);
              }
              else {
                if (*(char *)(lVar3 + 0x38d488) == '\0') {
                  *(undefined1 *)(lVar3 + 0x38d488) = 1;
                  *(undefined8 *)(lVar3 + 0x38d478) = 0;
                  *(undefined8 *)(lVar3 + 0x38d480) = 0;
                  __cxa_thread_atexit(&LAB_02bcbe54,lVar3 + 0x80078,&PTR_LOOP_0411a000);
                }
                if (*(int *)(lVar3 + 0x38d480) < 1) goto LAB_02900a04;
                FUN_02bcc824(param_2,puVar7,0x70,8);
              }
              if (*(char *)(lVar3 + 0x38d488) == '\0') {
                *(undefined1 *)(lVar3 + 0x38d488) = 1;
                *(undefined8 *)(lVar3 + 0x38d478) = 0;
                *(undefined8 *)(lVar3 + 0x38d480) = 0;
                __cxa_thread_atexit(&LAB_02bcbe54,lVar3 + 0x80078,&PTR_LOOP_0411a000);
              }
              iVar5 = *(int *)(lVar3 + 0x38d480) + -1;
              *(int *)(lVar3 + 0x38d480) = iVar5;
              if (iVar5 == 0) {
                FUN_02bcc320();
                if (*(char *)(lVar3 + 0x38d488) == '\0') {
                  *(undefined1 *)(lVar3 + 0x38d488) = 1;
                  *(undefined8 *)(lVar3 + 0x38d478) = 0;
                  *(undefined8 *)(lVar3 + 0x38d480) = 0;
                  __cxa_thread_atexit(&LAB_02bcbe54,lVar3 + 0x80078,&PTR_LOOP_0411a000);
                }
                *(undefined4 *)(lVar3 + 0x38d484) = 0;
              }
            }
          }
          puVar21 = puVar21 + 1;
        } while (puVar21 != puVar17);
      }
    }
  }
  return;
}


