/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0055a1fc; name: FUN_0055a1fc
 */


void FUN_0055a1fc(long *param_1,ulong param_2)

{
  uint uVar1;
  long *plVar2;
  bool bVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  undefined8 *puVar10;
  long *plVar11;
  ulong uVar12;
  undefined8 *puVar13;
  int *piVar14;
  ulong uVar15;
  int *piVar16;
  ulong uVar17;
  undefined2 uVar18;
  undefined8 uVar19;
  
  if (param_2 - 1 == 0) {
    param_2 = 2;
    uVar17 = param_1[1];
    bVar3 = uVar17 < 3;
    if (uVar17 < 2) goto LAB_0055a2f0;
  }
  else {
    if ((param_2 & param_2 - 1) != 0) {
      param_2 = std::__next_prime(param_2);
    }
    uVar17 = param_1[1];
    bVar3 = uVar17 <= param_2;
    if (uVar17 < param_2) goto LAB_0055a2f0;
  }
  if (bVar3) {
    return;
  }
  uVar4 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
  if ((uVar17 < 3) ||
     (uVar19 = CONCAT17(POPCOUNT((char)(uVar17 >> 0x38)),
                        CONCAT16(POPCOUNT((char)(uVar17 >> 0x30)),
                                 CONCAT15(POPCOUNT((char)(uVar17 >> 0x28)),
                                          CONCAT14(POPCOUNT((char)(uVar17 >> 0x20)),
                                                   CONCAT13(POPCOUNT((char)(uVar17 >> 0x18)),
                                                            CONCAT12(POPCOUNT((char)(uVar17 >> 0x10)
                                                                             ),
                                                                     CONCAT11(POPCOUNT((char)(uVar17
                                                                                             >> 8)),
                                                                              POPCOUNT((char)uVar17)
                                                                             ))))))),
     uVar18 = NEON_uaddlv(uVar19,1), 1 < (uint)CONCAT62((int6)((ulong)uVar19 >> 0x10),uVar18))) {
    uVar4 = std::__next_prime(uVar4);
    if (uVar4 <= param_2) {
      uVar4 = param_2;
    }
  }
  else {
    if (1 < uVar4) {
      uVar4 = 1L << ((ulong)(uint)-(int)LZCOUNT(uVar4 - 1) & 0x3f);
    }
    if (uVar4 <= param_2) {
      uVar4 = param_2;
    }
  }
  param_2 = uVar4;
  if (uVar17 <= param_2) {
    return;
  }
LAB_0055a2f0:
  if (param_2 == 0) {
    lVar5 = *param_1;
    *param_1 = 0;
    if (lVar5 != 0) {
      FUN_002e2ea0(PTR_LAB_04373088);
    }
    param_1[1] = 0;
    return;
  }
  lVar5 = FUN_002e2e80(PTR_FUN_04373078,param_2 << 3);
  lVar6 = *param_1;
  *param_1 = lVar5;
  if (lVar6 != 0) {
    FUN_002e2ea0(PTR_LAB_04373088);
  }
  uVar4 = param_2 - 1;
  uVar17 = param_2 & 3;
  param_1[1] = param_2;
  if (uVar4 < 3) {
    lVar5 = 0;
  }
  else {
    lVar5 = 0;
    do {
      lVar6 = lVar5 * 8;
      lVar5 = lVar5 + 4;
      *(undefined8 *)(*param_1 + lVar6) = 0;
      *(undefined8 *)(*param_1 + lVar6 + 8) = 0;
      *(undefined8 *)(*param_1 + lVar6 + 0x10) = 0;
      *(undefined8 *)(*param_1 + lVar6 + 0x18) = 0;
    } while (param_2 - uVar17 != lVar5);
  }
  if (uVar17 != 0) {
    lVar5 = lVar5 << 3;
    do {
      *(undefined8 *)(*param_1 + lVar5) = 0;
      uVar17 = uVar17 - 1;
      lVar5 = lVar5 + 8;
    } while (uVar17 != 0);
  }
  plVar8 = param_1 + 2;
  plVar7 = (long *)*plVar8;
  if (plVar7 != (long *)0x0) {
    uVar19 = CONCAT17(POPCOUNT((char)(param_2 >> 0x38)),
                      CONCAT16(POPCOUNT((char)(param_2 >> 0x30)),
                               CONCAT15(POPCOUNT((char)(param_2 >> 0x28)),
                                        CONCAT14(POPCOUNT((char)(param_2 >> 0x20)),
                                                 CONCAT13(POPCOUNT((char)(param_2 >> 0x18)),
                                                          CONCAT12(POPCOUNT((char)(param_2 >> 0x10))
                                                                   ,CONCAT11(POPCOUNT((char)(param_2
                                                                                            >> 8)),
                                                                             POPCOUNT((char)param_2)
                                                                            )))))));
    uVar18 = NEON_uaddlv(uVar19,1);
    uVar12 = CONCAT62((int6)((ulong)uVar19 >> 0x10),uVar18) & 0xffffffff;
    uVar17 = plVar7[1];
    if (uVar12 < 2) {
      uVar17 = uVar17 & uVar4;
      *(long **)(*param_1 + uVar17 * 8) = plVar8;
      plVar8 = (long *)*plVar7;
    }
    else {
      if (param_2 <= uVar17) {
        uVar15 = 0;
        if (param_2 != 0) {
          uVar15 = uVar17 / param_2;
        }
        uVar17 = uVar17 - uVar15 * param_2;
      }
      *(long **)(*param_1 + uVar17 * 8) = plVar8;
      plVar8 = (long *)*plVar7;
    }
    if (plVar8 != (long *)0x0) {
      if (uVar12 < 2) {
        do {
          while (uVar12 = plVar8[1] & uVar4, uVar12 != uVar17) {
            if (*(long *)(*param_1 + uVar12 * 8) != 0) {
              plVar11 = (long *)*plVar8;
              plVar9 = plVar8;
              if (plVar11 == (long *)0x0) {
LAB_0055a620:
                *plVar7 = *plVar9;
                *plVar9 = **(long **)(*param_1 + uVar12 * 8);
                **(undefined8 **)(*param_1 + uVar12 * 8) = plVar8;
                plVar9 = (long *)*plVar7;
                plVar8 = plVar7;
                goto joined_r0x0055a64c;
              }
              puVar10 = (undefined8 *)plVar8[2];
              if (puVar10 != (undefined8 *)0x0) {
                puVar13 = (undefined8 *)plVar11[2];
                do {
                  plVar2 = plVar11;
                  if (puVar13 == (undefined8 *)0x0) goto LAB_0055a674;
                  if (puVar10 != puVar13) {
                    if (*(int *)((long)puVar10 + 0xc) != *(int *)((long)puVar13 + 0xc))
                    goto LAB_0055a620;
                    uVar1 = *(uint *)(puVar10 + 1);
                    uVar15 = (ulong)uVar1;
                    if (uVar1 != *(uint *)(puVar13 + 1)) goto LAB_0055a620;
                    if (0 < (int)uVar1) {
                      piVar16 = (int *)*puVar10;
                      piVar14 = (int *)*puVar13;
                      do {
                        if (*piVar16 != *piVar14) goto LAB_0055a620;
                        uVar15 = uVar15 - 1;
                        piVar14 = piVar14 + 1;
                        piVar16 = piVar16 + 1;
                      } while (uVar15 != 0);
                    }
                  }
                  plVar11 = (long *)*plVar2;
                  plVar9 = plVar2;
                  if (plVar11 == (long *)0x0) goto LAB_0055a620;
                  puVar13 = (undefined8 *)plVar11[2];
                } while( true );
              }
              goto LAB_0055a694;
            }
            *(long **)(*param_1 + uVar12 * 8) = plVar7;
            plVar9 = (long *)*plVar8;
            plVar7 = plVar8;
            uVar17 = uVar12;
            plVar8 = plVar9;
            if (plVar9 == (long *)0x0) {
              return;
            }
          }
          plVar9 = (long *)*plVar8;
joined_r0x0055a64c:
          plVar7 = plVar8;
          plVar8 = plVar9;
        } while (plVar9 != (long *)0x0);
      }
      else {
        do {
          while( true ) {
            uVar4 = plVar8[1];
            if (param_2 <= uVar4) {
              uVar12 = 0;
              if (param_2 != 0) {
                uVar12 = uVar4 / param_2;
              }
              uVar4 = uVar4 - uVar12 * param_2;
            }
            if (uVar4 == uVar17) break;
            if (*(long *)(*param_1 + uVar4 * 8) == 0) {
              *(long **)(*param_1 + uVar4 * 8) = plVar7;
              plVar9 = (long *)*plVar8;
              plVar7 = plVar8;
              uVar17 = uVar4;
            }
            else {
              plVar11 = (long *)*plVar8;
              plVar9 = plVar8;
              if (plVar11 != (long *)0x0) {
                puVar10 = (undefined8 *)plVar8[2];
                if (puVar10 != (undefined8 *)0x0) {
                  puVar13 = (undefined8 *)plVar11[2];
                  do {
                    plVar2 = plVar11;
                    if (puVar13 == (undefined8 *)0x0) {
LAB_0055a674:
                    /* WARNING: Subroutine does not return */
                      __assert_fail("b != 0L","external/com_github_google_re2/re2/dfa.cc",0x99,
                                    "operator()");
                    }
                    if (puVar10 != puVar13) {
                      if (*(int *)((long)puVar10 + 0xc) != *(int *)((long)puVar13 + 0xc))
                      goto LAB_0055a510;
                      uVar1 = *(uint *)(puVar10 + 1);
                      uVar12 = (ulong)uVar1;
                      if (uVar1 != *(uint *)(puVar13 + 1)) goto LAB_0055a510;
                      if (0 < (int)uVar1) {
                        piVar16 = (int *)*puVar10;
                        piVar14 = (int *)*puVar13;
                        do {
                          if (*piVar16 != *piVar14) goto LAB_0055a510;
                          uVar12 = uVar12 - 1;
                          piVar14 = piVar14 + 1;
                          piVar16 = piVar16 + 1;
                        } while (uVar12 != 0);
                      }
                    }
                    plVar11 = (long *)*plVar2;
                    plVar9 = plVar2;
                    if (plVar11 == (long *)0x0) goto LAB_0055a510;
                    puVar13 = (undefined8 *)plVar11[2];
                  } while( true );
                }
LAB_0055a694:
                    /* WARNING: Subroutine does not return */
                __assert_fail("a != 0L","external/com_github_google_re2/re2/dfa.cc",0x98,
                              "operator()");
              }
LAB_0055a510:
              *plVar7 = *plVar9;
              *plVar9 = **(long **)(*param_1 + uVar4 * 8);
              **(undefined8 **)(*param_1 + uVar4 * 8) = plVar8;
              plVar9 = (long *)*plVar7;
            }
            plVar8 = plVar9;
            if (plVar9 == (long *)0x0) {
              return;
            }
          }
          plVar9 = (long *)*plVar8;
          plVar7 = plVar8;
          plVar8 = plVar9;
        } while (plVar9 != (long *)0x0);
      }
    }
  }
  return;
}


