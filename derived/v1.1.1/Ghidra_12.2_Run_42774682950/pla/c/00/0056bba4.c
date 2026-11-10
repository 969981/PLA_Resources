/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0056bba4; name: FUN_0056bba4
 */


bool FUN_0056bba4(long param_1,int param_2)

{
  uint *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  undefined2 uVar9;
  undefined8 uVar10;
  
  puVar1 = (uint *)(*(long *)(param_1 + 0x58) + (long)param_2 * 8);
  if ((*puVar1 & 7) != 2) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("(opcode()) == (kInstByteRange)","external/com_github_google_re2\\re2/prog.h",0x59
                  ,"foldcase");
  }
  uVar4 = *(ulong *)(param_1 + 0x80);
  if (uVar4 == 0) {
    return false;
  }
  uVar10 = CONCAT17(POPCOUNT((char)(uVar4 >> 0x38)),
                    CONCAT16(POPCOUNT((char)(uVar4 >> 0x30)),
                             CONCAT15(POPCOUNT((char)(uVar4 >> 0x28)),
                                      CONCAT14(POPCOUNT((char)(uVar4 >> 0x20)),
                                               CONCAT13(POPCOUNT((char)(uVar4 >> 0x18)),
                                                        CONCAT12(POPCOUNT((char)(uVar4 >> 0x10)),
                                                                 CONCAT11(POPCOUNT((char)(uVar4 >> 8
                                                                                         )),
                                                                          POPCOUNT((char)uVar4))))))
                            ));
  uVar9 = NEON_uaddlv(uVar10,1);
  uVar8 = CONCAT62((int6)((ulong)uVar10 >> 0x10),uVar9) & 0xffffffff;
  uVar3 = ((ulong)*puVar1 & 0xfffffff0) << 0xd |
          (ulong)*(byte *)((long)puVar1 + 5) << 1 | (ulong)(byte)puVar1[1] << 9 |
          (ulong)*(ushort *)((long)puVar1 + 6) & 1;
  if (uVar8 < 2) {
    uVar7 = uVar3 & uVar4 + 0x1fffffffffff;
  }
  else {
    uVar7 = uVar3;
    if (uVar4 <= uVar3) {
      uVar7 = 0;
      if (uVar4 != 0) {
        uVar7 = uVar3 / uVar4;
      }
      uVar7 = uVar3 - uVar7 * uVar4;
      plVar5 = *(long **)(*(long *)(param_1 + 0x78) + uVar7 * 8);
      goto joined_r0x0056bce0;
    }
  }
  plVar5 = *(long **)(*(long *)(param_1 + 0x78) + uVar7 * 8);
joined_r0x0056bce0:
  plVar6 = (long *)0x0;
  if ((plVar5 != (long *)0x0) && (plVar6 = (long *)*plVar5, plVar6 != (long *)0x0)) {
    if (uVar8 < 2) {
      uVar8 = plVar6[1];
      if (uVar8 != uVar3) goto LAB_0056bc60;
      while (plVar6[2] != uVar3) {
        while( true ) {
          plVar6 = (long *)*plVar6;
          if (plVar6 == (long *)0x0) goto LAB_0056bce4;
          uVar8 = plVar6[1];
          if (uVar8 == uVar3) break;
LAB_0056bc60:
          if ((uVar8 & uVar4 - 1) != uVar7) {
            return false;
          }
        }
      }
    }
    else {
      do {
        uVar8 = plVar6[1];
        if (uVar8 == uVar3) {
          if (plVar6[2] == uVar3) break;
        }
        else {
          if (uVar4 <= uVar8) {
            uVar2 = 0;
            if (uVar4 != 0) {
              uVar2 = uVar8 / uVar4;
            }
            uVar8 = uVar8 - uVar2 * uVar4;
          }
          if (uVar8 != uVar7) {
            return false;
          }
        }
        plVar6 = (long *)*plVar6;
      } while (plVar6 != (long *)0x0);
    }
  }
LAB_0056bce4:
  return plVar6 != (long *)0x0;
}


