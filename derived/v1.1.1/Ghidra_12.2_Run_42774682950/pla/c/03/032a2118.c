/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032a2118; name: FUN_032a2118
 */


undefined8 FUN_032a2118(long *param_1,void *param_2,uint param_3)

{
  undefined8 *puVar1;
  byte *pbVar2;
  char cVar3;
  byte bVar4;
  long lVar5;
  float *pfVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  int iVar10;
  uint *puVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  float fVar15;
  undefined8 uVar16;
  undefined1 auVar17 [16];
  undefined8 uVar18;
  float fVar19;
  undefined8 uVar20;
  
  cVar3 = *(char *)((long)param_1 + 0xc);
  if (cVar3 == '\x02') {
    bVar4 = *(byte *)((long)param_1 + 0xd);
    if ((0 < (int)param_3) && (bVar4 < 4)) {
      memset(param_2,0,(ulong)param_3 << 4);
    }
    uVar7 = (uint)bVar4;
    if (3 < uVar7) {
      uVar7 = 4;
    }
    if ((int)param_3 < 1) {
      return 0;
    }
    if (uVar7 != 0) {
      lVar5 = param_1[1];
      uVar12 = 0;
      lVar9 = *param_1;
      uVar8 = 0;
      if (uVar7 != 1) goto LAB_032a2258;
      do {
        lVar14 = 0;
        while( true ) {
          if ((uVar7 & 1) != 0) {
            fVar15 = (float)NEON_ucvtf((uint)*(byte *)(lVar9 + lVar14));
            *(float *)((long)param_2 + (lVar14 + (ulong)(uint)((int)uVar8 << 2)) * 4) =
                 fVar15 / 255.0;
          }
          uVar8 = uVar8 + 1;
          lVar9 = lVar9 + (int)lVar5;
          uVar12 = uVar12 + 4;
          if (uVar8 == param_3) goto LAB_032a2310;
          if (uVar7 == 1) break;
LAB_032a2258:
          lVar14 = 0;
          pfVar6 = (float *)((long)param_2 + (uVar12 >> 2 & 0x3fffffff) * 0x10 + 4);
          do {
            pbVar2 = (byte *)(lVar9 + lVar14);
            lVar14 = lVar14 + 2;
            fVar15 = (float)NEON_ucvtf((uint)*pbVar2);
            pfVar6[-1] = fVar15 / 255.0;
            fVar15 = (float)NEON_ucvtf((uint)pbVar2[1]);
            *pfVar6 = fVar15 / 255.0;
            pfVar6 = pfVar6 + 2;
          } while ((ulong)uVar7 - ((ulong)uVar7 & 1) != lVar14);
        }
      } while( true );
    }
  }
  else if (cVar3 == '\n') {
    bVar4 = *(byte *)((long)param_1 + 0xd);
    if ((0 < (int)param_3) && (bVar4 < 4)) {
      memset(param_2,0,(ulong)param_3 << 4);
    }
    uVar7 = (uint)bVar4 << 2;
    if (3 < bVar4) {
      uVar7 = 0x10;
    }
    FUN_032a2398(*param_1,(int)param_1[1],param_2,0x10,uVar7 & 0xfc,param_3);
  }
  else {
    if (cVar3 != '\b') {
      return 0x80040200;
    }
    if ((int)param_3 < 1) {
      return 0;
    }
    lVar9 = param_1[1];
    uVar8 = 0;
    puVar11 = (uint *)*param_1;
    uVar12 = (ulong)param_3;
    do {
      uVar7 = *puVar11;
      puVar11 = (uint *)((long)puVar11 + (long)(int)lVar9);
      auVar17._0_8_ = CONCAT44(uVar7 >> 8,uVar7) & 0xff000000ff;
      auVar17._8_4_ = uVar7 >> 0x10 & 0xff;
      uVar12 = uVar12 - 1;
      auVar17._12_4_ = uVar7 >> 0x18;
      uVar13 = uVar8 & 0xfffffffc;
      auVar17 = NEON_scvtf(auVar17,4);
      uVar8 = uVar8 + 4;
      pfVar6 = (float *)((long)param_2 + uVar13 * 4);
      pfVar6[2] = auVar17._8_4_ * 0.003921569;
      pfVar6[3] = auVar17._12_4_ * 0.003921569;
      *pfVar6 = auVar17._0_4_ * 0.003921569;
      pfVar6[1] = auVar17._4_4_ * 0.003921569;
    } while (uVar12 != 0);
  }
LAB_032a2310:
  if ((int)param_3 < 1) {
    return 0;
  }
  if (*(char *)((long)param_1 + 0xe) != '\b') {
    return 0;
  }
  uVar16 = NEON_fmov(0x3f800000,4);
  iVar10 = param_3 * 4;
  lVar9 = (long)(int)param_3;
  do {
    iVar10 = iVar10 + -4;
    puVar1 = (undefined8 *)((long)param_2 + (long)iVar10 * 4);
    uVar18 = *puVar1;
    fVar19 = *(float *)(puVar1 + 1);
    fVar15 = (float)((ulong)uVar18 >> 0x20);
    uVar20 = NEON_fmax(CONCAT44((float)((ulong)uVar16 >> 0x20) - ((float)uVar18 + fVar15 + fVar19),
                                (float)uVar16 - ((float)uVar18 + fVar15 + fVar19)),0,4);
    lVar9 = lVar9 + -1;
    puVar1[1] = CONCAT44((int)uVar20,fVar19);
    *puVar1 = uVar18;
  } while (0 < lVar9);
  return 0;
}


