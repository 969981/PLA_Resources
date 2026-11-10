/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00543048; name: FUN_00543048
 */


void FUN_00543048(long *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined *puVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  
  puVar2 = PTR_LAB_04373088;
  puVar14 = (undefined8 *)param_1[2];
  if (puVar14 == (undefined8 *)param_1[3]) {
    puVar12 = (undefined8 *)*param_1;
    puVar13 = (undefined8 *)param_1[1];
    if (puVar13 < puVar12 || (long)puVar13 - (long)puVar12 == 0) {
      lVar5 = param_1[3] - (long)puVar12;
      uVar7 = lVar5 >> 2;
      if (lVar5 == 0) {
        uVar7 = 1;
      }
      lVar4 = FUN_002e2e80(PTR_FUN_04373078,uVar7 * 8);
      puVar14 = (undefined8 *)param_1[1];
      puVar12 = (undefined8 *)param_1[2];
      puVar13 = (undefined8 *)(lVar4 + (uVar7 & 0x7ffffffffffffffc) * 2);
      lVar5 = lVar4 + uVar7 * 8;
      if (puVar14 == puVar12) {
        lVar11 = *param_1;
        *param_1 = lVar4;
        param_1[1] = (long)puVar13;
        param_1[2] = (long)puVar13;
        param_1[3] = lVar5;
      }
      else {
        uVar7 = (long)puVar12 + (-8 - (long)puVar14);
        uVar1 = ((uint)(uVar7 >> 3) & 0x1fffffff) + 1;
        puVar10 = puVar13;
        if ((uVar1 & 3) != 0) {
          lVar11 = -((ulong)uVar1 & 3);
          puVar8 = puVar14;
          puVar9 = puVar13;
          do {
            uVar6 = *puVar8;
            bVar3 = lVar11 != -1;
            lVar11 = lVar11 + 1;
            puVar14 = puVar8 + 1;
            *puVar8 = 0;
            puVar10 = puVar9 + 1;
            *puVar9 = uVar6;
            puVar8 = puVar14;
            puVar9 = puVar10;
          } while (bVar3);
        }
        if (0x17 < uVar7) {
          do {
            uVar6 = *puVar14;
            *puVar14 = 0;
            *puVar10 = uVar6;
            uVar6 = puVar14[1];
            puVar14[1] = 0;
            puVar10[1] = uVar6;
            uVar6 = puVar14[2];
            puVar14[2] = 0;
            puVar10[2] = uVar6;
            uVar6 = puVar14[3];
            puVar14[3] = 0;
            puVar14 = puVar14 + 4;
            puVar10[3] = uVar6;
            puVar10 = puVar10 + 4;
          } while (puVar14 != puVar12);
        }
        lVar11 = *param_1;
        puVar14 = (undefined8 *)param_1[1];
        puVar12 = (undefined8 *)param_1[2];
        *param_1 = lVar4;
        param_1[1] = (long)puVar13;
        param_1[2] = (long)puVar10;
        param_1[3] = lVar5;
        puVar2 = PTR_LAB_04373088;
        if (puVar12 != puVar14) {
          puVar12 = puVar12 + -1;
          puVar13 = (undefined8 *)*puVar12;
          *puVar12 = 0;
          if (puVar13 != (undefined8 *)0x0) goto LAB_005431e8;
          while (puVar14 != puVar12) {
            while( true ) {
              puVar12 = puVar12 + -1;
              puVar13 = (undefined8 *)*puVar12;
              *puVar12 = 0;
              if (puVar13 == (undefined8 *)0x0) break;
LAB_005431e8:
              (**(code **)*puVar13)(puVar13);
              FUN_002e2ea0(puVar2,puVar13);
              if (puVar14 == puVar12) goto LAB_00543238;
            }
          }
        }
      }
LAB_00543238:
      if (lVar11 != 0) {
        FUN_002e2ea0(PTR_LAB_04373088,lVar11);
      }
    }
    else {
      lVar4 = (long)puVar13 - (long)puVar12 >> 3;
      lVar5 = lVar4 + 2;
      if (-1 < lVar4 + 1) {
        lVar5 = lVar4 + 1;
      }
      lVar5 = lVar5 >> 1;
      if (puVar13 == puVar14) {
        puVar13 = puVar13 + -lVar5;
      }
      else {
        do {
          uVar6 = *puVar13;
          *puVar13 = 0;
          puVar12 = (undefined8 *)puVar13[-lVar5];
          puVar13[-lVar5] = uVar6;
          if (puVar12 != (undefined8 *)0x0) {
            (**(code **)*puVar12)(puVar12);
            FUN_002e2ea0(puVar2,puVar12);
          }
          puVar13 = puVar13 + 1;
        } while (puVar14 != puVar13);
        puVar14 = (undefined8 *)param_1[1];
        puVar13 = puVar13 + -lVar5;
      }
      param_1[1] = (long)(puVar14 + -lVar5);
      param_1[2] = (long)puVar13;
    }
  }
  puVar14 = (undefined8 *)param_1[2];
  uVar6 = *param_2;
  *param_2 = 0;
  *puVar14 = uVar6;
  param_1[2] = param_1[2] + 8;
  return;
}


