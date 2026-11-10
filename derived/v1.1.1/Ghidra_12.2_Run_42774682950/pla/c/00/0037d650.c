/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0037d650; name: FUN_0037d650
 */


void FUN_0037d650(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,ulong param_4,
                 undefined8 *param_5,long param_6)

{
  uint uVar1;
  undefined8 *puVar2;
  bool bVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  
  if (1 < param_4) {
    if (param_4 == 2) {
      uVar4 = FUN_0037da60(param_3,param_2[-1],*param_1);
      if ((uVar4 & 1) != 0) {
        uVar5 = *param_1;
        *param_1 = param_2[-1];
        param_2[-1] = uVar5;
      }
    }
    else if ((long)param_4 < 0x81) {
      if ((param_1 != param_2) && (puVar8 = param_1 + 1, puVar8 != param_2)) {
        lVar13 = 0;
        uVar5 = *puVar8;
        if (puVar8 != param_1) goto LAB_0037d6f8;
LAB_0037d6d4:
        do {
          puVar7 = param_1;
          while( true ) {
            puVar8 = puVar8 + 1;
            lVar13 = lVar13 + 8;
            *puVar7 = uVar5;
            if (puVar8 == param_2) {
              return;
            }
            uVar5 = *puVar8;
            if (puVar8 == param_1) break;
LAB_0037d6f8:
            lVar14 = lVar13;
            while (uVar4 = FUN_0037da60(param_3,uVar5,*(undefined8 *)((long)param_1 + lVar14)),
                  (uVar4 & 1) != 0) {
              bVar3 = lVar14 == 0;
              ((undefined8 *)((long)param_1 + lVar14))[1] = *(undefined8 *)((long)param_1 + lVar14);
              lVar14 = lVar14 + -8;
              if (bVar3) goto LAB_0037d6d4;
            }
            puVar7 = (undefined8 *)((long)param_1 + lVar14 + 8);
          }
        } while( true );
      }
    }
    else {
      uVar4 = param_4 >> 1;
      puVar8 = param_1 + uVar4;
      if (param_6 < (long)param_4) {
        FUN_0037d650();
        FUN_0037d650(puVar8,param_2,param_3,param_4 - uVar4,param_5,param_6);
        FUN_0037e160(param_1,puVar8,param_2,param_3,uVar4,param_4 - uVar4,param_5,param_6);
        return;
      }
      FUN_0037dd80(param_1,puVar8,param_3,uVar4);
      puVar7 = param_5 + uVar4;
      FUN_0037dd80(puVar8,param_2,param_3,param_4 - uVar4,puVar7);
      puVar8 = param_5 + param_4;
      param_1 = param_1 + 6;
      puVar10 = puVar7;
      while( true ) {
        if (puVar10 == puVar8) {
          if (param_5 == puVar7) {
            return;
          }
          uVar11 = (long)puVar7 + (-8 - (long)param_5);
          uVar4 = (uVar11 >> 3) + 1;
          puVar8 = param_1 + -6;
          if ((uVar4 < 8) ||
             ((uVar11 = uVar11 & 0xfffffffffffffff8,
              puVar8 < (undefined8 *)((long)param_5 + uVar11 + 8) &&
              (param_5 < (undefined8 *)((long)param_1 + (uVar11 - 0x28)))))) {
            puVar10 = param_5;
          }
          else {
            uVar12 = uVar4 & 0x3ffffffffffffff8;
            puVar10 = param_5 + uVar12;
            lVar13 = 0;
            puVar8 = (undefined8 *)((long)param_1 + ((uVar4 * 8 & 0xffffffffffffffc0) - 0x30));
            uVar11 = uVar12;
            do {
              puVar6 = (undefined8 *)((long)param_5 + lVar13 + 0x30);
              uVar11 = uVar11 - 8;
              uVar5 = puVar6[-6];
              uVar16 = puVar6[-3];
              uVar15 = puVar6[-4];
              uVar18 = puVar6[-1];
              uVar17 = puVar6[-2];
              uVar20 = puVar6[1];
              uVar19 = *puVar6;
              puVar9 = (undefined8 *)((long)param_1 + lVar13);
              lVar13 = lVar13 + 0x40;
              puVar9[-5] = puVar6[-5];
              puVar9[-6] = uVar5;
              puVar9[-3] = uVar16;
              puVar9[-4] = uVar15;
              puVar9[-1] = uVar18;
              puVar9[-2] = uVar17;
              puVar9[1] = uVar20;
              *puVar9 = uVar19;
            } while (uVar11 != 0);
            if (uVar4 == uVar12) {
              return;
            }
          }
          uVar4 = (long)puVar7 + (-8 - (long)puVar10);
          uVar1 = ((uint)(uVar4 >> 3) & 0x1fffffff) + 1;
          if ((uVar1 & 3) != 0) {
            lVar13 = -((ulong)uVar1 & 3);
            puVar6 = puVar8;
            puVar9 = puVar10;
            do {
              puVar10 = puVar9 + 1;
              bVar3 = lVar13 != -1;
              lVar13 = lVar13 + 1;
              puVar8 = puVar6 + 1;
              *puVar6 = *puVar9;
              puVar6 = puVar8;
              puVar9 = puVar10;
            } while (bVar3);
          }
          if (uVar4 < 0x18) {
            return;
          }
          do {
            *puVar8 = *puVar10;
            puVar8[1] = puVar10[1];
            puVar8[2] = puVar10[2];
            puVar6 = puVar10 + 3;
            puVar10 = puVar10 + 4;
            puVar8[3] = *puVar6;
            puVar8 = puVar8 + 4;
          } while (puVar10 != puVar7);
          return;
        }
        uVar4 = FUN_0037da60(param_3,*puVar10,*param_5);
        if ((uVar4 & 1) == 0) {
          param_1[-6] = *param_5;
          param_5 = param_5 + 1;
          puVar6 = puVar10;
        }
        else {
          puVar6 = puVar10 + 1;
          param_1[-6] = *puVar10;
        }
        if (param_5 == puVar7) break;
        param_1 = param_1 + 1;
        puVar10 = puVar6;
      }
      if (puVar6 == puVar8) {
        return;
      }
      uVar11 = (long)puVar8 + (-8 - (long)puVar6);
      uVar4 = (uVar11 >> 3) + 1;
      puVar7 = param_1 + -5;
      if ((uVar4 < 8) ||
         ((uVar11 = uVar11 & 0xfffffffffffffff8, puVar7 < (undefined8 *)((long)puVar6 + uVar11 + 8)
          && (puVar6 < (undefined8 *)((long)param_1 + (uVar11 - 0x20)))))) {
        puVar10 = puVar6;
      }
      else {
        uVar12 = uVar4 & 0x3ffffffffffffff8;
        puVar10 = puVar6 + uVar12;
        lVar13 = 0;
        puVar7 = (undefined8 *)((long)param_1 + ((uVar4 * 8 & 0xffffffffffffffc0) - 0x28));
        uVar11 = uVar12;
        do {
          puVar9 = (undefined8 *)((long)puVar6 + lVar13 + 0x30);
          uVar11 = uVar11 - 8;
          uVar5 = puVar9[-6];
          uVar16 = puVar9[-3];
          uVar15 = puVar9[-4];
          uVar18 = puVar9[-1];
          uVar17 = puVar9[-2];
          uVar20 = puVar9[1];
          uVar19 = *puVar9;
          puVar2 = (undefined8 *)((long)param_1 + lVar13 + 8);
          lVar13 = lVar13 + 0x40;
          puVar2[-5] = puVar9[-5];
          puVar2[-6] = uVar5;
          puVar2[-3] = uVar16;
          puVar2[-4] = uVar15;
          puVar2[-1] = uVar18;
          puVar2[-2] = uVar17;
          puVar2[1] = uVar20;
          *puVar2 = uVar19;
        } while (uVar11 != 0);
        if (uVar4 == uVar12) {
          return;
        }
      }
      uVar4 = (long)puVar8 + (-8 - (long)puVar10);
      uVar1 = ((uint)(uVar4 >> 3) & 0x1fffffff) + 1;
      if ((uVar1 & 3) != 0) {
        lVar13 = -((ulong)uVar1 & 3);
        puVar6 = puVar7;
        puVar9 = puVar10;
        do {
          puVar10 = puVar9 + 1;
          bVar3 = lVar13 != -1;
          lVar13 = lVar13 + 1;
          puVar7 = puVar6 + 1;
          *puVar6 = *puVar9;
          puVar6 = puVar7;
          puVar9 = puVar10;
        } while (bVar3);
      }
      if (0x17 < uVar4) {
        do {
          *puVar7 = *puVar10;
          puVar7[1] = puVar10[1];
          puVar7[2] = puVar10[2];
          puVar6 = puVar10 + 3;
          puVar10 = puVar10 + 4;
          puVar7[3] = *puVar6;
          puVar7 = puVar7 + 4;
        } while (puVar10 != puVar8);
      }
    }
  }
  return;
}


