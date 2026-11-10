/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ef9108; name: FUN_02ef9108
 */


void FUN_02ef9108(float param_1,float param_2,float param_3,uint param_4,uint param_5,
                 undefined4 *param_6)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  int iVar5;
  float *pfVar6;
  uint uVar7;
  long lVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  ulong uVar14;
  float *pfVar15;
  float *__s;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float afStack_b0 [2];
  undefined8 local_a8;
  int local_a0;
  int local_9c;
  uint local_98;
  uint local_94;
  size_t local_90;
  ulong local_88;
  
  *param_6 = 0x3f800000;
  pfVar6 = (float *)(param_6 + param_5);
  *pfVar6 = param_2;
  pfVar6 = pfVar6 + param_5;
  *pfVar6 = param_3;
  pfVar6[param_5] = param_1;
  if (1 < param_4) {
    fVar17 = param_3 * param_3;
    pfVar6 = pfVar6 + param_5 + param_5;
    if (0.99 <= fVar17) {
      param_4 = param_4 + 1;
      if (2 < param_4) {
        uVar4 = 2;
        fVar17 = param_3;
        do {
          iVar5 = (int)uVar4;
          do {
            *pfVar6 = 0.0;
            pfVar6 = pfVar6 + param_5;
          } while (pfVar6 < param_6 + (iVar5 + iVar5 * iVar5) * param_5);
          fVar17 = fVar17 * param_3;
          uVar4 = uVar4 + 1;
          *pfVar6 = fVar17;
          pfVar6 = pfVar6 + param_5;
        } while (uVar4 != param_4);
      }
      do {
        *pfVar6 = 0.0;
        pfVar6 = pfVar6 + param_5;
      } while (pfVar6 < param_6 + param_4 * param_4 * param_5);
    }
    else {
      fVar18 = 1.0;
      fVar16 = 1.0 - fVar17;
      fVar22 = SQRT(fVar16);
      param_1 = (1.0 / fVar22) * param_1;
      param_2 = (1.0 / fVar22) * param_2;
      if (param_4 < 4) {
        fVar19 = param_1 * param_1;
        fVar20 = param_2 * param_2;
        fVar18 = (param_1 + param_1) * param_2;
        *pfVar6 = fVar18 * fVar16 * 0.8660254;
        pfVar6 = pfVar6 + param_5;
        *pfVar6 = fVar22 * param_3 * 1.7320508 * param_2;
        pfVar6 = pfVar6 + param_5;
        *pfVar6 = fVar17 * 1.5 + -0.5;
        pfVar6 = pfVar6 + param_5;
        *pfVar6 = fVar22 * param_3 * 0.8660254 * (param_1 + param_1);
        pfVar6 = pfVar6 + param_5;
        *pfVar6 = (fVar19 - fVar20) * fVar16 * 0.8660254;
        if (param_4 == 3) {
          fVar21 = fVar16 * 0.7905694 * fVar22;
          fVar16 = param_3 * 1.9364917 * fVar16;
          pfVar6 = pfVar6 + param_5;
          *pfVar6 = param_2 * fVar21 * (fVar19 * 3.0 - fVar20);
          pfVar6 = pfVar6 + param_5;
          pfVar15 = pfVar6 + param_5;
          *pfVar6 = fVar18 * fVar16;
          fVar22 = fVar22 * -0.61237246 + fVar22 * 0.61237246 * fVar17 * 5.0;
          pfVar6 = pfVar15 + param_5;
          *pfVar15 = fVar22 * param_2;
          pfVar15 = pfVar6 + param_5;
          *pfVar6 = param_3 * 0.5 * (fVar17 * 5.0 + -3.0);
          *pfVar15 = fVar22 * param_1;
          pfVar15[param_5] = (fVar19 - fVar20) * fVar16;
          (pfVar15 + param_5)[param_5] = param_1 * fVar21 * (fVar19 - fVar20 * 3.0);
        }
      }
      else {
        uVar10 = param_4 + 1;
        uVar14 = (ulong)(uVar10 * 4);
        uVar4 = uVar14 + 0xf & 0x1fffffff0;
        lVar3 = -uVar4;
        puVar13 = (undefined4 *)(((long)afStack_b0 + lVar3) - uVar4);
        *(float *)((long)afStack_b0 + lVar3 + 4) = param_1;
        *(undefined4 *)((long)afStack_b0 + lVar3) = 0x3f800000;
        *puVar13 = 0;
        puVar13[1] = param_2;
        if (2 < uVar10) {
          fVar17 = param_1 * (param_2 + param_2);
          fVar16 = param_1 * (param_1 + param_1) + -1.0;
          lVar8 = (ulong)uVar10 - 3;
          puVar13[2] = fVar17;
          *(float *)((long)afStack_b0 + lVar3 + 8) = fVar16;
          pfVar6 = (float *)((long)afStack_b0 + lVar3 + 0xc);
          pfVar15 = (float *)(puVar13 + 3);
          do {
            fVar17 = fVar17 * param_1 + param_2 * fVar16;
            fVar16 = (param_1 + param_1) * fVar16 - pfVar6[-2];
            lVar8 = lVar8 + -1;
            *pfVar6 = fVar16;
            *pfVar15 = fVar17;
            pfVar6 = pfVar6 + 1;
            pfVar15 = pfVar15 + 1;
          } while (lVar8 != 0);
        }
        pfVar15 = (float *)((long)puVar13 - uVar4);
        __s = (float *)((long)pfVar15 - uVar4);
        memset(pfVar15,0,uVar14);
        memset(__s,0,uVar14);
        pfVar6 = (float *)((long)__s - ((ulong)(param_4 + 2) * 4 + 0xf & 0x7fffffff0));
        uVar11 = param_5 * 5;
        local_a8 = (ulong)param_4;
        uVar10 = param_5 * 7;
        afStack_b0[1] = (float)(param_5 * 2);
        *pfVar15 = 1.0;
        *__s = param_3;
        __s[1] = fVar22;
        local_a0 = param_5 * 6;
        uVar4 = 3;
        local_88 = 1;
        puVar12 = &DAT_03a9f368;
        fVar17 = param_3;
        while( true ) {
          uVar2 = local_88 & 0xffffffff;
          fVar16 = (float)((int)local_88 << 1 | 1);
          uVar14 = local_88 + 1;
          uVar1 = (int)local_88 + 2;
          local_88 = uVar14;
          iVar5 = (int)uVar14;
          fVar18 = (fVar17 * param_3 * fVar16 - fVar18 * (float)uVar2) /
                   (float)(uVar14 & 0xffffffff);
          *pfVar6 = fVar18;
          param_6[(iVar5 + iVar5 * iVar5) * param_5] = fVar18;
          if (1 < uVar1) {
            lVar8 = 0;
            uVar7 = uVar11;
            uVar9 = uVar10;
            while( true ) {
              fVar17 = pfVar15[lVar8 + 1] + fVar17 * fVar22 * fVar16;
              fVar18 = (float)puVar12[lVar8];
              pfVar6[lVar8 + 1] = fVar17;
              fVar18 = fVar18 * fVar17;
              param_6[uVar9] = fVar18 * *(float *)((long)afStack_b0 + lVar8 * 4 + lVar3 + 4);
              param_6[uVar7] = (float)puVar13[lVar8 + 1] * fVar18;
              if (uVar4 - 2 == lVar8) break;
              fVar17 = (__s + 1)[lVar8];
              lVar8 = lVar8 + 1;
              uVar9 = uVar9 + param_5;
              uVar7 = uVar7 - param_5;
            }
          }
          local_90 = (ulong)uVar1 << 2;
          local_9c = (int)uVar4;
          local_98 = uVar11;
          local_94 = uVar10;
          memcpy(pfVar15,__s,local_90);
          memcpy(__s,pfVar6,local_90);
          if (local_88 == local_a8) break;
          puVar12 = puVar12 + 5;
          fVar17 = *__s;
          fVar18 = *pfVar15;
          uVar4 = (ulong)(local_9c + 1);
          uVar10 = local_94 + local_a0;
          uVar11 = local_98 + local_a0;
          local_a0 = local_a0 + (int)afStack_b0[1];
        }
      }
    }
  }
  return;
}


