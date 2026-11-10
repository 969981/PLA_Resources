/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e97020; name: FUN_02e97020
 */


void FUN_02e97020(long param_1,uint param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  int iVar7;
  long lVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long *plVar11;
  
  if (param_2 < 0x1d) {
    uVar10 = 0x1d;
  }
  else if (param_2 < 0x35) {
    uVar10 = 0x35;
  }
  else if (param_2 < 0x61) {
    uVar10 = 0x61;
  }
  else if (param_2 < 0xc1) {
    uVar10 = 0xc1;
  }
  else if (param_2 < 0x185) {
    uVar10 = 0x185;
  }
  else if (param_2 < 0x301) {
    uVar10 = 0x301;
  }
  else if (param_2 < 0x607) {
    uVar10 = 0x607;
  }
  else if (param_2 < 0xc07) {
    uVar10 = 0xc07;
  }
  else {
    uVar10 = 0x1807;
    if (0x1806 < param_2) {
      if (param_2 < 0x3001) {
        uVar10 = 0x3001;
      }
      else {
        uVar10 = 0x6011;
        if ((((0x6010 < param_2) && (uVar10 = 0xc005, 0xc004 < param_2)) &&
            (uVar10 = 0x1800d, 0x1800c < param_2)) &&
           ((uVar10 = 0x30005, 0x30004 < param_2 && (uVar10 = 0x60019, 0x60018 < param_2)))) {
          if (param_2 < 0xc0001) {
            uVar10 = 0xc0001;
          }
          else {
            uVar10 = 0x180005;
            if (((((0x180004 < param_2) && (uVar10 = 0x30000b, 0x30000a < param_2)) &&
                 ((uVar10 = 0x60000d, 0x60000c < param_2 &&
                  (((uVar10 = 0xc00005, 0xc00004 < param_2 &&
                    (uVar10 = 0x1800013, 0x1800012 < param_2)) &&
                   (uVar10 = 0x3000005, 0x3000004 < param_2)))))) &&
                ((uVar10 = 0x6000017, 0x6000016 < param_2 &&
                 (uVar10 = 0xc000013, 0xc000012 < param_2)))) &&
               ((uVar10 = 0x18000005, 0x18000004 < param_2 &&
                ((uVar10 = 0x30000059, 0x30000058 < param_2 &&
                 (uVar10 = 0x60000005, 0x60000004 < param_2)))))) {
              return;
            }
          }
        }
      }
    }
  }
  plVar11 = (long *)(param_1 + 8);
  puVar9 = (undefined8 *)*plVar11;
  uVar2 = *(uint *)(param_1 + 0x10);
  uVar3 = *(undefined4 *)(param_1 + 0x14);
  *plVar11 = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  lVar6 = (*DAT_0442d148)(0,0,uVar10 << 3);
  if (lVar6 == 0) {
    if (*plVar11 != 0) {
      *(undefined4 *)(param_1 + 0x10) = 0;
      (*DAT_0442d150)(0);
      *(undefined8 *)(param_1 + 8) = 0;
      *(undefined4 *)(param_1 + 0x14) = 0;
    }
    *(undefined8 **)(param_1 + 8) = puVar9;
    *(uint *)(param_1 + 0x10) = uVar2;
    *(undefined4 *)(param_1 + 0x14) = uVar3;
  }
  else {
    iVar7 = (int)uVar10;
    *(long *)(param_1 + 8) = lVar6;
    *(int *)(param_1 + 0x14) = iVar7;
    while( true ) {
      iVar7 = iVar7 + -1;
      uVar4 = *(uint *)(param_1 + 0x10);
      if (uVar4 < (uint)uVar10) {
        *(uint *)(param_1 + 0x10) = uVar4 + 1;
        puVar1 = (undefined8 *)(*(long *)(param_1 + 8) + (ulong)uVar4 * 8);
        if (puVar1 != (undefined8 *)0x0) {
          *puVar1 = 0;
        }
      }
      if (iVar7 == 0) break;
      uVar10 = (ulong)*(uint *)(param_1 + 0x14);
    }
    if (uVar2 != 0) {
      uVar10 = 0;
      plVar11 = (long *)*puVar9;
      while( true ) {
        while (plVar11 != (long *)0x0) {
          uVar4 = *(uint *)(param_1 + 0x10);
          uVar5 = 0;
          if (uVar4 != 0) {
            uVar5 = *(uint *)(plVar11 + 1) / uVar4;
          }
          lVar8 = *plVar11;
          lVar6 = (ulong)(*(uint *)(plVar11 + 1) - uVar5 * uVar4) * 8;
          *plVar11 = *(undefined8 *)(*(long *)(param_1 + 8) + lVar6);
          *(long **)(*(long *)(param_1 + 8) + lVar6) = plVar11;
          plVar11 = (long *)lVar8;
        }
        uVar10 = uVar10 + 1;
        if (uVar10 == uVar2) break;
        plVar11 = (long *)puVar9[uVar10];
      }
    }
    if (puVar9 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x02e97130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*DAT_0442d150)(0,puVar9);
      return;
    }
  }
  return;
}


