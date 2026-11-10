/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00559f70; name: FUN_00559f70
 */


/* WARNING: Removing unreachable block (ram,0x00559fc8) */

long * FUN_00559f70(long *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  int *piVar10;
  ulong uVar11;
  long *plVar12;
  long lVar13;
  int *piVar14;
  undefined2 uVar15;
  undefined8 uVar16;
  
  plVar4 = (long *)*param_2;
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("a != 0L","external/com_github_google_re2/re2/dfa.cc",0x8d,"operator()");
  }
  uVar1 = *(uint *)(plVar4 + 1);
  uVar2 = *(uint *)((long)plVar4 + 0xc);
  lVar7 = (ulong)uVar2 + 0x53;
  if (0 < (int)uVar1) {
    uVar11 = (long)(int)uVar1 & 1;
    if (uVar1 == 1) {
      lVar13 = 0;
    }
    else {
      lVar13 = 0;
      do {
        piVar14 = (int *)(*plVar4 + lVar13 * 4);
        lVar13 = lVar13 + 2;
        lVar7 = (lVar7 * -0x35a83aa59b680000 | (ulong)(lVar7 * -0x23c146b50754b36d) >> 0x2d) +
                (long)*piVar14;
        lVar7 = (lVar7 * -0x35a83aa59b680000 | (ulong)(lVar7 * -0x23c146b50754b36d) >> 0x2d) +
                (long)piVar14[1];
      } while ((long)(int)uVar1 - uVar11 != lVar13);
      if (uVar11 == 0) goto LAB_0055a020;
    }
    lVar7 = (lVar7 * -0x35a83aa59b680000 | (ulong)(lVar7 * -0x23c146b50754b36d) >> 0x2d) +
            (long)*(int *)(*plVar4 + lVar13 * 4);
  }
LAB_0055a020:
  uVar11 = param_1[1];
  if (uVar11 != 0) {
    uVar16 = CONCAT17(POPCOUNT((char)(uVar11 >> 0x38)),
                      CONCAT16(POPCOUNT((char)(uVar11 >> 0x30)),
                               CONCAT15(POPCOUNT((char)(uVar11 >> 0x28)),
                                        CONCAT14(POPCOUNT((char)(uVar11 >> 0x20)),
                                                 CONCAT13(POPCOUNT((char)(uVar11 >> 0x18)),
                                                          CONCAT12(POPCOUNT((char)(uVar11 >> 0x10)),
                                                                   CONCAT11(POPCOUNT((char)(uVar11 
                                                  >> 8)),POPCOUNT((char)uVar11))))))));
    uVar15 = NEON_uaddlv(uVar16,1);
    uVar8 = CONCAT62((int6)((ulong)uVar16 >> 0x10),uVar15) & 0xffffffff;
    uVar5 = lVar7 * -0x35a83aa59b680000 | (ulong)(lVar7 * -0x23c146b50754b36d) >> 0x2d;
    if (uVar8 < 2) {
      uVar6 = uVar5 & uVar11 - 1;
      plVar12 = *(long **)(*param_1 + uVar6 * 8);
    }
    else {
      uVar6 = uVar5;
      if (uVar11 <= uVar5) {
        uVar6 = 0;
        if (uVar11 != 0) {
          uVar6 = uVar5 / uVar11;
        }
        uVar6 = uVar5 - uVar6 * uVar11;
      }
      plVar12 = *(long **)(*param_1 + uVar6 * 8);
    }
    if (plVar12 != (long *)0x0) {
      plVar12 = (long *)*plVar12;
      if (plVar12 == (long *)0x0) {
        return (long *)0x0;
      }
      if (1 < uVar8) {
        do {
          uVar8 = plVar12[1];
          if (uVar8 == uVar5) {
            plVar9 = (long *)plVar12[2];
            if (plVar9 == (long *)0x0) {
LAB_0055a1dc:
                    /* WARNING: Subroutine does not return */
              __assert_fail("a != 0L","external/com_github_google_re2/re2/dfa.cc",0x98,"operator()")
              ;
            }
            if (plVar9 == plVar4) {
              return plVar12;
            }
            if ((*(uint *)((long)plVar9 + 0xc) == uVar2) && (*(uint *)(plVar9 + 1) == uVar1)) {
              if ((int)uVar1 < 1) {
                return plVar12;
              }
              piVar10 = (int *)*plVar9;
              piVar14 = (int *)*plVar4;
              uVar8 = (ulong)uVar1;
              while (*piVar10 == *piVar14) {
                uVar8 = uVar8 - 1;
                piVar14 = piVar14 + 1;
                piVar10 = piVar10 + 1;
                if (uVar8 == 0) {
                  return plVar12;
                }
              }
            }
          }
          else {
            if (uVar11 <= uVar8) {
              uVar3 = 0;
              if (uVar11 != 0) {
                uVar3 = uVar8 / uVar11;
              }
              uVar8 = uVar8 - uVar3 * uVar11;
            }
            if (uVar8 != uVar6) {
              return (long *)0x0;
            }
          }
          plVar12 = (long *)*plVar12;
          if (plVar12 == (long *)0x0) {
            return (long *)0x0;
          }
        } while( true );
      }
      uVar8 = plVar12[1];
      if (uVar8 == uVar5) goto LAB_0055a0ac;
      while ((uVar8 & uVar11 - 1) == uVar6) {
        while( true ) {
          plVar12 = (long *)*plVar12;
          if (plVar12 == (long *)0x0) {
            return (long *)0x0;
          }
          uVar8 = plVar12[1];
          if (uVar8 != uVar5) break;
LAB_0055a0ac:
          plVar9 = (long *)plVar12[2];
          if (plVar9 == (long *)0x0) goto LAB_0055a1dc;
          if (plVar9 == plVar4) {
            return plVar12;
          }
          if ((*(uint *)((long)plVar9 + 0xc) == uVar2) && (*(uint *)(plVar9 + 1) == uVar1)) {
            if ((int)uVar1 < 1) {
              return plVar12;
            }
            piVar10 = (int *)*plVar9;
            piVar14 = (int *)*plVar4;
            uVar8 = (ulong)uVar1;
            while (*piVar10 == *piVar14) {
              uVar8 = uVar8 - 1;
              piVar14 = piVar14 + 1;
              piVar10 = piVar10 + 1;
              if (uVar8 == 0) {
                return plVar12;
              }
            }
          }
        }
      }
    }
  }
  return (long *)0x0;
}


