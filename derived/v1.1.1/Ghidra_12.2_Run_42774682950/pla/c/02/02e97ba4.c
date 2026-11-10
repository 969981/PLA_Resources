/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e97ba4; name: FUN_02e97ba4
 */


undefined8 FUN_02e97ba4(long *param_1,uint param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  long lVar8;
  uint uVar9;
  undefined8 *puVar10;
  undefined8 *local_40;
  uint local_38;
  undefined4 local_34;
  
  if (param_2 < 0x1d) {
    uVar9 = 0x1d;
  }
  else if (param_2 < 0x35) {
    uVar9 = 0x35;
  }
  else if (param_2 < 0x61) {
    uVar9 = 0x61;
  }
  else if (param_2 < 0xc1) {
    uVar9 = 0xc1;
  }
  else if (param_2 < 0x185) {
    uVar9 = 0x185;
  }
  else if (param_2 < 0x301) {
    uVar9 = 0x301;
  }
  else if (param_2 < 0x607) {
    uVar9 = 0x607;
  }
  else if (param_2 < 0xc07) {
    uVar9 = 0xc07;
  }
  else {
    uVar9 = 0x1807;
    if (0x1806 < param_2) {
      if (param_2 < 0x3001) {
        uVar9 = 0x3001;
      }
      else {
        uVar9 = 0x6011;
        if ((((0x6010 < param_2) && (uVar9 = 0xc005, 0xc004 < param_2)) &&
            (uVar9 = 0x1800d, 0x1800c < param_2)) &&
           ((uVar9 = 0x30005, 0x30004 < param_2 && (uVar9 = 0x60019, 0x60018 < param_2)))) {
          if (param_2 < 0xc0001) {
            uVar9 = 0xc0001;
          }
          else {
            uVar9 = 0x180005;
            if (((((0x180004 < param_2) && (uVar9 = 0x30000b, 0x30000a < param_2)) &&
                 ((uVar9 = 0x60000d, 0x60000c < param_2 &&
                  (((uVar9 = 0xc00005, 0xc00004 < param_2 &&
                    (uVar9 = 0x1800013, 0x1800012 < param_2)) &&
                   (uVar9 = 0x3000005, 0x3000004 < param_2)))))) &&
                ((uVar9 = 0x6000017, 0x6000016 < param_2 && (uVar9 = 0xc000013, 0xc000012 < param_2)
                 ))) && ((uVar9 = 0x18000005, 0x18000004 < param_2 &&
                         ((uVar9 = 0x30000059, 0x30000058 < param_2 &&
                          (uVar9 = 0x60000005, 0x60000004 < param_2)))))) {
              return 2;
            }
          }
        }
      }
    }
  }
  puVar10 = (undefined8 *)*param_1;
  uVar2 = *(uint *)(param_1 + 1);
  local_34 = *(undefined4 *)((long)param_1 + 0xc);
  *param_1 = 0;
  param_1[1] = 0;
  local_40 = puVar10;
  local_38 = uVar2;
  uVar4 = FUN_02e97b60(param_1,uVar9);
  if ((uVar4 & 1) == 0) {
    FUN_02e97e9c(param_1,&local_40);
    return 2;
  }
  uVar5 = uVar9;
  do {
    uVar3 = *(uint *)(param_1 + 1);
    if (uVar3 < *(uint *)((long)param_1 + 0xc)) {
      *(uint *)(param_1 + 1) = uVar3 + 1;
      puVar1 = (undefined8 *)(*param_1 + (ulong)uVar3 * 8);
      if (puVar1 != (undefined8 *)0x0) {
        *puVar1 = 0;
      }
    }
    uVar5 = uVar5 - 1;
  } while (uVar5 != 0);
  if (uVar2 != 0) {
    uVar4 = 0;
    piVar7 = (int *)*puVar10;
    while( true ) {
      if (piVar7 != (int *)0x0) {
        uVar5 = 0;
        if (uVar9 != 0) {
          uVar5 = (uint)(piVar7[2] + *piVar7) / uVar9;
        }
        piVar6 = *(int **)(piVar7 + 4);
        lVar8 = (ulong)((piVar7[2] + *piVar7) - uVar5 * uVar9) * 8;
        *(undefined8 *)(piVar7 + 4) = *(undefined8 *)(*param_1 + lVar8);
        *(int **)(*param_1 + lVar8) = piVar7;
        while (piVar6 != (int *)0x0) {
          uVar5 = 0;
          if (uVar9 != 0) {
            uVar5 = (uint)(piVar6[2] + *piVar6) / uVar9;
          }
          piVar7 = *(int **)(piVar6 + 4);
          lVar8 = (ulong)((piVar6[2] + *piVar6) - uVar5 * uVar9) * 8;
          *(undefined8 *)(piVar6 + 4) = *(undefined8 *)(*param_1 + lVar8);
          *(int **)(*param_1 + lVar8) = piVar6;
          piVar6 = piVar7;
        }
      }
      uVar4 = uVar4 + 1;
      if (uVar4 == uVar2) break;
      piVar7 = (int *)puVar10[uVar4];
    }
  }
  if (puVar10 == (undefined8 *)0x0) {
    return 1;
  }
  local_38 = 0;
  FUN_02f59e60(0,puVar10);
  return 1;
}


