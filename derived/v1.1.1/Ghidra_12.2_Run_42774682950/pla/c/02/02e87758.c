/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e87758; name: FUN_02e87758
 */


undefined8 FUN_02e87758(long *param_1,uint param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  long lVar5;
  undefined8 uVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  uint uVar11;
  ulong uVar12;
  
  if (param_2 < 0x1d) {
    uVar12 = 0x1d;
  }
  else if (param_2 < 0x35) {
    uVar12 = 0x35;
  }
  else if (param_2 < 0x61) {
    uVar12 = 0x61;
  }
  else if (param_2 < 0xc1) {
    uVar12 = 0xc1;
  }
  else if (param_2 < 0x185) {
    uVar12 = 0x185;
  }
  else if (param_2 < 0x301) {
    uVar12 = 0x301;
  }
  else if (param_2 < 0x607) {
    uVar12 = 0x607;
  }
  else if (param_2 < 0xc07) {
    uVar12 = 0xc07;
  }
  else {
    uVar12 = 0x1807;
    if (0x1806 < param_2) {
      if (param_2 < 0x3001) {
        uVar12 = 0x3001;
      }
      else {
        uVar12 = 0x6011;
        if ((((0x6010 < param_2) && (uVar12 = 0xc005, 0xc004 < param_2)) &&
            (uVar12 = 0x1800d, 0x1800c < param_2)) &&
           ((uVar12 = 0x30005, 0x30004 < param_2 && (uVar12 = 0x60019, 0x60018 < param_2)))) {
          if (param_2 < 0xc0001) {
            uVar12 = 0xc0001;
          }
          else {
            uVar12 = 0x180005;
            if (((((0x180004 < param_2) && (uVar12 = 0x30000b, 0x30000a < param_2)) &&
                 ((uVar12 = 0x60000d, 0x60000c < param_2 &&
                  (((uVar12 = 0xc00005, 0xc00004 < param_2 &&
                    (uVar12 = 0x1800013, 0x1800012 < param_2)) &&
                   (uVar12 = 0x3000005, 0x3000004 < param_2)))))) &&
                ((uVar12 = 0x6000017, 0x6000016 < param_2 &&
                 (uVar12 = 0xc000013, 0xc000012 < param_2)))) &&
               ((uVar12 = 0x18000005, 0x18000004 < param_2 &&
                ((uVar12 = 0x30000059, 0x30000058 < param_2 &&
                 (uVar12 = 0x60000005, 0x60000004 < param_2)))))) {
              return 2;
            }
          }
        }
      }
    }
  }
  plVar10 = (long *)*param_1;
  uVar2 = *(uint *)(param_1 + 1);
  uVar3 = *(undefined4 *)((long)param_1 + 0xc);
  *param_1 = 0;
  param_1[1] = 0;
  lVar5 = (*DAT_0442d148)(0,0,uVar12 << 3);
  if (lVar5 == 0) {
    if (*param_1 != 0) {
      *(undefined4 *)(param_1 + 1) = 0;
      (*DAT_0442d150)(0);
      *param_1 = 0;
      *(undefined4 *)((long)param_1 + 0xc) = 0;
    }
    uVar6 = 2;
    *param_1 = (long)plVar10;
    *(uint *)(param_1 + 1) = uVar2;
    *(undefined4 *)((long)param_1 + 0xc) = uVar3;
  }
  else {
    uVar11 = (uint)uVar12;
    *param_1 = lVar5;
    *(uint *)((long)param_1 + 0xc) = uVar11;
    uVar7 = uVar11;
    while( true ) {
      uVar7 = uVar7 - 1;
      uVar4 = *(uint *)(param_1 + 1);
      if (uVar4 < (uint)uVar12) {
        puVar1 = (undefined8 *)(*param_1 + (ulong)uVar4 * 8);
        *(uint *)(param_1 + 1) = uVar4 + 1;
        if (puVar1 != (undefined8 *)0x0) {
          *puVar1 = 0;
        }
      }
      if (uVar7 == 0) break;
      uVar12 = (ulong)*(uint *)((long)param_1 + 0xc);
    }
    if (uVar2 != 0) {
      uVar12 = 0;
      lVar5 = *plVar10;
      while( true ) {
        if (lVar5 != 0) {
          uVar7 = 0;
          if (uVar11 != 0) {
            uVar7 = *(uint *)(lVar5 + 0x10) / uVar11;
          }
          lVar8 = *(long *)(lVar5 + 8);
          lVar9 = (ulong)(*(uint *)(lVar5 + 0x10) - uVar7 * uVar11) * 8;
          *(undefined8 *)(lVar5 + 8) = *(undefined8 *)(*param_1 + lVar9);
          *(long *)(*param_1 + lVar9) = lVar5;
          while (lVar8 != 0) {
            uVar7 = 0;
            if (uVar11 != 0) {
              uVar7 = *(uint *)(lVar8 + 0x10) / uVar11;
            }
            lVar9 = *(long *)(lVar8 + 8);
            lVar5 = (ulong)(*(uint *)(lVar8 + 0x10) - uVar7 * uVar11) * 8;
            *(undefined8 *)(lVar8 + 8) = *(undefined8 *)(*param_1 + lVar5);
            *(long *)(*param_1 + lVar5) = lVar8;
            lVar8 = lVar9;
          }
        }
        uVar12 = uVar12 + 1;
        if (uVar12 == uVar2) break;
        lVar5 = plVar10[uVar12];
      }
    }
    if (plVar10 != (long *)0x0) {
      (*DAT_0442d150)(0,plVar10);
    }
    uVar6 = 1;
  }
  return uVar6;
}


