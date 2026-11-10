/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0056b93c; name: FUN_0056b93c
 */


long * FUN_0056b93c(long *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  ulong unaff_x24;
  undefined2 uVar7;
  undefined8 uVar8;
  
  uVar6 = *param_2;
  uVar5 = param_1[1];
  if (uVar5 != 0) {
    uVar8 = CONCAT17(POPCOUNT((char)(uVar5 >> 0x38)),
                     CONCAT16(POPCOUNT((char)(uVar5 >> 0x30)),
                              CONCAT15(POPCOUNT((char)(uVar5 >> 0x28)),
                                       CONCAT14(POPCOUNT((char)(uVar5 >> 0x20)),
                                                CONCAT13(POPCOUNT((char)(uVar5 >> 0x18)),
                                                         CONCAT12(POPCOUNT((char)(uVar5 >> 0x10)),
                                                                  CONCAT11(POPCOUNT((char)(uVar5 >> 
                                                  8)),POPCOUNT((char)uVar5))))))));
    uVar7 = NEON_uaddlv(uVar8,1);
    uVar2 = CONCAT62((int6)((ulong)uVar8 >> 0x10),uVar7) & 0xffffffff;
    if (uVar2 < 2) {
      unaff_x24 = uVar5 - 1 & uVar6;
      plVar4 = *(long **)(*param_1 + unaff_x24 * 8);
    }
    else {
      unaff_x24 = uVar6;
      if (uVar5 <= uVar6) {
        uVar1 = 0;
        if (uVar5 != 0) {
          uVar1 = uVar6 / uVar5;
        }
        unaff_x24 = uVar6 - uVar1 * uVar5;
      }
      plVar4 = *(long **)(*param_1 + unaff_x24 * 8);
    }
    if (plVar4 != (long *)0x0) {
      if (uVar2 < 2) {
        do {
          plVar4 = (long *)*plVar4;
          if ((plVar4 == (long *)0x0) ||
             (plVar4[1] != uVar6 && (plVar4[1] & uVar5 - 1) != unaff_x24)) goto LAB_0056ba24;
        } while (plVar4[2] != uVar6);
      }
      else {
        do {
          plVar4 = (long *)*plVar4;
          if (plVar4 == (long *)0x0) goto LAB_0056ba24;
          uVar2 = plVar4[1];
          if (uVar2 != uVar6) {
            if (uVar5 <= uVar2) {
              uVar1 = 0;
              if (uVar5 != 0) {
                uVar1 = uVar2 / uVar5;
              }
              uVar2 = uVar2 - uVar1 * uVar5;
            }
            if (uVar2 != unaff_x24) goto LAB_0056ba24;
          }
        } while (plVar4[2] != uVar6);
      }
      goto LAB_0056bb6c;
    }
  }
LAB_0056ba24:
  plVar4 = (long *)FUN_002e2e80(PTR_FUN_04373078,0x20);
  uVar2 = *param_2;
  plVar4[1] = uVar6;
  plVar4[2] = uVar2;
  *(undefined4 *)(plVar4 + 3) = 0;
  *plVar4 = 0;
  if ((uVar5 == 0) || (*(float *)(param_1 + 4) * (float)uVar5 < (float)(param_1[3] + 1))) {
    uVar5 = (ulong)(uVar5 < 3 || (uVar5 & uVar5 - 1) != 0) | uVar5 << 1;
    uVar2 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar2 <= uVar5) {
      uVar2 = uVar5;
    }
                    /* try { // try from 0056bab0 to 0056bab7 has its CatchHandler @ 0056bb84 */
    FUN_0056e1b4(param_1,uVar2);
    uVar5 = param_1[1];
    if ((uVar5 & uVar5 - 1) == 0) {
      unaff_x24 = uVar5 - 1 & uVar6;
      plVar3 = *(long **)(*param_1 + unaff_x24 * 8);
      goto joined_r0x0056badc;
    }
    if (uVar6 < uVar5) {
      plVar3 = *(long **)(*param_1 + uVar6 * 8);
      unaff_x24 = uVar6;
      goto joined_r0x0056badc;
    }
    uVar2 = 0;
    if (uVar5 != 0) {
      uVar2 = uVar6 / uVar5;
    }
    unaff_x24 = uVar6 - uVar2 * uVar5;
    plVar3 = *(long **)(*param_1 + unaff_x24 * 8);
    if (plVar3 == (long *)0x0) goto LAB_0056baf4;
LAB_0056ba78:
    *plVar4 = *plVar3;
LAB_0056bb5c:
    *plVar3 = (long)plVar4;
  }
  else {
    plVar3 = *(long **)(*param_1 + unaff_x24 * 8);
joined_r0x0056badc:
    if (plVar3 != (long *)0x0) goto LAB_0056ba78;
LAB_0056baf4:
    plVar3 = param_1 + 2;
    *plVar4 = *plVar3;
    *plVar3 = (long)plVar4;
    *(long **)(*param_1 + unaff_x24 * 8) = plVar3;
    if (*plVar4 != 0) {
      uVar6 = *(ulong *)(*plVar4 + 8);
      if ((uVar5 & uVar5 - 1) == 0) {
        uVar6 = uVar6 & uVar5 - 1;
      }
      else if (uVar5 <= uVar6) {
        uVar2 = 0;
        if (uVar5 != 0) {
          uVar2 = uVar6 / uVar5;
        }
        uVar6 = uVar6 - uVar2 * uVar5;
      }
      plVar3 = (long *)(*param_1 + uVar6 * 8);
      goto LAB_0056bb5c;
    }
  }
  param_1[3] = param_1[3] + 1;
LAB_0056bb6c:
  return plVar4 + 3;
}


