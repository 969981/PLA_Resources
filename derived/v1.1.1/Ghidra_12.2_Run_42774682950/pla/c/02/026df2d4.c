/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 026df2d4; name: FUN_026df2d4
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_026df2d4(long param_1)

{
  int *piVar1;
  long *plVar2;
  undefined8 *puVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  long *plVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  bool bVar11;
  int iVar12;
  int iVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined1 *puVar19;
  ulong uVar20;
  undefined1 *puVar21;
  ulong uVar22;
  ulong uVar23;
  long *plVar24;
  undefined1 *puVar25;
  long *plVar26;
  long *plVar27;
  long lVar28;
  long *plVar29;
  long *plVar30;
  long *plVar31;
  long *plVar32;
  long *plVar33;
  long *plVar34;
  float fVar35;
  undefined4 uVar36;
  float fVar37;
  float fVar38;
  int local_1c8;
  long *local_1c0;
  long *local_1b8;
  long *local_1b0;
  long *local_1a8 [2];
  long *local_198;
  long *local_190;
  undefined8 uStack_188;
  long *local_180;
  long *local_178;
  long *local_170;
  long *local_168;
  long *local_160;
  long *local_158;
  long *local_150;
  undefined8 *local_148;
  long *local_140;
  long *local_138;
  undefined **local_130;
  undefined8 *local_128;
  long local_120;
  undefined8 uStack_118;
  undefined8 *local_110;
  undefined8 uStack_108;
  float local_100;
  float fStack_fc;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined1 local_e0;
  char local_d0;
  undefined1 local_b0;
  undefined4 local_ac;
  undefined1 local_a8;
  long *local_98 [2];
  long *local_88 [3];
  
  switch(*(undefined4 *)(*(long *)(param_1 + 0x128) + 0xd0)) {
  case 0:
    local_150 = (long *)0x0;
    local_120 = 0;
    local_140 = (long *)(PTR_DAT_04382978 + 0x10);
    local_130 = &PTR_FUN_04287c30;
    local_138 = (long *)CONCAT44(local_138._4_4_,3);
    puVar3 = *(undefined8 **)PTR_DAT_04379570;
    uVar14 = *(undefined8 *)(PTR_DAT_04379570 + 8);
    uStack_118 = 0;
    local_d0 = '\0';
    local_f0 = 0;
    uStack_e8 = 0;
    local_e0 = 0;
    local_b0 = 0;
    local_a8 = 0;
    if (((*PTR_DAT_0437a648 & 1) == 0) &&
       (local_110 = puVar3, uStack_108 = uVar14, iVar13 = __cxa_guard_acquire(PTR_DAT_0437a648),
       iVar13 != 0)) {
      FUN_00100250(PTR_LAB_0437b598,PTR_DAT_0437a650,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437a648);
    }
    lVar16 = *(long *)PTR_DAT_0437a650;
    *(long *)PTR_DAT_0437a658 = lVar16;
    local_150 = *(long **)(lVar16 + 0x230);
    fStack_fc = *(float *)(param_1 + 0x5b0);
    local_100 = *(float *)(param_1 + 0x5ac);
    local_120 = (ulong)(uint)(local_100 + fStack_fc * 0.5) << 0x20;
    uStack_118 = 0;
    local_f0 = CONCAT44(local_f0._4_4_,1);
    local_110 = puVar3;
    uStack_108 = uVar14;
    if (((*PTR_DAT_04379660 & 1) == 0) &&
       (iVar13 = __cxa_guard_acquire(PTR_DAT_04379660), iVar13 != 0)) {
      FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379660);
    }
    lVar16 = *(long *)PTR_DAT_04379668;
    *(long *)PTR_DAT_04379670 = lVar16;
    puVar19 = *(undefined1 **)(lVar16 + 0x60);
    uVar36 = 0;
    if (puVar19 != (undefined1 *)0x0) {
      uVar20 = (long)puVar19 - ((ulong)puVar19 >> 1 & 0x5555555555555555);
      uVar20 = (uVar20 & 0x3333333333333333) + (uVar20 >> 2 & 0x3333333333333333);
      uVar20 = (uVar20 + (uVar20 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar20 < 2) {
        puVar21 = (undefined1 *)((ulong)(puVar19 + -1) & 0xa47c00866f39edf3);
      }
      else if (&DAT_a47c00866f39edf3 < puVar19) {
        puVar21 = &DAT_a47c00866f39edf3;
      }
      else {
        uVar22 = 0;
        if (puVar19 != (undefined1 *)0x0) {
          uVar22 = 0xa47c00866f39edf3 / (ulong)puVar19;
        }
        puVar21 = &DAT_a47c00866f39edf3 + -(uVar22 * (long)puVar19);
      }
      plVar24 = *(long **)(*(long *)(lVar16 + 0x58) + (long)puVar21 * 8);
      if ((plVar24 != (long *)0x0) && (plVar24 = (long *)*plVar24, plVar24 != (long *)0x0)) {
        if (uVar20 < 2) {
          do {
            if ((undefined1 *)plVar24[1] == &DAT_a47c00866f39edf3) {
              if ((undefined1 *)plVar24[2] == &DAT_a47c00866f39edf3) goto LAB_026df4a4;
            }
            else if ((undefined1 *)((ulong)plVar24[1] & (ulong)(puVar19 + -1)) != puVar21) break;
            plVar24 = (long *)*plVar24;
          } while (plVar24 != (long *)0x0);
        }
        else {
          do {
            puVar25 = (undefined1 *)plVar24[1];
            if (puVar25 == &DAT_a47c00866f39edf3) {
              if ((undefined1 *)plVar24[2] == &DAT_a47c00866f39edf3) goto LAB_026df4a4;
            }
            else {
              if (puVar19 <= puVar25) {
                uVar20 = 0;
                if (puVar19 != (undefined1 *)0x0) {
                  uVar20 = (ulong)puVar25 / (ulong)puVar19;
                }
                puVar25 = puVar25 + -(uVar20 * (long)puVar19);
              }
              if (puVar25 != puVar21) break;
            }
            plVar24 = (long *)*plVar24;
          } while (plVar24 != (long *)0x0);
        }
      }
    }
    break;
  case 1:
    local_150 = (long *)0x0;
    local_120 = 0;
    local_140 = (long *)(PTR_DAT_04382978 + 0x10);
    local_130 = &PTR_FUN_04287c30;
    local_138 = (long *)CONCAT44(local_138._4_4_,3);
    puVar3 = *(undefined8 **)PTR_DAT_04379570;
    uVar14 = *(undefined8 *)(PTR_DAT_04379570 + 8);
    uStack_118 = 0;
    local_d0 = '\0';
    local_f0 = 0;
    uStack_e8 = 0;
    local_e0 = 0;
    local_b0 = 0;
    local_a8 = 0;
    if (((*PTR_DAT_0437a648 & 1) == 0) &&
       (local_110 = puVar3, uStack_108 = uVar14, iVar13 = __cxa_guard_acquire(PTR_DAT_0437a648),
       iVar13 != 0)) {
      FUN_00100250(PTR_LAB_0437b598,PTR_DAT_0437a650,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437a648);
    }
    lVar16 = *(long *)PTR_DAT_0437a650;
    *(long *)PTR_DAT_0437a658 = lVar16;
    local_150 = *(long **)(lVar16 + 0x230);
    fStack_fc = *(float *)(param_1 + 0x5b0);
    local_100 = *(float *)(param_1 + 0x5ac);
    local_120 = (ulong)(uint)(local_100 + fStack_fc * 0.5) << 0x20;
    uStack_118 = 0;
    local_f0 = CONCAT44(local_f0._4_4_,1);
    local_110 = puVar3;
    uStack_108 = uVar14;
    if (((*PTR_DAT_04379660 & 1) == 0) &&
       (iVar13 = __cxa_guard_acquire(PTR_DAT_04379660), iVar13 != 0)) {
      FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379660);
    }
    lVar16 = *(long *)PTR_DAT_04379668;
    *(long *)PTR_DAT_04379670 = lVar16;
    uVar20 = *(ulong *)(lVar16 + 0x60);
    uVar36 = 0;
    if (uVar20 != 0) {
      uVar22 = uVar20 - (uVar20 >> 1 & 0x5555555555555555);
      uVar22 = (uVar22 & 0x3333333333333333) + (uVar22 >> 2 & 0x3333333333333333);
      uVar22 = (uVar22 + (uVar22 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar22 < 2) {
        uVar23 = uVar20 - 1 & 0x1929428f92436020;
      }
      else if (uVar20 < 0x1929428f92436021) {
        uVar23 = 0;
        if (uVar20 != 0) {
          uVar23 = 0x1929428f92436020 / uVar20;
        }
        uVar23 = 0x1929428f92436020 - uVar23 * uVar20;
      }
      else {
        uVar23 = 0x1929428f92436020;
      }
      plVar24 = *(long **)(*(long *)(lVar16 + 0x58) + uVar23 * 8);
      if ((plVar24 != (long *)0x0) && (plVar24 = (long *)*plVar24, plVar24 != (long *)0x0)) {
        if (uVar22 < 2) {
          do {
            if (plVar24[1] == 0x1929428f92436020) {
              if (plVar24[2] == 0x1929428f92436020) goto LAB_026dfdb0;
            }
            else if ((plVar24[1] & uVar20 - 1) != uVar23) break;
            plVar24 = (long *)*plVar24;
          } while (plVar24 != (long *)0x0);
        }
        else {
          do {
            uVar22 = plVar24[1];
            if (uVar22 == 0x1929428f92436020) {
              if (plVar24[2] == 0x1929428f92436020) goto LAB_026dfdb0;
            }
            else {
              if (uVar20 <= uVar22) {
                uVar6 = 0;
                if (uVar20 != 0) {
                  uVar6 = uVar22 / uVar20;
                }
                uVar22 = uVar22 - uVar6 * uVar20;
              }
              if (uVar22 != uVar23) break;
            }
            plVar24 = (long *)*plVar24;
          } while (plVar24 != (long *)0x0);
        }
      }
    }
    goto LAB_026e0654;
  case 2:
    local_150 = (long *)0x0;
    local_140 = (long *)(PTR_DAT_04382978 + 0x10);
    local_138 = (long *)CONCAT44(local_138._4_4_,3);
    puVar3 = *(undefined8 **)PTR_DAT_04379570;
    uVar14 = *(undefined8 *)(PTR_DAT_04379570 + 8);
    local_120 = 0;
    uStack_118 = 0;
    local_130 = &PTR_FUN_04287c30;
    local_d0 = '\0';
    local_e0 = 0;
    local_f0 = 0;
    uStack_e8 = 0;
    local_b0 = 0;
    local_a8 = 0;
    local_110 = puVar3;
    uStack_108 = uVar14;
    if (((*PTR_DAT_0437a648 & 1) == 0) &&
       (iVar13 = __cxa_guard_acquire(PTR_DAT_0437a648), iVar13 != 0)) {
      FUN_00100250(PTR_LAB_0437b598,PTR_DAT_0437a650,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437a648);
    }
    lVar16 = *(long *)PTR_DAT_0437a650;
    *(long *)PTR_DAT_0437a658 = lVar16;
    local_150 = *(long **)(lVar16 + 0x230);
    if (((*PTR_DAT_04379660 & 1) == 0) &&
       (iVar13 = __cxa_guard_acquire(PTR_DAT_04379660), iVar13 != 0)) {
      FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379660);
    }
    lVar16 = *(long *)PTR_DAT_04379668;
    *(long *)PTR_DAT_04379670 = lVar16;
    uVar20 = *(ulong *)(lVar16 + 0x60);
    uVar36 = 0;
    if (uVar20 != 0) {
      uVar22 = uVar20 - (uVar20 >> 1 & 0x5555555555555555);
      uVar22 = (uVar22 & 0x3333333333333333) + (uVar22 >> 2 & 0x3333333333333333);
      uVar22 = (uVar22 + (uVar22 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar22 < 2) {
        uVar23 = uVar20 - 1 & 0x7ae129403ce05f36;
      }
      else if (uVar20 < 0x7ae129403ce05f37) {
        uVar23 = 0;
        if (uVar20 != 0) {
          uVar23 = 0x7ae129403ce05f36 / uVar20;
        }
        uVar23 = 0x7ae129403ce05f36 - uVar23 * uVar20;
      }
      else {
        uVar23 = 0x7ae129403ce05f36;
      }
      plVar24 = *(long **)(*(long *)(lVar16 + 0x58) + uVar23 * 8);
      if ((plVar24 != (long *)0x0) && (plVar24 = (long *)*plVar24, plVar24 != (long *)0x0)) {
        if (uVar22 < 2) {
          do {
            if (plVar24[1] == 0x7ae129403ce05f36) {
              if (plVar24[2] == 0x7ae129403ce05f36) goto LAB_026df920;
            }
            else if ((plVar24[1] & uVar20 - 1) != uVar23) break;
            plVar24 = (long *)*plVar24;
          } while (plVar24 != (long *)0x0);
        }
        else {
          do {
            uVar22 = plVar24[1];
            if (uVar22 == 0x7ae129403ce05f36) {
              if (plVar24[2] == 0x7ae129403ce05f36) goto LAB_026df920;
            }
            else {
              if (uVar20 <= uVar22) {
                uVar6 = 0;
                if (uVar20 != 0) {
                  uVar6 = uVar22 / uVar20;
                }
                uVar22 = uVar22 - uVar6 * uVar20;
              }
              if (uVar22 != uVar23) break;
            }
            plVar24 = (long *)*plVar24;
          } while (plVar24 != (long *)0x0);
        }
      }
    }
    goto LAB_026e00d8;
  case 3:
    local_150 = (long *)0x0;
    local_140 = (long *)(PTR_DAT_04382978 + 0x10);
    local_138 = (long *)CONCAT44(local_138._4_4_,3);
    puVar3 = *(undefined8 **)PTR_DAT_04379570;
    uVar14 = *(undefined8 *)(PTR_DAT_04379570 + 8);
    local_120 = 0;
    uStack_118 = 0;
    local_130 = &PTR_FUN_04287c30;
    local_d0 = '\0';
    local_e0 = 0;
    local_f0 = 0;
    uStack_e8 = 0;
    local_b0 = 0;
    local_a8 = 0;
    local_110 = puVar3;
    uStack_108 = uVar14;
    if (((*PTR_DAT_0437a648 & 1) == 0) &&
       (iVar13 = __cxa_guard_acquire(PTR_DAT_0437a648), iVar13 != 0)) {
      FUN_00100250(PTR_LAB_0437b598,PTR_DAT_0437a650,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437a648);
    }
    lVar16 = *(long *)PTR_DAT_0437a650;
    *(long *)PTR_DAT_0437a658 = lVar16;
    puVar8 = PTR_DAT_04379660;
    local_150 = *(long **)(lVar16 + 0x230);
    fVar35 = *(float *)(param_1 + 0x5b0);
    fVar37 = *(float *)(param_1 + 0x5ac);
    if (((*PTR_DAT_04379660 & 1) == 0) &&
       (iVar13 = __cxa_guard_acquire(PTR_DAT_04379660), iVar13 != 0)) {
      FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379660);
    }
    puVar10 = PTR_DAT_04379670;
    puVar9 = PTR_DAT_04379668;
    fVar38 = 0.0;
    lVar16 = *(long *)PTR_DAT_04379668;
    *(long *)PTR_DAT_04379670 = lVar16;
    uVar20 = *(ulong *)(lVar16 + 0x60);
    if (uVar20 != 0) {
      uVar22 = uVar20 - (uVar20 >> 1 & 0x5555555555555555);
      uVar22 = (uVar22 & 0x3333333333333333) + (uVar22 >> 2 & 0x3333333333333333);
      uVar22 = (uVar22 + (uVar22 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar22 < 2) {
        uVar23 = uVar20 - 1 & 0xd37b7a2603d7ef69;
      }
      else if (uVar20 < 0xd37b7a2603d7ef6a) {
        uVar23 = 0;
        if (uVar20 != 0) {
          uVar23 = 0xd37b7a2603d7ef69 / uVar20;
        }
        uVar23 = 0xd37b7a2603d7ef69 - uVar23 * uVar20;
      }
      else {
        uVar23 = 0xd37b7a2603d7ef69;
      }
      plVar24 = *(long **)(*(long *)(lVar16 + 0x58) + uVar23 * 8);
      if ((plVar24 != (long *)0x0) && (plVar24 = (long *)*plVar24, plVar24 != (long *)0x0)) {
        if (uVar22 < 2) {
          do {
            if (plVar24[1] == 0xd37b7a2603d7ef69) {
              if (plVar24[2] == -0x2c8485d9fc281097) goto LAB_026dfb58;
            }
            else if ((plVar24[1] & uVar20 - 1) != uVar23) break;
            plVar24 = (long *)*plVar24;
          } while (plVar24 != (long *)0x0);
        }
        else {
          do {
            uVar22 = plVar24[1];
            if (uVar22 == 0xd37b7a2603d7ef69) {
              if (plVar24[2] == -0x2c8485d9fc281097) goto LAB_026dfb58;
            }
            else {
              if (uVar20 <= uVar22) {
                uVar6 = 0;
                if (uVar20 != 0) {
                  uVar6 = uVar22 / uVar20;
                }
                uVar22 = uVar22 - uVar6 * uVar20;
              }
              if (uVar22 != uVar23) break;
            }
            plVar24 = (long *)*plVar24;
          } while (plVar24 != (long *)0x0);
        }
      }
    }
    goto LAB_026e0210;
  case 4:
    local_150 = (long *)0x0;
    local_120 = 0;
    local_140 = (long *)(PTR_DAT_04382978 + 0x10);
    local_130 = &PTR_FUN_04287c30;
    local_138 = (long *)CONCAT44(local_138._4_4_,3);
    puVar3 = *(undefined8 **)PTR_DAT_04379570;
    uVar14 = *(undefined8 *)(PTR_DAT_04379570 + 8);
    uStack_118 = 0;
    local_d0 = '\0';
    local_f0 = 0;
    uStack_e8 = 0;
    local_e0 = 0;
    local_b0 = 0;
    local_a8 = 0;
    if (((*PTR_DAT_0437a648 & 1) == 0) &&
       (local_110 = puVar3, uStack_108 = uVar14, iVar13 = __cxa_guard_acquire(PTR_DAT_0437a648),
       iVar13 != 0)) {
      FUN_00100250(PTR_LAB_0437b598,PTR_DAT_0437a650,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437a648);
    }
    lVar16 = *(long *)PTR_DAT_0437a650;
    *(long *)PTR_DAT_0437a658 = lVar16;
    local_150 = *(long **)(lVar16 + 0x230);
    fStack_fc = *(float *)(param_1 + 0x5b0);
    local_100 = *(float *)(param_1 + 0x5ac);
    local_120 = (ulong)(uint)(local_100 + fStack_fc * 0.5) << 0x20;
    uStack_118 = 0;
    local_f0 = CONCAT44(local_f0._4_4_,1);
    local_110 = puVar3;
    uStack_108 = uVar14;
    if (((*PTR_DAT_04379660 & 1) == 0) &&
       (iVar13 = __cxa_guard_acquire(PTR_DAT_04379660), iVar13 != 0)) {
      FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379660);
    }
    lVar16 = *(long *)PTR_DAT_04379668;
    *(long *)PTR_DAT_04379670 = lVar16;
    uVar20 = *(ulong *)(lVar16 + 0x60);
    uVar36 = 0;
    if (uVar20 != 0) {
      uVar22 = uVar20 - (uVar20 >> 1 & 0x5555555555555555);
      uVar22 = (uVar22 & 0x3333333333333333) + (uVar22 >> 2 & 0x3333333333333333);
      uVar22 = (uVar22 + (uVar22 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar22 < 2) {
        uVar23 = uVar20 - 1 & 0x6fc8d43756f5f9ed;
      }
      else if (uVar20 < 0x6fc8d43756f5f9ee) {
        uVar23 = 0;
        if (uVar20 != 0) {
          uVar23 = 0x6fc8d43756f5f9ed / uVar20;
        }
        uVar23 = 0x6fc8d43756f5f9ed - uVar23 * uVar20;
      }
      else {
        uVar23 = 0x6fc8d43756f5f9ed;
      }
      plVar24 = *(long **)(*(long *)(lVar16 + 0x58) + uVar23 * 8);
      if ((plVar24 != (long *)0x0) && (plVar24 = (long *)*plVar24, plVar24 != (long *)0x0)) {
        if (uVar22 < 2) {
          do {
            if (plVar24[1] == 0x6fc8d43756f5f9ed) {
              if (plVar24[2] == 0x6fc8d43756f5f9ed) goto LAB_026df6fc;
            }
            else if ((plVar24[1] & uVar20 - 1) != uVar23) break;
            plVar24 = (long *)*plVar24;
          } while (plVar24 != (long *)0x0);
        }
        else {
          do {
            uVar22 = plVar24[1];
            if (uVar22 == 0x6fc8d43756f5f9ed) {
              if (plVar24[2] == 0x6fc8d43756f5f9ed) goto LAB_026df6fc;
            }
            else {
              if (uVar20 <= uVar22) {
                uVar6 = 0;
                if (uVar20 != 0) {
                  uVar6 = uVar22 / uVar20;
                }
                uVar22 = uVar22 - uVar6 * uVar20;
              }
              if (uVar22 != uVar23) break;
            }
            plVar24 = (long *)*plVar24;
          } while (plVar24 != (long *)0x0);
        }
      }
    }
    goto LAB_026dffcc;
  default:
    goto switchD_026df324_default;
  }
  goto LAB_026e0548;
LAB_026df6fc:
  plVar24 = (long *)plVar24[3];
  if (plVar24 != (long *)0x0) {
    plVar27 = plVar24 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar27,0x10);
      if (bVar5) {
        *(int *)plVar27 = (int)*plVar27 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    uVar20 = plVar24[0x21];
    uVar36 = 0;
    if (uVar20 != 0) {
      uVar22 = uVar20 - (uVar20 >> 1 & 0x5555555555555555);
      uVar22 = (uVar22 & 0x3333333333333333) + (uVar22 >> 2 & 0x3333333333333333);
      uVar22 = (uVar22 + (uVar22 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar22 < 2) {
        uVar23 = uVar20 - 1 & 0xad7e35c8f769703e;
      }
      else if (uVar20 < 0xad7e35c8f769703f) {
        uVar23 = 0;
        if (uVar20 != 0) {
          uVar23 = 0xad7e35c8f769703e / uVar20;
        }
        uVar23 = 0xad7e35c8f769703e - uVar23 * uVar20;
      }
      else {
        uVar23 = 0xad7e35c8f769703e;
      }
      plVar26 = *(long **)(plVar24[0x20] + uVar23 * 8);
      if ((plVar26 != (long *)0x0) && (plVar26 = (long *)*plVar26, plVar26 != (long *)0x0)) {
        if (uVar22 < 2) {
          do {
            if (plVar26[1] == 0xad7e35c8f769703e) {
              if (plVar26[2] == -0x5281ca3708968fc2) goto LAB_026dffb4;
            }
            else if ((plVar26[1] & uVar20 - 1) != uVar23) break;
            plVar26 = (long *)*plVar26;
          } while (plVar26 != (long *)0x0);
        }
        else {
          do {
            uVar22 = plVar26[1];
            if (uVar22 == 0xad7e35c8f769703e) {
              if (plVar26[2] == -0x5281ca3708968fc2) goto LAB_026dffb4;
            }
            else {
              if (uVar20 <= uVar22) {
                uVar6 = 0;
                if (uVar20 != 0) {
                  uVar6 = uVar22 / uVar20;
                }
                uVar22 = uVar22 - uVar6 * uVar20;
              }
              if (uVar22 != uVar23) break;
            }
            plVar26 = (long *)*plVar26;
          } while (plVar26 != (long *)0x0);
        }
      }
    }
    goto LAB_026dffb8;
  }
  goto LAB_026dffcc;
LAB_026dffb4:
  uVar36 = (undefined4)plVar26[6];
LAB_026dffb8:
  do {
    iVar13 = (int)*plVar27 + -1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar27,0x10);
    if (bVar5) {
      *(int *)plVar27 = iVar13;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar13 == 0) {
    (**(code **)(*plVar24 + 0x10))();
  }
LAB_026dffcc:
  local_b0 = 1;
  local_168 = *(long **)(param_1 + 0x68);
  local_ac = uVar36;
  if (local_168 != (long *)0x0) {
    lVar16 = local_168[0xb];
    if (*(undefined8 **)(lVar16 + 0x18) == (undefined8 *)0x0) goto LAB_026e2718;
    if (*(long *)(lVar16 + 0x10) == 0) {
      uVar14 = (**(code **)**(undefined8 **)(lVar16 + 0x18))();
      *(undefined8 *)(lVar16 + 0x10) = uVar14;
    }
    piVar1 = (int *)(lVar16 + 0xc);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  FUN_01d266e0(local_98,param_1,&local_168,&local_150);
  plVar24 = *(long **)(param_1 + 0x188);
  *(undefined8 *)(param_1 + 0x188) = 0;
  if (plVar24 != (long *)0x0) {
    lVar16 = plVar24[0xb];
    piVar1 = (int *)(lVar16 + 0xc);
    do {
      iVar13 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar13 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar13 + -1 == 0) {
      *(undefined8 *)(lVar16 + 0x18) = 0;
      (**(code **)(*plVar24 + 0x20))();
    }
  }
  *(long **)(param_1 + 0x188) = local_98[0];
  if (local_168 != (long *)0x0) {
    lVar16 = local_168[0xb];
    piVar1 = (int *)(lVar16 + 0xc);
    do {
      bVar11 = *piVar1 + -1 == 0;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
      plVar24 = local_168;
    } while (cVar4 != '\0');
    goto LAB_026e070c;
  }
  goto LAB_026e0710;
LAB_026dfb58:
  plVar24 = (long *)plVar24[3];
  if (plVar24 != (long *)0x0) {
    plVar27 = plVar24 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar27,0x10);
      if (bVar5) {
        *(int *)plVar27 = (int)*plVar27 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    uVar20 = plVar24[0x21];
    fVar38 = 0.0;
    if (uVar20 != 0) {
      uVar22 = uVar20 - (uVar20 >> 1 & 0x5555555555555555);
      uVar22 = (uVar22 & 0x3333333333333333) + (uVar22 >> 2 & 0x3333333333333333);
      uVar22 = (uVar22 + (uVar22 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar22 < 2) {
        uVar23 = uVar20 - 1 & 0x6991ce74286bc5a7;
      }
      else if (uVar20 < 0x6991ce74286bc5a8) {
        uVar23 = 0;
        if (uVar20 != 0) {
          uVar23 = 0x6991ce74286bc5a7 / uVar20;
        }
        uVar23 = 0x6991ce74286bc5a7 - uVar23 * uVar20;
      }
      else {
        uVar23 = 0x6991ce74286bc5a7;
      }
      plVar26 = *(long **)(plVar24[0x20] + uVar23 * 8);
      if ((plVar26 != (long *)0x0) && (plVar26 = (long *)*plVar26, plVar26 != (long *)0x0)) {
        if (uVar22 < 2) {
          do {
            if (plVar26[1] == 0x6991ce74286bc5a7) {
              if (plVar26[2] == 0x6991ce74286bc5a7) goto LAB_026e01f8;
            }
            else if ((plVar26[1] & uVar20 - 1) != uVar23) break;
            plVar26 = (long *)*plVar26;
          } while (plVar26 != (long *)0x0);
        }
        else {
          do {
            uVar22 = plVar26[1];
            if (uVar22 == 0x6991ce74286bc5a7) {
              if (plVar26[2] == 0x6991ce74286bc5a7) goto LAB_026e01f8;
            }
            else {
              if (uVar20 <= uVar22) {
                uVar6 = 0;
                if (uVar20 != 0) {
                  uVar6 = uVar22 / uVar20;
                }
                uVar22 = uVar22 - uVar6 * uVar20;
              }
              if (uVar22 != uVar23) break;
            }
            plVar26 = (long *)*plVar26;
          } while (plVar26 != (long *)0x0);
        }
      }
    }
    goto LAB_026e01fc;
  }
  goto LAB_026e0210;
LAB_026e01f8:
  fVar38 = *(float *)(plVar26 + 6);
LAB_026e01fc:
  do {
    iVar13 = (int)*plVar27 + -1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar27,0x10);
    if (bVar5) {
      *(int *)plVar27 = iVar13;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar13 == 0) {
    (**(code **)(*plVar24 + 0x10))();
  }
LAB_026e0210:
  local_100 = *(float *)(param_1 + 0x5ac);
  local_120 = (ulong)(uint)(fVar37 + fVar35 * 0.5 + fVar38) << 0x20;
  fStack_fc = *(float *)(param_1 + 0x5b0);
  uStack_118 = 0;
  local_f0 = CONCAT44(local_f0._4_4_,1);
  local_110 = puVar3;
  uStack_108 = uVar14;
  if (((*puVar8 & 1) == 0) && (iVar13 = __cxa_guard_acquire(PTR_DAT_04379660), iVar13 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar16 = *(long *)puVar9;
  *(long *)puVar10 = lVar16;
  uVar20 = *(ulong *)(lVar16 + 0x60);
  uVar36 = 0;
  if (uVar20 != 0) {
    uVar22 = uVar20 - (uVar20 >> 1 & 0x5555555555555555);
    uVar22 = (uVar22 & 0x3333333333333333) + (uVar22 >> 2 & 0x3333333333333333);
    uVar22 = (uVar22 + (uVar22 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar22 < 2) {
      uVar23 = uVar20 - 1 & 0x51158b6ddb1ee2da;
    }
    else if (uVar20 < 0x51158b6ddb1ee2db) {
      uVar23 = 0;
      if (uVar20 != 0) {
        uVar23 = 0x51158b6ddb1ee2da / uVar20;
      }
      uVar23 = 0x51158b6ddb1ee2da - uVar23 * uVar20;
    }
    else {
      uVar23 = 0x51158b6ddb1ee2da;
    }
    plVar24 = *(long **)(*(long *)(lVar16 + 0x58) + uVar23 * 8);
    if ((plVar24 != (long *)0x0) && (plVar24 = (long *)*plVar24, plVar24 != (long *)0x0)) {
      if (uVar22 < 2) {
        do {
          if (plVar24[1] == 0x51158b6ddb1ee2da) {
            if (plVar24[2] == 0x51158b6ddb1ee2da) goto LAB_026e02e0;
          }
          else if ((plVar24[1] & uVar20 - 1) != uVar23) break;
          plVar24 = (long *)*plVar24;
        } while (plVar24 != (long *)0x0);
      }
      else {
        do {
          uVar22 = plVar24[1];
          if (uVar22 == 0x51158b6ddb1ee2da) {
            if (plVar24[2] == 0x51158b6ddb1ee2da) goto LAB_026e02e0;
          }
          else {
            if (uVar20 <= uVar22) {
              uVar6 = 0;
              if (uVar20 != 0) {
                uVar6 = uVar22 / uVar20;
              }
              uVar22 = uVar22 - uVar6 * uVar20;
            }
            if (uVar22 != uVar23) break;
          }
          plVar24 = (long *)*plVar24;
        } while (plVar24 != (long *)0x0);
      }
    }
  }
  goto LAB_026e043c;
LAB_026e02e0:
  plVar24 = (long *)plVar24[3];
  if (plVar24 != (long *)0x0) {
    plVar27 = plVar24 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar27,0x10);
      if (bVar5) {
        *(int *)plVar27 = (int)*plVar27 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    uVar20 = plVar24[0x21];
    uVar36 = 0;
    if (uVar20 != 0) {
      uVar22 = uVar20 - (uVar20 >> 1 & 0x5555555555555555);
      uVar22 = (uVar22 & 0x3333333333333333) + (uVar22 >> 2 & 0x3333333333333333);
      uVar22 = (uVar22 + (uVar22 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar22 < 2) {
        uVar23 = uVar20 - 1 & 0xad7e35c8f769703e;
      }
      else if (uVar20 < 0xad7e35c8f769703f) {
        uVar23 = 0;
        if (uVar20 != 0) {
          uVar23 = 0xad7e35c8f769703e / uVar20;
        }
        uVar23 = 0xad7e35c8f769703e - uVar23 * uVar20;
      }
      else {
        uVar23 = 0xad7e35c8f769703e;
      }
      plVar26 = *(long **)(plVar24[0x20] + uVar23 * 8);
      if ((plVar26 != (long *)0x0) && (plVar26 = (long *)*plVar26, plVar26 != (long *)0x0)) {
        if (uVar22 < 2) {
          do {
            if (plVar26[1] == 0xad7e35c8f769703e) {
              if (plVar26[2] == -0x5281ca3708968fc2) goto LAB_026e0424;
            }
            else if ((plVar26[1] & uVar20 - 1) != uVar23) break;
            plVar26 = (long *)*plVar26;
          } while (plVar26 != (long *)0x0);
        }
        else {
          do {
            uVar22 = plVar26[1];
            if (uVar22 == 0xad7e35c8f769703e) {
              if (plVar26[2] == -0x5281ca3708968fc2) goto LAB_026e0424;
            }
            else {
              if (uVar20 <= uVar22) {
                uVar6 = 0;
                if (uVar20 != 0) {
                  uVar6 = uVar22 / uVar20;
                }
                uVar22 = uVar22 - uVar6 * uVar20;
              }
              if (uVar22 != uVar23) break;
            }
            plVar26 = (long *)*plVar26;
          } while (plVar26 != (long *)0x0);
        }
      }
    }
    goto LAB_026e0428;
  }
  goto LAB_026e043c;
LAB_026e0424:
  uVar36 = (undefined4)plVar26[6];
LAB_026e0428:
  do {
    iVar13 = (int)*plVar27 + -1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar27,0x10);
    if (bVar5) {
      *(int *)plVar27 = iVar13;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar13 == 0) {
    (**(code **)(*plVar24 + 0x10))();
  }
LAB_026e043c:
  local_b0 = 1;
  local_170 = *(long **)(param_1 + 0x68);
  local_ac = uVar36;
  if (local_170 != (long *)0x0) {
    lVar16 = local_170[0xb];
    if (*(undefined8 **)(lVar16 + 0x18) == (undefined8 *)0x0) goto LAB_026e2718;
    if (*(long *)(lVar16 + 0x10) == 0) {
      uVar14 = (**(code **)**(undefined8 **)(lVar16 + 0x18))();
      *(undefined8 *)(lVar16 + 0x10) = uVar14;
    }
    piVar1 = (int *)(lVar16 + 0xc);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  FUN_01d266e0(local_98,param_1,&local_170,&local_150);
  plVar24 = *(long **)(param_1 + 0x188);
  *(undefined8 *)(param_1 + 0x188) = 0;
  if (plVar24 != (long *)0x0) {
    lVar16 = plVar24[0xb];
    piVar1 = (int *)(lVar16 + 0xc);
    do {
      iVar13 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar13 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar13 + -1 == 0) {
      *(undefined8 *)(lVar16 + 0x18) = 0;
      (**(code **)(*plVar24 + 0x20))();
    }
  }
  *(long **)(param_1 + 0x188) = local_98[0];
  if (local_170 != (long *)0x0) {
    lVar16 = local_170[0xb];
    piVar1 = (int *)(lVar16 + 0xc);
    do {
      bVar11 = *piVar1 + -1 == 0;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
      plVar24 = local_170;
    } while (cVar4 != '\0');
    goto LAB_026e070c;
  }
  goto LAB_026e0710;
LAB_026df920:
  plVar24 = (long *)plVar24[3];
  if (plVar24 != (long *)0x0) {
    plVar27 = plVar24 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar27,0x10);
      if (bVar5) {
        *(int *)plVar27 = (int)*plVar27 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    uVar20 = plVar24[0x21];
    uVar36 = 0;
    if (uVar20 != 0) {
      uVar22 = uVar20 - (uVar20 >> 1 & 0x5555555555555555);
      uVar22 = (uVar22 & 0x3333333333333333) + (uVar22 >> 2 & 0x3333333333333333);
      uVar22 = (uVar22 + (uVar22 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar22 < 2) {
        uVar23 = uVar20 - 1 & 0xad7e35c8f769703e;
      }
      else if (uVar20 < 0xad7e35c8f769703f) {
        uVar23 = 0;
        if (uVar20 != 0) {
          uVar23 = 0xad7e35c8f769703e / uVar20;
        }
        uVar23 = 0xad7e35c8f769703e - uVar23 * uVar20;
      }
      else {
        uVar23 = 0xad7e35c8f769703e;
      }
      plVar26 = *(long **)(plVar24[0x20] + uVar23 * 8);
      if ((plVar26 != (long *)0x0) && (plVar26 = (long *)*plVar26, plVar26 != (long *)0x0)) {
        if (uVar22 < 2) {
          do {
            if (plVar26[1] == 0xad7e35c8f769703e) {
              if (plVar26[2] == -0x5281ca3708968fc2) goto LAB_026e00c0;
            }
            else if ((plVar26[1] & uVar20 - 1) != uVar23) break;
            plVar26 = (long *)*plVar26;
          } while (plVar26 != (long *)0x0);
        }
        else {
          do {
            uVar22 = plVar26[1];
            if (uVar22 == 0xad7e35c8f769703e) {
              if (plVar26[2] == -0x5281ca3708968fc2) goto LAB_026e00c0;
            }
            else {
              if (uVar20 <= uVar22) {
                uVar6 = 0;
                if (uVar20 != 0) {
                  uVar6 = uVar22 / uVar20;
                }
                uVar22 = uVar22 - uVar6 * uVar20;
              }
              if (uVar22 != uVar23) break;
            }
            plVar26 = (long *)*plVar26;
          } while (plVar26 != (long *)0x0);
        }
      }
    }
    goto LAB_026e00c4;
  }
  goto LAB_026e00d8;
LAB_026e00c0:
  uVar36 = (undefined4)plVar26[6];
LAB_026e00c4:
  do {
    iVar13 = (int)*plVar27 + -1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar27,0x10);
    if (bVar5) {
      *(int *)plVar27 = iVar13;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar13 == 0) {
    (**(code **)(*plVar24 + 0x10))();
  }
LAB_026e00d8:
  local_b0 = 1;
  local_f0 = CONCAT44(local_f0._4_4_,1);
  fStack_fc = *(float *)(param_1 + 0x5b0);
  local_100 = *(float *)(param_1 + 0x5ac);
  local_120 = (ulong)(uint)(local_100 + fStack_fc * 0.5) << 0x20;
  uStack_118 = 0;
  local_178 = *(long **)(param_1 + 0x68);
  local_110 = puVar3;
  uStack_108 = uVar14;
  local_ac = uVar36;
  if (local_178 != (long *)0x0) {
    lVar16 = local_178[0xb];
    if (*(undefined8 **)(lVar16 + 0x18) == (undefined8 *)0x0) goto LAB_026e2718;
    if (*(long *)(lVar16 + 0x10) == 0) {
      uVar14 = (**(code **)**(undefined8 **)(lVar16 + 0x18))();
      *(undefined8 *)(lVar16 + 0x10) = uVar14;
    }
    piVar1 = (int *)(lVar16 + 0xc);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  FUN_01d266e0(local_98,param_1,&local_178,&local_150);
  plVar24 = *(long **)(param_1 + 0x188);
  *(undefined8 *)(param_1 + 0x188) = 0;
  if (plVar24 != (long *)0x0) {
    lVar16 = plVar24[0xb];
    piVar1 = (int *)(lVar16 + 0xc);
    do {
      iVar13 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar13 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar13 + -1 == 0) {
      *(undefined8 *)(lVar16 + 0x18) = 0;
      (**(code **)(*plVar24 + 0x20))();
    }
  }
  *(long **)(param_1 + 0x188) = local_98[0];
  if (local_178 != (long *)0x0) {
    lVar16 = local_178[0xb];
    piVar1 = (int *)(lVar16 + 0xc);
    do {
      bVar11 = *piVar1 + -1 == 0;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
      plVar24 = local_178;
    } while (cVar4 != '\0');
    goto LAB_026e070c;
  }
  goto LAB_026e0710;
LAB_026dfdb0:
  plVar24 = (long *)plVar24[3];
  if (plVar24 != (long *)0x0) {
    plVar27 = plVar24 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar27,0x10);
      if (bVar5) {
        *(int *)plVar27 = (int)*plVar27 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    uVar20 = plVar24[0x21];
    uVar36 = 0;
    if (uVar20 != 0) {
      uVar22 = uVar20 - (uVar20 >> 1 & 0x5555555555555555);
      uVar22 = (uVar22 & 0x3333333333333333) + (uVar22 >> 2 & 0x3333333333333333);
      uVar22 = (uVar22 + (uVar22 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar22 < 2) {
        uVar23 = uVar20 - 1 & 0xad7e35c8f769703e;
      }
      else if (uVar20 < 0xad7e35c8f769703f) {
        uVar23 = 0;
        if (uVar20 != 0) {
          uVar23 = 0xad7e35c8f769703e / uVar20;
        }
        uVar23 = 0xad7e35c8f769703e - uVar23 * uVar20;
      }
      else {
        uVar23 = 0xad7e35c8f769703e;
      }
      plVar26 = *(long **)(plVar24[0x20] + uVar23 * 8);
      if ((plVar26 != (long *)0x0) && (plVar26 = (long *)*plVar26, plVar26 != (long *)0x0)) {
        if (uVar22 < 2) {
          do {
            if (plVar26[1] == 0xad7e35c8f769703e) {
              if (plVar26[2] == -0x5281ca3708968fc2) goto LAB_026e063c;
            }
            else if ((plVar26[1] & uVar20 - 1) != uVar23) break;
            plVar26 = (long *)*plVar26;
          } while (plVar26 != (long *)0x0);
        }
        else {
          do {
            uVar22 = plVar26[1];
            if (uVar22 == 0xad7e35c8f769703e) {
              if (plVar26[2] == -0x5281ca3708968fc2) goto LAB_026e063c;
            }
            else {
              if (uVar20 <= uVar22) {
                uVar6 = 0;
                if (uVar20 != 0) {
                  uVar6 = uVar22 / uVar20;
                }
                uVar22 = uVar22 - uVar6 * uVar20;
              }
              if (uVar22 != uVar23) break;
            }
            plVar26 = (long *)*plVar26;
          } while (plVar26 != (long *)0x0);
        }
      }
    }
    goto LAB_026e0640;
  }
  goto LAB_026e0654;
LAB_026e063c:
  uVar36 = (undefined4)plVar26[6];
LAB_026e0640:
  do {
    iVar13 = (int)*plVar27 + -1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar27,0x10);
    if (bVar5) {
      *(int *)plVar27 = iVar13;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar13 == 0) {
    (**(code **)(*plVar24 + 0x10))();
  }
LAB_026e0654:
  local_b0 = 1;
  local_160 = *(long **)(param_1 + 0x68);
  local_ac = uVar36;
  if (local_160 != (long *)0x0) {
    lVar16 = local_160[0xb];
    if (*(undefined8 **)(lVar16 + 0x18) == (undefined8 *)0x0) goto LAB_026e2718;
    if (*(long *)(lVar16 + 0x10) == 0) {
      uVar14 = (**(code **)**(undefined8 **)(lVar16 + 0x18))();
      *(undefined8 *)(lVar16 + 0x10) = uVar14;
    }
    piVar1 = (int *)(lVar16 + 0xc);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  FUN_01d266e0(local_98,param_1,&local_160,&local_150);
  plVar24 = *(long **)(param_1 + 0x188);
  *(undefined8 *)(param_1 + 0x188) = 0;
  if (plVar24 != (long *)0x0) {
    lVar16 = plVar24[0xb];
    piVar1 = (int *)(lVar16 + 0xc);
    do {
      iVar13 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar13 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar13 + -1 == 0) {
      *(undefined8 *)(lVar16 + 0x18) = 0;
      (**(code **)(*plVar24 + 0x20))();
    }
  }
  *(long **)(param_1 + 0x188) = local_98[0];
  if (local_160 != (long *)0x0) {
    lVar16 = local_160[0xb];
    piVar1 = (int *)(lVar16 + 0xc);
    do {
      bVar11 = *piVar1 + -1 == 0;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
      plVar24 = local_160;
    } while (cVar4 != '\0');
    goto LAB_026e070c;
  }
  goto LAB_026e0710;
LAB_026df4a4:
  plVar24 = (long *)plVar24[3];
  if (plVar24 != (long *)0x0) {
    plVar27 = plVar24 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar27,0x10);
      if (bVar5) {
        *(int *)plVar27 = (int)*plVar27 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    uVar20 = plVar24[0x21];
    uVar36 = 0;
    if (uVar20 != 0) {
      uVar22 = uVar20 - (uVar20 >> 1 & 0x5555555555555555);
      uVar22 = (uVar22 & 0x3333333333333333) + (uVar22 >> 2 & 0x3333333333333333);
      uVar22 = (uVar22 + (uVar22 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar22 < 2) {
        uVar23 = uVar20 - 1 & 0xad7e35c8f769703e;
      }
      else if (uVar20 < 0xad7e35c8f769703f) {
        uVar23 = 0;
        if (uVar20 != 0) {
          uVar23 = 0xad7e35c8f769703e / uVar20;
        }
        uVar23 = 0xad7e35c8f769703e - uVar23 * uVar20;
      }
      else {
        uVar23 = 0xad7e35c8f769703e;
      }
      plVar26 = *(long **)(plVar24[0x20] + uVar23 * 8);
      if ((plVar26 != (long *)0x0) && (plVar26 = (long *)*plVar26, plVar26 != (long *)0x0)) {
        if (uVar22 < 2) {
          do {
            if (plVar26[1] == 0xad7e35c8f769703e) {
              if (plVar26[2] == -0x5281ca3708968fc2) goto LAB_026e0530;
            }
            else if ((plVar26[1] & uVar20 - 1) != uVar23) break;
            plVar26 = (long *)*plVar26;
          } while (plVar26 != (long *)0x0);
        }
        else {
          do {
            uVar22 = plVar26[1];
            if (uVar22 == 0xad7e35c8f769703e) {
              if (plVar26[2] == -0x5281ca3708968fc2) goto LAB_026e0530;
            }
            else {
              if (uVar20 <= uVar22) {
                uVar6 = 0;
                if (uVar20 != 0) {
                  uVar6 = uVar22 / uVar20;
                }
                uVar22 = uVar22 - uVar6 * uVar20;
              }
              if (uVar22 != uVar23) break;
            }
            plVar26 = (long *)*plVar26;
          } while (plVar26 != (long *)0x0);
        }
      }
    }
    goto LAB_026e0534;
  }
  goto LAB_026e0548;
LAB_026e0530:
  uVar36 = (undefined4)plVar26[6];
LAB_026e0534:
  do {
    iVar13 = (int)*plVar27 + -1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar27,0x10);
    if (bVar5) {
      *(int *)plVar27 = iVar13;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar13 == 0) {
    (**(code **)(*plVar24 + 0x10))();
  }
LAB_026e0548:
  local_b0 = 1;
  local_158 = *(long **)(param_1 + 0x68);
  local_ac = uVar36;
  if (local_158 != (long *)0x0) {
    lVar16 = local_158[0xb];
    if (*(undefined8 **)(lVar16 + 0x18) == (undefined8 *)0x0) goto LAB_026e2718;
    if (*(long *)(lVar16 + 0x10) == 0) {
      uVar14 = (**(code **)**(undefined8 **)(lVar16 + 0x18))();
      *(undefined8 *)(lVar16 + 0x10) = uVar14;
    }
    piVar1 = (int *)(lVar16 + 0xc);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  FUN_01d266e0(local_98,param_1,&local_158,&local_150);
  plVar24 = *(long **)(param_1 + 0x188);
  *(undefined8 *)(param_1 + 0x188) = 0;
  if (plVar24 != (long *)0x0) {
    lVar16 = plVar24[0xb];
    piVar1 = (int *)(lVar16 + 0xc);
    do {
      iVar13 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar13 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar13 + -1 == 0) {
      *(undefined8 *)(lVar16 + 0x18) = 0;
      (**(code **)(*plVar24 + 0x20))();
    }
  }
  *(long **)(param_1 + 0x188) = local_98[0];
  if (local_158 == (long *)0x0) {
LAB_026e0710:
    local_98[0] = (long *)0x0;
  }
  else {
    lVar16 = local_158[0xb];
    piVar1 = (int *)(lVar16 + 0xc);
    do {
      bVar11 = *piVar1 + -1 == 0;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
      plVar24 = local_158;
    } while (cVar4 != '\0');
LAB_026e070c:
    local_98[0] = (long *)0x0;
    if (!bVar11) goto LAB_026e0710;
    *(undefined8 *)(lVar16 + 0x18) = 0;
    (**(code **)(*plVar24 + 0x20))();
  }
  if (local_d0 != '\0') {
    local_d0 = '\0';
  }
  uVar14 = *(undefined8 *)(param_1 + 0x130);
  local_180 = *(long **)(param_1 + 0x188);
  if (local_180 != (long *)0x0) {
    lVar16 = local_180[0xb];
    if (*(undefined8 **)(lVar16 + 0x18) == (undefined8 *)0x0) goto LAB_026e2718;
    if (*(long *)(lVar16 + 0x10) == 0) {
      uVar15 = (**(code **)**(undefined8 **)(lVar16 + 0x18))();
      *(undefined8 *)(lVar16 + 0x10) = uVar15;
    }
    piVar1 = (int *)(lVar16 + 0xc);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  FUN_01a71028(uVar14,&local_180);
  if (local_180 != (long *)0x0) {
    lVar16 = local_180[0xb];
    piVar1 = (int *)(lVar16 + 0xc);
    do {
      iVar13 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar13 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar13 + -1 == 0) {
      *(undefined8 *)(lVar16 + 0x18) = 0;
      (**(code **)(*local_180 + 0x20))();
    }
  }
  local_100 = (float)((uint)local_100 & 0xffffff00);
  local_148 = (undefined8 *)0x0;
  local_150 = (long *)CONCAT44(local_150._4_4_,1);
  local_110 = (undefined8 *)0x0;
  uStack_108 = 0;
  local_120 = 0;
  uStack_118 = 0;
  local_130 = (undefined **)0x0;
  local_128 = (undefined8 *)0x0;
  local_140 = (long *)0x0;
  local_138 = (long *)0x0;
  (**(code **)(**(long **)(param_1 + 0x130) + 0x18))(local_98);
  local_190 = (long *)0x0;
  uStack_188 = 0;
  FUN_019926fc(&local_190,local_98);
  plVar24 = local_98[0];
  if (local_98[0] != (long *)0x0) {
    plVar27 = local_98[0] + 1;
    do {
      iVar13 = (int)*plVar27 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar27,0x10);
      if (bVar5) {
        *(int *)plVar27 = iVar13;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar13 == 0) {
      local_98[0][2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar16 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar16;
      local_88[0] = (long *)*plVar24;
      FUN_02a44274(lVar16 + 0xd8,local_88);
    }
  }
  FUN_02706590(&local_138,&local_190);
  plVar24 = local_190;
  if (local_190 != (long *)0x0) {
    plVar27 = local_190 + 1;
    do {
      iVar13 = (int)*plVar27 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar27,0x10);
      if (bVar5) {
        *(int *)plVar27 = iVar13;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar13 == 0) {
      local_190[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar16 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar16;
      local_98[0] = (long *)*plVar24;
      FUN_02a44274(lVar16 + 0xd8,local_98);
    }
  }
  local_198 = *(long **)(param_1 + 0x188);
  if (local_198 != (long *)0x0) {
    lVar16 = local_198[0xb];
    if (*(undefined8 **)(lVar16 + 0x18) == (undefined8 *)0x0) {
LAB_026e2718:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar16 + 0x10) == 0) {
      uVar14 = (**(code **)**(undefined8 **)(lVar16 + 0x18))();
      *(undefined8 *)(lVar16 + 0x10) = uVar14;
    }
    piVar1 = (int *)(lVar16 + 0xc);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  FUN_01e4b6a0(&local_198,&local_150);
  puVar3 = local_110;
  if (local_198 != (long *)0x0) {
    lVar16 = local_198[0xb];
    piVar1 = (int *)(lVar16 + 0xc);
    do {
      iVar13 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar13 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar13 + -1 == 0) {
      *(undefined8 *)(lVar16 + 0x18) = 0;
      (**(code **)(*local_198 + 0x20))();
      puVar3 = local_110;
    }
  }
  local_110 = puVar3;
  if (puVar3 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar3 + 1);
    do {
      iVar13 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar13 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar13 + -1 == 0) {
      puVar3[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar16 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar16;
      local_98[0] = (long *)*puVar3;
      FUN_02a44274(lVar16 + 0xd8,local_98);
    }
  }
  puVar3 = local_128;
  if (local_128 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_128 + 1);
    do {
      iVar13 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar13 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar13 + -1 == 0) {
      local_128[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar16 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar16;
      local_98[0] = (long *)*puVar3;
      FUN_02a44274(lVar16 + 0xd8,local_98);
    }
  }
  plVar24 = local_138;
  if (local_138 != (long *)0x0) {
    plVar27 = local_138 + 1;
    do {
      iVar13 = (int)*plVar27 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar27,0x10);
      if (bVar5) {
        *(int *)plVar27 = iVar13;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar13 == 0) {
      local_138[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar16 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar16;
      local_98[0] = (long *)*plVar24;
      FUN_02a44274(lVar16 + 0xd8,local_98);
    }
  }
  puVar3 = local_148;
  if (local_148 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_148 + 1);
    do {
      iVar13 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar13 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar13 + -1 == 0) {
      local_148[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar16 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar16;
      local_98[0] = (long *)*puVar3;
      FUN_02a44274(lVar16 + 0xd8,local_98);
    }
  }
  puVar9 = PTR_DAT_043796e8;
  puVar8 = PTR_DAT_043796e0;
  lVar16 = *(long *)(param_1 + 0x90);
  if ((lVar16 != 0) && (*(int *)(lVar16 + 0xc) != 0)) {
    piVar1 = (int *)(lVar16 + 0xc);
    iVar13 = *(int *)(lVar16 + 0xc);
LAB_026e11f8:
    plVar24 = *(long **)(lVar16 + 0x10);
    if (((*puVar8 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar8), iVar12 != 0)) {
      if (((*PTR_DAT_043794d0 & 1) == 0) &&
         (iVar12 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar12 != 0)) {
        uVar14 = FUN_0087f8f0();
        *(undefined8 *)PTR_DAT_043794d8 = uVar14;
        __cxa_guard_release(PTR_DAT_043794d0);
      }
      *(undefined **)puVar9 = PTR_DAT_043794d8;
      __cxa_guard_release(puVar8);
    }
    while( true ) {
      if (plVar24 == (long *)0x0) {
        return;
      }
      if (plVar24 == (long *)puVar9) break;
      plVar24 = (long *)*plVar24;
    }
    iVar12 = *piVar1;
    if (iVar12 == iVar13) {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar13 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 == '\0') {
        lVar16 = *(long *)(lVar16 + 0x18);
        plVar24 = (long *)(lVar16 + -0x50);
        if (lVar16 == 0) {
          return;
        }
        FUN_02be8e60(&local_150,*(undefined8 *)(param_1 + 0x188),0);
        FUN_01839c8c(&local_190,&local_150);
        plVar27 = local_150;
        if (local_150 != (long *)0x0) {
          plVar26 = local_150 + 1;
          do {
            iVar13 = (int)*plVar26 + -1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar26,0x10);
            if (bVar5) {
              *(int *)plVar26 = iVar13;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar13 == 0) {
            local_150[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar17 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar17;
            local_98[0] = (long *)*plVar27;
            FUN_02a44274(lVar17 + 0xd8,local_98);
          }
        }
        local_150 = (long *)0x0;
        local_148 = (undefined8 *)0x0;
        FUN_00cf98c8(&local_150,lVar16 + 200);
        plVar26 = local_150;
        puVar9 = PTR_DAT_0437a668;
        puVar8 = PTR_DAT_0437a660;
        plVar27 = (long *)0x0;
        if (local_150 != (long *)0x0) {
          if (*(int *)((long)local_150 + 0xc) == 0) {
LAB_026e1ae0:
            plVar27 = (long *)0x0;
            plVar26 = local_150;
          }
          else {
            piVar1 = (int *)((long)local_150 + 0xc);
            iVar13 = *(int *)((long)local_150 + 0xc);
            while( true ) {
              plVar27 = (long *)plVar26[2];
              if (((*puVar9 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar9), iVar12 != 0)) {
                if (((*PTR_DAT_043794d0 & 1) == 0) &&
                   (iVar12 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar12 != 0)) {
                  uVar14 = FUN_0087f8f0();
                  *(undefined8 *)PTR_DAT_043794d8 = uVar14;
                  __cxa_guard_release(PTR_DAT_043794d0);
                }
                *(undefined **)puVar8 = PTR_DAT_043794d8;
                __cxa_guard_release(puVar9);
                if (plVar27 != (long *)0x0) goto LAB_026e19dc;
                goto LAB_026e1ae0;
              }
              while( true ) {
                if (plVar27 == (long *)0x0) goto LAB_026e1ae0;
LAB_026e19dc:
                if (plVar27 == (long *)puVar8) break;
                plVar27 = (long *)*plVar27;
              }
              iVar12 = *piVar1;
              if (iVar12 == iVar13) break;
              ClearExclusiveLocal();
LAB_026e19c4:
              iVar13 = iVar12;
              if (iVar12 == 0) goto LAB_026e1ae0;
            }
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
              *piVar1 = iVar13 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
            if (cVar4 != '\0') goto LAB_026e19c4;
            lVar17 = plVar26[3];
            plVar27 = (long *)0x0;
            plVar26 = local_150;
            if (lVar17 != 0) {
              plVar27 = (long *)(lVar17 + -0x50);
            }
          }
          local_150 = plVar26;
          if (plVar26 != (long *)0x0) {
            plVar29 = plVar26 + 1;
            do {
              iVar13 = (int)*plVar29 + -1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar29,0x10);
              if (bVar5) {
                *(int *)plVar29 = iVar13;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar13 == 0) {
              plVar26[2] = 0;
              if (((*PTR_DAT_04379498 & 1) == 0) &&
                 (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar17 = *(long *)PTR_DAT_043794a0;
              *(long *)PTR_DAT_043794a8 = lVar17;
              local_98[0] = (long *)*plVar26;
              FUN_02a44274(lVar17 + 0xd8,local_98);
            }
          }
        }
        if ((plVar27 == (long *)0x0) && (local_190 == (long *)0x0)) goto LAB_026e163c;
        FUN_02be8e60(&local_150,*(undefined8 *)(param_1 + 0x188),0);
        FUN_01839c8c(local_88,&local_150);
        plVar26 = local_150;
        if (local_150 != (long *)0x0) {
          plVar29 = local_150 + 1;
          do {
            iVar13 = (int)*plVar29 + -1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar29,0x10);
            if (bVar5) {
              *(int *)plVar29 = iVar13;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar13 == 0) {
            local_150[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar17 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar17;
            local_98[0] = (long *)*plVar26;
            FUN_02a44274(lVar17 + 0xd8,local_98);
          }
        }
        if (local_88[0] != (long *)0x0) {
          lVar17 = FUN_01cd0138(*(long *)(param_1 + 0x68),
                                *(undefined8 *)(*(long *)(param_1 + 0x68) + 8));
          FUN_02be8e60(local_1a8,*(undefined8 *)(param_1 + 0x188),0);
          local_1b0 = (long *)(lVar17 + 0x1f0);
          plVar26 = (long *)0x0;
          if (lVar17 != 0) {
            (**(code **)(*local_1b0 + 0x10))();
            plVar26 = local_1b0;
          }
          local_1b0 = plVar26;
          FUN_01e44f24(plVar27,0xf,local_1a8,&local_1b0);
          if (local_1b0 != (long *)0x0) {
            (**(code **)(*local_1b0 + 0x18))();
          }
          if (local_1a8[0] != (long *)0x0) {
            plVar26 = local_1a8[0] + 1;
            do {
              iVar13 = (int)*plVar26 + -1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar26,0x10);
              if (bVar5) {
                *(int *)plVar26 = iVar13;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar13 == 0) {
              local_1a8[0][2] = 0;
              if (((*PTR_DAT_04379498 & 1) == 0) &&
                 (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar18 = *(long *)PTR_DAT_043794a0;
              *(long *)PTR_DAT_043794a8 = lVar18;
              local_150 = (long *)*local_1a8[0];
              FUN_02a44274(lVar18 + 0xd8,&local_150);
            }
          }
          FUN_019a0f18(&local_150,plVar24);
          if (local_150 == (long *)0x0) {
            local_1b8 = (long *)0x0;
          }
          else {
            FUN_009597b8(&local_1b8);
            plVar26 = local_150;
            if (local_150 != (long *)0x0) {
              plVar29 = local_150 + 1;
              do {
                iVar13 = (int)*plVar29 + -1;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(plVar29,0x10);
                if (bVar5) {
                  *(int *)plVar29 = iVar13;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (iVar13 == 0) {
                local_150[2] = 0;
                if (((*PTR_DAT_04379498 & 1) == 0) &&
                   (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
                  FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                  __cxa_guard_release(PTR_DAT_04379498);
                }
                lVar18 = *(long *)PTR_DAT_043794a0;
                *(long *)PTR_DAT_043794a8 = lVar18;
                local_98[0] = (long *)*plVar26;
                FUN_02a44274(lVar18 + 0xd8,local_98);
              }
            }
          }
          if (local_1b8 != (long *)0x0) {
            FUN_017fa418(&local_150);
            plVar29 = local_150;
            plVar26 = (long *)0x0;
            if (local_150 != (long *)0x0) {
              if (*(int *)((long)local_150 + 0xc) == 0) {
LAB_026e1bf4:
                plVar26 = (long *)0x0;
                plVar29 = local_150;
              }
              else {
                piVar1 = (int *)((long)local_150 + 0xc);
                iVar13 = *(int *)((long)local_150 + 0xc);
                while( true ) {
                  plVar33 = (long *)plVar29[2];
                  if (((*PTR_DAT_043794d0 & 1) == 0) &&
                     (iVar12 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar12 != 0)) {
                    uVar14 = FUN_0087f8f0();
                    *(undefined8 *)PTR_DAT_043794d8 = uVar14;
                    __cxa_guard_release(PTR_DAT_043794d0);
                    if (plVar33 != (long *)0x0) goto LAB_026e1b50;
                    goto LAB_026e1bf4;
                  }
                  while( true ) {
                    if (plVar33 == (long *)0x0) goto LAB_026e1bf4;
LAB_026e1b50:
                    plVar26 = local_140;
                    if (plVar33 == (long *)PTR_DAT_043794d8) break;
                    plVar33 = (long *)*plVar33;
                  }
                  iVar12 = *piVar1;
                  if (iVar12 == iVar13) break;
                  ClearExclusiveLocal();
LAB_026e1b30:
                  iVar13 = iVar12;
                  if (iVar12 == 0) goto LAB_026e1bf4;
                }
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar5) {
                  *piVar1 = iVar13 + 1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
                if (cVar4 != '\0') goto LAB_026e1b30;
                lVar18 = plVar29[3];
                if (lVar18 == 0) goto LAB_026e1bf4;
                plVar29 = (long *)(lVar18 + -8);
                if (local_140 != (long *)0x0) {
                  (**(code **)(*local_140 + 0x10))(local_140);
                }
                (**(code **)(*plVar29 + 0x18))(plVar29);
                plVar29 = local_150;
              }
              local_150 = plVar29;
              if (plVar29 != (long *)0x0) {
                plVar33 = plVar29 + 1;
                do {
                  iVar13 = (int)*plVar33 + -1;
                  cVar4 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(plVar33,0x10);
                  if (bVar5) {
                    *(int *)plVar33 = iVar13;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                if (iVar13 == 0) {
                  plVar29[2] = 0;
                  if (((*PTR_DAT_04379498 & 1) == 0) &&
                     (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
                    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                    __cxa_guard_release(PTR_DAT_04379498);
                  }
                  lVar18 = *(long *)PTR_DAT_043794a0;
                  *(long *)PTR_DAT_043794a8 = lVar18;
                  local_98[0] = (long *)*plVar29;
                  FUN_02a44274(lVar18 + 0xd8,local_98);
                }
              }
            }
            lVar17 = lVar17 + 0x210;
            FUN_01809140(&local_150,lVar17);
            plVar29 = local_150;
            if (local_150 == (long *)0x0) {
              plVar30 = (long *)0x0;
            }
            else {
              if (*(int *)((long)local_150 + 0xc) == 0) {
LAB_026e1d80:
                plVar30 = (long *)0x0;
                plVar29 = local_150;
              }
              else {
                piVar1 = (int *)((long)local_150 + 0xc);
                iVar13 = *(int *)((long)local_150 + 0xc);
                while( true ) {
                  plVar33 = (long *)plVar29[2];
                  if (((*PTR_DAT_043794d0 & 1) == 0) &&
                     (iVar12 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar12 != 0)) {
                    uVar14 = FUN_0087f8f0();
                    *(undefined8 *)PTR_DAT_043794d8 = uVar14;
                    __cxa_guard_release(PTR_DAT_043794d0);
                    if (plVar33 != (long *)0x0) goto LAB_026e1cb8;
                    goto LAB_026e1d80;
                  }
                  while( true ) {
                    if (plVar33 == (long *)0x0) goto LAB_026e1d80;
LAB_026e1cb8:
                    plVar30 = local_140;
                    if (plVar33 == (long *)PTR_DAT_043794d8) break;
                    plVar33 = (long *)*plVar33;
                  }
                  iVar12 = *piVar1;
                  if (iVar12 == iVar13) break;
                  ClearExclusiveLocal();
LAB_026e1c98:
                  iVar13 = iVar12;
                  if (iVar12 == 0) goto LAB_026e1d80;
                }
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar5) {
                  *piVar1 = iVar13 + 1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
                if (cVar4 != '\0') goto LAB_026e1c98;
                lVar18 = plVar29[3];
                if (lVar18 == 0) goto LAB_026e1d80;
                if (local_140 != (long *)0x0) {
                  lVar28 = local_140[0xb];
                  if (*(undefined8 **)(lVar28 + 0x18) == (undefined8 *)0x0) goto LAB_026e2718;
                  if (*(long *)(lVar28 + 0x10) == 0) {
                    uVar14 = (**(code **)**(undefined8 **)(lVar28 + 0x18))();
                    *(undefined8 *)(lVar28 + 0x10) = uVar14;
                  }
                  piVar1 = (int *)(lVar28 + 0xc);
                  do {
                    cVar4 = '\x01';
                    bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                    if (bVar5) {
                      *piVar1 = *piVar1 + 1;
                      cVar4 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar4 != '\0');
                }
                (**(code **)(*(long *)(lVar18 + -8) + 0x18))();
                plVar29 = local_150;
              }
              local_150 = plVar29;
              if (plVar29 != (long *)0x0) {
                plVar33 = plVar29 + 1;
                do {
                  iVar13 = (int)*plVar33 + -1;
                  cVar4 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(plVar33,0x10);
                  if (bVar5) {
                    *(int *)plVar33 = iVar13;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                if (iVar13 == 0) {
                  plVar29[2] = 0;
                  if (((*PTR_DAT_04379498 & 1) == 0) &&
                     (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
                    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                    __cxa_guard_release(PTR_DAT_04379498);
                  }
                  lVar18 = *(long *)PTR_DAT_043794a0;
                  *(long *)PTR_DAT_043794a8 = lVar18;
                  local_98[0] = (long *)*plVar29;
                  FUN_02a44274(lVar18 + 0xd8,local_98);
                }
              }
              if ((plVar26 != (long *)0x0) && (plVar30 != (long *)0x0)) {
                FUN_01d7a23c(plVar30,plVar26);
              }
            }
            FUN_017fa51c(&local_150,local_1b8);
            plVar29 = local_150;
            if (local_150 == (long *)0x0) {
              plVar31 = (long *)0x0;
            }
            else {
              if (*(int *)((long)local_150 + 0xc) == 0) {
LAB_026e1f04:
                plVar31 = (long *)0x0;
                plVar29 = local_150;
              }
              else {
                piVar1 = (int *)((long)local_150 + 0xc);
                iVar13 = *(int *)((long)local_150 + 0xc);
                while( true ) {
                  plVar33 = (long *)plVar29[2];
                  if (((*PTR_DAT_043794d0 & 1) == 0) &&
                     (iVar12 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar12 != 0)) {
                    uVar14 = FUN_0087f8f0();
                    *(undefined8 *)PTR_DAT_043794d8 = uVar14;
                    __cxa_guard_release(PTR_DAT_043794d0);
                    if (plVar33 != (long *)0x0) goto LAB_026e1e60;
                    goto LAB_026e1f04;
                  }
                  while( true ) {
                    if (plVar33 == (long *)0x0) goto LAB_026e1f04;
LAB_026e1e60:
                    plVar31 = local_140;
                    if (plVar33 == (long *)PTR_DAT_043794d8) break;
                    plVar33 = (long *)*plVar33;
                  }
                  iVar12 = *piVar1;
                  if (iVar12 == iVar13) break;
                  ClearExclusiveLocal();
LAB_026e1e40:
                  iVar13 = iVar12;
                  if (iVar12 == 0) goto LAB_026e1f04;
                }
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar5) {
                  *piVar1 = iVar13 + 1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
                if (cVar4 != '\0') goto LAB_026e1e40;
                lVar18 = plVar29[3];
                if (lVar18 == 0) goto LAB_026e1f04;
                plVar29 = (long *)(lVar18 + -8);
                if (local_140 != (long *)0x0) {
                  (**(code **)(*local_140 + 0x10))(local_140);
                }
                (**(code **)(*plVar29 + 0x18))(plVar29);
                plVar29 = local_150;
              }
              local_150 = plVar29;
              if (plVar29 != (long *)0x0) {
                plVar33 = plVar29 + 1;
                do {
                  iVar13 = (int)*plVar33 + -1;
                  cVar4 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(plVar33,0x10);
                  if (bVar5) {
                    *(int *)plVar33 = iVar13;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                if (iVar13 == 0) {
                  plVar29[2] = 0;
                  if (((*PTR_DAT_04379498 & 1) == 0) &&
                     (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
                    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                    __cxa_guard_release(PTR_DAT_04379498);
                  }
                  lVar18 = *(long *)PTR_DAT_043794a0;
                  *(long *)PTR_DAT_043794a8 = lVar18;
                  local_98[0] = (long *)*plVar29;
                  FUN_02a44274(lVar18 + 0xd8,local_98);
                }
              }
            }
            FUN_01809238(&local_150,lVar17);
            plVar29 = local_150;
            if (local_150 == (long *)0x0) {
              plVar32 = (long *)0x0;
            }
            else {
              if (*(int *)((long)local_150 + 0xc) == 0) {
LAB_026e2090:
                plVar32 = (long *)0x0;
                plVar29 = local_150;
              }
              else {
                piVar1 = (int *)((long)local_150 + 0xc);
                iVar13 = *(int *)((long)local_150 + 0xc);
                while( true ) {
                  plVar33 = (long *)plVar29[2];
                  if (((*PTR_DAT_043794d0 & 1) == 0) &&
                     (iVar12 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar12 != 0)) {
                    uVar14 = FUN_0087f8f0();
                    *(undefined8 *)PTR_DAT_043794d8 = uVar14;
                    __cxa_guard_release(PTR_DAT_043794d0);
                    if (plVar33 != (long *)0x0) goto LAB_026e1fc8;
                    goto LAB_026e2090;
                  }
                  while( true ) {
                    if (plVar33 == (long *)0x0) goto LAB_026e2090;
LAB_026e1fc8:
                    plVar32 = local_140;
                    if (plVar33 == (long *)PTR_DAT_043794d8) break;
                    plVar33 = (long *)*plVar33;
                  }
                  iVar12 = *piVar1;
                  if (iVar12 == iVar13) break;
                  ClearExclusiveLocal();
LAB_026e1fa8:
                  iVar13 = iVar12;
                  if (iVar12 == 0) goto LAB_026e2090;
                }
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar5) {
                  *piVar1 = iVar13 + 1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
                if (cVar4 != '\0') goto LAB_026e1fa8;
                lVar18 = plVar29[3];
                if (lVar18 == 0) goto LAB_026e2090;
                if (local_140 != (long *)0x0) {
                  lVar28 = local_140[0xb];
                  if (*(undefined8 **)(lVar28 + 0x18) == (undefined8 *)0x0) goto LAB_026e2718;
                  if (*(long *)(lVar28 + 0x10) == 0) {
                    uVar14 = (**(code **)**(undefined8 **)(lVar28 + 0x18))();
                    *(undefined8 *)(lVar28 + 0x10) = uVar14;
                  }
                  piVar1 = (int *)(lVar28 + 0xc);
                  do {
                    cVar4 = '\x01';
                    bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                    if (bVar5) {
                      *piVar1 = *piVar1 + 1;
                      cVar4 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar4 != '\0');
                }
                (**(code **)(*(long *)(lVar18 + -8) + 0x18))();
                plVar29 = local_150;
              }
              local_150 = plVar29;
              if (plVar29 != (long *)0x0) {
                plVar33 = plVar29 + 1;
                do {
                  iVar13 = (int)*plVar33 + -1;
                  cVar4 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(plVar33,0x10);
                  if (bVar5) {
                    *(int *)plVar33 = iVar13;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                if (iVar13 == 0) {
                  plVar29[2] = 0;
                  if (((*PTR_DAT_04379498 & 1) == 0) &&
                     (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
                    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                    __cxa_guard_release(PTR_DAT_04379498);
                  }
                  lVar18 = *(long *)PTR_DAT_043794a0;
                  *(long *)PTR_DAT_043794a8 = lVar18;
                  local_98[0] = (long *)*plVar29;
                  FUN_02a44274(lVar18 + 0xd8,local_98);
                }
              }
              if ((plVar31 != (long *)0x0) && (plVar32 != (long *)0x0)) {
                FUN_01d7a844(plVar32,plVar31);
              }
            }
            FUN_017fa724(&local_150,local_1b8);
            plVar29 = local_150;
            if (local_150 == (long *)0x0) {
              plVar33 = (long *)0x0;
            }
            else {
              if (*(int *)((long)local_150 + 0xc) == 0) {
LAB_026e227c:
                plVar33 = (long *)0x0;
                plVar34 = local_150;
              }
              else {
                piVar1 = (int *)((long)local_150 + 0xc);
                iVar13 = *(int *)((long)local_150 + 0xc);
                while( true ) {
                  plVar33 = (long *)plVar29[2];
                  if (((*PTR_DAT_043794d0 & 1) != 0) ||
                     (iVar12 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar12 == 0)) {
                    plVar34 = local_150;
                    if (plVar33 != (long *)0x0) goto LAB_026e2170;
                    break;
                  }
                  uVar14 = FUN_0087f8f0();
                  *(undefined8 *)PTR_DAT_043794d8 = uVar14;
                  __cxa_guard_release(PTR_DAT_043794d0);
                  plVar34 = local_150;
                  if (plVar33 == (long *)0x0) break;
LAB_026e2170:
                  while (plVar34 = local_140, plVar33 != (long *)PTR_DAT_043794d8) {
                    plVar33 = (long *)*plVar33;
                    if (plVar33 == (long *)0x0) {
                      plVar33 = (long *)0x0;
                      plVar34 = local_150;
                      goto joined_r0x026e2284;
                    }
                  }
                  iVar12 = *piVar1;
                  if (iVar12 == iVar13) {
                    cVar4 = '\x01';
                    bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                    if (bVar5) {
                      *piVar1 = iVar13 + 1;
                      cVar4 = ExclusiveMonitorsStatus();
                    }
                    if (cVar4 == '\0') {
                      lVar18 = plVar29[3];
                      if (lVar18 == 0) goto LAB_026e227c;
                      plVar29 = (long *)(lVar18 + -8);
                      if (local_140 != (long *)0x0) {
                        (**(code **)(*local_140 + 0x10))(local_140);
                      }
                      (**(code **)(*plVar29 + 0x18))(plVar29);
                      plVar33 = plVar34;
                      plVar34 = local_150;
                      break;
                    }
                  }
                  else {
                    ClearExclusiveLocal();
                  }
                  iVar13 = iVar12;
                  if (iVar12 == 0) goto LAB_026e227c;
                }
              }
joined_r0x026e2284:
              local_150 = plVar34;
              if (plVar34 != (long *)0x0) {
                plVar29 = plVar34 + 1;
                do {
                  iVar13 = (int)*plVar29 + -1;
                  cVar4 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(plVar29,0x10);
                  if (bVar5) {
                    *(int *)plVar29 = iVar13;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                if (iVar13 == 0) {
                  plVar34[2] = 0;
                  if (((*PTR_DAT_04379498 & 1) == 0) &&
                     (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
                    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                    __cxa_guard_release(PTR_DAT_04379498);
                  }
                  lVar18 = *(long *)PTR_DAT_043794a0;
                  *(long *)PTR_DAT_043794a8 = lVar18;
                  local_98[0] = (long *)*plVar34;
                  FUN_02a44274(lVar18 + 0xd8,local_98);
                }
              }
            }
            FUN_01809330(&local_150,lVar17);
            plVar29 = local_150;
            if (local_150 == (long *)0x0) {
              plVar34 = (long *)0x0;
            }
            else {
              if (*(int *)((long)local_150 + 0xc) == 0) {
LAB_026e242c:
                plVar34 = (long *)0x0;
                plVar7 = local_150;
              }
              else {
                piVar1 = (int *)((long)local_150 + 0xc);
                local_1c0._0_4_ = *(int *)((long)local_150 + 0xc);
                while( true ) {
                  plVar34 = (long *)plVar29[2];
                  if (((*PTR_DAT_043794d0 & 1) != 0) ||
                     (iVar13 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar13 == 0)) {
                    plVar7 = local_150;
                    if (plVar34 != (long *)0x0) goto LAB_026e22e8;
                    break;
                  }
                  uVar14 = FUN_0087f8f0();
                  *(undefined8 *)PTR_DAT_043794d8 = uVar14;
                  __cxa_guard_release(PTR_DAT_043794d0);
                  plVar7 = local_150;
                  if (plVar34 == (long *)0x0) break;
LAB_026e22e8:
                  while (plVar7 = local_140, plVar34 != (long *)PTR_DAT_043794d8) {
                    plVar34 = (long *)*plVar34;
                    if (plVar34 == (long *)0x0) {
                      plVar34 = (long *)0x0;
                      plVar7 = local_150;
                      goto joined_r0x026e2390;
                    }
                  }
                  iVar13 = *piVar1;
                  if (iVar13 == (int)local_1c0) {
                    cVar4 = '\x01';
                    bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                    if (bVar5) {
                      *piVar1 = (int)local_1c0 + 1;
                      cVar4 = ExclusiveMonitorsStatus();
                    }
                    if (cVar4 == '\0') {
                      lVar18 = plVar29[3];
                      if (lVar18 == 0) goto LAB_026e242c;
                      if (local_140 != (long *)0x0) {
                        lVar28 = local_140[0xb];
                        if (*(undefined8 **)(lVar28 + 0x18) == (undefined8 *)0x0) goto LAB_026e2718;
                        if (*(long *)(lVar28 + 0x10) == 0) {
                          uVar14 = (**(code **)**(undefined8 **)(lVar28 + 0x18))();
                          *(undefined8 *)(lVar28 + 0x10) = uVar14;
                        }
                        piVar1 = (int *)(lVar28 + 0xc);
                        do {
                          cVar4 = '\x01';
                          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                          if (bVar5) {
                            *piVar1 = *piVar1 + 1;
                            cVar4 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar4 != '\0');
                      }
                      (**(code **)(*(long *)(lVar18 + -8) + 0x18))();
                      plVar34 = plVar7;
                      plVar7 = local_150;
                      break;
                    }
                  }
                  else {
                    ClearExclusiveLocal();
                  }
                  local_1c0._0_4_ = iVar13;
                  if (iVar13 == 0) goto LAB_026e242c;
                }
              }
joined_r0x026e2390:
              local_150 = plVar7;
              if (plVar7 != (long *)0x0) {
                plVar29 = plVar7 + 1;
                do {
                  iVar13 = (int)*plVar29 + -1;
                  cVar4 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(plVar29,0x10);
                  if (bVar5) {
                    *(int *)plVar29 = iVar13;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                if (iVar13 == 0) {
                  plVar7[2] = 0;
                  if (((*PTR_DAT_04379498 & 1) == 0) &&
                     (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
                    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                    __cxa_guard_release(PTR_DAT_04379498);
                  }
                  lVar18 = *(long *)PTR_DAT_043794a0;
                  *(long *)PTR_DAT_043794a8 = lVar18;
                  local_98[0] = (long *)*plVar7;
                  FUN_02a44274(lVar18 + 0xd8,local_98);
                }
              }
              if ((plVar33 != (long *)0x0) && (plVar34 != (long *)0x0)) {
                FUN_01d7ae4c(plVar34,plVar33);
              }
            }
            FUN_017fa620(&local_150,local_1b8);
            plVar7 = local_150;
            plVar29 = (long *)0x0;
            if (local_150 != (long *)0x0) {
              if (*(int *)((long)local_150 + 0xc) == 0) {
LAB_026e2574:
                plVar29 = (long *)0x0;
              }
              else {
                piVar1 = (int *)((long)local_150 + 0xc);
                local_1c8 = *(int *)((long)local_150 + 0xc);
                while( true ) {
                  local_1c0 = (long *)plVar7[2];
                  if (((*PTR_DAT_043794d0 & 1) == 0) &&
                     (iVar13 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar13 != 0)) {
                    uVar14 = FUN_0087f8f0();
                    *(undefined8 *)PTR_DAT_043794d8 = uVar14;
                    __cxa_guard_release(PTR_DAT_043794d0);
                    if (local_1c0 != (long *)0x0) goto LAB_026e24b4;
                    goto LAB_026e2574;
                  }
                  while( true ) {
                    if (local_1c0 == (long *)0x0) goto LAB_026e2574;
LAB_026e24b4:
                    plVar29 = local_140;
                    if (local_1c0 == (long *)PTR_DAT_043794d8) break;
                    local_1c0 = (long *)*local_1c0;
                  }
                  iVar13 = *piVar1;
                  if (iVar13 == local_1c8) break;
                  ClearExclusiveLocal();
LAB_026e2488:
                  local_1c8 = iVar13;
                  if (iVar13 == 0) goto LAB_026e2574;
                }
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar5) {
                  *piVar1 = local_1c8 + 1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
                if (cVar4 != '\0') goto LAB_026e2488;
                lVar18 = plVar7[3];
                if (lVar18 == 0) goto LAB_026e2574;
                if (local_140 != (long *)0x0) {
                  (**(code **)(*local_140 + 0x10))(local_140);
                }
                (**(code **)(*(long *)(lVar18 + -8) + 0x18))();
              }
              plVar7 = local_150;
              if (local_150 != (long *)0x0) {
                plVar2 = local_150 + 1;
                do {
                  iVar13 = (int)*plVar2 + -1;
                  cVar4 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                  if (bVar5) {
                    *(int *)plVar2 = iVar13;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                if (iVar13 == 0) {
                  local_150[2] = 0;
                  if (((*PTR_DAT_04379498 & 1) == 0) &&
                     (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
                    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                    __cxa_guard_release(PTR_DAT_04379498);
                  }
                  lVar18 = *(long *)PTR_DAT_043794a0;
                  *(long *)PTR_DAT_043794a8 = lVar18;
                  local_98[0] = (long *)*plVar7;
                  FUN_02a44274(lVar18 + 0xd8,local_98);
                }
              }
            }
            FUN_01809428(&local_150,lVar17);
            plVar7 = local_150;
            if (local_150 != (long *)0x0) {
              if (*(int *)((long)local_150 + 0xc) == 0) {
LAB_026e2764:
                local_1c0 = (long *)0x0;
                plVar7 = local_150;
              }
              else {
                piVar1 = (int *)((long)local_150 + 0xc);
                local_1c8 = *(int *)((long)local_150 + 0xc);
                while( true ) {
                  local_1c0 = (long *)plVar7[2];
                  if (((*PTR_DAT_043794d0 & 1) == 0) &&
                     (iVar13 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar13 != 0)) {
                    uVar14 = FUN_0087f8f0();
                    *(undefined8 *)PTR_DAT_043794d8 = uVar14;
                    __cxa_guard_release(PTR_DAT_043794d0);
                    if (local_1c0 != (long *)0x0) goto LAB_026e2654;
                    goto LAB_026e2764;
                  }
                  while( true ) {
                    if (local_1c0 == (long *)0x0) goto LAB_026e2764;
LAB_026e2654:
                    plVar2 = local_140;
                    if (local_1c0 == (long *)PTR_DAT_043794d8) break;
                    local_1c0 = (long *)*local_1c0;
                  }
                  iVar13 = *piVar1;
                  if (iVar13 == local_1c8) break;
                  ClearExclusiveLocal();
LAB_026e2628:
                  local_1c8 = iVar13;
                  if (iVar13 == 0) goto LAB_026e2764;
                }
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar5) {
                  *piVar1 = local_1c8 + 1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
                if (cVar4 != '\0') goto LAB_026e2628;
                lVar17 = plVar7[3];
                if (lVar17 == 0) goto LAB_026e2764;
                if (local_140 != (long *)0x0) {
                  lVar18 = local_140[0xb];
                  if (*(undefined8 **)(lVar18 + 0x18) == (undefined8 *)0x0) goto LAB_026e2718;
                  if (*(long *)(lVar18 + 0x10) == 0) {
                    uVar14 = (**(code **)**(undefined8 **)(lVar18 + 0x18))();
                    *(undefined8 *)(lVar18 + 0x10) = uVar14;
                  }
                  piVar1 = (int *)(lVar18 + 0xc);
                  do {
                    cVar4 = '\x01';
                    bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                    if (bVar5) {
                      *piVar1 = *piVar1 + 1;
                      cVar4 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar4 != '\0');
                }
                (**(code **)(*(long *)(lVar17 + -8) + 0x18))();
                local_1c0 = plVar2;
                plVar7 = local_150;
              }
              local_150 = plVar7;
              if (plVar7 != (long *)0x0) {
                plVar2 = plVar7 + 1;
                do {
                  iVar13 = (int)*plVar2 + -1;
                  cVar4 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                  if (bVar5) {
                    *(int *)plVar2 = iVar13;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                if (iVar13 == 0) {
                  plVar7[2] = 0;
                  if (((*PTR_DAT_04379498 & 1) == 0) &&
                     (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
                    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                    __cxa_guard_release(PTR_DAT_04379498);
                  }
                  lVar17 = *(long *)PTR_DAT_043794a0;
                  *(long *)PTR_DAT_043794a8 = lVar17;
                  local_98[0] = (long *)*plVar7;
                  FUN_02a44274(lVar17 + 0xd8,local_98);
                }
              }
              if (local_1c0 != (long *)0x0) {
                if (plVar29 != (long *)0x0) {
                  FUN_01d7b454(local_1c0,plVar29);
                }
                lVar17 = local_1c0[0xb];
                piVar1 = (int *)(lVar17 + 0xc);
                do {
                  iVar13 = *piVar1;
                  cVar4 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar5) {
                    *piVar1 = iVar13 + -1;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                if (iVar13 + -1 == 0) {
                  *(undefined8 *)(lVar17 + 0x18) = 0;
                  (**(code **)(*local_1c0 + 0x20))();
                }
              }
            }
            if (plVar29 != (long *)0x0) {
              (**(code **)(*plVar29 + 0x18))(plVar29);
            }
            if (plVar34 != (long *)0x0) {
              lVar17 = plVar34[0xb];
              piVar1 = (int *)(lVar17 + 0xc);
              do {
                iVar13 = *piVar1;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar5) {
                  *piVar1 = iVar13 + -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (iVar13 + -1 == 0) {
                *(undefined8 *)(lVar17 + 0x18) = 0;
                (**(code **)(*plVar34 + 0x20))(plVar34);
              }
            }
            if (plVar33 != (long *)0x0) {
              (**(code **)(*plVar33 + 0x18))(plVar33);
            }
            if (plVar32 != (long *)0x0) {
              lVar17 = plVar32[0xb];
              piVar1 = (int *)(lVar17 + 0xc);
              do {
                iVar13 = *piVar1;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar5) {
                  *piVar1 = iVar13 + -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (iVar13 + -1 == 0) {
                *(undefined8 *)(lVar17 + 0x18) = 0;
                (**(code **)(*plVar32 + 0x20))(plVar32);
              }
            }
            if (plVar31 != (long *)0x0) {
              (**(code **)(*plVar31 + 0x18))(plVar31);
            }
            if (plVar30 != (long *)0x0) {
              lVar17 = plVar30[0xb];
              piVar1 = (int *)(lVar17 + 0xc);
              do {
                iVar13 = *piVar1;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar5) {
                  *piVar1 = iVar13 + -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (iVar13 + -1 == 0) {
                *(undefined8 *)(lVar17 + 0x18) = 0;
                (**(code **)(*plVar30 + 0x20))(plVar30);
              }
            }
            if (plVar26 != (long *)0x0) {
              (**(code **)(*plVar26 + 0x18))(plVar26);
            }
            if (local_1b8 != (long *)0x0) {
              lVar17 = local_1b8[0xb];
              piVar1 = (int *)(lVar17 + 0xc);
              do {
                iVar13 = *piVar1;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar5) {
                  *piVar1 = iVar13 + -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (iVar13 + -1 == 0) {
                *(undefined8 *)(lVar17 + 0x18) = 0;
                (**(code **)(*local_1b8 + 0x20))();
              }
            }
          }
          if (local_88[0] != (long *)0x0) {
            lVar17 = local_88[0][0xb];
            piVar1 = (int *)(lVar17 + 0xc);
            do {
              iVar13 = *piVar1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar5) {
                *piVar1 = iVar13 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar13 + -1 == 0) {
              *(undefined8 *)(lVar17 + 0x18) = 0;
              (**(code **)(*local_88[0] + 0x20))();
            }
          }
        }
        if (plVar27 != (long *)0x0) {
          lVar17 = plVar27[0xb];
          piVar1 = (int *)(lVar17 + 0xc);
          do {
            iVar13 = *piVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
              *piVar1 = iVar13 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar13 + -1 == 0) {
            *(undefined8 *)(lVar17 + 0x18) = 0;
            (**(code **)(*plVar27 + 0x20))(plVar27);
          }
        }
        if (local_190 != (long *)0x0) {
          lVar17 = local_190[0xb];
          piVar1 = (int *)(lVar17 + 0xc);
          do {
            iVar13 = *piVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
              *piVar1 = iVar13 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar13 + -1 == 0) {
            *(undefined8 *)(lVar17 + 0x18) = 0;
            (**(code **)(*local_190 + 0x20))();
          }
        }
LAB_026e163c:
        lVar16 = *(long *)(lVar16 + 8);
        piVar1 = (int *)(lVar16 + 0xc);
        do {
          iVar13 = *piVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar13 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar13 + -1 == 0) {
          *(undefined8 *)(lVar16 + 0x18) = 0;
          (**(code **)(*plVar24 + 0x20))(plVar24);
          return;
        }
        return;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    iVar13 = iVar12;
    if (iVar12 == 0) {
      return;
    }
    goto LAB_026e11f8;
  }
switchD_026df324_default:
  return;
}


