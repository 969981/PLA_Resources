/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00367294; name: FUN_00367294
 */


void FUN_00367294(long *param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  undefined2 uVar11;
  undefined8 uVar12;
  
  if (param_2 == 0) {
    lVar2 = *param_1;
    *param_1 = 0;
    if (lVar2 != 0) {
      FUN_002e2ea0(PTR_LAB_04373088);
    }
    param_1[1] = 0;
    return;
  }
  lVar2 = FUN_002e2e80(PTR_FUN_04373078,param_2 << 3);
  lVar3 = *param_1;
  *param_1 = lVar2;
  if (lVar3 != 0) {
    FUN_002e2ea0(PTR_LAB_04373088);
  }
  uVar6 = param_2 - 1;
  uVar4 = param_2 & 3;
  param_1[1] = param_2;
  if (uVar6 < 3) {
    lVar2 = 0;
  }
  else {
    lVar2 = 0;
    do {
      lVar3 = lVar2 * 8;
      lVar2 = lVar2 + 4;
      *(undefined8 *)(*param_1 + lVar3) = 0;
      *(undefined8 *)(*param_1 + lVar3 + 8) = 0;
      *(undefined8 *)(*param_1 + lVar3 + 0x10) = 0;
      *(undefined8 *)(*param_1 + lVar3 + 0x18) = 0;
    } while (param_2 - uVar4 != lVar2);
  }
  if (uVar4 != 0) {
    lVar2 = lVar2 << 3;
    do {
      *(undefined8 *)(*param_1 + lVar2) = 0;
      uVar4 = uVar4 - 1;
      lVar2 = lVar2 + 8;
    } while (uVar4 != 0);
  }
  plVar7 = param_1 + 2;
  plVar5 = (long *)*plVar7;
  if (plVar5 == (long *)0x0) {
    return;
  }
  uVar12 = CONCAT17(POPCOUNT((char)(param_2 >> 0x38)),
                    CONCAT16(POPCOUNT((char)(param_2 >> 0x30)),
                             CONCAT15(POPCOUNT((char)(param_2 >> 0x28)),
                                      CONCAT14(POPCOUNT((char)(param_2 >> 0x20)),
                                               CONCAT13(POPCOUNT((char)(param_2 >> 0x18)),
                                                        CONCAT12(POPCOUNT((char)(param_2 >> 0x10)),
                                                                 CONCAT11(POPCOUNT((char)(param_2 >>
                                                                                         8)),
                                                                          POPCOUNT((char)param_2))))
                                              ))));
  uVar11 = NEON_uaddlv(uVar12,1);
  uVar8 = CONCAT62((int6)((ulong)uVar12 >> 0x10),uVar11) & 0xffffffff;
  uVar4 = plVar5[1];
  if (uVar8 < 2) {
    uVar4 = uVar4 & uVar6;
  }
  else if (param_2 <= uVar4) {
    uVar1 = 0;
    if (param_2 != 0) {
      uVar1 = uVar4 / param_2;
    }
    uVar4 = uVar4 - uVar1 * param_2;
    *(long **)(*param_1 + uVar4 * 8) = plVar7;
    plVar7 = (long *)*plVar5;
    goto joined_r0x003673d4;
  }
  *(long **)(*param_1 + uVar4 * 8) = plVar7;
  plVar7 = (long *)*plVar5;
joined_r0x003673d4:
  if (plVar7 != (long *)0x0) {
    if (uVar8 < 2) {
      do {
        while (uVar8 = plVar7[1] & uVar6, uVar8 != uVar4) {
          plVar10 = plVar7;
          if (*(long *)(*param_1 + uVar8 * 8) == 0) {
            *(long **)(*param_1 + uVar8 * 8) = plVar5;
            plVar10 = (long *)*plVar7;
            uVar4 = uVar8;
            plVar5 = plVar7;
          }
          else {
            do {
              plVar9 = plVar10;
              plVar10 = (long *)*plVar9;
              if (plVar10 == (long *)0x0) break;
            } while (plVar7[2] == plVar10[2]);
            *plVar5 = (long)plVar10;
            *plVar9 = **(long **)(*param_1 + uVar8 * 8);
            **(undefined8 **)(*param_1 + uVar8 * 8) = plVar7;
            plVar10 = (long *)*plVar5;
          }
          plVar7 = plVar10;
          if (plVar10 == (long *)0x0) {
            return;
          }
        }
        plVar10 = (long *)*plVar7;
        plVar5 = plVar7;
        plVar7 = plVar10;
      } while (plVar10 != (long *)0x0);
    }
    else {
      do {
        while( true ) {
          uVar6 = plVar7[1];
          if (param_2 <= uVar6) {
            uVar8 = 0;
            if (param_2 != 0) {
              uVar8 = uVar6 / param_2;
            }
            uVar6 = uVar6 - uVar8 * param_2;
          }
          if (uVar6 == uVar4) break;
          plVar10 = plVar7;
          if (*(long *)(*param_1 + uVar6 * 8) == 0) {
            *(long **)(*param_1 + uVar6 * 8) = plVar5;
            plVar10 = (long *)*plVar7;
            uVar4 = uVar6;
            plVar5 = plVar7;
          }
          else {
            do {
              plVar9 = plVar10;
              plVar10 = (long *)*plVar9;
              if (plVar10 == (long *)0x0) break;
            } while (plVar7[2] == plVar10[2]);
            *plVar5 = (long)plVar10;
            *plVar9 = **(long **)(*param_1 + uVar6 * 8);
            **(undefined8 **)(*param_1 + uVar6 * 8) = plVar7;
            plVar10 = (long *)*plVar5;
          }
          plVar7 = plVar10;
          if (plVar10 == (long *)0x0) {
            return;
          }
        }
        plVar10 = (long *)*plVar7;
        plVar5 = plVar7;
        plVar7 = plVar10;
      } while (plVar10 != (long *)0x0);
    }
  }
  return;
}


