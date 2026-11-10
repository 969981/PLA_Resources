/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00508fd8; name: FUN_00508fd8
 */


long * FUN_00508fd8(long *param_1,long *param_2)

{
  uint uVar1;
  ulong uVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong unaff_x24;
  undefined2 uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long local_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  long local_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  
  lVar5 = *param_2;
  if (lVar5 == 0) {
    uVar9 = (ulong)*(byte *)(param_2 + 1);
    lVar5 = (long)param_2 + 9;
LAB_00509050:
    uVar7 = FUN_003da780(lVar5,uVar9,*(undefined4 *)PTR_DAT_043740a8);
    uVar9 = param_1[1];
    uVar7 = uVar7 & 0xffffffff;
  }
  else {
    if (*(int *)(lVar5 + 8) == 1) {
      uVar1 = *(uint *)(lVar5 + 0x68);
      uVar9 = param_1[1];
    }
    else {
      if (*(int *)(lVar5 + 8) != 0) {
        uVar9 = param_2[1];
        lVar5 = param_2[2];
        goto LAB_00509050;
      }
      uVar1 = *(uint *)(PTR_DAT_043740a0 + (ulong)*(uint *)(lVar5 + 0x28) * 4);
      uVar9 = param_1[1];
    }
    uVar7 = (ulong)uVar1;
  }
  if (uVar9 != 0) {
    uVar11 = CONCAT17(POPCOUNT((char)(uVar9 >> 0x38)),
                      CONCAT16(POPCOUNT((char)(uVar9 >> 0x30)),
                               CONCAT15(POPCOUNT((char)(uVar9 >> 0x28)),
                                        CONCAT14(POPCOUNT((char)(uVar9 >> 0x20)),
                                                 CONCAT13(POPCOUNT((char)(uVar9 >> 0x18)),
                                                          CONCAT12(POPCOUNT((char)(uVar9 >> 0x10)),
                                                                   CONCAT11(POPCOUNT((char)(uVar9 >>
                                                                                           8)),
                                                                            POPCOUNT((char)uVar9))))
                                                ))));
    uVar10 = NEON_uaddlv(uVar11,1);
    uVar8 = CONCAT62((int6)((ulong)uVar11 >> 0x10),uVar10) & 0xffffffff;
    if (uVar8 < 2) {
      unaff_x24 = (int)uVar9 - 1 & uVar7;
      plVar4 = *(long **)(*param_1 + unaff_x24 * 8);
    }
    else {
      unaff_x24 = uVar7;
      if (uVar9 <= uVar7) {
        uVar2 = 0;
        if (uVar9 != 0) {
          uVar2 = uVar7 / uVar9;
        }
        unaff_x24 = uVar7 - uVar2 * uVar9;
      }
      plVar4 = *(long **)(*param_1 + unaff_x24 * 8);
    }
    if (plVar4 != (long *)0x0) {
      if (uVar8 < 2) {
        do {
          plVar4 = (long *)*plVar4;
          if ((plVar4 == (long *)0x0) ||
             (plVar4[1] != uVar7 && (plVar4[1] & uVar9 - 1) != unaff_x24)) goto LAB_00509154;
          lStack_58 = plVar4[3];
          local_60 = plVar4[2];
          lStack_48 = plVar4[5];
          lStack_50 = plVar4[4];
          lStack_78 = param_2[1];
          local_80 = *param_2;
          lStack_68 = param_2[3];
          lStack_70 = param_2[2];
          iVar3 = FUN_002f3a50(&local_60,&local_80);
        } while (iVar3 == 0);
      }
      else {
        do {
          plVar4 = (long *)*plVar4;
          if (plVar4 == (long *)0x0) goto LAB_00509154;
          uVar8 = plVar4[1];
          if (uVar8 != uVar7) {
            if (uVar9 <= uVar8) {
              uVar2 = 0;
              if (uVar9 != 0) {
                uVar2 = uVar8 / uVar9;
              }
              uVar8 = uVar8 - uVar2 * uVar9;
            }
            if (uVar8 != unaff_x24) goto LAB_00509154;
          }
          lStack_58 = plVar4[3];
          local_60 = plVar4[2];
          lStack_48 = plVar4[5];
          lStack_50 = plVar4[4];
          lStack_78 = param_2[1];
          local_80 = *param_2;
          lStack_68 = param_2[3];
          lStack_70 = param_2[2];
          iVar3 = FUN_002f3a50(&local_60,&local_80);
        } while (iVar3 == 0);
      }
      goto LAB_005092a0;
    }
  }
LAB_00509154:
  plVar4 = (long *)FUN_002e2e80(PTR_FUN_04373078,0x38);
  lVar5 = *param_2;
  lVar13 = param_2[3];
  lVar12 = param_2[2];
  plVar4[3] = param_2[1];
  plVar4[2] = lVar5;
  plVar4[5] = lVar13;
  plVar4[4] = lVar12;
  plVar4[6] = 0;
  *plVar4 = 0;
  plVar4[1] = uVar7;
  if ((uVar9 == 0) || (*(float *)(param_1 + 4) * (float)uVar9 < (float)(param_1[3] + 1))) {
    uVar9 = (ulong)(uVar9 < 3 || (uVar9 & uVar9 - 1) != 0) | uVar9 << 1;
    uVar8 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar8 <= uVar9) {
      uVar8 = uVar9;
    }
                    /* try { // try from 005091e0 to 005091e7 has its CatchHandler @ 005092bc */
    FUN_00509bec(param_1,uVar8);
    uVar9 = param_1[1];
    if ((uVar9 & uVar9 - 1) == 0) {
      uVar7 = (int)uVar9 - 1 & uVar7;
      plVar6 = *(long **)(*param_1 + uVar7 * 8);
      goto joined_r0x0050927c;
    }
    if (uVar9 <= uVar7) {
      uVar8 = 0;
      if (uVar9 != 0) {
        uVar8 = uVar7 / uVar9;
      }
      uVar7 = uVar7 - uVar8 * uVar9;
      plVar6 = *(long **)(*param_1 + uVar7 * 8);
      goto joined_r0x0050927c;
    }
    plVar6 = *(long **)(*param_1 + uVar7 * 8);
    if (plVar6 != (long *)0x0) goto LAB_005091a8;
LAB_00509228:
    plVar6 = param_1 + 2;
    *plVar4 = *plVar6;
    *plVar6 = (long)plVar4;
    *(long **)(*param_1 + uVar7 * 8) = plVar6;
    if (*plVar4 != 0) {
      uVar7 = *(ulong *)(*plVar4 + 8);
      if ((uVar9 & uVar9 - 1) == 0) {
        uVar7 = uVar7 & uVar9 - 1;
      }
      else if (uVar9 <= uVar7) {
        uVar8 = 0;
        if (uVar9 != 0) {
          uVar8 = uVar7 / uVar9;
        }
        uVar7 = uVar7 - uVar8 * uVar9;
      }
      plVar6 = (long *)(*param_1 + uVar7 * 8);
      goto LAB_00509290;
    }
  }
  else {
    plVar6 = *(long **)(*param_1 + unaff_x24 * 8);
    uVar7 = unaff_x24;
joined_r0x0050927c:
    if (plVar6 == (long *)0x0) goto LAB_00509228;
LAB_005091a8:
    *plVar4 = *plVar6;
LAB_00509290:
    *plVar6 = (long)plVar4;
  }
  param_1[3] = param_1[3] + 1;
LAB_005092a0:
  return plVar4 + 6;
}


