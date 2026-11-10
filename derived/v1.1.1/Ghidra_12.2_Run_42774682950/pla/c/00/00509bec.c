/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00509bec; name: FUN_00509bec
 */


void FUN_00509bec(long *param_1,ulong param_2)

{
  ulong uVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  undefined2 uVar12;
  undefined8 uVar13;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long local_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  
  if (param_2 - 1 == 0) {
    param_2 = 2;
    uVar8 = param_1[1];
    bVar2 = uVar8 < 3;
    if (1 < uVar8) goto LAB_00509c4c;
  }
  else {
    if ((param_2 & param_2 - 1) != 0) {
      param_2 = std::__next_prime(param_2);
    }
    uVar8 = param_1[1];
    bVar2 = uVar8 <= param_2;
    if (param_2 <= uVar8) {
LAB_00509c4c:
      if (bVar2) {
        return;
      }
      uVar4 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if ((uVar8 < 3) ||
         (uVar13 = CONCAT17(POPCOUNT((char)(uVar8 >> 0x38)),
                            CONCAT16(POPCOUNT((char)(uVar8 >> 0x30)),
                                     CONCAT15(POPCOUNT((char)(uVar8 >> 0x28)),
                                              CONCAT14(POPCOUNT((char)(uVar8 >> 0x20)),
                                                       CONCAT13(POPCOUNT((char)(uVar8 >> 0x18)),
                                                                CONCAT12(POPCOUNT((char)(uVar8 >> 
                                                  0x10)),CONCAT11(POPCOUNT((char)(uVar8 >> 8)),
                                                                  POPCOUNT((char)uVar8)))))))),
         uVar12 = NEON_uaddlv(uVar13,1), 1 < (uint)CONCAT62((int6)((ulong)uVar13 >> 0x10),uVar12)))
      {
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
      if (uVar8 <= param_2) {
        return;
      }
    }
  }
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
  uVar8 = param_2 & 3;
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
    } while (param_2 - uVar8 != lVar5);
  }
  if (uVar8 != 0) {
    lVar5 = lVar5 << 3;
    do {
      *(undefined8 *)(*param_1 + lVar5) = 0;
      uVar8 = uVar8 - 1;
      lVar5 = lVar5 + 8;
    } while (uVar8 != 0);
  }
  plVar10 = param_1 + 2;
  plVar9 = (long *)*plVar10;
  if (plVar9 == (long *)0x0) {
    return;
  }
  uVar13 = CONCAT17(POPCOUNT((char)(param_2 >> 0x38)),
                    CONCAT16(POPCOUNT((char)(param_2 >> 0x30)),
                             CONCAT15(POPCOUNT((char)(param_2 >> 0x28)),
                                      CONCAT14(POPCOUNT((char)(param_2 >> 0x20)),
                                               CONCAT13(POPCOUNT((char)(param_2 >> 0x18)),
                                                        CONCAT12(POPCOUNT((char)(param_2 >> 0x10)),
                                                                 CONCAT11(POPCOUNT((char)(param_2 >>
                                                                                         8)),
                                                                          POPCOUNT((char)param_2))))
                                              ))));
  uVar12 = NEON_uaddlv(uVar13,1);
  uVar7 = CONCAT62((int6)((ulong)uVar13 >> 0x10),uVar12) & 0xffffffff;
  uVar8 = plVar9[1];
  if (uVar7 < 2) {
    uVar8 = uVar8 & uVar4;
  }
  else if (param_2 <= uVar8) {
    uVar1 = 0;
    if (param_2 != 0) {
      uVar1 = uVar8 / param_2;
    }
    uVar8 = uVar8 - uVar1 * param_2;
    *(long **)(*param_1 + uVar8 * 8) = plVar10;
    plVar10 = (long *)*plVar9;
    goto joined_r0x00509e28;
  }
  *(long **)(*param_1 + uVar8 * 8) = plVar10;
  plVar10 = (long *)*plVar9;
