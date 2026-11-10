/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03174c60; name: FUN_03174c60
 */


void FUN_03174c60(long param_1,ulong param_2,uint param_3)

{
  long lVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  int iVar7;
  int iVar8;
  float fVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  param_2 = param_2 & 0xffffffff;
  do {
    while( true ) {
      iVar7 = (int)param_2;
      fVar9 = *(float *)(param_1 + ((long)((ulong)(iVar7 + param_3) << 0x20) >> 0x21) * 0x20 + 0xc);
      uVar4 = (ulong)param_3;
      do {
        param_2 = (ulong)(int)param_2;
        puVar5 = (undefined8 *)(param_1 + param_2 * 0x20);
        uVar10 = *puVar5;
        uVar11 = puVar5[1];
        while ((float)((ulong)uVar11 >> 0x20) < fVar9) {
          uVar10 = puVar5[4];
          param_2 = param_2 + 1;
          uVar11 = puVar5[5];
          puVar5 = puVar5 + 4;
        }
        uVar4 = (ulong)(int)uVar4;
        puVar6 = (undefined8 *)(param_1 + uVar4 * 0x20);
        uVar12 = *puVar6;
        uVar13 = puVar6[1];
        while (fVar9 < (float)((ulong)uVar13 >> 0x20)) {
          uVar12 = puVar6[-4];
          uVar4 = uVar4 - 1;
          uVar13 = puVar6[-3];
          puVar6 = puVar6 + -4;
        }
        iVar3 = (int)uVar4;
        iVar8 = (int)param_2;
        if (iVar8 <= iVar3) {
          if (iVar3 != iVar8) {
            lVar1 = param_1 + uVar4 * 0x20;
            uVar15 = *(undefined8 *)(lVar1 + 0x18);
            uVar14 = *(undefined8 *)(lVar1 + 0x10);
            puVar6[1] = uVar11;
            *puVar6 = uVar10;
            lVar2 = param_1 + param_2 * 0x20;
            uVar10 = *(undefined8 *)(lVar2 + 0x10);
            *(undefined8 *)(lVar1 + 0x18) = *(undefined8 *)(lVar2 + 0x18);
            *(undefined8 *)(lVar1 + 0x10) = uVar10;
            puVar5[1] = uVar13;
            *puVar5 = uVar12;
            *(undefined8 *)(lVar2 + 0x18) = uVar15;
            *(undefined8 *)(lVar2 + 0x10) = uVar14;
          }
          uVar4 = (ulong)(iVar3 - 1);
          param_2 = (ulong)(iVar8 + 1);
        }
        iVar3 = (int)param_2;
      } while (iVar3 <= (int)uVar4);
      if ((int)uVar4 <= iVar7) break;
      FUN_03174c60(param_1);
      if ((int)param_3 <= iVar3) {
        return;
      }
    }
  } while (iVar3 < (int)param_3);
  return;
}


