/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00557d80; name: FUN_00557d80
 */


/* WARNING: Removing unreachable block (ram,0x00557eb0) */

long * FUN_00557d80(long *param_1,void *param_2,uint param_3,uint param_4)

{
  long *plVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  int *piVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  ulong uVar13;
  ulong uVar14;
  undefined2 uVar15;
  undefined8 uVar16;
  void **local_68;
  void *local_60;
  uint local_58;
  uint uStack_54;
  
  plVar1 = param_1 + 0x16;
  local_68 = &local_60;
  local_60 = param_2;
  local_58 = param_3;
  uStack_54 = param_4;
  lVar4 = FUN_00559f70(plVar1,&local_68);
  if (lVar4 != 0) {
    return *(long **)(lVar4 + 0x10);
  }
  uVar2 = *(uint *)(*param_1 + 0x14);
  uVar14 = (ulong)uVar2;
  lVar4 = (ulong)((int)((ulong)param_3 << 2) + (uVar2 + 1) * 8 + 0x10) << 0x20;
  lVar10 = lVar4 + 0x2800000000 >> 0x20;
  if (param_1[0x14] < lVar10) {
    param_1[0x14] = -1;
    return (long *)0x0;
  }
  param_1[0x14] = param_1[0x14] - lVar10;
  plVar5 = (long *)FUN_002e2e80(PTR_FUN_04373078,lVar4 >> 0x20);
  if (-1 < (int)uVar2) {
    memset(plVar5 + 2,0,uVar14 * 8 + 8);
  }
  *plVar5 = (long)(plVar5 + (long)(int)(uVar2 + 1) + 2);
  memmove(plVar5 + (long)(int)(uVar2 + 1) + 2,param_2,
          -(ulong)(param_3 >> 0x1f) & 0xfffffffc00000000 | (ulong)param_3 << 2);
  *(uint *)(plVar5 + 1) = param_3;
  *(uint *)((long)plVar5 + 0xc) = param_4;
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("a != 0L","external/com_github_google_re2/re2/dfa.cc",0x8d,"operator()");
  }
  lVar4 = (ulong)param_4 + 0x53;
  if (0 < (int)param_3) {
    uVar11 = (long)(int)param_3 & 1;
    if (param_3 == 1) {
      lVar10 = 0;
    }
    else {
      lVar10 = 0;
      do {
        piVar12 = (int *)(*plVar5 + lVar10 * 4);
        lVar10 = lVar10 + 2;
        lVar4 = (lVar4 * -0x35a83aa59b680000 | (ulong)(lVar4 * -0x23c146b50754b36d) >> 0x2d) +
                (long)*piVar12;
        lVar4 = (lVar4 * -0x35a83aa59b680000 | (ulong)(lVar4 * -0x23c146b50754b36d) >> 0x2d) +
                (long)piVar12[1];
      } while ((long)(int)param_3 - uVar11 != lVar10);
      if (uVar11 == 0) goto LAB_00557f08;
    }
    lVar4 = (lVar4 * -0x35a83aa59b680000 | (ulong)(lVar4 * -0x23c146b50754b36d) >> 0x2d) +
            (long)*(int *)(*plVar5 + lVar10 * 4);
  }
