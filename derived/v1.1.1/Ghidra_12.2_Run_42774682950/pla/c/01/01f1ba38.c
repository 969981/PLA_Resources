/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01f1ba38; name: FUN_01f1ba38
 */


/* WARNING: Removing unreachable block (ram,0x01f1d7e8) */
/* WARNING: Removing unreachable block (ram,0x01f1bca8) */
/* WARNING: Type propagation algorithm not settling */

void FUN_01f1ba38(long param_1)

{
  ulong *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  uint uVar6;
  char cVar7;
  bool bVar8;
  undefined1 auVar9 [12];
  long *plVar10;
  long *plVar11;
  long lVar12;
  undefined4 *puVar13;
  undefined8 *puVar14;
  long lVar15;
  float *pfVar16;
  long lVar17;
  long lVar18;
  float *pfVar19;
  undefined8 uVar20;
  long lVar21;
  long lVar22;
  long *plVar23;
  long lVar24;
  long lVar25;
  ulong uVar26;
  int *piVar27;
  long lVar28;
  char *pcVar29;
  uint uVar30;
  long lVar31;
  long lVar32;
  undefined4 uVar33;
  ulong extraout_d0;
  long extraout_d0_00;
  char *extraout_var;
  undefined8 extraout_var_00;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined4 uVar36;
  float fVar37;
  float fVar38;
  undefined4 uVar39;
  float fVar40;
  undefined4 uStack_154;
  ulong local_100;
  char *pcStack_f8;
  ulong local_f0;
  long *local_e8;
  char *local_e0;
  ulong local_d8;
  ulong local_d0;
  long *local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  long *local_a0;
  undefined8 uStack_98;
  long local_90;
  undefined8 uStack_88;
  
  if (*(char *)(param_1 + 0x1009b8) != '\0') {
    return;
  }
  if (0 < *(int *)(param_1 + 0x1e170)) {
    lVar25 = 0;
    uVar26 = 0;
    do {
      puVar1 = (ulong *)(param_1 + 0x1e178 + lVar25);
      local_100 = *puVar1;
      pcStack_f8 = (char *)puVar1[1];
      local_e8 = *(long **)(param_1 + 0x1e190 + lVar25);
      local_f0 = puVar1[2];
      if (local_e8 != (long *)0x0) {
        (**(code **)(*local_e8 + 0x18))();
      }
      local_e0 = (char *)puVar1[4];
      local_d8 = puVar1[5];
      local_c8 = *(long **)(param_1 + 0x1e1b0 + lVar25);
      local_d0 = puVar1[6];
      if (local_c8 != (long *)0x0) {
        (**(code **)(*local_c8 + 0x18))();
      }
      puVar14 = (undefined8 *)(param_1 + 0x1e1b8 + lVar25);
      local_a8 = *(undefined4 *)(puVar14 + 3);
      local_b8 = puVar14[1];
      local_b0 = puVar14[2];
      local_c0 = *puVar14;
      if ((*(char *)(param_1 + 0x285b8) == '\0') || (*(char *)(param_1 + 0x285b9) == '\0')) {
LAB_01f1bd44:
        iVar5 = *(int *)(param_1 + 0x285c4);
      }
      else {
        if (uVar26 == *(uint *)(param_1 + 0x27c50)) {
          lVar15 = param_1 + 0x27bf8;
        }
        else {
          if (uVar26 != *(uint *)(param_1 + 0x27cb0)) {
            if (uVar26 == *(uint *)(param_1 + 0x27d10)) {
              lVar15 = *(long *)(param_1 + 0x27cf8);
              if (lVar15 < 0x673c626aecdc36e) {
                if (lVar15 < -0x3b831d44f85d5723) {
                  if ((lVar15 != -0x7d221732069b6fa1) && (lVar15 != -0x3b833644f85d819e))
                  goto LAB_01f1c4bc;
                }
                else if ((lVar15 != -0x3b831d44f85d5723) &&
                        ((lVar15 != -0x2cccb2f797b4e639 && (lVar15 != -0x259a23c268ea017d)))) {
LAB_01f1c4bc:
                  lVar15 = param_1 + 0x27cb8;
                  goto LAB_01f1c7cc;
                }
              }
              else if ((lVar15 != 0x673c626aecdc36e) &&
                      ((lVar15 != 0x311437a7ba604481 && (lVar15 != 0x2b45a449379cbf8d))))
              goto LAB_01f1c4bc;
              lVar15 = param_1 + 0x27cb8;
LAB_01f1d06c:
              FUN_01f1fe90(&local_100,lVar15);
            }
            else {
              if (uVar26 == *(uint *)(param_1 + 0x27dd0)) {
                lVar15 = *(long *)(param_1 + 0x27db8);
                if (lVar15 < 0x673c626aecdc36e) {
                  if (lVar15 < -0x3b831d44f85d5723) {
                    if ((lVar15 != -0x7d221732069b6fa1) && (lVar15 != -0x3b833644f85d819e))
                    goto LAB_01f1c15c;
                  }
                  else if ((lVar15 != -0x3b831d44f85d5723) &&
                          ((lVar15 != -0x2cccb2f797b4e639 && (lVar15 != -0x259a23c268ea017d)))) {
LAB_01f1c15c:
                    lVar15 = param_1 + 0x27d78;
                    goto LAB_01f1c7cc;
                  }
                }
                else if ((lVar15 != 0x673c626aecdc36e) &&
                        ((lVar15 != 0x311437a7ba604481 && (lVar15 != 0x2b45a449379cbf8d))))
                goto LAB_01f1c15c;
                lVar15 = param_1 + 0x27d78;
                goto LAB_01f1d06c;
              }
              if (uVar26 == *(uint *)(param_1 + 0x27d70)) {
                lVar15 = param_1 + 0x27d18;
LAB_01f1c7cc:
                FUN_01f1f930(&local_100,lVar15);
              }
            }
            if (uVar26 == *(uint *)(param_1 + 0x27e30)) {
              lVar15 = *(long *)(param_1 + 0x27e18);
              if (lVar15 < 0x673c626aecdc36e) {
                if (lVar15 < -0x3b831d44f85d5723) {
                  if ((lVar15 != -0x7d221732069b6fa1) && (lVar15 != -0x3b833644f85d819e))
                  goto LAB_01f1c528;
                }
                else if ((lVar15 != -0x3b831d44f85d5723) &&
                        ((lVar15 != -0x2cccb2f797b4e639 && (lVar15 != -0x259a23c268ea017d)))) {
LAB_01f1c528:
                  lVar15 = param_1 + 0x27dd8;
                  goto LAB_01f1c7dc;
                }
              }
              else if ((lVar15 != 0x673c626aecdc36e) &&
                      ((lVar15 != 0x311437a7ba604481 && (lVar15 != 0x2b45a449379cbf8d))))
              goto LAB_01f1c528;
              lVar15 = param_1 + 0x27dd8;
LAB_01f1d0ac:
              FUN_01f1fe90(&local_100,lVar15);
            }
            else {
              if (uVar26 == *(uint *)(param_1 + 0x27ef0)) {
                lVar15 = *(long *)(param_1 + 0x27ed8);
                if (lVar15 < 0x673c626aecdc36e) {
                  if (lVar15 < -0x3b831d44f85d5723) {
                    if ((lVar15 != -0x7d221732069b6fa1) && (lVar15 != -0x3b833644f85d819e))
                    goto LAB_01f1c1c8;
                  }
                  else if ((lVar15 != -0x3b831d44f85d5723) &&
                          ((lVar15 != -0x2cccb2f797b4e639 && (lVar15 != -0x259a23c268ea017d)))) {
LAB_01f1c1c8:
                    lVar15 = param_1 + 0x27e98;
                    goto LAB_01f1c7dc;
                  }
                }
                else if ((lVar15 != 0x673c626aecdc36e) &&
                        ((lVar15 != 0x311437a7ba604481 && (lVar15 != 0x2b45a449379cbf8d))))
                goto LAB_01f1c1c8;
                lVar15 = param_1 + 0x27e98;
                goto LAB_01f1d0ac;
              }
              if (uVar26 == *(uint *)(param_1 + 0x27e90)) {
                lVar15 = param_1 + 0x27e38;
LAB_01f1c7dc:
                FUN_01f1f930(&local_100,lVar15);
              }
            }
            if (uVar26 == *(uint *)(param_1 + 0x27f50)) {
              lVar15 = *(long *)(param_1 + 0x27f38);
              if (lVar15 < 0x673c626aecdc36e) {
                if (lVar15 < -0x3b831d44f85d5723) {
                  if ((lVar15 != -0x7d221732069b6fa1) && (lVar15 != -0x3b833644f85d819e))
                  goto LAB_01f1c594;
                }
                else if ((lVar15 != -0x3b831d44f85d5723) &&
                        ((lVar15 != -0x2cccb2f797b4e639 && (lVar15 != -0x259a23c268ea017d)))) {
LAB_01f1c594:
                  lVar15 = param_1 + 0x27ef8;
                  goto LAB_01f1c7ec;
                }
              }
              else if ((lVar15 != 0x673c626aecdc36e) &&
                      ((lVar15 != 0x311437a7ba604481 && (lVar15 != 0x2b45a449379cbf8d))))
              goto LAB_01f1c594;
              lVar15 = param_1 + 0x27ef8;
LAB_01f1d0ec:
              FUN_01f1fe90(&local_100,lVar15);
            }
            else {
              if (uVar26 == *(uint *)(param_1 + 0x28010)) {
                lVar15 = *(long *)(param_1 + 0x27ff8);
                if (lVar15 < 0x673c626aecdc36e) {
                  if (lVar15 < -0x3b831d44f85d5723) {
                    if ((lVar15 != -0x7d221732069b6fa1) && (lVar15 != -0x3b833644f85d819e))
                    goto LAB_01f1c234;
                  }
                  else if ((lVar15 != -0x3b831d44f85d5723) &&
                          ((lVar15 != -0x2cccb2f797b4e639 && (lVar15 != -0x259a23c268ea017d)))) {
LAB_01f1c234:
                    lVar15 = param_1 + 0x27fb8;
                    goto LAB_01f1c7ec;
                  }
                }
                else if ((lVar15 != 0x673c626aecdc36e) &&
                        ((lVar15 != 0x311437a7ba604481 && (lVar15 != 0x2b45a449379cbf8d))))
                goto LAB_01f1c234;
                lVar15 = param_1 + 0x27fb8;
                goto LAB_01f1d0ec;
              }
              if (uVar26 == *(uint *)(param_1 + 0x27fb0)) {
                lVar15 = param_1 + 0x27f58;
LAB_01f1c7ec:
                FUN_01f1f930(&local_100,lVar15);
              }
            }
            if (uVar26 == *(uint *)(param_1 + 0x28070)) {
              lVar15 = *(long *)(param_1 + 0x28058);
              if (lVar15 < 0x673c626aecdc36e) {
                if (lVar15 < -0x3b831d44f85d5723) {
                  if ((lVar15 != -0x7d221732069b6fa1) && (lVar15 != -0x3b833644f85d819e))
                  goto LAB_01f1c600;
                }
                else if ((lVar15 != -0x3b831d44f85d5723) &&
                        ((lVar15 != -0x2cccb2f797b4e639 && (lVar15 != -0x259a23c268ea017d)))) {
LAB_01f1c600:
                  lVar15 = param_1 + 0x28018;
                  goto LAB_01f1c7fc;
                }
              }
              else if ((lVar15 != 0x673c626aecdc36e) &&
                      ((lVar15 != 0x311437a7ba604481 && (lVar15 != 0x2b45a449379cbf8d))))
              goto LAB_01f1c600;
              lVar15 = param_1 + 0x28018;
LAB_01f1d12c:
              FUN_01f1fe90(&local_100,lVar15);
            }
            else {
              if (uVar26 == *(uint *)(param_1 + 0x28130)) {
                lVar15 = *(long *)(param_1 + 0x28118);
                if (lVar15 < 0x673c626aecdc36e) {
                  if (lVar15 < -0x3b831d44f85d5723) {
                    if ((lVar15 != -0x7d221732069b6fa1) && (lVar15 != -0x3b833644f85d819e))
                    goto LAB_01f1c2a0;
                  }
                  else if ((lVar15 != -0x3b831d44f85d5723) &&
                          ((lVar15 != -0x2cccb2f797b4e639 && (lVar15 != -0x259a23c268ea017d)))) {
LAB_01f1c2a0:
                    lVar15 = param_1 + 0x280d8;
                    goto LAB_01f1c7fc;
                  }
                }
                else if ((lVar15 != 0x673c626aecdc36e) &&
                        ((lVar15 != 0x311437a7ba604481 && (lVar15 != 0x2b45a449379cbf8d))))
                goto LAB_01f1c2a0;
                lVar15 = param_1 + 0x280d8;
                goto LAB_01f1d12c;
              }
              if (uVar26 == *(uint *)(param_1 + 0x280d0)) {
                lVar15 = param_1 + 0x28078;
LAB_01f1c7fc:
                FUN_01f1f930(&local_100,lVar15);
              }
            }
            if (uVar26 == *(uint *)(param_1 + 0x28190)) {
              lVar15 = *(long *)(param_1 + 0x28178);
              if (lVar15 < 0x673c626aecdc36e) {
                if (lVar15 < -0x3b831d44f85d5723) {
                  if ((lVar15 != -0x7d221732069b6fa1) && (lVar15 != -0x3b833644f85d819e))
                  goto LAB_01f1c66c;
                }
                else if ((lVar15 != -0x3b831d44f85d5723) &&
                        ((lVar15 != -0x2cccb2f797b4e639 && (lVar15 != -0x259a23c268ea017d)))) {
LAB_01f1c66c:
                  lVar15 = param_1 + 0x28138;
                  goto LAB_01f1c80c;
                }
              }
              else if ((lVar15 != 0x673c626aecdc36e) &&
                      ((lVar15 != 0x311437a7ba604481 && (lVar15 != 0x2b45a449379cbf8d))))
              goto LAB_01f1c66c;
              lVar15 = param_1 + 0x28138;
LAB_01f1d16c:
              FUN_01f1fe90(&local_100,lVar15);
            }
            else {
              if (uVar26 == *(uint *)(param_1 + 0x28250)) {
                lVar15 = *(long *)(param_1 + 0x28238);
                if (lVar15 < 0x673c626aecdc36e) {
                  if (lVar15 < -0x3b831d44f85d5723) {
                    if ((lVar15 != -0x7d221732069b6fa1) && (lVar15 != -0x3b833644f85d819e))
                    goto LAB_01f1c30c;
                  }
                  else if ((lVar15 != -0x3b831d44f85d5723) &&
                          ((lVar15 != -0x2cccb2f797b4e639 && (lVar15 != -0x259a23c268ea017d)))) {
LAB_01f1c30c:
                    lVar15 = param_1 + 0x281f8;
                    goto LAB_01f1c80c;
                  }
                }
                else if ((lVar15 != 0x673c626aecdc36e) &&
                        ((lVar15 != 0x311437a7ba604481 && (lVar15 != 0x2b45a449379cbf8d))))
                goto LAB_01f1c30c;
                lVar15 = param_1 + 0x281f8;
                goto LAB_01f1d16c;
              }
              if (uVar26 == *(uint *)(param_1 + 0x281f0)) {
                lVar15 = param_1 + 0x28198;
LAB_01f1c80c:
                FUN_01f1f930(&local_100,lVar15);
              }
            }
            if (uVar26 == *(uint *)(param_1 + 0x282b0)) {
              lVar15 = *(long *)(param_1 + 0x28298);
              if (lVar15 < 0x673c626aecdc36e) {
                if (lVar15 < -0x3b831d44f85d5723) {
                  if ((lVar15 != -0x7d221732069b6fa1) && (lVar15 != -0x3b833644f85d819e))
                  goto LAB_01f1c6d8;
                }
                else if ((lVar15 != -0x3b831d44f85d5723) &&
                        ((lVar15 != -0x2cccb2f797b4e639 && (lVar15 != -0x259a23c268ea017d)))) {
LAB_01f1c6d8:
                  lVar15 = param_1 + 0x28258;
                  goto LAB_01f1c81c;
                }
              }
              else if ((lVar15 != 0x673c626aecdc36e) &&
                      ((lVar15 != 0x311437a7ba604481 && (lVar15 != 0x2b45a449379cbf8d))))
              goto LAB_01f1c6d8;
              lVar15 = param_1 + 0x28258;
LAB_01f1d1ac:
              FUN_01f1fe90(&local_100,lVar15);
            }
            else {
              if (uVar26 == *(uint *)(param_1 + 0x28370)) {
                lVar15 = *(long *)(param_1 + 0x28358);
                if (lVar15 < 0x673c626aecdc36e) {
                  if (lVar15 < -0x3b831d44f85d5723) {
                    if ((lVar15 != -0x7d221732069b6fa1) && (lVar15 != -0x3b833644f85d819e))
                    goto LAB_01f1c378;
                  }
                  else if ((lVar15 != -0x3b831d44f85d5723) &&
                          ((lVar15 != -0x2cccb2f797b4e639 && (lVar15 != -0x259a23c268ea017d)))) {
LAB_01f1c378:
                    lVar15 = param_1 + 0x28318;
                    goto LAB_01f1c81c;
                  }
                }
                else if ((lVar15 != 0x673c626aecdc36e) &&
                        ((lVar15 != 0x311437a7ba604481 && (lVar15 != 0x2b45a449379cbf8d))))
                goto LAB_01f1c378;
                lVar15 = param_1 + 0x28318;
                goto LAB_01f1d1ac;
              }
              if (uVar26 == *(uint *)(param_1 + 0x28310)) {
                lVar15 = param_1 + 0x282b8;
LAB_01f1c81c:
                FUN_01f1f930(&local_100,lVar15);
              }
            }
            if (uVar26 == *(uint *)(param_1 + 0x283d0)) {
              lVar15 = *(long *)(param_1 + 0x283b8);
              if (lVar15 < 0x673c626aecdc36e) {
                if (lVar15 < -0x3b831d44f85d5723) {
                  if ((lVar15 != -0x7d221732069b6fa1) && (lVar15 != -0x3b833644f85d819e))
                  goto LAB_01f1c744;
                }
                else if ((lVar15 != -0x3b831d44f85d5723) &&
                        ((lVar15 != -0x2cccb2f797b4e639 && (lVar15 != -0x259a23c268ea017d)))) {
LAB_01f1c744:
                  lVar15 = param_1 + 0x28378;
                  goto LAB_01f1c82c;
                }
              }
              else if ((lVar15 != 0x673c626aecdc36e) &&
                      ((lVar15 != 0x311437a7ba604481 && (lVar15 != 0x2b45a449379cbf8d))))
              goto LAB_01f1c744;
              lVar15 = param_1 + 0x28378;
LAB_01f1d1ec:
              FUN_01f1fe90(&local_100,lVar15);
            }
            else {
              if (uVar26 == *(uint *)(param_1 + 0x28490)) {
                lVar15 = *(long *)(param_1 + 0x28478);
                if (lVar15 < 0x673c626aecdc36e) {
                  if (lVar15 < -0x3b831d44f85d5723) {
                    if ((lVar15 != -0x7d221732069b6fa1) && (lVar15 != -0x3b833644f85d819e))
                    goto LAB_01f1c3e4;
                  }
                  else if ((lVar15 != -0x3b831d44f85d5723) &&
                          ((lVar15 != -0x2cccb2f797b4e639 && (lVar15 != -0x259a23c268ea017d)))) {
LAB_01f1c3e4:
                    lVar15 = param_1 + 0x28438;
                    goto LAB_01f1c82c;
                  }
                }
                else if ((lVar15 != 0x673c626aecdc36e) &&
                        ((lVar15 != 0x311437a7ba604481 && (lVar15 != 0x2b45a449379cbf8d))))
                goto LAB_01f1c3e4;
                lVar15 = param_1 + 0x28438;
                goto LAB_01f1d1ec;
              }
              if (uVar26 == *(uint *)(param_1 + 0x28430)) {
                lVar15 = param_1 + 0x283d8;
LAB_01f1c82c:
                FUN_01f1f930(&local_100,lVar15);
              }
            }
            if (uVar26 == *(uint *)(param_1 + 0x284f0)) {
              lVar15 = *(long *)(param_1 + 0x284d8);
              if (lVar15 < 0x673c626aecdc36e) {
                if (lVar15 < -0x3b831d44f85d5723) {
                  if ((lVar15 != -0x7d221732069b6fa1) && (lVar15 != -0x3b833644f85d819e))
                  goto LAB_01f1c7b0;
                }
                else if ((lVar15 != -0x3b831d44f85d5723) &&
                        ((lVar15 != -0x2cccb2f797b4e639 && (lVar15 != -0x259a23c268ea017d)))) {
LAB_01f1c7b0:
                  lVar15 = param_1 + 0x28498;
                  goto LAB_01f1c7b4;
                }
              }
              else if ((lVar15 != 0x673c626aecdc36e) &&
                      ((lVar15 != 0x311437a7ba604481 && (lVar15 != 0x2b45a449379cbf8d))))
              goto LAB_01f1c7b0;
              lVar15 = param_1 + 0x28498;
            }
            else {
              if (uVar26 != *(uint *)(param_1 + 0x285b0)) {
                if (uVar26 != *(uint *)(param_1 + 0x28550)) goto LAB_01f1bd44;
                lVar15 = param_1 + 0x284f8;
                goto LAB_01f1c7b4;
              }
              lVar15 = *(long *)(param_1 + 0x28598);
              if (lVar15 < 0x673c626aecdc36e) {
                if (lVar15 < -0x3b831d44f85d5723) {
                  if ((lVar15 != -0x7d221732069b6fa1) && (lVar15 != -0x3b833644f85d819e))
                  goto LAB_01f1c450;
                }
                else if ((lVar15 != -0x3b831d44f85d5723) &&
                        ((lVar15 != -0x2cccb2f797b4e639 && (lVar15 != -0x259a23c268ea017d)))) {
LAB_01f1c450:
                  lVar15 = param_1 + 0x28558;
                  goto LAB_01f1c7b4;
                }
              }
              else if ((lVar15 != 0x673c626aecdc36e) &&
                      ((lVar15 != 0x311437a7ba604481 && (lVar15 != 0x2b45a449379cbf8d))))
              goto LAB_01f1c450;
              lVar15 = param_1 + 0x28558;
            }
            FUN_01f1fe90(&local_100,lVar15);
            iVar5 = *(int *)(param_1 + 0x285c4);
            goto joined_r0x01f1d238;
          }
          lVar15 = param_1 + 0x27c58;
        }
LAB_01f1c7b4:
        FUN_01f1f930(&local_100,lVar15);
        iVar5 = *(int *)(param_1 + 0x285c4);
      }
joined_r0x01f1d238:
      if (iVar5 != 0) {
        lVar15 = *(long *)(param_1 + 0x58680 + lVar25);
        if (lVar15 < 0x673c626aecdc36e) {
          if (lVar15 < -0x3b831d44f85d5723) {
            if (lVar15 != -0x7d221732069b6fa1) {
              if (lVar15 == -0x5be9f1ae26d98a45) goto LAB_01f1d240;
              if (lVar15 != -0x3b833644f85d819e) goto LAB_01f1bda4;
            }
          }
          else if (((lVar15 != -0x3b831d44f85d5723) && (lVar15 != -0x2cccb2f797b4e639)) &&
                  (lVar15 != -0x259a23c268ea017d)) goto LAB_01f1bda4;
        }
        else if (lVar15 < 0x2b45a449379cbf8d) {
          if (lVar15 != 0x673c626aecdc36e) {
LAB_01f1bda4:
            FUN_01f1f930(&local_100);
            goto LAB_01f1bdac;
          }
        }
        else if (lVar15 != 0x2b45a449379cbf8d) {
          if (lVar15 == 0x4c6cadd419973531) {
LAB_01f1d240:
            FUN_01f202a8(&local_100,param_1 + 0x58640 + lVar25);
            goto LAB_01f1bdac;
          }
          if (lVar15 != 0x311437a7ba604481) goto LAB_01f1bda4;
        }
        FUN_01f1fe90(&local_100);
      }
LAB_01f1bdac:
      plVar23 = local_e8;
      lVar15 = param_1 + lVar25;
      *(ulong *)(lVar15 + 0x118) = local_100;
      *(char **)(lVar15 + 0x120) = pcStack_f8;
      *(ulong *)(lVar15 + 0x128) = local_f0;
      if (local_e8 != (long *)0x0) {
        (**(code **)(*local_e8 + 0x18))(local_e8);
      }
      plVar10 = *(long **)(lVar15 + 0x130);
      *(long **)(lVar15 + 0x130) = plVar23;
      if (plVar10 != (long *)0x0) {
        (**(code **)(*plVar10 + 0x20))();
      }
      plVar10 = local_c8;
      *(char **)(lVar15 + 0x138) = local_e0;
      *(ulong *)(lVar15 + 0x140) = local_d8;
      *(ulong *)(lVar15 + 0x148) = local_d0;
      if (local_c8 != (long *)0x0) {
        (**(code **)(*local_c8 + 0x18))(local_c8);
      }
      plVar11 = *(long **)(lVar15 + 0x150);
      *(long **)(lVar15 + 0x150) = plVar10;
      if (plVar11 != (long *)0x0) {
        (**(code **)(*plVar11 + 0x20))();
      }
      *(undefined4 *)(lVar15 + 0x170) = local_a8;
      *(undefined8 *)(lVar15 + 0x158) = local_c0;
      *(undefined8 *)(lVar15 + 0x160) = local_b8;
      *(undefined8 *)(lVar15 + 0x168) = local_b0;
      if (plVar10 != (long *)0x0) {
        (**(code **)(*plVar10 + 0x20))(plVar10);
      }
      if (plVar23 != (long *)0x0) {
        (**(code **)(*plVar23 + 0x20))(plVar23);
      }
      uVar26 = uVar26 + 1;
      lVar25 = lVar25 + 0x60;
      if ((long)*(int *)(param_1 + 0x1e170) <= (long)uVar26) goto LAB_01f1d24c;
    } while (lVar25 != 0x6000);
LAB_01f1def8:
                    /* WARNING: Subroutine does not return */
    FUN_01f22c10();
  }
LAB_01f1d24c:
  pcVar29 = (char *)(param_1 + 0xd6790);
  lVar25 = param_1 + 0xd67f8;
  lVar15 = param_1 + 0xd67f0;
  lVar12 = param_1 + 0xd67e8;
  lVar21 = param_1 + 0xd67d0;
  lVar24 = param_1 + 0xd67c8;
  do {
    if (*pcVar29 != '\0') {
      pfVar16 = (float *)(pcVar29 + 0x10);
      fVar37 = *(float *)(pcVar29 + 0x14) + *pfVar16;
      iVar5 = *(int *)(pcVar29 + 4);
      *pfVar16 = fVar37;
      local_100 = local_100 & 0xffffffff00000000;
      local_90 = CONCAT44(local_90._4_4_,0x3f800000);
      pfVar19 = (float *)&local_90;
      if (fVar37 <= 1.0) {
        pfVar19 = pfVar16;
      }
      if (fVar37 < 0.0) {
        pfVar19 = (float *)&local_100;
      }
      fVar37 = *pfVar19;
      *(float *)(pcVar29 + 0x10) = fVar37;
      piVar27 = *(int **)(pcVar29 + 8);
      fVar40 = 1.0 - fVar37;
      if (iVar5 != 0xff) {
        fVar40 = fVar37;
      }
      if (0 < *piVar27) {
        lVar18 = 0;
        uVar30 = 0;
        do {
          if (lVar18 == 0x100) goto LAB_01f1def8;
          uVar6 = *(uint *)(param_1 + 0x110);
          if ((int)uVar30 < (int)uVar6) {
            lVar31 = (long)(int)uVar30;
            lVar17 = (long)(int)uVar30;
            lVar22 = (int)uVar6 - lVar31;
            lVar28 = lVar25;
            lVar32 = param_1;
            do {
              if (0xff < uVar30) goto LAB_01f1def8;
              lVar2 = lVar32 + (lVar31 + lVar17 * 2) * 0x20;
              if (*(long *)(lVar2 + 0x118) == *(long *)(piVar27 + lVar18 * 0x18 + 2) &&
                  *(long *)(lVar2 + 0x138) == *(long *)(piVar27 + lVar18 * 0x18 + 10)) {
                plVar23 = *(long **)(lVar32 + lVar31 * 0x60 + 0x130);
                if (plVar23 != (long *)0x0) {
                  (**(code **)(*plVar23 + 0x18))(plVar23);
                }
                plVar10 = *(long **)(lVar32 + lVar31 * 0x60 + 0x150);
                if (plVar10 != (long *)0x0) {
                  (**(code **)(*plVar10 + 0x18))(plVar10);
                }
                lVar32 = lVar32 + lVar31 * 0x60;
                lVar17 = *(long *)(lVar32 + 0x158);
                if (pcVar29[0x6020] == '\0') {
                  if (lVar17 == -0x5552164181650ed6) {
                    uVar33 = *(undefined4 *)(lVar32 + 0x164);
                    uVar36 = *(undefined4 *)(lVar32 + 0x160);
                    uVar39 = *(undefined4 *)(lVar32 + 0x168);
                    goto LAB_01f1d574;
                  }
                  auVar34._0_4_ =
                       *(float *)(lVar32 + 0x160) +
                       ((float)*(undefined8 *)(piVar27 + lVar18 * 0x18 + 0x14) -
                       *(float *)(lVar32 + 0x160)) * fVar40;
                  auVar34._4_4_ =
                       *(float *)(lVar32 + 0x164) +
                       ((float)((ulong)*(undefined8 *)(piVar27 + lVar18 * 0x18 + 0x14) >> 0x20) -
                       *(float *)(lVar32 + 0x164)) * fVar40;
                  auVar34._8_4_ =
                       *(float *)(lVar32 + 0x168) +
                       ((float)*(undefined8 *)(piVar27 + lVar18 * 0x18 + 0x16) -
                       *(float *)(lVar32 + 0x168)) * fVar40;
                  auVar34._12_4_ =
                       *(float *)(lVar32 + 0x16c) +
                       ((float)((ulong)*(undefined8 *)(piVar27 + lVar18 * 0x18 + 0x16) >> 0x20) -
                       *(float *)(lVar32 + 0x16c)) * fVar40;
                  fVar37 = auVar34._4_4_;
                  fVar38 = auVar34._8_4_;
                  if ((lVar17 != 0x5d486426e00af3fc) && (lVar17 != -0x730a4df14d6436b4))
                  goto LAB_01f1d4c4;
                  uVar33 = 0x3f800000;
                }
                else if (lVar17 == -0x5552164181650ed6) {
                  puVar13 = (undefined4 *)(lVar28 + lVar31 * 0x60);
                  uVar36 = *puVar13;
                  uVar33 = puVar13[1];
                  uVar39 = puVar13[2];
LAB_01f1d574:
                  FUN_009a7ff4(uVar33,uVar36,uVar39);
                  local_100 = extraout_d0;
                  pcStack_f8 = extraout_var;
                  FUN_009a7ff4(piVar27[lVar18 * 0x18 + 0x15],piVar27[lVar18 * 0x18 + 0x14],
                               piVar27[lVar18 * 0x18 + 0x16]);
                  local_90 = extraout_d0_00;
                  uStack_88 = extraout_var_00;
                  auVar34 = FUN_009c6b1c(fVar40,&local_100,&local_90);
                  uStack_98 = auVar34._8_8_;
                  local_a0 = auVar34._0_8_;
                  auVar34 = FUN_00cb8d18(&local_a0);
                  uVar33 = 0;
                  fVar37 = auVar34._4_4_;
                  fVar38 = auVar34._8_4_;
                }
                else {
                  pfVar19 = (float *)(lVar28 + lVar31 * 0x60);
                  auVar34._0_4_ =
                       *pfVar19 +
                       ((float)*(undefined8 *)(piVar27 + lVar18 * 0x18 + 0x14) - *pfVar19) * fVar40;
                  auVar34._4_4_ =
                       pfVar19[1] +
                       ((float)((ulong)*(undefined8 *)(piVar27 + lVar18 * 0x18 + 0x14) >> 0x20) -
                       pfVar19[1]) * fVar40;
                  auVar34._8_4_ =
                       pfVar19[2] +
                       ((float)*(undefined8 *)(piVar27 + lVar18 * 0x18 + 0x16) - pfVar19[2]) *
                       fVar40;
                  auVar34._12_4_ =
                       pfVar19[3] +
                       ((float)((ulong)*(undefined8 *)(piVar27 + lVar18 * 0x18 + 0x16) >> 0x20) -
                       pfVar19[3]) * fVar40;
                  fVar37 = auVar34._4_4_;
                  fVar38 = auVar34._8_4_;
                  if ((lVar17 == 0x5d486426e00af3fc) || (lVar17 == -0x730a4df14d6436b4)) {
                    uVar33 = 0x3f800000;
                  }
                  else {
LAB_01f1d4c4:
                    uVar33 = auVar34._12_4_;
                  }
                }
                uVar30 = uVar30 + 1;
                *(int *)(lVar32 + 0x160) = auVar34._0_4_;
                *(float *)(lVar32 + 0x164) = fVar37;
                *(float *)(lVar32 + 0x168) = fVar38;
                *(undefined4 *)(lVar32 + 0x16c) = uVar33;
                if (plVar10 != (long *)0x0) {
                  (**(code **)(*plVar10 + 0x20))(plVar10);
                }
                if (plVar23 != (long *)0x0) {
                  (**(code **)(*plVar23 + 0x20))(plVar23);
                }
                goto LAB_01f1d50c;
              }
              uVar30 = uVar30 + 1;
              lVar32 = lVar32 + 0x60;
              lVar28 = lVar28 + 0x60;
              lVar22 = lVar22 + -1;
            } while (lVar22 != 0);
            uVar30 = uVar6;
          }
LAB_01f1d50c:
          if (*(int *)(param_1 + 0x110) <= (int)uVar30) {
            uVar30 = 0;
          }
          piVar27 = *(int **)(pcVar29 + 8);
          lVar18 = lVar18 + 1;
        } while (lVar18 < *piVar27);
      }
      if (pcVar29[0x6020] == '\0') {
LAB_01f1d5d4:
        lVar18 = 0;
        *(undefined4 *)(pcVar29 + 0x18) = *(undefined4 *)(param_1 + 0x110);
        do {
          lVar17 = param_1 + lVar18;
          puVar14 = (undefined8 *)(lVar21 + lVar18);
          puVar14[-4] = *(undefined8 *)(lVar17 + 0x118);
          puVar14[-3] = *(undefined8 *)(lVar17 + 0x120);
          puVar14[-2] = *(undefined8 *)(lVar17 + 0x128);
          plVar23 = *(long **)(lVar17 + 0x130);
          if (plVar23 != (long *)0x0) {
            (**(code **)(*plVar23 + 0x18))(plVar23);
          }
          plVar10 = *(long **)(lVar24 + lVar18);
          *(long **)(lVar24 + lVar18) = plVar23;
          if (plVar10 != (long *)0x0) {
            (**(code **)(*plVar10 + 0x20))();
          }
          *puVar14 = *(undefined8 *)(lVar17 + 0x138);
          puVar14[1] = *(undefined8 *)(lVar17 + 0x140);
          puVar14[2] = *(undefined8 *)(lVar17 + 0x148);
          plVar23 = *(long **)(lVar17 + 0x150);
          if (plVar23 != (long *)0x0) {
            (**(code **)(*plVar23 + 0x18))(plVar23);
          }
          plVar10 = *(long **)(lVar12 + lVar18);
          *(long **)(lVar12 + lVar18) = plVar23;
          if (plVar10 != (long *)0x0) {
            (**(code **)(*plVar10 + 0x20))();
          }
          uVar3 = *(undefined8 *)(lVar17 + 0x158);
          uVar4 = *(undefined8 *)(lVar17 + 0x160);
          puVar14 = (undefined8 *)(lVar15 + lVar18);
          uVar20 = *(undefined8 *)(lVar17 + 0x168);
          lVar18 = lVar18 + 0x60;
          *(undefined4 *)(puVar14 + 3) = *(undefined4 *)(lVar17 + 0x170);
          *puVar14 = uVar3;
          puVar14[1] = uVar4;
          puVar14[2] = uVar20;
        } while (lVar18 != 0x6000);
      }
      else if (1.0 <= *pfVar16) {
        pcVar29[0x6020] = '\0';
        goto LAB_01f1d5d4;
      }
      if ((iVar5 == 0xff) && (1.0 <= *pfVar16)) {
        *pcVar29 = '\0';
      }
    }
    pcVar29 = pcVar29 + 0x6028;
    lVar25 = lVar25 + 0x6028;
    lVar15 = lVar15 + 0x6028;
    lVar12 = lVar12 + 0x6028;
    lVar21 = lVar21 + 0x6028;
    lVar24 = lVar24 + 0x6028;
  } while (pcVar29 != (char *)(param_1 + 0x1008a8));
  if (*(char *)(param_1 + 0x1009b0) != '\0') {
    local_100 = 0xe945b8754026aa4d;
    pcStack_f8 = "DepthGradColor";
    local_f0 = 0xe;
    local_e8 = (long *)0xa05b266b2a2d6c7;
    local_e0 = "DepthGradFar";
    local_d8 = 0xc;
    local_d0 = 0xb4c1d3400163b074;
    local_c8 = (long *)0x38a6935;
    local_c0 = 0xd;
    iVar5 = *(int *)(param_1 + 0x110);
    if (0 < iVar5) {
      lVar25 = 0;
      uVar30 = 0;
      pfVar19 = (float *)(param_1 + 0x16c);
      do {
        if (*(long *)(pfVar19 + -0x15) == -0x6da16db5e0cbfa9e) {
          if (2 < uVar30) break;
          if (*(ulong *)(pfVar19 + -0xd) == (&local_100)[(long)(int)uVar30 * 3]) {
            if (uVar30 == 2) {
              pfVar19[-3] = pfVar19[-3] + (5.0 - pfVar19[-3]) * *(float *)(param_1 + 0x1009b4);
              lVar25 = *(long *)(param_1 + 0x68);
              goto joined_r0x01f1d8a8;
            }
            if (uVar30 == 1) {
              fVar37 = pfVar19[-3];
              fVar40 = 15.0 - fVar37;
              pfVar16 = (float *)(param_1 + lVar25 * 0x60 + 0x160);
            }
            else {
              if (uVar30 != 0) {
                uVar30 = uVar30 + 1;
                if (uVar30 < 3) goto LAB_01f1d810;
                goto LAB_01f1d6d8;
              }
              fVar37 = *pfVar19;
              fVar40 = 0.98039216 - fVar37;
              pfVar16 = pfVar19;
            }
            *pfVar16 = fVar37 + fVar40 * *(float *)(param_1 + 0x1009b4);
            uVar30 = uVar30 + 1;
          }
        }
LAB_01f1d810:
        lVar25 = lVar25 + 1;
        pfVar19 = pfVar19 + 0x18;
        if (iVar5 == lVar25) goto LAB_01f1d6d8;
      } while (lVar25 != 0x100);
      goto LAB_01f1def8;
    }
  }
LAB_01f1d6d8:
  lVar25 = *(long *)(param_1 + 0x68);
joined_r0x01f1d8a8:
  if (lVar25 == 0) {
    local_a0 = (long *)0x0;
  }
  else {
    FUN_019bf828(&local_a0);
    if (local_a0 != (long *)0x0) {
      if (0 < *(int *)(param_1 + 0x110)) {
        auVar34 = NEON_fmov(0x3f800000,4);
        lVar15 = 0;
        lVar25 = 0;
        do {
          if (lVar15 == 0x6000) goto LAB_01f1def8;
          lVar24 = param_1 + lVar15;
          local_100 = 0;
          pcStack_f8 = (char *)0x0;
          lVar18 = *(long *)(lVar24 + 0x158);
          lVar12 = lVar24 + 0x118;
          lVar21 = lVar24 + 0x138;
          if (lVar18 == 0x13c91a9f1f29fda5) {
LAB_01f1d91c:
            uVar33 = *(undefined4 *)(lVar24 + 0x160);
            lVar12 = FUN_02b1f8b0(DAT_043ef5b0,lVar12);
            local_90 = lVar12;
            uVar26 = FUN_02b21278(DAT_043ef5b0,&local_90);
            if ((uVar26 & 1) != 0) {
              lVar12 = (lVar12 >> 0x20) * 0x1b0;
              uVar26 = (*(long *)(DAT_043ef5b0 + 0xa8) + *(long *)(DAT_043ef5b0 + 0xa0)) - 1;
              lVar24 = *(long *)(*(long *)(DAT_043ef5b0 + 0x68) + (uVar26 / 0x12) * 8);
              lVar18 = (uVar26 % 0x12) * 0xd8;
              puVar13 = (undefined4 *)
                        FUN_00aef474(*(long *)(lVar24 + lVar18) + lVar12 + 0x70,lVar21);
              *puVar13 = uVar33;
              lVar12 = *(long *)(lVar24 + lVar18) + lVar12;
LAB_01f1d9ac:
              *(undefined1 *)(lVar12 + 0x1a9) = 1;
            }
          }
          else if (lVar18 < -0x3749e69e0ba5a179) {
            if (lVar18 < -0x4a959448f376342f) {
              if (lVar18 < -0x5be9f1ae26d98a45) {
                if (lVar18 < -0x64bce4e1c460232e) {
                  if (lVar18 == -0x730a4df14d6436b4) goto LAB_01f1db30;
                  if (lVar18 == -0x730a14f14d63d5d9) goto LAB_01f1da14;
                  if (lVar18 == -0x64bd20e1c4608922) goto LAB_01f1dc88;
                }
                else if (lVar18 == -0x64bce4e1c460232e) goto LAB_01f1dd50;
              }
              else if (lVar18 == -0x5552164181650ed6) {
                auVar35 = FUN_009a7ff4(*(undefined4 *)(lVar24 + 0x164),
                                       *(undefined4 *)(lVar24 + 0x160),
                                       *(undefined4 *)(lVar24 + 0x168));
                lVar12 = FUN_02b1f8b0(DAT_043ef5b0,lVar12);
                local_90 = lVar12;
                uVar26 = FUN_02b21278(DAT_043ef5b0,&local_90);
                if ((uVar26 & 1) != 0) {
                  uVar26 = (*(long *)(DAT_043ef5b0 + 0xa8) + *(long *)(DAT_043ef5b0 + 0xa0)) - 1;
                  lVar24 = *(long *)(*(long *)(DAT_043ef5b0 + 0x68) + (uVar26 / 0x12) * 8);
                  lVar18 = (uVar26 % 0x12) * 0xd8;
                  lVar12 = (lVar12 >> 0x20) * 0x1b0;
                  lVar21 = *(long *)(lVar24 + lVar18) + lVar12;
                  *(long *)(lVar21 + 0x58) = auVar35._8_8_;
                  *(long *)(lVar21 + 0x50) = auVar35._0_8_;
                  lVar12 = *(long *)(lVar24 + lVar18) + lVar12;
                  goto LAB_01f1d9ac;
                }
              }
              else if ((lVar18 == -0x5be9f1ae26d98a45) || (lVar18 == -0x568b134c514d985f))
              goto LAB_01f1da14;
            }
            else {
              if (lVar18 == -0x374a329e0ba6229d) goto LAB_01f1da14;
              if (lVar18 == -0x4a959448f376342f) {
                pcStack_f8 = (char *)(ulong)SUB124(*(undefined1 (*) [12])(lVar24 + 0x160),8);
                local_100 = SUB128(*(undefined1 (*) [12])(lVar24 + 0x160),0);
                FUN_01f0ad08(local_a0,lVar12,&local_100);
              }
            }
          }
          else if (lVar18 < 0x5d486426e00af3fc) {
            if (lVar18 < -0x6c820d58edead2e) {
              if (lVar18 == -0x3749e69e0ba5a179) goto LAB_01f1d91c;
              if (lVar18 == -0x241e91dd156e302b) {
                pcStack_f8 = (char *)(ulong)SUB124(*(undefined1 (*) [12])(lVar24 + 0x160),8);
                local_100 = SUB128(*(undefined1 (*) [12])(lVar24 + 0x160),0);
                FUN_01f0acb4(local_a0,lVar12,&local_100);
              }
            }
            else if (lVar18 == -0x6c820d58edead2e) {
LAB_01f1dc88:
              uVar33 = *(undefined4 *)(lVar24 + 0x160);
              lVar12 = FUN_02b1f8b0(DAT_043ef5b8,lVar12);
              local_90 = lVar12;
              uVar26 = FUN_02b21278(DAT_043ef5b8,&local_90);
              if ((uVar26 & 1) != 0) {
                uVar26 = (*(long *)(DAT_043ef5b8 + 0xa8) + *(long *)(DAT_043ef5b8 + 0xa0)) - 1;
                lVar12 = (lVar12 >> 0x20) * 0x1b0;
                lVar24 = *(long *)(*(long *)(DAT_043ef5b8 + 0x68) + (uVar26 / 0x12) * 8);
                lVar18 = (uVar26 % 0x12) * 0xd8;
                puVar13 = (undefined4 *)
                          FUN_00aef474(*(long *)(lVar24 + lVar18) + lVar12 + 0x70,lVar21);
                *puVar13 = uVar33;
                goto LAB_01f1dadc;
              }
            }
            else if ((lVar18 == 0x2208c8f97f5bff6d) || (lVar18 == 0x4c6cadd419973531))
            goto LAB_01f1da14;
          }
          else if (lVar18 < 0x66c9187234b2b4e1) {
            if (lVar18 == 0x5d486426e00af3fc) {
LAB_01f1db30:
              auVar9 = *(undefined1 (*) [12])(lVar24 + 0x160);
              lVar12 = FUN_02b1f8b0(DAT_043ef5b0,lVar12);
              local_90 = lVar12;
              uVar26 = FUN_02b21278(DAT_043ef5b0,&local_90);
              if ((uVar26 & 1) != 0) {
                uStack_154 = auVar34._12_4_;
                auVar35._12_4_ = uStack_154;
                auVar35._0_12_ = auVar9;
LAB_01f1da74:
                lVar24 = DAT_043ef5b0;
LAB_01f1da78:
                uVar26 = (*(long *)(lVar24 + 0xa8) + *(long *)(lVar24 + 0xa0)) - 1;
                lVar24 = *(long *)(*(long *)(lVar24 + 0x68) + (uVar26 / 0x12) * 8);
                lVar18 = (uVar26 % 0x12) * 0xd8;
                lVar12 = (lVar12 >> 0x20) * 0x1b0;
                puVar14 = (undefined8 *)
                          FUN_00aefbe4(*(long *)(lVar24 + lVar18) + lVar12 + 0xd8,lVar21);
                puVar14[1] = auVar35._8_8_;
                *puVar14 = auVar35._0_8_;
LAB_01f1dadc:
                lVar12 = *(long *)(lVar24 + lVar18) + lVar12;
                goto LAB_01f1d9ac;
              }
            }
          }
          else if (lVar18 == 0x66c9187234b2b4e1) {
LAB_01f1da14:
            auVar35 = *(undefined1 (*) [16])(lVar24 + 0x160);
            lVar12 = FUN_02b1f8b0(DAT_043ef5b0,lVar12);
            local_90 = lVar12;
            uVar26 = FUN_02b21278(DAT_043ef5b0,&local_90);
            if ((uVar26 & 1) != 0) goto LAB_01f1da74;
          }
          else if (lVar18 == 0x72e3be5f50a3f4de) {
LAB_01f1dd50:
            auVar35 = *(undefined1 (*) [16])(lVar24 + 0x160);
            lVar12 = FUN_02b1f8b0(DAT_043ef5b8,lVar12);
            local_90 = lVar12;
            uVar26 = FUN_02b21278(DAT_043ef5b8,&local_90);
            if ((uVar26 & 1) != 0) {
              lVar24 = DAT_043ef5b8;
              goto LAB_01f1da78;
            }
          }
          else if (lVar18 == 0x73e0a8677bef8b0b) goto LAB_01f1da14;
          lVar25 = lVar25 + 1;
          lVar15 = lVar15 + 0x60;
        } while (lVar25 < *(int *)(param_1 + 0x110));
        if (local_a0 == (long *)0x0) goto LAB_01f1d6e4;
      }
      lVar25 = local_a0[0xb];
      piVar27 = (int *)(lVar25 + 0xc);
      do {
        iVar5 = *piVar27;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(piVar27,0x10);
        if (bVar8) {
          *piVar27 = iVar5 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar5 + -1 == 0) {
        *(undefined8 *)(lVar25 + 0x18) = 0;
        (**(code **)(*local_a0 + 0x20))();
      }
    }
  }
LAB_01f1d6e4:
  FUN_01f203c4(param_1);
  return;
}


