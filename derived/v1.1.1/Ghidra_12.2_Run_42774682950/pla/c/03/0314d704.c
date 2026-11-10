/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0314d704; name: FUN_0314d704
 */


/* WARNING: Removing unreachable block (ram,0x0314d75c) */

void FUN_0314d704(long param_1,long *param_2,undefined8 *param_3,long param_4)

{
  byte *pbVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  int iVar6;
  long lVar7;
  float *pfVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  char *pcVar12;
  ulong uVar13;
  int iVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined8 uVar19;
  float fVar20;
  float fVar21;
  undefined8 local_120;
  ulong uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 auStack_f0 [4];
  undefined1 auStack_d0 [16];
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [48];
  int local_60;
  float local_5c [4];
  undefined4 local_4c;
  
  uVar13 = (ulong)*(char *)(param_1 + 0x30);
  *(undefined1 *)(param_1 + 0x1c0) = 1;
  if ((long)uVar13 < 1) {
    iVar14 = 0;
  }
  else {
    if (*(char *)(param_1 + 0x30) == '\x01') {
      lVar9 = 0;
      iVar14 = 0;
    }
    else {
      lVar9 = 0;
      iVar14 = 0;
      pcVar12 = (char *)(*(long *)(param_1 + 0xa0) + 0x4c);
      do {
        pbVar1 = (byte *)(pcVar12 + -0x28);
        cVar2 = *pcVar12;
        pcVar12 = pcVar12 + 0x50;
        if (iVar14 <= (int)(uint)*pbVar1) {
          iVar14 = *pbVar1 + 1;
        }
        lVar9 = lVar9 + 2;
        if (iVar14 <= cVar2) {
          iVar14 = cVar2 + 1;
        }
      } while (uVar13 - (uVar13 & 1) != lVar9);
      if ((uVar13 & 1) == 0) goto LAB_0314d7b8;
    }
    cVar2 = *(char *)(*(long *)(param_1 + 0xa0) + lVar9 * 0x28 + 0x24);
    if (iVar14 <= cVar2) {
      iVar14 = cVar2 + 1;
    }
  }
LAB_0314d7b8:
  iVar6 = *(int *)(param_1 + 0xb8);
  if (iVar6 < iVar14) {
    if ((int)(*(uint *)(param_1 + 0xbc) & 0x3fffffff) < iVar14) {
      uVar5 = FUN_030a88f8(PTR_PTR_0434a080,iVar14,*(undefined8 *)(param_1 + 0xb0));
      iVar6 = *(int *)(param_1 + 0xb8);
      *(undefined8 *)(param_1 + 0xb0) = uVar5;
    }
    if ((iVar6 < iVar14) || (iVar14 < iVar6)) {
      *(int *)(param_1 + 0xb8) = iVar14;
      iVar6 = iVar14;
    }
  }
  if (0 < iVar6) {
    lVar9 = 0;
    do {
      *(undefined1 *)(*(long *)(param_1 + 0xb0) + lVar9) = 0;
      lVar9 = lVar9 + 1;
    } while (lVar9 < *(int *)(param_1 + 0xb8));
  }
  if ('\0' < *(char *)(param_1 + 0x30)) {
    lVar9 = 0;
    lVar7 = 0x24;
    do {
      lVar9 = lVar9 + 1;
      lVar10 = (long)*(char *)(*(long *)(param_1 + 0xa0) + lVar7);
      lVar7 = lVar7 + 0x28;
      *(char *)(*(long *)(param_1 + 0xb0) + lVar10) =
           *(char *)(*(long *)(param_1 + 0xb0) + lVar10) + '\x01';
    } while (lVar9 < *(char *)(param_1 + 0x30));
  }
  local_120 = CONCAT44((float)*(double *)(param_4 + 0x18),(float)*(double *)(param_4 + 0x10));
  uStack_118 = (ulong)(uint)(float)*(double *)(param_4 + 0x20);
  FUN_032cc45c(auStack_d0,param_3,&local_120);
  fVar15 = *(float *)(param_1 + 0x78) / *(float *)(param_1 + 0x84);
  fVar21 = *(float *)(param_1 + 0x70) / *(float *)(param_1 + 0x88);
  fVar18 = *(float *)(param_1 + 0x74) / *(float *)(param_1 + 0x8c);
  fVar20 = (float)((int)(short)((ulong)*(undefined8 *)(param_4 + 0x40) >> 0x30) << 0x10);
  fVar16 = (ABS((float)*(undefined8 *)(param_1 + 0x40)) * fVar15 +
            ABS((float)*(undefined8 *)(param_1 + 0x50)) * fVar21 +
           ABS((float)*(undefined8 *)(param_1 + 0x60)) * fVar18) * fVar20;
  fVar17 = (ABS((float)((ulong)*(undefined8 *)(param_1 + 0x40) >> 0x20)) * fVar15 +
            ABS((float)((ulong)*(undefined8 *)(param_1 + 0x50) >> 0x20)) * fVar21 +
           ABS((float)((ulong)*(undefined8 *)(param_1 + 0x60) >> 0x20)) * fVar18) * fVar20;
  fVar15 = (ABS((float)*(undefined8 *)(param_1 + 0x48)) * fVar15 +
            ABS((float)*(undefined8 *)(param_1 + 0x58)) * fVar21 +
           ABS((float)*(undefined8 *)(param_1 + 0x68)) * fVar18) * fVar20;
  *(ulong *)(param_1 + 0x1b8) = CONCAT44(fVar20 * 1.0,fVar15);
  *(ulong *)(param_1 + 0x1b0) = CONCAT44(fVar17,fVar16);
  local_120 = CONCAT44((float)((ulong)*param_3 >> 0x20) * fVar16,(float)*param_3 * fVar16);
  uStack_118 = CONCAT44((float)((ulong)param_3[1] >> 0x20) * fVar16,(float)param_3[1] * fVar16);
  local_110 = CONCAT44((float)((ulong)param_3[2] >> 0x20) * fVar17,(float)param_3[2] * fVar17);
  uStack_108 = CONCAT44((float)((ulong)param_3[3] >> 0x20) * fVar17,(float)param_3[3] * fVar17);
  local_100 = CONCAT44((float)((ulong)param_3[4] >> 0x20) * fVar15,(float)param_3[4] * fVar15);
  uStack_f8 = CONCAT44((float)((ulong)param_3[5] >> 0x20) * fVar15,(float)param_3[5] * fVar15);
  FUN_032c9298(auStack_90,&local_120,param_3);
  local_60 = (int)(short)((ulong)*(undefined8 *)(param_4 + 0x40) >> 0x30) << 0x10;
  local_a0 = CONCAT44(ABS((float)((ulong)*(undefined8 *)(param_1 + 0x40) >> 0x20)),
                      ABS((float)*(undefined8 *)(param_1 + 0x40)));
  uStack_98 = CONCAT44(ABS((float)((ulong)*(undefined8 *)(param_1 + 0x48) >> 0x20)),
                       ABS((float)*(undefined8 *)(param_1 + 0x48)));
  local_b0 = CONCAT44(ABS((float)((ulong)*(undefined8 *)(param_1 + 0x50) >> 0x20)),
                      ABS((float)*(undefined8 *)(param_1 + 0x50)));
  uStack_a8 = CONCAT44(ABS((float)((ulong)*(undefined8 *)(param_1 + 0x58) >> 0x20)),
                       ABS((float)*(undefined8 *)(param_1 + 0x58)));
  local_c0 = CONCAT44(ABS((float)((ulong)*(undefined8 *)(param_1 + 0x60) >> 0x20)),
                      ABS((float)*(undefined8 *)(param_1 + 0x60)));
  uStack_b8 = CONCAT44(ABS((float)((ulong)*(undefined8 *)(param_1 + 0x68) >> 0x20)),
                       ABS((float)*(undefined8 *)(param_1 + 0x68)));
  local_4c = *(undefined4 *)(param_1 + 0x90);
  local_5c[0] = 0.0;
  local_5c[1] = 0.0;
  lVar9 = (long)*(char *)(param_1 + 0x30);
  if (0 < lVar9) {
    puVar11 = (undefined8 *)(*param_2 + 0x10);
    pfVar8 = *(float **)(param_1 + 0xa0);
    do {
      lVar7 = (long)*(char *)(pfVar8 + 9);
      local_5c[lVar7 + 2] = *pfVar8;
      fVar15 = *(float *)(puVar11 + 2);
      puVar3 = puVar11 + 1;
      uVar5 = *puVar11;
      puVar4 = puVar11 + -1;
      uVar19 = puVar11[-2];
      puVar11 = puVar11 + 6;
      auStack_f0[lVar7 * 2 + 1] =
           CONCAT44((float)((ulong)*puVar4 >> 0x20) + (float)((ulong)*puVar3 >> 0x20) * fVar15,
                    (float)*puVar4 + (float)*puVar3 * fVar15);
      auStack_f0[lVar7 * 2] =
           CONCAT44((float)((ulong)uVar19 >> 0x20) + (float)((ulong)uVar5 >> 0x20) * fVar15,
                    (float)uVar19 + (float)uVar5 * fVar15);
      lVar9 = lVar9 + -1;
      local_5c[lVar7] = local_5c[lVar7] + *pfVar8 * pfVar8[1];
      pfVar8 = pfVar8 + 10;
    } while (lVar9 != 0);
  }
  FUN_0314da00(auStack_f0,param_1 + 0xc0);
  return;
}


