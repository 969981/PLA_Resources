/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00380438; name: FUN_00380438
 */


long * FUN_00380438(long *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  ulong unaff_x24;
  undefined2 uVar9;
  undefined8 uVar10;
  
  uVar2 = *param_2;
  uVar6 = ((ulong)(uint)((int)uVar2 << 3) + 8 ^ uVar2 >> 0x20) * -0x622015f714c7d297;
  uVar4 = (uVar6 ^ uVar2 >> 0x20 ^ uVar6 >> 0x2f) * -0x622015f714c7d297;
  uVar4 = uVar4 ^ uVar4 >> 0x2f;
  uVar8 = uVar4 * -0x622015f714c7d297;
  uVar6 = param_1[1];
  if (uVar6 != 0) {
    uVar10 = CONCAT17(POPCOUNT((char)(uVar6 >> 0x38)),
                      CONCAT16(POPCOUNT((char)(uVar6 >> 0x30)),
                               CONCAT15(POPCOUNT((char)(uVar6 >> 0x28)),
                                        CONCAT14(POPCOUNT((char)(uVar6 >> 0x20)),
                                                 CONCAT13(POPCOUNT((char)(uVar6 >> 0x18)),
                                                          CONCAT12(POPCOUNT((char)(uVar6 >> 0x10)),
                                                                   CONCAT11(POPCOUNT((char)(uVar6 >>
                                                                                           8)),
                                                                            POPCOUNT((char)uVar6))))
                                                ))));
    uVar9 = NEON_uaddlv(uVar10,1);
    uVar5 = CONCAT62((int6)((ulong)uVar10 >> 0x10),uVar9) & 0xffffffff;
    if (uVar5 < 2) {
      unaff_x24 = uVar8 & uVar6 - 1;
      plVar7 = *(long **)(*param_1 + unaff_x24 * 8);
    }
    else {
      unaff_x24 = uVar8;
      if (uVar6 <= uVar8) {
        uVar1 = 0;
        if (uVar6 != 0) {
          uVar1 = uVar8 / uVar6;
        }
        unaff_x24 = uVar8 - uVar1 * uVar6;
      }
      plVar7 = *(long **)(*param_1 + unaff_x24 * 8);
    }
    if (plVar7 != (long *)0x0) {
      if (uVar5 < 2) {
        do {
          plVar7 = (long *)*plVar7;
          if ((plVar7 == (long *)0x0) ||
             (plVar7[1] != uVar8 && (plVar7[1] & uVar6 - 1) != unaff_x24)) goto LAB_00380558;
        } while (plVar7[2] != uVar2);
      }
      else {
        do {
          plVar7 = (long *)*plVar7;
          if (plVar7 == (long *)0x0) goto LAB_00380558;
          uVar5 = plVar7[1];
          if (uVar5 != uVar8) {
            if (uVar6 <= uVar5) {
              uVar1 = 0;
              if (uVar6 != 0) {
                uVar1 = uVar5 / uVar6;
              }
              uVar5 = uVar5 - uVar1 * uVar6;
            }
            if (uVar5 != unaff_x24) goto LAB_00380558;
          }
        } while (plVar7[2] != uVar2);
      }
      goto LAB_0038069c;
    }
  }
LAB_00380558:
  plVar7 = (long *)FUN_002e2e80(PTR_FUN_04373078,0x20);
  plVar7[2] = *param_2;
  plVar7[3] = 0;
  *plVar7 = 0;
  plVar7[1] = uVar8;
  if ((uVar6 == 0) || (*(float *)(param_1 + 4) * (float)uVar6 < (float)(param_1[3] + 1))) {
    uVar6 = (ulong)(uVar6 < 3 || (uVar6 & uVar6 - 1) != 0) | uVar6 << 1;
    uVar2 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar2 <= uVar6) {
      uVar2 = uVar6;
    }
                    /* try { // try from 003805e0 to 003805e7 has its CatchHandler @ 003806b4 */
    FUN_00380984(param_1,uVar2);
    uVar6 = param_1[1];
    if ((uVar6 & uVar6 - 1) == 0) {
      unaff_x24 = uVar6 - 1 & uVar8;
      plVar3 = *(long **)(*param_1 + unaff_x24 * 8);
      goto joined_r0x0038060c;
    }
    if (uVar8 < uVar6) {
      plVar3 = *(long **)(*param_1 + uVar4 * -0x1100afb8a63e94b8);
      unaff_x24 = uVar8;
      goto joined_r0x0038060c;
    }
    uVar2 = 0;
    if (uVar6 != 0) {
      uVar2 = uVar8 / uVar6;
    }
    unaff_x24 = uVar8 - uVar2 * uVar6;
    plVar3 = *(long **)(*param_1 + unaff_x24 * 8);
    if (plVar3 == (long *)0x0) goto LAB_00380624;
LAB_003805a8:
    *plVar7 = *plVar3;
LAB_0038068c:
    *plVar3 = (long)plVar7;
  }
  else {
    plVar3 = *(long **)(*param_1 + unaff_x24 * 8);
joined_r0x0038060c:
    if (plVar3 != (long *)0x0) goto LAB_003805a8;
LAB_00380624:
    plVar3 = param_1 + 2;
    *plVar7 = *plVar3;
    *plVar3 = (long)plVar7;
    *(long **)(*param_1 + unaff_x24 * 8) = plVar3;
    if (*plVar7 != 0) {
      uVar2 = *(ulong *)(*plVar7 + 8);
      if ((uVar6 & uVar6 - 1) == 0) {
        uVar2 = uVar2 & uVar6 - 1;
      }
      else if (uVar6 <= uVar2) {
        uVar4 = 0;
        if (uVar6 != 0) {
          uVar4 = uVar2 / uVar6;
        }
        uVar2 = uVar2 - uVar4 * uVar6;
      }
      plVar3 = (long *)(*param_1 + uVar2 * 8);
      goto LAB_0038068c;
    }
  }
  param_1[3] = param_1[3] + 1;
LAB_0038069c:
  return plVar7 + 3;
}


