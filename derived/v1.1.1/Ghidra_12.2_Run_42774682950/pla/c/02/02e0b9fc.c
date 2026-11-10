/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e0b9fc; name: FUN_02e0b9fc
 */


/* WARNING: Removing unreachable block (ram,0x02e0bc68) */
/* WARNING: Removing unreachable block (ram,0x02e0bcf4) */

undefined8 FUN_02e0b9fc(long param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  size_t __nmemb;
  int iVar6;
  long lVar7;
  ulong uVar8;
  uint uVar9;
  int iVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  uint uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  uint local_3e8 [16];
  float local_3a8 [16];
  undefined4 local_368 [64];
  undefined4 local_268 [64];
  float local_168 [66];
  
  lVar4 = (**(code **)(*param_2 + 0x10))(param_2,(ulong)*(uint *)(param_1 + 0x128) * 0xa8);
  *(long *)(param_1 + 0x140) = lVar4;
  if (lVar4 == 0) {
    return 0x34;
  }
  uVar14 = *(uint *)(param_1 + 0x128);
  fVar15 = 1.0;
  if (uVar14 != 0) {
    lVar7 = 0;
    uVar11 = 1;
    lVar13 = lVar4;
    while( true ) {
      if (lVar13 != 0) {
        puVar1 = (undefined8 *)(lVar4 + lVar7);
        puVar1[0x13] = 0;
        puVar1[0x14] = 0;
        *puVar1 = 0;
        puVar1[0x11] = 0;
        puVar1[0x12] = 0;
        puVar1[0xf] = 0;
        puVar1[0x10] = 0;
        puVar1[0xd] = 0;
        puVar1[0xe] = 0;
        puVar1[0xb] = 0;
        puVar1[0xc] = 0;
        puVar1[9] = 0;
        puVar1[10] = 0;
        puVar1[7] = 0;
        puVar1[8] = 0;
        puVar1[5] = 0;
        puVar1[6] = 0;
        puVar1[3] = 0;
        puVar1[4] = 0;
        puVar1[1] = 0;
        puVar1[2] = 0;
        uVar14 = *(uint *)(param_1 + 0x128);
      }
      if (uVar14 <= uVar11) break;
      lVar4 = *(long *)(param_1 + 0x140);
      uVar11 = uVar11 + 1;
      lVar7 = lVar7 + 0xa8;
      lVar13 = lVar4 + lVar7;
    }
    if (1 < uVar14) {
      fVar15 = 1.0 / SQRT((float)uVar14);
    }
  }
  *(float *)(param_1 + 0x124) = fVar15;
  uVar14 = uVar14 * 4;
  if (uVar14 == 0) {
    __nmemb = 0;
  }
  else {
    lVar4 = *(long *)(param_1 + 0x158);
    fVar16 = *(float *)(lVar4 + 0x9c) +
             (*(float *)(lVar4 + 0xa0) - *(float *)(lVar4 + 0x9c)) * *(float *)(lVar4 + 0x6c) * 0.01
    ;
    fVar15 = (*(float *)(lVar4 + 0xa8) +
             (*(float *)(lVar4 + 0xac) - *(float *)(lVar4 + 0xa8)) * *(float *)(lVar4 + 0x70) * 0.01
             ) * fVar16;
    fVar16 = fVar16 - fVar15;
    uVar11 = 0;
    __nmemb = (size_t)uVar14;
    uVar9 = 0x6b4cc7;
    do {
      uVar9 = uVar9 * 0xbb38435 + 0x3619636b;
      fVar17 = fVar15 + (1.0 / (float)(uVar14 - 1)) *
                        (fVar16 + fVar16) * (float)(uVar11 & 0xffffffff);
      local_168[uVar11] = fVar17 + fVar17 * *(float *)(lVar4 + 0xa4) * 2.3283064e-12 * (float)uVar9;
      uVar11 = uVar11 + 1;
    } while (__nmemb != uVar11);
  }
  qsort(local_168,__nmemb,4,(__compar_fn_t)&LAB_02e1d440);
  FUN_02e1d320(local_168,*(undefined4 *)(param_1 + 0x130),*(int *)(param_1 + 0x128) << 2,local_268);
  uVar14 = *(uint *)(param_1 + 0x128);
  uVar11 = (ulong)uVar14;
  if (uVar14 == 0) {
    return 1;
  }
  uVar8 = 0;
  uVar12 = 0;
  do {
    iVar10 = (int)uVar12;
    uVar2 = local_268[uVar14 + iVar10];
    local_368[uVar8 & 0xffffffff] = *(undefined4 *)((long)local_268 + uVar8);
    iVar6 = (int)uVar8;
    local_368[iVar6 + 1] = uVar2;
    local_368[iVar6 + 2] = local_268[uVar14 * 2 + iVar10];
    uVar12 = uVar12 + 1;
    uVar8 = uVar8 + 4;
    local_368[iVar6 + 3] = local_268[uVar14 * 3 + iVar10];
  } while (uVar11 != uVar12);
  lVar4 = *(long *)(param_1 + 0x158);
  fVar15 = *(float *)(lVar4 + 0xc0) / (float)uVar14;
  fVar16 = *(float *)(lVar4 + 0xc4) * 2.3283064e-12 * fVar15;
  if (uVar14 == 1) {
    fVar17 = 8.483689e+07;
    lVar13 = 0;
LAB_02e0bcbc:
    local_3a8[lVar13] = fVar15 + fVar17 * fVar16;
  }
  else {
    uVar9 = 0x1bc0f99;
    lVar7 = 0;
    do {
      uVar3 = uVar9 * 0xbb38435 + 0x3619636b;
      uVar9 = uVar3 * 0xbb38435 + 0x3619636b;
      lVar13 = lVar7 + 2;
      local_3a8[lVar7] = fVar15 + (float)uVar3 * fVar16;
      local_3a8[lVar7 + 1] = fVar15 + (float)uVar9 * fVar16;
      lVar7 = lVar13;
    } while (uVar11 - (uVar11 & 1) != lVar13);
    fVar17 = (float)(uVar9 * 0xbb38435 + 0x3619636b);
    if ((uVar14 & 1) != 0) goto LAB_02e0bcbc;
  }
  fVar15 = (float)*(uint *)(param_1 + 0x130) * 0.001;
  if (uVar14 == 1) {
    lVar13 = 0;
  }
  else {
    lVar7 = 0;
    do {
      lVar13 = lVar7 + 2;
      fVar16 = local_3a8[lVar7 + 1];
      local_3e8[lVar7] = (int)(fVar15 * local_3a8[lVar7]);
      local_3e8[lVar7 + 1] = (int)(fVar15 * fVar16);
      lVar7 = lVar13;
    } while (uVar11 - (uVar11 & 1) != lVar13);
    if ((uVar14 & 1) == 0) goto LAB_02e0bd58;
  }
  local_3e8[lVar13] = (int)(fVar15 * local_3a8[lVar13]);
LAB_02e0bd58:
  uVar5 = FUN_02e1def8(*(undefined4 *)(lVar4 + 8),*(undefined4 *)(lVar4 + 0xc),
                       *(undefined8 *)(param_1 + 0x140),param_2,local_368);
  if ((int)uVar5 == 1) {
    uVar11 = 0;
    lVar4 = 0;
    uVar12 = 4;
    do {
      uVar14 = local_3e8[uVar11];
      lVar7 = *(long *)(param_1 + 0x140) + lVar4;
      if (uVar14 < 5) {
        uVar14 = 4;
      }
      *(uint *)(lVar7 + 0x90) = uVar14;
      lVar13 = (**(code **)(*param_2 + 0x10))(param_2,uVar14 * 4 + 0xc & 0xfffffff0);
      *(long *)(lVar7 + 0x98) = lVar13;
      if (lVar13 == 0) {
        return 0x34;
      }
      *(undefined4 *)(lVar7 + 0xa0) = 0;
      uVar11 = uVar11 + 1;
      if (*(uint *)(param_1 + 0x128) <= uVar11) {
        return 1;
      }
      uVar5 = FUN_02e1def8(*(undefined4 *)(*(long *)(param_1 + 0x158) + 8),
                           *(undefined4 *)(*(long *)(param_1 + 0x158) + 0xc),
                           *(long *)(param_1 + 0x140) + lVar4 + 0xa8,param_2,
                           local_368 + (uVar12 & 0xfffffffc),*(undefined4 *)(param_1 + 0x130));
      lVar4 = lVar4 + 0xa8;
      uVar12 = uVar12 + 4;
    } while ((int)uVar5 == 1);
  }
  return uVar5;
}


