/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02eea980; name: FUN_02eea980
 */


undefined8 FUN_02eea980(long param_1,uint param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  int iVar11;
  long *plVar12;
  long *plVar13;
  
  if (param_2 < 0x1d) {
    iVar11 = 0x1d;
  }
  else if (param_2 < 0x35) {
    iVar11 = 0x35;
  }
  else if (param_2 < 0x61) {
    iVar11 = 0x61;
  }
  else if (param_2 < 0xc1) {
    iVar11 = 0xc1;
  }
  else if (param_2 < 0x185) {
    iVar11 = 0x185;
  }
  else if (param_2 < 0x301) {
    iVar11 = 0x301;
  }
  else if (param_2 < 0x607) {
    iVar11 = 0x607;
  }
  else if (param_2 < 0xc07) {
    iVar11 = 0xc07;
  }
  else {
    iVar11 = 0x1807;
    if (0x1806 < param_2) {
      if (param_2 < 0x3001) {
        iVar11 = 0x3001;
      }
      else {
        iVar11 = 0x6011;
        if ((((0x6010 < param_2) && (iVar11 = 0xc005, 0xc004 < param_2)) &&
            (iVar11 = 0x1800d, 0x1800c < param_2)) &&
           ((iVar11 = 0x30005, 0x30004 < param_2 && (iVar11 = 0x60019, 0x60018 < param_2)))) {
          if (param_2 < 0xc0001) {
            iVar11 = 0xc0001;
          }
          else {
            iVar11 = 0x180005;
            if (((((0x180004 < param_2) && (iVar11 = 0x30000b, 0x30000a < param_2)) &&
                 ((iVar11 = 0x60000d, 0x60000c < param_2 &&
                  (((iVar11 = 0xc00005, 0xc00004 < param_2 &&
                    (iVar11 = 0x1800013, 0x1800012 < param_2)) &&
                   (iVar11 = 0x3000005, 0x3000004 < param_2)))))) &&
                ((iVar11 = 0x6000017, 0x6000016 < param_2 &&
                 (iVar11 = 0xc000013, 0xc000012 < param_2)))) &&
               ((iVar11 = 0x18000005, 0x18000004 < param_2 &&
                ((iVar11 = 0x30000059, 0x30000058 < param_2 &&
                 (iVar11 = 0x60000005, 0x60000004 < param_2)))))) {
              return 2;
            }
          }
        }
      }
    }
  }
  plVar13 = (long *)(param_1 + 8);
  plVar12 = (long *)*plVar13;
  uVar2 = *(uint *)(param_1 + 0x10);
  uVar4 = *(undefined4 *)(param_1 + 0x14);
  *plVar13 = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  uVar6 = FUN_02eeac88(plVar13,iVar11);
  if ((uVar6 & 1) == 0) {
    if (*plVar13 != 0) {
      *(undefined4 *)(param_1 + 0x10) = 0;
      (*DAT_0442d150)(0);
      *(undefined8 *)(param_1 + 8) = 0;
      *(undefined4 *)(param_1 + 0x14) = 0;
    }
    uVar7 = 2;
    *(long **)(param_1 + 8) = plVar12;
    *(uint *)(param_1 + 0x10) = uVar2;
    *(undefined4 *)(param_1 + 0x14) = uVar4;
  }
  else {
    do {
      uVar3 = *(uint *)(param_1 + 0x10);
      if (uVar3 < *(uint *)(param_1 + 0x14)) {
        *(uint *)(param_1 + 0x10) = uVar3 + 1;
        puVar1 = (undefined8 *)(*(long *)(param_1 + 8) + (ulong)uVar3 * 8);
        if (puVar1 != (undefined8 *)0x0) {
          *puVar1 = 0;
        }
      }
      iVar11 = iVar11 + -1;
    } while (iVar11 != 0);
    if (uVar2 != 0) {
      uVar6 = 0;
      plVar13 = (long *)*plVar12;
      while( true ) {
        if (plVar13 != (long *)0x0) {
          uVar3 = *(uint *)(param_1 + 0x10);
          uVar5 = 0;
          if (uVar3 != 0) {
            uVar5 = *(uint *)(plVar13 + 1) / uVar3;
          }
          plVar8 = (long *)*plVar13;
          lVar9 = (ulong)(*(uint *)(plVar13 + 1) - uVar5 * uVar3) * 8;
          *plVar13 = *(long *)(*(long *)(param_1 + 8) + lVar9);
          *(long **)(*(long *)(param_1 + 8) + lVar9) = plVar13;
          while (plVar8 != (long *)0x0) {
            uVar3 = *(uint *)(param_1 + 0x10);
            uVar5 = 0;
            if (uVar3 != 0) {
              uVar5 = *(uint *)(plVar8 + 1) / uVar3;
            }
            lVar10 = *plVar8;
            lVar9 = (ulong)(*(uint *)(plVar8 + 1) - uVar5 * uVar3) * 8;
            *plVar8 = *(undefined8 *)(*(long *)(param_1 + 8) + lVar9);
            *(long **)(*(long *)(param_1 + 8) + lVar9) = plVar8;
            plVar8 = (long *)lVar10;
          }
        }
        uVar6 = uVar6 + 1;
        if (uVar6 == uVar2) break;
        plVar13 = (long *)plVar12[uVar6];
      }
    }
    if (plVar12 != (long *)0x0) {
      (*DAT_0442d150)(0,plVar12);
    }
    uVar7 = 1;
  }
  return uVar7;
}


