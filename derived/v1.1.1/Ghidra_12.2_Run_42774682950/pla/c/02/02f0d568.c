/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f0d568; name: FUN_02f0d568
 */


void FUN_02f0d568(long *param_1,uint param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  ulong uVar5;
  uint uVar6;
  uint *puVar7;
  long lVar8;
  uint *puVar9;
  uint uVar10;
  undefined8 *puVar11;
  
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
  puVar11 = (undefined8 *)*param_1;
  uVar2 = *(uint *)(param_1 + 1);
  uVar4 = *(undefined4 *)((long)param_1 + 0xc);
  *param_1 = 0;
  param_1[1] = 0;
  uVar5 = FUN_02f0d25c(param_1,uVar10);
  if ((uVar5 & 1) == 0) {
    if (*param_1 != 0) {
      *(undefined4 *)(param_1 + 1) = 0;
      (*DAT_0442d150)(0);
      *param_1 = 0;
      *(undefined4 *)((long)param_1 + 0xc) = 0;
    }
    *param_1 = (long)puVar11;
    *(uint *)(param_1 + 1) = uVar2;
    *(undefined4 *)((long)param_1 + 0xc) = uVar4;
  }
  else {
    uVar6 = uVar10;
    do {
      uVar3 = *(uint *)(param_1 + 1);
      if (uVar3 < *(uint *)((long)param_1 + 0xc)) {
        *(uint *)(param_1 + 1) = uVar3 + 1;
        puVar1 = (undefined8 *)(*param_1 + (ulong)uVar3 * 8);
        if (puVar1 != (undefined8 *)0x0) {
          *puVar1 = 0;
        }
      }
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
    if (uVar2 != 0) {
      uVar5 = 0;
      puVar7 = (uint *)*puVar11;
      while( true ) {
        while (puVar7 != (uint *)0x0) {
          uVar6 = 0;
          if (uVar10 != 0) {
            uVar6 = *puVar7 / uVar10;
          }
          puVar9 = *(uint **)(puVar7 + 2);
          lVar8 = (ulong)(*puVar7 - uVar6 * uVar10) * 8;
          *(undefined8 *)(puVar7 + 2) = *(undefined8 *)(*param_1 + lVar8);
          *(uint **)(*param_1 + lVar8) = puVar7;
          puVar7 = puVar9;
        }
        uVar5 = uVar5 + 1;
        if (uVar5 == uVar2) break;
        puVar7 = (uint *)puVar11[uVar5];
      }
    }
    if (puVar11 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x02f0d6ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*DAT_0442d150)(0,puVar11);
      return;
    }
  }
  return;
}


