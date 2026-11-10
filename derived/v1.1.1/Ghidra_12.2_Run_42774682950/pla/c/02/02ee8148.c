/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ee8148; name: FUN_02ee8148
 */


void FUN_02ee8148(long *param_1,uint param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  int *piVar7;
  int *piVar8;
  undefined8 *puVar9;
  uint uVar10;
  ulong uVar11;
  
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
  puVar9 = (undefined8 *)*param_1;
  uVar2 = *(uint *)(param_1 + 1);
  uVar3 = *(undefined4 *)((long)param_1 + 0xc);
  *param_1 = 0;
  param_1[1] = 0;
  lVar5 = (*DAT_0442d148)(0,0,uVar11 << 3);
  if (lVar5 == 0) {
    if (*param_1 != 0) {
      *(undefined4 *)(param_1 + 1) = 0;
      (*DAT_0442d150)(0);
      *param_1 = 0;
      *(undefined4 *)((long)param_1 + 0xc) = 0;
    }
    *param_1 = (long)puVar9;
    *(uint *)(param_1 + 1) = uVar2;
    *(undefined4 *)((long)param_1 + 0xc) = uVar3;
  }
  else {
    uVar10 = (uint)uVar11;
    *param_1 = lVar5;
    *(uint *)((long)param_1 + 0xc) = uVar10;
    uVar6 = uVar10;
    while( true ) {
      uVar6 = uVar6 - 1;
      uVar4 = *(uint *)(param_1 + 1);
      if (uVar4 < (uint)uVar11) {
        puVar1 = (undefined8 *)(*param_1 + (ulong)uVar4 * 8);
        *(uint *)(param_1 + 1) = uVar4 + 1;
        if (puVar1 != (undefined8 *)0x0) {
          *puVar1 = 0;
        }
      }
      if (uVar6 == 0) break;
      uVar11 = (ulong)*(uint *)((long)param_1 + 0xc);
    }
    if (uVar2 != 0) {
      uVar11 = 0;
      piVar8 = (int *)*puVar9;
      while( true ) {
        if (piVar8 != (int *)0x0) {
          uVar6 = 0;
          if (uVar10 != 0) {
            uVar6 = (uint)(piVar8[2] + *piVar8) / uVar10;
          }
          piVar7 = *(int **)(piVar8 + 4);
          lVar5 = (ulong)((piVar8[2] + *piVar8) - uVar6 * uVar10) * 8;
          *(undefined8 *)(piVar8 + 4) = *(undefined8 *)(*param_1 + lVar5);
          *(int **)(*param_1 + lVar5) = piVar8;
          while (piVar7 != (int *)0x0) {
            uVar6 = 0;
            if (uVar10 != 0) {
              uVar6 = (uint)(piVar7[2] + *piVar7) / uVar10;
            }
            piVar8 = *(int **)(piVar7 + 4);
            lVar5 = (ulong)((piVar7[2] + *piVar7) - uVar6 * uVar10) * 8;
            *(undefined8 *)(piVar7 + 4) = *(undefined8 *)(*param_1 + lVar5);
            *(int **)(*param_1 + lVar5) = piVar7;
            piVar7 = piVar8;
          }
        }
        uVar11 = uVar11 + 1;
        if (uVar11 == uVar2) break;
        piVar8 = (int *)puVar9[uVar11];
      }
    }
    if (puVar9 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x02ee83f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*DAT_0442d150)(0,puVar9);
      return;
    }
  }
  return;
}


