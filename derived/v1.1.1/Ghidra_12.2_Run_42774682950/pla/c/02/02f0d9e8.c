/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f0d9e8; name: FUN_02f0d9e8
 */


undefined8 FUN_02f0d9e8(long *param_1,uint param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  uint uVar7;
  uint *puVar8;
  long lVar9;
  uint *puVar10;
  uint uVar11;
  undefined8 *puVar12;
  
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
              return 2;
            }
          }
        }
      }
    }
  }
  puVar12 = (undefined8 *)*param_1;
  uVar2 = *(uint *)(param_1 + 1);
  uVar4 = *(undefined4 *)((long)param_1 + 0xc);
  *param_1 = 0;
  param_1[1] = 0;
  uVar5 = FUN_02f0d2fc(param_1,uVar11);
  if ((uVar5 & 1) == 0) {
    if (*param_1 != 0) {
      *(undefined4 *)(param_1 + 1) = 0;
      (*DAT_0442d150)(0);
      *param_1 = 0;
      *(undefined4 *)((long)param_1 + 0xc) = 0;
    }
    uVar6 = 2;
    *param_1 = (long)puVar12;
    *(uint *)(param_1 + 1) = uVar2;
    *(undefined4 *)((long)param_1 + 0xc) = uVar4;
  }
  else {
    uVar7 = uVar11;
    do {
      uVar3 = *(uint *)(param_1 + 1);
      if (uVar3 < *(uint *)((long)param_1 + 0xc)) {
        *(uint *)(param_1 + 1) = uVar3 + 1;
        puVar1 = (undefined8 *)(*param_1 + (ulong)uVar3 * 8);
        if (puVar1 != (undefined8 *)0x0) {
          *puVar1 = 0;
        }
      }
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
    if (uVar2 != 0) {
      uVar5 = 0;
      puVar8 = (uint *)*puVar12;
      while( true ) {
        while (puVar8 != (uint *)0x0) {
          uVar7 = 0;
          if (uVar11 != 0) {
            uVar7 = *puVar8 / uVar11;
          }
          puVar10 = *(uint **)(puVar8 + 2);
          lVar9 = (ulong)(*puVar8 - uVar7 * uVar11) * 8;
          *(undefined8 *)(puVar8 + 2) = *(undefined8 *)(*param_1 + lVar9);
          *(uint **)(*param_1 + lVar9) = puVar8;
          puVar8 = puVar10;
        }
        uVar5 = uVar5 + 1;
        if (uVar5 == uVar2) break;
        puVar8 = (uint *)puVar12[uVar5];
      }
    }
    if (puVar12 == (undefined8 *)0x0) {
      uVar6 = 1;
    }
    else {
      (*DAT_0442d150)(0,puVar12);
      uVar6 = 1;
    }
  }
  return uVar6;
}


