/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f11c34; name: FUN_02f11c34
 */


void FUN_02f11c34(uint *param_1,long param_2,long *param_3,long *param_4,undefined8 param_5,
                 undefined8 param_6)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long *plVar4;
  bool bVar5;
  undefined4 *puVar6;
  ulong uVar7;
  long lVar8;
  uint uVar9;
  uint *puVar10;
  uint uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  
  uVar11 = *param_1;
  if (uVar11 != 2) {
    uVar9 = 2;
    uVar15 = 1;
    uVar12 = 0;
    do {
      uVar1 = uVar12 + 1;
      if (uVar1 < uVar11 - 1) {
        uVar13 = (ulong)uVar9;
        uVar16 = uVar15;
        do {
          uVar2 = uVar16 + 1;
          if (uVar2 < uVar11) {
            uVar14 = uVar13;
            do {
              uVar7 = (ulong)(uVar11 - 1);
              uVar3 = param_6;
              plVar4 = param_4;
              if (uVar14 != uVar7 && (uVar12 != uVar7 && uVar16 != uVar7)) {
                uVar3 = param_5;
                plVar4 = param_3;
              }
              uVar7 = FUN_02f11dfc(param_1,param_2,uVar12 & 0xffffffff,uVar16 & 0xffffffff,
                                   uVar14 & 0xffffffff);
              if ((uVar7 & 1) == 0) {
                if ((plVar4 != (long *)0x0) && (*(uint *)(plVar4 + 1) != 0)) {
                  lVar8 = (ulong)*(uint *)(plVar4 + 1) * 0x18;
                  puVar10 = (uint *)(*plVar4 + 8);
                  do {
                    lVar8 = lVar8 + -0x18;
                    if ((uVar12 == puVar10[-2]) && (uVar16 == puVar10[-1])) {
                      bVar5 = uVar14 == *puVar10;
                    }
                    else {
                      bVar5 = false;
                    }
                  } while ((lVar8 != 0) && (puVar10 = puVar10 + 6, !bVar5));
                  if (bVar5) goto LAB_02f11d18;
                }
                puVar6 = (undefined4 *)FUN_02f11ef0(uVar3);
                *puVar6 = (int)uVar12;
                puVar6[1] = (int)uVar16;
                puVar6[2] = (int)uVar14;
                FUN_02f11f64(puVar6,param_2 + uVar12 * 8,param_2 + uVar16 * 8,param_2 + uVar14 * 8);
                uVar11 = *param_1;
              }
LAB_02f11d18:
              uVar14 = uVar14 + 1;
            } while ((uint)uVar14 < uVar11);
          }
          uVar13 = uVar13 + 1;
          uVar16 = uVar2;
        } while (uVar2 < uVar11 - 1);
      }
      uVar9 = uVar9 + 1;
      uVar15 = uVar15 + 1;
      uVar12 = uVar1;
    } while (uVar1 < uVar11 - 2);
  }
  return;
}