LAB_00557f08:
  uVar11 = param_1[0x17];
  uVar13 = lVar4 * -0x35a83aa59b680000 | (ulong)(lVar4 * -0x23c146b50754b36d) >> 0x2d;
  if (uVar11 != 0) {
    uVar16 = CONCAT17(POPCOUNT((char)(uVar11 >> 0x38)),
                      CONCAT16(POPCOUNT((char)(uVar11 >> 0x30)),
                               CONCAT15(POPCOUNT((char)(uVar11 >> 0x28)),
                                        CONCAT14(POPCOUNT((char)(uVar11 >> 0x20)),
                                                 CONCAT13(POPCOUNT((char)(uVar11 >> 0x18)),
                                                          CONCAT12(POPCOUNT((char)(uVar11 >> 0x10)),
                                                                   CONCAT11(POPCOUNT((char)(uVar11 
                                                  >> 8)),POPCOUNT((char)uVar11))))))));
    uVar15 = NEON_uaddlv(uVar16,1);
    uVar8 = CONCAT62((int6)((ulong)uVar16 >> 0x10),uVar15) & 0xffffffff;
    if (uVar8 < 2) {
      uVar14 = uVar13 & uVar11 - 1;
LAB_00557f64:
      plVar6 = *(long **)(*plVar1 + uVar14 * 8);
    }
    else {
      uVar14 = uVar13;
      if (uVar13 < uVar11) goto LAB_00557f64;
      uVar14 = 0;
      if (uVar11 != 0) {
        uVar14 = uVar13 / uVar11;
      }
      uVar14 = uVar13 - uVar14 * uVar11;
      plVar6 = *(long **)(*plVar1 + uVar14 * 8);
    }
    if ((plVar6 != (long *)0x0) && (plVar6 = (long *)*plVar6, plVar6 != (long *)0x0)) {
      if (uVar8 < 2) {
        if ((int)param_3 < 1) {
          do {
            if (plVar6[1] != uVar13 && (plVar6[1] & uVar11 - 1) != uVar14) break;
            plVar7 = (long *)plVar6[2];
            if (plVar7 == (long *)0x0) goto LAB_00558298;
            if (plVar7 == plVar5) {
              return plVar5;
            }
            if ((*(uint *)((long)plVar7 + 0xc) == param_4) && (*(uint *)(plVar7 + 1) == param_3)) {
              return plVar5;
            }
            plVar6 = (long *)*plVar6;
          } while (plVar6 != (long *)0x0);
        }
        else {
          do {
            if (plVar6[1] != uVar13 && (plVar6[1] & uVar11 - 1) != uVar14) break;
            plVar7 = (long *)plVar6[2];
            if (plVar7 == (long *)0x0) goto LAB_00558298;
            if (plVar7 == plVar5) {
              return plVar5;
            }
            if ((*(uint *)((long)plVar7 + 0xc) == param_4) && (*(uint *)(plVar7 + 1) == param_3)) {
              piVar9 = (int *)*plVar7;
              piVar12 = (int *)*plVar5;
              uVar8 = (ulong)param_3;
              while (*piVar9 == *piVar12) {
                uVar8 = uVar8 - 1;
                piVar12 = piVar12 + 1;
                piVar9 = piVar9 + 1;
                if (uVar8 == 0) {
                  return plVar5;
                }
              }
            }
            plVar6 = (long *)*plVar6;
          } while (plVar6 != (long *)0x0);
        }
      }
      else if ((int)param_3 < 1) {
        do {
          uVar8 = plVar6[1];
          if (uVar8 != uVar13) {
            if (uVar11 <= uVar8) {
              uVar3 = 0;
              if (uVar11 != 0) {
                uVar3 = uVar8 / uVar11;
              }
              uVar8 = uVar8 - uVar3 * uVar11;
            }
            if (uVar8 != uVar14) break;
          }
          plVar7 = (long *)plVar6[2];
          if (plVar7 == (long *)0x0) {
LAB_00558298:
                    /* WARNING: Subroutine does not return */
            __assert_fail("a != 0L","external/com_github_google_re2/re2/dfa.cc",0x98,"operator()");
          }
          if (plVar7 == plVar5) {
            return plVar5;
          }
          if ((*(uint *)((long)plVar7 + 0xc) == param_4) && (*(uint *)(plVar7 + 1) == param_3)) {
            return plVar5;
          }
          plVar6 = (long *)*plVar6;
        } while (plVar6 != (long *)0x0);
      }
      else {
        do {
          uVar8 = plVar6[1];
          if (uVar8 != uVar13) {
            if (uVar11 <= uVar8) {
              uVar3 = 0;
              if (uVar11 != 0) {
                uVar3 = uVar8 / uVar11;
              }
              uVar8 = uVar8 - uVar3 * uVar11;
            }
            if (uVar8 != uVar14) break;
          }
          plVar7 = (long *)plVar6[2];
          if (plVar7 == (long *)0x0) goto LAB_00558298;
          if (plVar7 == plVar5) {
            return plVar5;
          }
          if ((*(uint *)((long)plVar7 + 0xc) == param_4) && (*(uint *)(plVar7 + 1) == param_3)) {
            piVar9 = (int *)*plVar7;
            piVar12 = (int *)*plVar5;
            uVar8 = (ulong)param_3;
            while (*piVar9 == *piVar12) {
              uVar8 = uVar8 - 1;
              piVar12 = piVar12 + 1;
              piVar9 = piVar9 + 1;
              if (uVar8 == 0) {
                return plVar5;
              }
            }
          }
          plVar6 = (long *)*plVar6;
        } while (plVar6 != (long *)0x0);
      }
    }
  }
  plVar6 = (long *)FUN_002e2e80(PTR_FUN_04373078,0x18);
  plVar6[1] = uVar13;
  plVar6[2] = (long)plVar5;
  *plVar6 = 0;
  if ((uVar11 == 0) || (*(float *)(param_1 + 0x1a) * (float)uVar11 < (float)(param_1[0x19] + 1))) {
    uVar14 = (ulong)(uVar11 < 3 || (uVar11 & uVar11 - 1) != 0) | uVar11 << 1;
    uVar11 = (ulong)((float)(param_1[0x19] + 1) / *(float *)(param_1 + 0x1a));
    if (uVar11 <= uVar14) {
      uVar11 = uVar14;
    }
                    /* try { // try from 005581bc to 005581c3 has its CatchHandler @ 005582d8 */
    FUN_0055a1fc(plVar1,uVar11);
    uVar11 = param_1[0x17];
    if ((uVar11 & uVar11 - 1) == 0) {
      uVar14 = uVar11 - 1 & uVar13;
      plVar7 = *(long **)(*plVar1 + uVar14 * 8);
      goto joined_r0x005581e8;
    }
    if (uVar13 < uVar11) {
      plVar7 = *(long **)(*plVar1 + uVar13 * 8);
      uVar14 = uVar13;
      goto joined_r0x005581e8;
    }
    uVar14 = 0;
    if (uVar11 != 0) {
      uVar14 = uVar13 / uVar11;
    }
    uVar14 = uVar13 - uVar14 * uVar11;
    plVar7 = *(long **)(*plVar1 + uVar14 * 8);
    if (plVar7 != (long *)0x0) goto LAB_00558184;
LAB_00558200:
    plVar7 = param_1 + 0x18;
    *plVar6 = *plVar7;
    *plVar7 = (long)plVar6;
    *(long **)(param_1[0x16] + uVar14 * 8) = plVar7;
    if (*plVar6 == 0) goto LAB_0055826c;
    uVar14 = *(ulong *)(*plVar6 + 8);
    if ((uVar11 & uVar11 - 1) == 0) {
      uVar14 = uVar14 & uVar11 - 1;
    }
    else if (uVar11 <= uVar14) {
      uVar13 = 0;
      if (uVar11 != 0) {
        uVar13 = uVar14 / uVar11;
      }
      uVar14 = uVar14 - uVar13 * uVar11;
    }
    plVar7 = (long *)(*plVar1 + uVar14 * 8);
  }
  else {
    plVar7 = *(long **)(*plVar1 + uVar14 * 8);
joined_r0x005581e8:
    if (plVar7 == (long *)0x0) goto LAB_00558200;
LAB_00558184:
    *plVar6 = *plVar7;
  }
  *plVar7 = (long)plVar6;
LAB_0055826c:
  param_1[0x19] = param_1[0x19] + 1;
  return plVar5;
}


