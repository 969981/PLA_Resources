/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003681f8; name: FUN_003681f8
 */


void FUN_003681f8(long *param_1,ulong param_2)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  undefined2 uVar12;
  undefined8 uVar13;
  
  if (param_2 == 0) {
    lVar3 = *param_1;
    *param_1 = 0;
    if (lVar3 != 0) {
      FUN_002e2ea0(PTR_LAB_04373088);
    }
    param_1[1] = 0;
    return;
  }
  lVar3 = FUN_002e2e80(PTR_FUN_04373078,param_2 << 3);
  lVar4 = *param_1;
  *param_1 = lVar3;
  if (lVar4 != 0) {
    FUN_002e2ea0(PTR_LAB_04373088);
  }
  uVar8 = param_2 - 1;
  uVar5 = param_2 & 3;
  param_1[1] = param_2;
  if (uVar8 < 3) {
    lVar3 = 0;
  }
  else {
    lVar3 = 0;
    do {
      lVar4 = lVar3 * 8;
      lVar3 = lVar3 + 4;
      *(undefined8 *)(*param_1 + lVar4) = 0;
      *(undefined8 *)(*param_1 + lVar4 + 8) = 0;
      *(undefined8 *)(*param_1 + lVar4 + 0x10) = 0;
      *(undefined8 *)(*param_1 + lVar4 + 0x18) = 0;
    } while (param_2 - uVar5 != lVar3);
  }
  if (uVar5 != 0) {
    lVar3 = lVar3 << 3;
    do {
      *(undefined8 *)(*param_1 + lVar3) = 0;
      uVar5 = uVar5 - 1;
      lVar3 = lVar3 + 8;
    } while (uVar5 != 0);
  }
  plVar9 = param_1 + 2;
  plVar7 = (long *)*plVar9;
  if (plVar7 == (long *)0x0) {
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
  uVar6 = CONCAT62((int6)((ulong)uVar13 >> 0x10),uVar12) & 0xffffffff;
  uVar5 = plVar7[1];
  if (uVar6 < 2) {
    uVar5 = uVar5 & uVar8;
  }
  else if (param_2 <= uVar5) {
    uVar1 = 0;
    if (param_2 != 0) {
      uVar1 = uVar5 / param_2;
    }
    uVar5 = uVar5 - uVar1 * param_2;
    *(long **)(*param_1 + uVar5 * 8) = plVar9;
    plVar9 = (long *)*plVar7;
    goto joined_r0x0036833c;
  }
  *(long **)(*param_1 + uVar5 * 8) = plVar9;
  plVar9 = (long *)*plVar7;
joined_r0x0036833c:
  if (plVar9 != (long *)0x0) {
    if (uVar6 < 2) {
      do {
        while (uVar6 = plVar9[1] & uVar8, uVar6 != uVar5) {
          plVar11 = plVar9;
          if (*(long *)(*param_1 + uVar6 * 8) == 0) {
            *(long **)(*param_1 + uVar6 * 8) = plVar7;
            plVar11 = (long *)*plVar9;
            uVar5 = uVar6;
            plVar7 = plVar9;
          }
          else {
            do {
              plVar10 = plVar11;
              plVar11 = (long *)*plVar10;
              if ((plVar11 == (long *)0x0) || (plVar9[2] != plVar11[2])) break;
              iVar2 = strcmp((char *)plVar9[3],(char *)plVar11[3]);
            } while (iVar2 == 0);
            *plVar7 = (long)plVar11;
            *plVar10 = **(long **)(*param_1 + uVar6 * 8);
            **(undefined8 **)(*param_1 + uVar6 * 8) = plVar9;
            plVar11 = (long *)*plVar7;
          }
          plVar9 = plVar11;
          if (plVar11 == (long *)0x0) {
            return;
          }
        }
        plVar11 = (long *)*plVar9;
        plVar7 = plVar9;
        plVar9 = plVar11;
      } while (plVar11 != (long *)0x0);
    }
    else {
      do {
        while( true ) {
          uVar8 = plVar9[1];
          if (param_2 <= uVar8) {
            uVar6 = 0;
            if (param_2 != 0) {
              uVar6 = uVar8 / param_2;
            }
            uVar8 = uVar8 - uVar6 * param_2;
          }
          if (uVar8 == uVar5) break;
          plVar11 = plVar9;
          if (*(long *)(*param_1 + uVar8 * 8) == 0) {
            *(long **)(*param_1 + uVar8 * 8) = plVar7;
            plVar11 = (long *)*plVar9;
            uVar5 = uVar8;
            plVar7 = plVar9;
          }
          else {
            do {
              plVar10 = plVar11;
              plVar11 = (long *)*plVar10;
              if ((plVar11 == (long *)0x0) || (plVar9[2] != plVar11[2])) break;
              iVar2 = strcmp((char *)plVar9[3],(char *)plVar11[3]);
            } while (iVar2 == 0);
            *plVar7 = (long)plVar11;
            *plVar10 = **(long **)(*param_1 + uVar8 * 8);
            **(undefined8 **)(*param_1 + uVar8 * 8) = plVar9;
            plVar11 = (long *)*plVar7;
          }
          plVar9 = plVar11;
          if (plVar11 == (long *)0x0) {
            return;
          }
        }
        plVar11 = (long *)*plVar9;
        plVar7 = plVar9;
        plVar9 = plVar11;
      } while (plVar11 != (long *)0x0);
    }
  }
  return;
}


