/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00366f20; name: FUN_00366f20
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_00366f20(long *param_1,ulong param_2)

{
  size_t __n;
  size_t sVar1;
  byte bVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  long *plVar11;
  byte *__s2;
  ulong uVar12;
  byte *pbVar13;
  char *pcVar14;
  char *pcVar15;
  ulong uVar16;
  void *__s1;
  long *plVar17;
  ulong uVar18;
  long *plVar19;
  ulong uVar20;
  undefined2 uVar21;
  undefined8 uVar22;
  
  if (param_2 == 0) {
    lVar6 = *param_1;
    *param_1 = 0;
    if (lVar6 != 0) {
      FUN_002e2ea0(PTR_LAB_04373088);
    }
    param_1[1] = 0;
    return;
  }
  lVar6 = FUN_002e2e80(PTR_FUN_04373078,param_2 << 3);
  lVar8 = *param_1;
  *param_1 = lVar6;
  if (lVar8 != 0) {
    FUN_002e2ea0(PTR_LAB_04373088);
  }
  uVar12 = param_2 - 1;
  uVar9 = param_2 & 3;
  param_1[1] = param_2;
  if (uVar12 < 3) {
    lVar6 = 0;
  }
  else {
    lVar6 = 0;
    do {
      lVar8 = lVar6 * 8;
      lVar6 = lVar6 + 4;
      *(undefined8 *)(*param_1 + lVar8) = 0;
      *(undefined8 *)(*param_1 + lVar8 + 8) = 0;
      *(undefined8 *)(*param_1 + lVar8 + 0x10) = 0;
      *(undefined8 *)(*param_1 + lVar8 + 0x18) = 0;
    } while (param_2 - uVar9 != lVar6);
  }
  if (uVar9 != 0) {
    lVar6 = lVar6 << 3;
    do {
      *(undefined8 *)(*param_1 + lVar6) = 0;
      uVar9 = uVar9 - 1;
      lVar6 = lVar6 + 8;
    } while (uVar9 != 0);
  }
  plVar19 = param_1 + 2;
  plVar17 = (long *)*plVar19;
  if (plVar17 == (long *)0x0) {
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
  uVar18 = CONCAT62((int6)((ulong)uVar22 >> 0x10),uVar21) & 0xffffffff;
  uVar9 = plVar17[1];
  if (uVar18 < 2) {
    uVar9 = uVar9 & uVar12;
  }
  else if (param_2 <= uVar9) {
    uVar20 = 0;
    if (param_2 != 0) {
      uVar20 = uVar9 / param_2;
    }
    uVar9 = uVar9 - uVar20 * param_2;
    *(long **)(*param_1 + uVar9 * 8) = plVar19;
    plVar19 = (long *)*plVar17;
    goto joined_r0x00367074;
  }
  *(long **)(*param_1 + uVar9 * 8) = plVar19;
  plVar19 = (long *)*plVar17;
joined_r0x00367074:
  do {
    if (plVar19 == (long *)0x0) {
      return;
    }
    while( true ) {
      uVar20 = plVar19[1];
      if (uVar18 < 2) {
        uVar20 = uVar20 & uVar12;
      }
      else if (param_2 <= uVar20) {
        uVar16 = 0;
        if (param_2 != 0) {
          uVar16 = uVar20 / param_2;
        }
        uVar20 = uVar20 - uVar16 * param_2;
      }
      if (uVar20 == uVar9) break;
      if (*(long *)(*param_1 + uVar20 * 8) == 0) {
        *(long **)(*param_1 + uVar20 * 8) = plVar17;
        plVar7 = (long *)*plVar19;
        plVar17 = plVar19;
        uVar9 = uVar20;
      }
      else {
        plVar10 = (long *)*plVar19;
        plVar7 = plVar19;
        if (plVar10 != (long *)0x0) {
          bVar3 = *(byte *)(plVar19 + 2);
          __n = (ulong)(bVar3 >> 1);
          if ((bVar3 & 1) != 0) {
            __n = plVar19[3];
          }
          if ((bVar3 & 1) == 0) {
            do {
              plVar11 = plVar10;
              bVar2 = *(byte *)(plVar11 + 2);
              sVar1 = (ulong)(bVar2 >> 1);
              if ((bVar2 & 1) != 0) {
                sVar1 = plVar11[3];
              }
              if (__n != sVar1) {
LAB_00367204:
                break;
              }
              if (__n != 0) {
                pcVar15 = (char *)plVar11[4];
                if ((bVar2 & 1) == 0) {
                  pcVar15 = (char *)((long)plVar11 + 0x11);
                }
                pcVar14 = (char *)((long)plVar19 + 0x11);
                uVar16 = (ulong)(bVar3 >> 1);
                do {
                  if (*pcVar14 != *pcVar15) goto LAB_00367204;
                  uVar16 = uVar16 - 1;
                  pcVar14 = pcVar14 + 1;
                  pcVar15 = pcVar15 + 1;
                } while (uVar16 != 0);
              }
              plVar7 = plVar11;
              plVar10 = (long *)*plVar11;
            } while ((long *)*plVar11 != (long *)0x0);
          }
          else {
            pbVar13 = (byte *)(plVar10 + 2);
            bVar4 = (*pbVar13 & 1) == 0;
            sVar1 = (ulong)(*pbVar13 >> 1);
            if (!bVar4) {
              sVar1 = plVar10[3];
            }
            if (__n == 0) {
              while( true ) {
                plVar11 = plVar10;
                if (sVar1 != 0) break;
                plVar10 = (long *)*plVar11;
                plVar7 = plVar11;
                if (plVar10 == (long *)0x0) break;
                sVar1 = (ulong)(*(byte *)(plVar10 + 2) >> 1);
                if ((*(byte *)(plVar10 + 2) & 1) != 0) {
                  sVar1 = plVar10[3];
                }
              }
            }
            else if (__n == sVar1) {
              __s1 = (void *)plVar19[4];
              do {
                plVar11 = plVar10;
                __s2 = (byte *)plVar11[4];
                if (bVar4) {
                  __s2 = pbVar13 + 1;
                }
                iVar5 = memcmp(__s1,__s2,__n);
                if (iVar5 != 0) break;
                plVar10 = (long *)*plVar11;
                plVar7 = plVar11;
                if (plVar10 == (long *)0x0) break;
                pbVar13 = (byte *)(plVar10 + 2);
                bVar4 = (*pbVar13 & 1) == 0;
                sVar1 = (ulong)(*pbVar13 >> 1);
                if (!bVar4) {
                  sVar1 = plVar10[3];
                }
              } while (__n == sVar1);
            }
          }
        }
        *plVar17 = *plVar7;
        *plVar7 = **(long **)(*param_1 + uVar20 * 8);
        **(undefined8 **)(*param_1 + uVar20 * 8) = plVar19;
        plVar7 = (long *)*plVar17;
      }
      plVar19 = plVar7;
      if (plVar19 == (long *)0x0) {
        return;
      }
    }
    plVar17 = plVar19;
    plVar19 = (long *)*plVar19;
  } while( true );
}


