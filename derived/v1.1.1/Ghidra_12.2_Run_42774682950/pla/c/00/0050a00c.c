/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0050a00c; name: FUN_0050a00c
 */


long * FUN_0050a00c(long *param_1,long *param_2)

{
  uint uVar1;
  ulong uVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined2 uVar10;
  undefined8 uVar11;
  long local_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  long local_50;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  
  lVar4 = *param_2;
  if (lVar4 == 0) {
    uVar9 = (ulong)*(byte *)(param_2 + 1);
    lVar4 = (long)param_2 + 9;
LAB_0050a078:
    uVar7 = FUN_003da780(lVar4,uVar9,*(undefined4 *)PTR_DAT_043740a8);
    uVar9 = param_1[1];
  }
  else {
    if (*(int *)(lVar4 + 8) == 1) {
      uVar1 = *(uint *)(lVar4 + 0x68);
      uVar9 = param_1[1];
    }
    else {
      if (*(int *)(lVar4 + 8) != 0) {
        uVar9 = param_2[1];
        lVar4 = param_2[2];
        goto LAB_0050a078;
      }
      uVar1 = *(uint *)(PTR_DAT_043740a0 + (ulong)*(uint *)(lVar4 + 0x28) * 4);
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
    uVar5 = CONCAT62((int6)((ulong)uVar11 >> 0x10),uVar10) & 0xffffffff;
    uVar7 = uVar7 & 0xffffffff;
    if (uVar5 < 2) {
      uVar8 = (int)uVar9 - 1 & uVar7;
      plVar6 = *(long **)(*param_1 + uVar8 * 8);
    }
    else {
      uVar8 = uVar7;
      if (uVar9 <= uVar7) {
        uVar8 = 0;
        if (uVar9 != 0) {
          uVar8 = uVar7 / uVar9;
        }
        uVar8 = uVar7 - uVar8 * uVar9;
      }
      plVar6 = *(long **)(*param_1 + uVar8 * 8);
    }
    if (plVar6 != (long *)0x0) {
      plVar6 = (long *)*plVar6;
      if (plVar6 == (long *)0x0) {
        return (long *)0x0;
      }
      if (uVar5 < 2) {
        uVar5 = plVar6[1];
        if (uVar5 != uVar7) goto LAB_0050a120;
        do {
          lStack_48 = plVar6[3];
          local_50 = plVar6[2];
          lStack_38 = plVar6[5];
          lStack_40 = plVar6[4];
          lStack_68 = param_2[1];
          local_70 = *param_2;
          lStack_58 = param_2[3];
          lStack_60 = param_2[2];
          iVar3 = FUN_002f3a50(&local_50,&local_70);
          if (iVar3 != 0) {
            return plVar6;
          }
          while( true ) {
            plVar6 = (long *)*plVar6;
            if (plVar6 == (long *)0x0) {
              return (long *)0x0;
            }
            uVar5 = plVar6[1];
            if (uVar5 == uVar7) break;
LAB_0050a120:
            if ((uVar5 & uVar9 - 1) != uVar8) {
              return (long *)0x0;
            }
          }
        } while( true );
      }
      do {
        uVar5 = plVar6[1];
        if (uVar5 == uVar7) {
          lStack_48 = plVar6[3];
          local_50 = plVar6[2];
          lStack_38 = plVar6[5];
          lStack_40 = plVar6[4];
          lStack_68 = param_2[1];
          local_70 = *param_2;
          lStack_58 = param_2[3];
          lStack_60 = param_2[2];
          iVar3 = FUN_002f3a50(&local_50,&local_70);
          if (iVar3 != 0) {
            return plVar6;
          }
        }
        else {
          if (uVar9 <= uVar5) {
            uVar2 = 0;
            if (uVar9 != 0) {
              uVar2 = uVar5 / uVar9;
            }
            uVar5 = uVar5 - uVar2 * uVar9;
          }
          if (uVar5 != uVar8) {
            return (long *)0x0;
          }
        }
        plVar6 = (long *)*plVar6;
        if (plVar6 == (long *)0x0) {
          return (long *)0x0;
        }
      } while( true );
    }
  }
  return (long *)0x0;
}


