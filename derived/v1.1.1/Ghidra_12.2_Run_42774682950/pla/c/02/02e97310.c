/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e97310; name: FUN_02e97310
 */


void FUN_02e97310(long param_1,uint param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  int iVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  ulong uVar11;
  long *plVar12;
  
  if (param_2 < 0x1d) {
    uVar11 = 0x1d;
  }
  else if (param_2 < 0x35) {
    uVar11 = 0x35;
  }
  else if (param_2 < 0x61) {
    uVar11 = 0x61;
  }
  else if (param_2 < 0xc1) {
    uVar11 = 0xc1;
  }
  else if (param_2 < 0x185) {
    uVar11 = 0x185;
  }
  else if (param_2 < 0x301) {
    uVar11 = 0x301;
  }
  else if (param_2 < 0x607) {
    uVar11 = 0x607;
  }
  else if (param_2 < 0xc07) {
    uVar11 = 0xc07;
  }
  else {
    uVar11 = 0x1807;
    if (0x1806 < param_2) {
      if (param_2 < 0x3001) {
        uVar11 = 0x3001;
      }
      else {
        uVar11 = 0x6011;
        if ((((0x6010 < param_2) && (uVar11 = 0xc005, 0xc004 < param_2)) &&
            (uVar11 = 0x1800d, 0x1800c < param_2)) &&
           ((uVar11 = 0x30005, 0x30004 < param_2 && (uVar11 = 0x60019, 0x60018 < param_2)))) {
          if (param_2 < 0xc0001) {
            uVar11 = 0xc0001;
          }
          else {
            uVar11 = 0x180005;
            if (((((0x180004 < param_2) && (uVar11 = 0x30000b, 0x30000a < param_2)) &&
                 ((uVar11 = 0x60000d, 0x60000c < param_2 &&
                  (((uVar11 = 0xc00005, 0xc00004 < param_2 &&
                    (uVar11 = 0x1800013, 0x1800012 < param_2)) &&
                   (uVar11 = 0x3000005, 0x3000004 < param_2)))))) &&
                ((uVar11 = 0x6000017, 0x6000016 < param_2 &&
                 (uVar11 = 0xc000013, 0xc000012 < param_2)))) &&
               ((uVar11 = 0x18000005, 0x18000004 < param_2 &&
                ((uVar11 = 0x30000059, 0x30000058 < param_2 &&
                 (uVar11 = 0x60000005, 0x60000004 < param_2)))))) {
              return;
            }
          }
        }
      }
    }
  }
  plVar12 = (long *)(param_1 + 8);
  plVar10 = (long *)*plVar12;
  uVar2 = *(uint *)(param_1 + 0x10);
  uVar3 = *(undefined4 *)(param_1 + 0x14);
  *plVar12 = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  lVar6 = (*DAT_0442d148)(0,0,uVar11 << 3);
  if (lVar6 == 0) {
    if (*plVar12 != 0) {
      *(undefined4 *)(param_1 + 0x10) = 0;
      (*DAT_0442d150)(0);
      *(undefined8 *)(param_1 + 8) = 0;
      *(undefined4 *)(param_1 + 0x14) = 0;
    }
    *(long **)(param_1 + 8) = plVar10;
    *(uint *)(param_1 + 0x10) = uVar2;
    *(undefined4 *)(param_1 + 0x14) = uVar3;
  }
  else {
    iVar7 = (int)uVar11;
    *(long *)(param_1 + 8) = lVar6;
    *(int *)(param_1 + 0x14) = iVar7;
    while( true ) {
      iVar7 = iVar7 + -1;
      uVar4 = *(uint *)(param_1 + 0x10);
      if (uVar4 < (uint)uVar11) {
        *(uint *)(param_1 + 0x10) = uVar4 + 1;
        puVar1 = (undefined8 *)(*(long *)(param_1 + 8) + (ulong)uVar4 * 8);
        if (puVar1 != (undefined8 *)0x0) {
          *puVar1 = 0;
        }
      }
      if (iVar7 == 0) break;
      uVar11 = (ulong)*(uint *)(param_1 + 0x14);
    }
    if (uVar2 != 0) {
      uVar11 = 0;
      plVar12 = (long *)*plVar10;
      while( true ) {
        if (plVar12 != (long *)0x0) {
          uVar4 = *(uint *)(param_1 + 0x10);
          uVar5 = 0;
          if (uVar4 != 0) {
            uVar5 = *(uint *)(plVar12 + 1) / uVar4;
          }
          plVar8 = (long *)*plVar12;
          lVar6 = (ulong)(*(uint *)(plVar12 + 1) - uVar5 * uVar4) * 8;
          *plVar12 = *(long *)(*(long *)(param_1 + 8) + lVar6);
          *(long **)(*(long *)(param_1 + 8) + lVar6) = plVar12;
          while (plVar8 != (long *)0x0) {
            uVar4 = *(uint *)(param_1 + 0x10);
            uVar5 = 0;
            if (uVar4 != 0) {
              uVar5 = *(uint *)(plVar8 + 1) / uVar4;
            }
            lVar9 = *plVar8;
            lVar6 = (ulong)(*(uint *)(plVar8 + 1) - uVar5 * uVar4) * 8;
            *plVar8 = *(undefined8 *)(*(long *)(param_1 + 8) + lVar6);
            *(long **)(*(long *)(param_1 + 8) + lVar6) = plVar8;
            plVar8 = (long *)lVar9;
          }
        }
        uVar11 = uVar11 + 1;
        if (uVar11 == uVar2) break;
        plVar12 = (long *)plVar10[uVar11];
      }
    }
    if (plVar10 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x02e975b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*DAT_0442d150)(0,plVar10);
      return;
    }
  }
  return;
}


