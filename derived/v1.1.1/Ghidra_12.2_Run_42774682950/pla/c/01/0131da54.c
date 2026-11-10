/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0131da54; name: FUN_0131da54
 */


undefined1  [16] FUN_0131da54(int param_1,int param_2)

{
  int iVar1;
  ulong uVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  long *extraout_x11;
  long lVar11;
  undefined1 auVar10 [16];
  
  iVar1 = *(int *)(&DAT_03a7acdc + (long)param_2 * 4 + (long)param_1 * 0x10);
  if (iVar1 == 0) {
    lVar5 = 0;
    lVar11 = 0;
  }
  else {
    if (((*PTR_DAT_0437a780 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_0437a780), iVar3 != 0)) {
      FUN_00100250(PTR_LAB_0437a8a0,PTR_DAT_0437a788,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437a780);
    }
    lVar5 = *(long *)PTR_DAT_0437a788;
    *(long *)PTR_DAT_0437a790 = lVar5;
    lVar5 = *(long *)(*(long *)(lVar5 + 0x78) + 0x70);
    uVar6 = *(ulong *)(lVar5 + 0x1b0);
    if (uVar6 != 0) {
      uVar4 = *(ulong *)(&DAT_04205060 + (long)iVar1 * 0x18);
      uVar7 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
      uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
      uVar7 = (uVar7 + (uVar7 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar7 < 2) {
        uVar8 = uVar6 - 1 & uVar4;
      }
      else if (uVar4 < uVar6) {
        uVar8 = uVar4;
      }
      else {
        uVar8 = 0;
        if (uVar6 != 0) {
          uVar8 = uVar4 / uVar6;
        }
        uVar8 = uVar4 - uVar8 * uVar6;
      }
      plVar9 = *(long **)(*(long *)(lVar5 + 0x1a8) + uVar8 * 8);
      if ((plVar9 != (long *)0x0) && (plVar9 = (long *)*plVar9, plVar9 != (long *)0x0)) {
        if (uVar7 < 2) {
          do {
            if (plVar9[1] == uVar4) {
              if (plVar9[2] == uVar4) goto LAB_0131dc00;
            }
            else if ((plVar9[1] & uVar6 - 1) != uVar8) break;
            plVar9 = (long *)*plVar9;
          } while (plVar9 != (long *)0x0);
        }
        else {
          do {
            uVar7 = plVar9[1];
            if (uVar7 == uVar4) {
              if (plVar9[2] == uVar4) goto LAB_0131dc00;
            }
            else {
              if (uVar6 <= uVar7) {
                uVar2 = 0;
                if (uVar6 != 0) {
                  uVar2 = uVar7 / uVar6;
                }
                uVar7 = uVar7 - uVar2 * uVar6;
              }
              if (uVar7 != uVar8) break;
            }
            plVar9 = (long *)*plVar9;
          } while (plVar9 != (long *)0x0);
        }
      }
    }
    FUN_0131fcd0();
    plVar9 = extraout_x11;
LAB_0131dc00:
    lVar11 = plVar9[9];
    lVar5 = plVar9[8];
  }
  auVar10._8_8_ = lVar11;
  auVar10._0_8_ = lVar5;
  return auVar10;
}


