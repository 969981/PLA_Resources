/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032a64f4; name: FUN_032a64f4
 */


/* WARNING: Removing unreachable block (ram,0x032a6594) */

long FUN_032a64f4(uint *param_1)

{
  long *plVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  uint uVar9;
  uint uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  uint uVar13;
  uint uVar14;
  long lVar15;
  ulong local_58;
  
  puVar2 = PTR_PTR_0434a080;
  uVar7 = param_1[1] * *param_1 * param_1[2];
  uVar13 = param_1[0xb];
  uVar6 = uVar13 & 0x3fffffff;
  if ((int)uVar7 <= (int)uVar6) goto LAB_032a661c;
  lVar15 = *(long *)(param_1 + 8);
  uVar6 = param_1[10];
  FUN_032bd100(uVar7,0x10,uVar13,&local_58);
  uVar13 = param_1[0xb];
  lVar4 = (**(code **)(*(long *)puVar2 + 0x10))(puVar2,local_58,&local_58);
  if (0 < (int)uVar6) {
    if (uVar6 == 1) {
      lVar8 = 0;
    }
    else {
      lVar8 = 0;
      puVar11 = (undefined8 *)(lVar4 + 0x10);
      puVar12 = (undefined8 *)(lVar15 + 0x10);
      do {
        uVar5 = puVar12[-1];
        lVar8 = lVar8 + 2;
        puVar11[-2] = puVar12[-2];
        puVar11[-1] = uVar5;
        uVar5 = puVar12[1];
        *puVar11 = *puVar12;
        puVar11[1] = uVar5;
        puVar11 = puVar11 + 4;
        puVar12 = puVar12 + 4;
      } while ((ulong)uVar6 - ((ulong)uVar6 & 1) != lVar8);
      if ((uVar6 & 1) == 0) goto LAB_032a65dc;
    }
    puVar11 = (undefined8 *)(lVar4 + lVar8 * 0x10);
    puVar12 = (undefined8 *)(lVar15 + lVar8 * 0x10);
    uVar5 = puVar12[1];
    *puVar11 = *puVar12;
    puVar11[1] = uVar5;
  }
LAB_032a65dc:
  if (-1 < (int)uVar13) {
    (**(code **)(*(long *)puVar2 + 0x18))(puVar2,lVar15,((ulong)uVar13 & 0x3fffffff) << 4);
  }
  if (local_58 < 0x3fffffff0) {
    uVar6 = (uint)(local_58 >> 4);
  }
  else {
    uVar6 = 0x3fffffff;
  }
  param_1[0xb] = uVar6;
  uVar6 = uVar6 & 0x3fffffff;
  *(long *)(param_1 + 8) = lVar4;
LAB_032a661c:
  if ((int)uVar6 < (int)uVar7) {
    uVar5 = FUN_032a6954(puVar2,uVar7,*(undefined8 *)(param_1 + 8),param_1[10],param_1 + 0xb);
    *(undefined8 *)(param_1 + 8) = uVar5;
  }
  if (param_1[10] != uVar7) {
    param_1[10] = uVar7;
  }
  uVar6 = param_1[2];
  if (uVar6 == 0) {
    lVar4 = 0;
  }
  else {
    uVar7 = param_1[1];
    lVar4 = 0;
    uVar13 = 0;
    uVar9 = uVar7;
    do {
      if (uVar9 != 0) {
        uVar9 = *param_1;
        uVar6 = 0;
        uVar10 = uVar9;
        do {
          if (uVar10 != 0) {
            uVar14 = 0;
            do {
              plVar1 = (long *)(*(long *)(param_1 + 8) +
                               (long)(int)(uVar14 + uVar9 * (uVar6 + uVar13 * uVar7)) * 0x10);
              *plVar1 = lVar4;
              uVar7 = param_1[3] >> (ulong)(uVar14 & 0x1f);
              if (uVar7 < 2) {
                uVar7 = 1;
              }
              uVar9 = param_1[4] >> (ulong)(uVar14 & 0x1f);
              if (uVar9 < 2) {
                uVar9 = 1;
              }
              iVar3 = FUN_032b55a4(param_1[6],uVar7,uVar9);
              uVar7 = param_1[5] >> (ulong)(uVar14 & 0x1f);
              uVar14 = uVar14 + 1;
              if (uVar7 < 2) {
                uVar7 = 1;
              }
              plVar1[1] = (ulong)(uVar7 * iVar3);
              lVar4 = lVar4 + (ulong)(uVar7 * iVar3);
              uVar9 = *param_1;
              uVar7 = param_1[1];
              uVar10 = uVar9;
            } while (uVar14 < uVar9);
          }
          uVar6 = uVar6 + 1;
        } while (uVar6 < uVar7);
        uVar6 = param_1[2];
        uVar9 = uVar7;
      }
      uVar13 = uVar13 + 1;
    } while (uVar13 < uVar6);
  }
  return lVar4;
}


