/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00581ab4; name: FUN_00581ab4
 */


void FUN_00581ab4(long *param_1,ulong param_2)

{
  size_t __n;
  size_t sVar1;
  byte bVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  byte *__s2;
  byte *pbVar11;
  char *pcVar12;
  char *pcVar13;
  ulong uVar14;
  ulong uVar15;
  void *__s1;
  long *plVar16;
  ulong uVar17;
  long *plVar18;
  long *plVar19;
  ulong uVar20;
  undefined2 uVar21;
  undefined8 uVar22;
  
  if (param_2 - 1 == 0) {
    param_2 = 2;
    uVar15 = param_1[1];
    bVar4 = uVar15 < 3;
    if (1 < uVar15) goto LAB_00581b14;
  }
  else {
    if ((param_2 & param_2 - 1) != 0) {
      param_2 = std::__next_prime(param_2);
    }
    uVar15 = param_1[1];
    bVar4 = uVar15 <= param_2;
    if (param_2 <= uVar15) {
LAB_00581b14:
      if (bVar4) {
        return;
      }
      uVar6 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if ((uVar15 < 3) ||
         (uVar22 = CONCAT17(POPCOUNT((char)(uVar15 >> 0x38)),
                            CONCAT16(POPCOUNT((char)(uVar15 >> 0x30)),
                                     CONCAT15(POPCOUNT((char)(uVar15 >> 0x28)),
                                              CONCAT14(POPCOUNT((char)(uVar15 >> 0x20)),
                                                       CONCAT13(POPCOUNT((char)(uVar15 >> 0x18)),
                                                                CONCAT12(POPCOUNT((char)(uVar15 >>
                                                                                        0x10)),
                                                                         CONCAT11(POPCOUNT((char)(
                                                  uVar15 >> 8)),POPCOUNT((char)uVar15)))))))),
         uVar21 = NEON_uaddlv(uVar22,1), 1 < (uint)CONCAT62((int6)((ulong)uVar22 >> 0x10),uVar21)))
      {
        uVar6 = std::__next_prime(uVar6);
        if (uVar6 <= param_2) {
          uVar6 = param_2;
        }
      }
      else {
        if (1 < uVar6) {
          uVar6 = 1L << ((ulong)(uint)-(int)LZCOUNT(uVar6 - 1) & 0x3f);
        }
        if (uVar6 <= param_2) {
          uVar6 = param_2;
        }
      }
      param_2 = uVar6;
      if (uVar15 <= param_2) {
        return;
      }
    }
  }
  if (param_2 == 0) {
    lVar7 = *param_1;
    *param_1 = 0;
    if (lVar7 != 0) {
      FUN_002e2ea0(PTR_LAB_04373088);
    }
    param_1[1] = 0;
    return;
  }
  lVar7 = FUN_002e2e80(PTR_FUN_04373078,param_2 << 3);
  lVar8 = *param_1;
  *param_1 = lVar7;
  if (lVar8 != 0) {
    FUN_002e2ea0(PTR_LAB_04373088);
  }
  uVar6 = param_2 - 1;
  uVar15 = param_2 & 3;
  param_1[1] = param_2;
  if (uVar6 < 3) {
    lVar7 = 0;
  }
  else {
    lVar7 = 0;
    do {
      lVar8 = lVar7 * 8;
      lVar7 = lVar7 + 4;
      *(undefined8 *)(*param_1 + lVar8) = 0;
      *(undefined8 *)(*param_1 + lVar8 + 8) = 0;
      *(undefined8 *)(*param_1 + lVar8 + 0x10) = 0;
      *(undefined8 *)(*param_1 + lVar8 + 0x18) = 0;
    } while (param_2 - uVar15 != lVar7);
  }
  if (uVar15 != 0) {
    lVar7 = lVar7 << 3;
    do {
      *(undefined8 *)(*param_1 + lVar7) = 0;
      uVar15 = uVar15 - 1;
      lVar7 = lVar7 + 8;
    } while (uVar15 != 0);
  }
  plVar18 = param_1 + 2;
  plVar16 = (long *)*plVar18;
  if (plVar16 == (long *)0x0) {
    return;
  }
  uVar22 = CONCAT17(POPCOUNT((char)(param_2 >> 0x38)),
                    CONCAT16(POPCOUNT((char)(param_2 >> 0x30)),
                             CONCAT15(POPCOUNT((char)(param_2 >> 0x28)),
                                      CONCAT14(POPCOUNT((char)(param_2 >> 0x20)),
                                               CONCAT13(POPCOUNT((char)(param_2 >> 0x18)),
                                                        CONCAT12(POPCOUNT((char)(param_2 >> 0x10)),
                                                                 CONCAT11(POPCOUNT((char)(param_2 >>
                                                                                         8)),
                                                                          POPCOUNT((char)param_2))))
                                              ))));
  uVar21 = NEON_uaddlv(uVar22,1);
  uVar17 = CONCAT62((int6)((ulong)uVar22 >> 0x10),uVar21) & 0xffffffff;
  uVar15 = plVar16[1];
  if (uVar17 < 2) {
    uVar15 = uVar15 & uVar6;
  }
  else if (param_2 <= uVar15) {
    uVar20 = 0;
    if (param_2 != 0) {
      uVar20 = uVar15 / param_2;
    }
    uVar15 = uVar15 - uVar20 * param_2;
    *(long **)(*param_1 + uVar15 * 8) = plVar18;
    plVar18 = (long *)*plVar16;
    goto joined_r0x00581cfc;
  }
  *(long **)(*param_1 + uVar15 * 8) = plVar18;
  plVar18 = (long *)*plVar16;
joined_r0x00581cfc:
  if (plVar18 == (long *)0x0) {
    return;
  }
  do {
    uVar20 = plVar18[1];
    if (uVar17 < 2) {
      uVar20 = uVar20 & uVar6;
LAB_00581d78:
      if (uVar20 != uVar15) goto LAB_00581d34;
LAB_00581d04:
      plVar19 = (long *)*plVar18;
    }
    else {
      if (uVar20 < param_2) goto LAB_00581d78;
      uVar14 = 0;
      if (param_2 != 0) {
        uVar14 = uVar20 / param_2;
      }
      uVar20 = uVar20 - uVar14 * param_2;
      if (uVar20 == uVar15) goto LAB_00581d04;
LAB_00581d34:
      if (*(long *)(*param_1 + uVar20 * 8) != 0) break;
      *(long **)(*param_1 + uVar20 * 8) = plVar16;
      plVar19 = (long *)*plVar18;
      uVar15 = uVar20;
    }
    plVar16 = plVar18;
    plVar18 = plVar19;
    if (plVar19 == (long *)0x0) {
      return;
    }
  } while( true );
  plVar9 = (long *)*plVar18;
  plVar19 = plVar18;
  if (plVar9 != (long *)0x0) {
    bVar3 = *(byte *)(plVar18 + 2);
    __n = (ulong)(bVar3 >> 1);
    if ((bVar3 & 1) != 0) {
      __n = plVar18[3];
    }
    if ((bVar3 & 1) == 0) {
      do {
        plVar10 = plVar9;
        bVar2 = *(byte *)(plVar10 + 2);
        sVar1 = (ulong)(bVar2 >> 1);
        if ((bVar2 & 1) != 0) {
          sVar1 = plVar10[3];
        }
        if (__n != sVar1) {
LAB_00581e8c:
          break;
        }
        if (__n != 0) {
          pcVar13 = (char *)plVar10[4];
          if ((bVar2 & 1) == 0) {
            pcVar13 = (char *)((long)plVar10 + 0x11);
          }
          pcVar12 = (char *)((long)plVar18 + 0x11);
          uVar14 = (ulong)(bVar3 >> 1);
          do {
            if (*pcVar12 != *pcVar13) goto LAB_00581e8c;
            uVar14 = uVar14 - 1;
            pcVar12 = pcVar12 + 1;
            pcVar13 = pcVar13 + 1;
          } while (uVar14 != 0);
        }
        plVar19 = plVar10;
        plVar9 = (long *)*plVar10;
      } while ((long *)*plVar10 != (long *)0x0);
    }
    else {
      pbVar11 = (byte *)(plVar9 + 2);
      bVar4 = (*pbVar11 & 1) == 0;
      sVar1 = (ulong)(*pbVar11 >> 1);
      if (!bVar4) {
        sVar1 = plVar9[3];
      }
      if (__n == 0) {
        while( true ) {
          plVar10 = plVar9;
          if (sVar1 != 0) break;
          plVar9 = (long *)*plVar10;
          plVar19 = plVar10;
          if (plVar9 == (long *)0x0) break;
          sVar1 = (ulong)(*(byte *)(plVar9 + 2) >> 1);
          if ((*(byte *)(plVar9 + 2) & 1) != 0) {
            sVar1 = plVar9[3];
          }
        }
      }
      else if (__n == sVar1) {
        __s1 = (void *)plVar18[4];
        do {
          plVar10 = plVar9;
          __s2 = (byte *)plVar10[4];
          if (bVar4) {
            __s2 = pbVar11 + 1;
          }
          iVar5 = memcmp(__s1,__s2,__n);
          if (iVar5 != 0) break;
          plVar9 = (long *)*plVar10;
          plVar19 = plVar10;
          if (plVar9 == (long *)0x0) break;
          pbVar11 = (byte *)(plVar9 + 2);
          bVar4 = (*pbVar11 & 1) == 0;
          sVar1 = (ulong)(*pbVar11 >> 1);
          if (!bVar4) {
            sVar1 = plVar9[3];
          }
        } while (__n == sVar1);
      }
    }
  }
  *plVar16 = *plVar19;
  *plVar19 = **(long **)(*param_1 + uVar20 * 8);
  **(undefined8 **)(*param_1 + uVar20 * 8) = plVar18;
  plVar18 = (long *)*plVar16;
  goto joined_r0x00581cfc;
}


