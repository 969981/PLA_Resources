/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00303568; name: FUN_00303568
 */


void FUN_00303568(long param_1,uint param_2,long param_3)

{
  long *plVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong unaff_x27;
  undefined2 uVar8;
  float fVar9;
  undefined8 uVar10;
  
  uVar6 = (ulong)param_2;
  FUN_002ef750(param_1 + 0x18);
  uVar7 = *(ulong *)(param_1 + 0x50);
  plVar1 = (long *)(param_1 + 0x48);
  if (uVar7 != 0) {
    uVar10 = CONCAT17(POPCOUNT((char)(uVar7 >> 0x38)),
                      CONCAT16(POPCOUNT((char)(uVar7 >> 0x30)),
                               CONCAT15(POPCOUNT((char)(uVar7 >> 0x28)),
                                        CONCAT14(POPCOUNT((char)(uVar7 >> 0x20)),
                                                 CONCAT13(POPCOUNT((char)(uVar7 >> 0x18)),
                                                          CONCAT12(POPCOUNT((char)(uVar7 >> 0x10)),
                                                                   CONCAT11(POPCOUNT((char)(uVar7 >>
                                                                                           8)),
                                                                            POPCOUNT((char)uVar7))))
                                                ))));
    uVar8 = NEON_uaddlv(uVar10,1);
    uVar5 = CONCAT62((int6)((ulong)uVar10 >> 0x10),uVar8) & 0xffffffff;
    if (uVar5 < 2) {
      unaff_x27 = (ulong)((int)uVar7 - 1U & param_2);
      plVar3 = *(long **)(*plVar1 + unaff_x27 * 8);
    }
    else {
      unaff_x27 = uVar6;
      if (uVar7 <= uVar6) {
        uVar2 = 0;
        if (uVar7 != 0) {
          uVar2 = uVar6 / uVar7;
        }
        unaff_x27 = uVar6 - uVar2 * uVar7;
      }
      plVar3 = *(long **)(*plVar1 + unaff_x27 * 8);
    }
    if (plVar3 != (long *)0x0) {
      if (uVar5 < 2) {
        do {
          plVar3 = (long *)*plVar3;
          if ((plVar3 == (long *)0x0) ||
             (plVar3[1] != uVar6 && (plVar3[1] & uVar7 - 1) != unaff_x27)) goto LAB_00303668;
        } while (*(uint *)(plVar3 + 2) != param_2);
      }
      else {
        do {
          plVar3 = (long *)*plVar3;
          if (plVar3 == (long *)0x0) goto LAB_00303668;
          uVar5 = plVar3[1];
          if (uVar5 != uVar6) {
            if (uVar7 <= uVar5) {
              uVar2 = 0;
              if (uVar7 != 0) {
                uVar2 = uVar5 / uVar7;
              }
              uVar5 = uVar5 - uVar2 * uVar7;
            }
            if (uVar5 != unaff_x27) goto LAB_00303668;
          }
        } while (*(uint *)(plVar3 + 2) != param_2);
      }
      goto LAB_003037b0;
    }
  }
LAB_00303668:
  plVar3 = (long *)FUN_002e2e80(PTR_FUN_04373078,0x20);
  *(uint *)(plVar3 + 2) = param_2;
  plVar3[3] = param_3;
  *plVar3 = 0;
  plVar3[1] = uVar6;
  fVar9 = (float)(*(long *)(param_1 + 0x60) + 1);
  if ((uVar7 == 0) || (*(float *)(param_1 + 0x68) * (float)uVar7 < fVar9)) {
    uVar7 = (ulong)(uVar7 < 3 || (uVar7 & uVar7 - 1) != 0) | uVar7 << 1;
    uVar5 = (ulong)(fVar9 / *(float *)(param_1 + 0x68));
    if (uVar5 <= uVar7) {
      uVar5 = uVar7;
    }
                    /* try { // try from 003036f0 to 003036f7 has its CatchHandler @ 003037d0 */
    FUN_00303800(plVar1,uVar5);
    uVar7 = *(ulong *)(param_1 + 0x50);
    if ((uVar7 & uVar7 - 1) == 0) {
      unaff_x27 = (ulong)((int)uVar7 - 1U & param_2);
      plVar4 = *(long **)(*plVar1 + unaff_x27 * 8);
      goto joined_r0x0030371c;
    }
    if (uVar6 < uVar7) {
      plVar4 = *(long **)(*plVar1 + uVar6 * 8);
      unaff_x27 = uVar6;
      goto joined_r0x0030371c;
    }
    uVar5 = 0;
    if (uVar7 != 0) {
      uVar5 = uVar6 / uVar7;
    }
    unaff_x27 = uVar6 - uVar5 * uVar7;
    plVar4 = *(long **)(*plVar1 + unaff_x27 * 8);
    if (plVar4 == (long *)0x0) goto LAB_00303738;
LAB_003036b8:
    *plVar3 = *plVar4;
LAB_003037a0:
    *plVar4 = (long)plVar3;
  }
  else {
    plVar4 = *(long **)(*plVar1 + unaff_x27 * 8);
joined_r0x0030371c:
    if (plVar4 != (long *)0x0) goto LAB_003036b8;
LAB_00303738:
    plVar4 = (long *)(param_1 + 0x58);
    *plVar3 = *plVar4;
    *plVar4 = (long)plVar3;
    *(long **)(*(long *)(param_1 + 0x48) + unaff_x27 * 8) = plVar4;
    if (*plVar3 != 0) {
      uVar6 = *(ulong *)(*plVar3 + 8);
      if ((uVar7 & uVar7 - 1) == 0) {
        uVar6 = uVar6 & uVar7 - 1;
      }
      else if (uVar7 <= uVar6) {
        uVar5 = 0;
        if (uVar7 != 0) {
          uVar5 = uVar6 / uVar7;
        }
        uVar6 = uVar6 - uVar5 * uVar7;
      }
      plVar4 = (long *)(*plVar1 + uVar6 * 8);
      goto LAB_003037a0;
    }
  }
  *(long *)(param_1 + 0x60) = *(long *)(param_1 + 0x60) + 1;
LAB_003037b0:
                    /* try { // try from 003037b0 to 003037b7 has its CatchHandler @ 003037fc */
  FUN_002ef790(param_1 + 0x18);
  return;
}


