/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003925a0; name: FUN_003925a0
 */


long * FUN_003925a0(long *param_1,ulong *param_2)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  undefined2 uVar9;
  undefined8 uVar10;
  
  uVar4 = param_1[1];
  if (uVar4 == 0) {
LAB_003926a8:
    plVar8 = (long *)0x0;
  }
  else {
    uVar3 = *param_2;
    uVar5 = ((ulong)(uint)((int)uVar3 << 3) + 8 ^ uVar3 >> 0x20) * -0x622015f714c7d297;
    uVar10 = CONCAT17(POPCOUNT((char)(uVar4 >> 0x38)),
                      CONCAT16(POPCOUNT((char)(uVar4 >> 0x30)),
                               CONCAT15(POPCOUNT((char)(uVar4 >> 0x28)),
                                        CONCAT14(POPCOUNT((char)(uVar4 >> 0x20)),
                                                 CONCAT13(POPCOUNT((char)(uVar4 >> 0x18)),
                                                          CONCAT12(POPCOUNT((char)(uVar4 >> 0x10)),
                                                                   CONCAT11(POPCOUNT((char)(uVar4 >>
                                                                                           8)),
                                                                            POPCOUNT((char)uVar4))))
                                                ))));
    uVar9 = NEON_uaddlv(uVar10,1);
    uVar5 = (uVar5 ^ uVar3 >> 0x20 ^ uVar5 >> 0x2f) * -0x622015f714c7d297;
    uVar5 = (uVar5 ^ uVar5 >> 0x2f) * -0x622015f714c7d297;
    uVar7 = CONCAT62((int6)((ulong)uVar10 >> 0x10),uVar9) & 0xffffffff;
    if (uVar7 < 2) {
      uVar6 = uVar5 & uVar4 - 1;
      plVar8 = *(long **)(*param_1 + uVar6 * 8);
    }
    else {
      uVar6 = uVar5;
      if (uVar4 <= uVar5) {
        uVar6 = 0;
        if (uVar4 != 0) {
          uVar6 = uVar5 / uVar4;
        }
        uVar6 = uVar5 - uVar6 * uVar4;
      }
      plVar8 = *(long **)(*param_1 + uVar6 * 8);
    }
    if (plVar8 == (long *)0x0) {
      return (long *)0x0;
    }
    plVar8 = (long *)*plVar8;
    if (plVar8 != (long *)0x0) {
      plVar2 = plVar8;
      if (uVar7 < 2) {
        uVar7 = plVar8[1];
        if (uVar7 != uVar5) goto LAB_0039265c;
        while (plVar8[2] != uVar3) {
          while( true ) {
            plVar8 = (long *)*plVar8;
            if (plVar8 == (long *)0x0) {
              return (long *)0x0;
            }
            uVar7 = plVar8[1];
            if (uVar7 == uVar5) break;
LAB_0039265c:
            if ((uVar7 & uVar4 - 1) != uVar6) {
              return (long *)0x0;
            }
          }
        }
      }
      else {
        do {
          uVar7 = plVar2[1];
          if (uVar7 == uVar5) {
            if (plVar2[2] == uVar3) {
              return plVar2;
            }
          }
          else {
            if (uVar4 <= uVar7) {
              uVar1 = 0;
              if (uVar4 != 0) {
                uVar1 = uVar7 / uVar4;
              }
              uVar7 = uVar7 - uVar1 * uVar4;
            }
            if (uVar7 != uVar6) goto LAB_003926a8;
          }
          plVar2 = (long *)*plVar2;
          plVar8 = (long *)0x0;
        } while (plVar2 != (long *)0x0);
      }
    }
  }
  return plVar8;
}


