/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0056b7f0; name: FUN_0056b7f0
 */


undefined4 FUN_0056b7f0(long param_1,ulong param_2,ulong param_3,ulong param_4,int param_5)

{
  long *plVar1;
  ulong uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  undefined2 uVar9;
  undefined8 uVar10;
  ulong local_18;
  
  local_18 = (param_2 & 0xff) << 9 | (param_3 & 0xff) << 1 | param_4 & 1 | (long)param_5 << 0x11;
  uVar6 = *(ulong *)(param_1 + 0x80);
  plVar1 = (long *)(param_1 + 0x78);
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
    uVar8 = CONCAT62((int6)((ulong)uVar10 >> 0x10),uVar9) & 0xffffffff;
    if (uVar8 < 2) {
      uVar5 = uVar6 - 1 & local_18;
      plVar7 = *(long **)(*plVar1 + uVar5 * 8);
    }
    else {
      uVar5 = local_18;
      if (uVar6 <= local_18) {
        uVar5 = 0;
        if (uVar6 != 0) {
          uVar5 = local_18 / uVar6;
        }
        uVar5 = local_18 - uVar5 * uVar6;
      }
      plVar7 = *(long **)(*plVar1 + uVar5 * 8);
    }
    if ((plVar7 != (long *)0x0) && (plVar7 = (long *)*plVar7, plVar7 != (long *)0x0)) {
      if (uVar8 < 2) {
        uVar8 = plVar7[1];
        if (uVar8 != local_18) goto LAB_0056b89c;
        while (plVar7[2] != local_18) {
          while( true ) {
            plVar7 = (long *)*plVar7;
            if (plVar7 == (long *)0x0) goto LAB_0056b8fc;
            uVar8 = plVar7[1];
            if (uVar8 == local_18) break;
LAB_0056b89c:
            if ((uVar8 & uVar6 - 1) != uVar5) goto LAB_0056b8fc;
          }
        }
LAB_0056b928:
        return (int)plVar7[3];
      }
      do {
        uVar8 = plVar7[1];
        if (uVar8 == local_18) {
          if (plVar7[2] == local_18) goto LAB_0056b928;
        }
        else {
          if (uVar6 <= uVar8) {
            uVar2 = 0;
            if (uVar6 != 0) {
              uVar2 = uVar8 / uVar6;
            }
            uVar8 = uVar8 - uVar2 * uVar6;
          }
          if (uVar8 != uVar5) break;
        }
        plVar7 = (long *)*plVar7;
      } while (plVar7 != (long *)0x0);
    }
  }
LAB_0056b8fc:
  uVar3 = FUN_0056b698();
  puVar4 = (undefined4 *)FUN_0056b93c(plVar1,&local_18);
  *puVar4 = uVar3;
  return uVar3;
}


