/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0031d4d0; name: FUN_0031d4d0
 */


void FUN_0031d4d0(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,ulong param_4,
                 undefined8 *param_5)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  bool bVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  ulong uVar13;
  undefined8 *puVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  
  if (param_4 != 0) {
    if (param_4 == 2) {
      uVar5 = FUN_0031cd5c(param_3,param_2[-1],*param_1);
      if ((uVar5 & 1) == 0) {
        *param_5 = *param_1;
        uVar7 = param_2[-1];
      }
      else {
        *param_5 = param_2[-1];
        uVar7 = *param_1;
      }
      param_5[1] = uVar7;
    }
    else if (param_4 == 1) {
      *param_5 = *param_1;
    }
    else if ((long)param_4 < 9) {
      if (param_1 != param_2) {
        puVar12 = param_1 + 1;
        uVar7 = *param_1;
        *param_5 = uVar7;
        if (puVar12 != param_2) {
          lVar15 = 0;
          puVar10 = param_5;
          do {
            puVar9 = puVar10 + 1;
            uVar5 = FUN_0031cd5c(param_3,*puVar12,uVar7);
            if ((uVar5 & 1) == 0) {
              *puVar9 = *puVar12;
            }
            else {
              puVar10[1] = *puVar10;
              if (puVar10 != param_5) {
                lVar16 = 0;
                do {
                  puVar11 = (undefined8 *)((long)puVar10 + lVar16);
                  uVar5 = FUN_0031cd5c(param_3,*puVar12,puVar11[-1]);
                  if ((uVar5 & 1) == 0) goto LAB_0031d5dc;
                  lVar16 = lVar16 + -8;
                  *puVar11 = puVar11[-1];
                } while (lVar15 != lVar16);
              }
              puVar11 = param_5;
LAB_0031d5dc:
              *puVar11 = *puVar12;
            }
            if (puVar12 + 1 == param_2) {
              return;
            }
            puVar12 = puVar12 + 1;
            uVar7 = *puVar9;
            lVar15 = lVar15 + -8;
            puVar10 = puVar9;
          } while( true );
        }
      }
    }
    else {
      uVar5 = param_4 >> 1;
      puVar12 = param_1 + uVar5;
      FUN_0031d0c0(param_1,puVar12,param_3,uVar5,param_5,uVar5);
      FUN_0031d0c0(puVar12,param_2,param_3,param_4 - uVar5,param_5 + uVar5,param_4 - uVar5);
      puVar10 = puVar12;
      puVar9 = param_5;
      puVar11 = param_1;
      if (uVar5 == 0) {
        puVar14 = puVar12;
LAB_0031d6b8:
        if (puVar14 != param_2) {
          uVar6 = (long)param_2 + (-8 - (long)puVar14);
          uVar5 = (uVar6 >> 3) + 1;
          if ((uVar5 < 8) ||
             ((lVar15 = (uVar6 & 0xfffffffffffffff8) + 8,
              param_5 < (undefined8 *)((long)puVar14 + lVar15) &&
              (puVar14 < (undefined8 *)((long)param_5 + lVar15))))) {
            puVar10 = param_5;
            puVar12 = puVar14;
          }
          else {
            uVar8 = uVar5 & 0x3ffffffffffffff8;
            puVar10 = param_5 + uVar8;
            puVar12 = puVar14 + uVar8;
            puVar9 = param_5 + 4;
            puVar11 = puVar14 + 4;
            uVar6 = uVar8;
            do {
              uVar7 = puVar11[-4];
              uVar18 = puVar11[-1];
              uVar17 = puVar11[-2];
              uVar6 = uVar6 - 8;
              uVar20 = puVar11[1];
              uVar19 = *puVar11;
              uVar22 = puVar11[3];
              uVar21 = puVar11[2];
              puVar9[-3] = puVar11[-3];
              puVar9[-4] = uVar7;
              puVar9[-1] = uVar18;
              puVar9[-2] = uVar17;
              puVar9[1] = uVar20;
              *puVar9 = uVar19;
              puVar9[3] = uVar22;
              puVar9[2] = uVar21;
              puVar9 = puVar9 + 8;
              puVar11 = puVar11 + 8;
            } while (uVar6 != 0);
            if (uVar5 == uVar8) {
              return;
            }
          }
          uVar5 = (long)param_2 + (-8 - (long)puVar12);
          uVar1 = ((uint)(uVar5 >> 3) & 0x1fffffff) + 1;
          if ((uVar1 & 3) != 0) {
            lVar15 = -((ulong)uVar1 & 3);
            puVar9 = puVar10;
            puVar11 = puVar12;
            do {
              puVar12 = puVar11 + 1;
              bVar4 = lVar15 != -1;
              lVar15 = lVar15 + 1;
              puVar10 = puVar9 + 1;
              *puVar9 = *puVar11;
              puVar9 = puVar10;
              puVar11 = puVar12;
            } while (bVar4);
          }
          if (0x17 < uVar5) {
            do {
              *puVar10 = *puVar12;
              puVar10[1] = puVar12[1];
              puVar10[2] = puVar12[2];
              puVar9 = puVar12 + 3;
              puVar12 = puVar12 + 4;
              puVar10[3] = *puVar9;
              puVar10 = puVar10 + 4;
            } while (puVar12 != param_2);
          }
        }
      }
      else {
        while (puVar10 != param_2) {
          uVar6 = FUN_0031cd5c(param_3,*puVar10,*puVar11);
          if ((uVar6 & 1) == 0) {
            *puVar9 = *puVar11;
            puVar11 = puVar11 + 1;
            puVar14 = puVar10;
          }
          else {
            puVar14 = puVar10 + 1;
            *puVar9 = *puVar10;
          }
          param_5 = puVar9 + 1;
          if (puVar11 == puVar12) goto LAB_0031d6b8;
          puVar10 = puVar14;
          puVar9 = puVar9 + 1;
        }
        if (puVar11 != puVar12) {
          uVar8 = (long)param_1 + (uVar5 * 8 - (long)puVar11) + -8;
          uVar6 = (uVar8 >> 3) + 1;
          if ((uVar6 < 8) ||
             ((uVar8 = uVar8 & 0xfffffffffffffff8,
              puVar9 < (undefined8 *)((long)puVar11 + uVar8 + 8) &&
              (puVar11 < (undefined8 *)((long)puVar9 + uVar8 + 8))))) {
            puVar10 = puVar11;
            puVar14 = puVar9;
          }
          else {
            uVar13 = uVar6 & 0x3ffffffffffffff8;
            puVar14 = (undefined8 *)((long)puVar9 + (uVar6 * 8 & 0xffffffffffffffc0));
            puVar10 = puVar11 + uVar13;
            lVar15 = 0;
            uVar8 = uVar13;
            do {
              puVar2 = (undefined8 *)((long)puVar11 + lVar15);
              puVar3 = (undefined8 *)((long)puVar9 + lVar15);
              uVar8 = uVar8 - 8;
              uVar7 = *puVar2;
              uVar18 = puVar2[3];
              uVar17 = puVar2[2];
              uVar20 = puVar2[5];
              uVar19 = puVar2[4];
              uVar22 = puVar2[7];
              uVar21 = puVar2[6];
              lVar15 = lVar15 + 0x40;
              puVar3[1] = puVar2[1];
              *puVar3 = uVar7;
              puVar3[3] = uVar18;
              puVar3[2] = uVar17;
              puVar3[5] = uVar20;
              puVar3[4] = uVar19;
              puVar3[7] = uVar22;
              puVar3[6] = uVar21;
            } while (uVar8 != 0);
            if (uVar6 == uVar13) {
              return;
            }
          }
          uVar5 = (long)param_1 + (uVar5 * 8 - (long)puVar10) + -8;
          uVar1 = ((uint)(uVar5 >> 3) & 0x1fffffff) + 1;
          if ((uVar1 & 3) != 0) {
            lVar15 = -((ulong)uVar1 & 3);
            puVar9 = puVar10;
            puVar11 = puVar14;
            do {
              puVar10 = puVar9 + 1;
              bVar4 = lVar15 != -1;
              lVar15 = lVar15 + 1;
              puVar14 = puVar11 + 1;
              *puVar11 = *puVar9;
              puVar9 = puVar10;
              puVar11 = puVar14;
            } while (bVar4);
          }
          if (0x17 < uVar5) {
            do {
              *puVar14 = *puVar10;
              puVar14[1] = puVar10[1];
              puVar14[2] = puVar10[2];
              puVar9 = puVar10 + 3;
              puVar10 = puVar10 + 4;
              puVar14[3] = *puVar9;
              puVar14 = puVar14 + 4;
            } while (puVar10 != puVar12);
          }
        }
      }
    }
  }
  return;
}