joined_r0x00509e28:
  if (plVar10 != (long *)0x0) {
    if (uVar7 < 2) {
      do {
        while (uVar7 = plVar10[1] & uVar4, uVar7 != uVar8) {
          if (*(long *)(*param_1 + uVar7 * 8) != 0) {
            lVar5 = *plVar10;
            plVar11 = plVar10;
            if (lVar5 != 0) {
              lStack_68 = plVar10[3];
              local_70 = plVar10[2];
              lStack_58 = plVar10[5];
              lStack_60 = plVar10[4];
              uStack_88 = *(undefined8 *)(lVar5 + 0x18);
              local_90 = *(undefined8 *)(lVar5 + 0x10);
              uStack_78 = *(undefined8 *)(lVar5 + 0x28);
              uStack_80 = *(undefined8 *)(lVar5 + 0x20);
              iVar3 = FUN_002f3a50(&local_70,&local_90);
              if (iVar3 != 0) {
                do {
                  plVar11 = (long *)*plVar11;
                  lVar5 = *plVar11;
                  if (lVar5 == 0) break;
                  lStack_68 = plVar10[3];
                  local_70 = plVar10[2];
                  lStack_58 = plVar10[5];
                  lStack_60 = plVar10[4];
                  uStack_88 = *(undefined8 *)(lVar5 + 0x18);
                  local_90 = *(undefined8 *)(lVar5 + 0x10);
                  uStack_78 = *(undefined8 *)(lVar5 + 0x28);
                  uStack_80 = *(undefined8 *)(lVar5 + 0x20);
                  iVar3 = FUN_002f3a50(&local_70,&local_90);
                } while (iVar3 != 0);
              }
            }
            *plVar9 = *plVar11;
            *plVar11 = **(long **)(*param_1 + uVar7 * 8);
            **(undefined8 **)(*param_1 + uVar7 * 8) = plVar10;
            plVar11 = (long *)*plVar9;
            plVar10 = plVar9;
            goto joined_r0x00509fd4;
          }
          *(long **)(*param_1 + uVar7 * 8) = plVar9;
          plVar11 = (long *)*plVar10;
          plVar9 = plVar10;
          uVar8 = uVar7;
          plVar10 = plVar11;
          if (plVar11 == (long *)0x0) {
            return;
          }
        }
        plVar11 = (long *)*plVar10;
joined_r0x00509fd4:
        plVar9 = plVar10;
        plVar10 = plVar11;
      } while (plVar11 != (long *)0x0);
    }
    else {
      do {
        while( true ) {
          uVar4 = plVar10[1];
          if (param_2 <= uVar4) {
            uVar7 = 0;
            if (param_2 != 0) {
              uVar7 = uVar4 / param_2;
            }
            uVar4 = uVar4 - uVar7 * param_2;
          }
          if (uVar4 == uVar8) break;
          if (*(long *)(*param_1 + uVar4 * 8) == 0) {
            *(long **)(*param_1 + uVar4 * 8) = plVar9;
            plVar11 = (long *)*plVar10;
            uVar8 = uVar4;
            plVar9 = plVar10;
          }
          else {
            lVar5 = *plVar10;
            plVar11 = plVar10;
            if (lVar5 != 0) {
              lStack_68 = plVar10[3];
              local_70 = plVar10[2];
              lStack_58 = plVar10[5];
              lStack_60 = plVar10[4];
              uStack_88 = *(undefined8 *)(lVar5 + 0x18);
              local_90 = *(undefined8 *)(lVar5 + 0x10);
              uStack_78 = *(undefined8 *)(lVar5 + 0x28);
              uStack_80 = *(undefined8 *)(lVar5 + 0x20);
              iVar3 = FUN_002f3a50(&local_70,&local_90);
              if (iVar3 != 0) {
                do {
                  plVar11 = (long *)*plVar11;
                  lVar5 = *plVar11;
                  if (lVar5 == 0) break;
                  lStack_68 = plVar10[3];
                  local_70 = plVar10[2];
                  lStack_58 = plVar10[5];
                  lStack_60 = plVar10[4];
                  uStack_88 = *(undefined8 *)(lVar5 + 0x18);
                  local_90 = *(undefined8 *)(lVar5 + 0x10);
                  uStack_78 = *(undefined8 *)(lVar5 + 0x28);
                  uStack_80 = *(undefined8 *)(lVar5 + 0x20);
                  iVar3 = FUN_002f3a50(&local_70,&local_90);
                } while (iVar3 != 0);
              }
            }
            *plVar9 = *plVar11;
            *plVar11 = **(long **)(*param_1 + uVar4 * 8);
            **(undefined8 **)(*param_1 + uVar4 * 8) = plVar10;
            plVar11 = (long *)*plVar9;
          }
          plVar10 = plVar11;
          if (plVar11 == (long *)0x0) {
            return;
          }
        }
        plVar11 = (long *)*plVar10;
        plVar9 = plVar10;
        plVar10 = plVar11;
      } while (plVar11 != (long *)0x0);
    }
  }
  return;
}


