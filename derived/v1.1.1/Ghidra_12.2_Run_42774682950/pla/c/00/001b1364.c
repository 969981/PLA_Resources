/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001b1364; name: FUN_001b1364
 */


void FUN_001b1364(long param_1,undefined8 *param_2,uint param_3,int param_4)

{
  int iVar1;
  undefined1 auVar2 [16];
  undefined8 uVar3;
  undefined8 uVar4;
  void *pvVar5;
  void *pvVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 auVar21 [16];
  
  if (0 < param_4) {
    lVar10 = param_1 + (long)param_4 * 0xb0;
    *(undefined8 *)(lVar10 + 0x18) = *(undefined8 *)(lVar10 + -0x98);
    *(undefined8 *)(lVar10 + 0x10) = *(undefined8 *)(lVar10 + -0xa0);
    lVar12 = (long)param_4;
    *(undefined8 *)(lVar10 + 0x30) = *(undefined8 *)(lVar10 + -0x80);
    *(undefined8 *)(lVar10 + 0x28) = *(undefined8 *)(lVar10 + -0x88);
    *(undefined8 *)(lVar10 + 0x20) = *(undefined8 *)(lVar10 + -0x90);
    pvVar6 = *(void **)(lVar10 + 0x40);
    iVar1 = *(int *)(lVar10 + -0x68);
    pvVar5 = *(void **)(lVar10 + -0x70);
    if ((int)(*(uint *)(lVar10 + 0x4c) & 0x3fffffff) < iVar1) {
      pvVar6 = (void *)FUN_032bd1d4(*(undefined8 *)PTR_PTR_04372408,iVar1,0x10,pvVar6,
                                    *(undefined4 *)(param_1 + lVar12 * 0xb0 + 0x48));
      *(void **)(lVar10 + 0x40) = pvVar6;
    }
    lVar13 = param_1 + 0x10 + lVar12 * 0xb0;
    memcpy(pvVar6,pvVar5,(long)iVar1 << 4);
    pvVar6 = *(void **)(lVar13 + 0x80);
    *(int *)(lVar13 + 0x38) = iVar1;
    lVar7 = param_1 + 0x10 + (lVar12 + -1) * 0xb0;
    iVar1 = *(int *)(lVar7 + 0x88);
    pvVar5 = *(void **)(lVar7 + 0x80);
    if ((int)(*(uint *)(lVar13 + 0x8c) & 0x3fffffff) < iVar1) {
      pvVar6 = (void *)FUN_032bd1d4(*(undefined8 *)PTR_PTR_04372408,iVar1,0x10,pvVar6,
                                    *(undefined4 *)(param_1 + lVar12 * 0xb0 + 0x98));
      *(void **)(lVar13 + 0x80) = pvVar6;
    }
    memcpy(pvVar6,pvVar5,(long)iVar1 << 4);
    *(int *)(param_1 + lVar12 * 0xb0 + 0x98) = iVar1;
    FUN_001b15f8((undefined8 *)(lVar10 + 0x10),param_2 + -2);
  }
  *(int *)(param_1 + 0xc) = param_4;
  if ((param_4 < 4) && (0 < (int)param_3)) {
    uVar11 = 0;
    iVar1 = param_4 + 1;
    puVar14 = param_2;
    while( true ) {
      lVar10 = param_1 + (long)param_4 * 0xb0;
      uVar16 = (param_2 + uVar11 * 2)[1];
      uVar15 = param_2[uVar11 * 2];
      fVar17 = (float)uVar15 - (float)*(undefined8 *)(lVar10 + 0x10);
      fVar18 = (float)((ulong)uVar15 >> 0x20) -
               (float)((ulong)*(undefined8 *)(lVar10 + 0x10) >> 0x20);
      fVar19 = (float)uVar16 - (float)*(undefined8 *)(lVar10 + 0x18);
      fVar20 = (float)((ulong)uVar16 >> 0x20) -
               (float)((ulong)*(undefined8 *)(lVar10 + 0x18) >> 0x20);
      fVar17 = fVar17 * fVar17;
      fVar18 = fVar18 * fVar18;
      fVar19 = fVar19 * fVar19;
      fVar20 = fVar20 * fVar20;
      auVar21._4_4_ = fVar18;
      auVar21._0_4_ = fVar17;
      auVar21._8_4_ = fVar19;
      auVar21._12_4_ = fVar20;
      auVar2._4_4_ = fVar18;
      auVar2._0_4_ = fVar17;
      auVar2._8_4_ = fVar19;
      auVar2._12_4_ = fVar20;
      auVar21 = NEON_ext(auVar21,auVar2,8,1);
      if ((float)*(undefined8 *)(lVar10 + 0x30) <= fVar17 + fVar18 + auVar21._0_4_) {
        if (uVar11 != 0) {
          uVar8 = uVar11;
          if ((uVar11 & 7) != 0) {
            lVar10 = 0;
            do {
              puVar9 = puVar14 + lVar10 * 2;
              lVar10 = lVar10 + -1;
              puVar9[1] = puVar9[-1];
              *puVar9 = puVar9[-2];
            } while (-lVar10 != (uVar11 & 7));
            uVar8 = uVar11 + lVar10;
          }
          if (6 < uVar11 - 1) {
            puVar9 = param_2 + uVar8 * 2 + -8;
            do {
              uVar3 = puVar9[6];
              uVar4 = puVar9[7];
              puVar9[7] = puVar9[5];
              puVar9[6] = puVar9[4];
              puVar9[9] = uVar4;
              puVar9[8] = uVar3;
              uVar8 = uVar8 - 8;
              auVar21 = *(undefined1 (*) [16])(puVar9 + 2);
              puVar9[3] = puVar9[1];
              puVar9[2] = *puVar9;
              puVar9[5] = auVar21._8_8_;
              puVar9[4] = auVar21._0_8_;
              puVar9[1] = puVar9[-1];
              *puVar9 = puVar9[-2];
              puVar9[-1] = puVar9[-3];
              puVar9[-2] = puVar9[-4];
              puVar9[-3] = puVar9[-5];
              puVar9[-4] = puVar9[-6];
              puVar9[-5] = puVar9[-7];
              puVar9[-6] = puVar9[-8];
              puVar9 = puVar9 + -0x10;
            } while (0 < (long)uVar8);
          }
        }
        param_2[1] = uVar16;
        *param_2 = uVar15;
        FUN_001b1364(param_1,param_2 + 2,uVar11 & 0xffffffff,iVar1);
      }
      uVar11 = uVar11 + 1;
      if (uVar11 == param_3) break;
      param_4 = *(int *)(param_1 + 0xc);
      puVar14 = puVar14 + 2;
    }
  }
  return;
}


