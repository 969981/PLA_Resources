/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001d3138; name: FUN_001d3138
 */


void FUN_001d3138(long param_1,int param_2)

{
  long lVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar19;
  undefined8 uVar17;
  undefined8 uVar18;
  float fVar20;
  float fVar22;
  undefined8 uVar21;
  float fVar23;
  float fVar24;
  ulong local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  int local_b4;
  undefined8 local_a0 [2];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  
  lVar9 = param_1 + (long)param_2 * 4;
  fVar12 = *(float *)(lVar9 + 0x2960);
  fVar14 = *(float *)(lVar9 + 0x2560);
  lVar1 = param_1 + (long)param_2 * 0x10;
  fVar24 = *(float *)(lVar9 + 0x2760) - fVar12;
  uVar17 = *(undefined8 *)(lVar1 + 0x1d68);
  uVar11 = *(undefined8 *)(lVar1 + 0x1d60);
  fVar20 = (float)uVar11 * fVar14;
  fVar22 = (float)((ulong)uVar11 >> 0x20) * fVar14;
  fVar23 = (float)uVar17 * fVar14;
  fVar14 = (float)((ulong)uVar17 >> 0x20) * fVar14;
  fVar15 = -fVar24;
  local_80 = CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x90) >> 0x20) + fVar22 * fVar15,
                      (float)*(undefined8 *)(param_1 + 0x90) + fVar20 * fVar15);
  uStack_78 = CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x98) >> 0x20) + fVar14 * fVar15,
                       (float)*(undefined8 *)(param_1 + 0x98) + fVar23 * fVar15);
  iVar5 = *(int *)(param_1 + 0xd58);
  if (iVar5 < 1) {
    local_b4 = -1;
  }
  else {
    fVar12 = *(float *)(lVar9 + 0x2760) - (fVar12 + fVar12);
    local_d8 = *(ulong *)(PTR_DAT_04372370 + 0x30);
    uVar10 = *(ulong *)(PTR_DAT_04372370 + 0x20);
    iVar6 = 0;
    bVar4 = false;
    local_b4 = -1;
    uVar7 = local_d8;
    do {
      while( true ) {
        iVar2 = 0;
        if (iVar5 <= param_2 + iVar6) {
          iVar2 = iVar5;
        }
        iVar3 = (param_2 + iVar6) - iVar2;
        if ((iVar6 == iVar2) ||
           ((lVar9 = param_1 + (long)iVar3 * 4, fVar12 <= *(float *)(lVar9 + 0x2760) &&
            (((*(char *)(param_1 + iVar3 + 0x2b60) != '\0' ||
              (*(float *)(param_1 + (long)iVar3 * 4 + 0x2960) <=
               (float)*(undefined8 *)(param_1 + 0x60))) ||
             (FUN_001d2b94(param_1,iVar3), fVar12 <= *(float *)(lVar9 + 0x2760))))))) break;
LAB_001d31e8:
        iVar5 = *(int *)(param_1 + 0xd58);
        iVar6 = iVar6 + 1;
        if (iVar5 <= iVar6) goto LAB_001d33c4;
      }
      lVar9 = (long)iVar3;
      uVar8 = uVar10;
      if ((bVar4) &&
         (lVar1 = param_1 + lVar9 * 0x10, uVar11 = *(undefined8 *)(lVar1 + 0x1d60),
         fVar15 = (fVar20 * (float)uVar11 + fVar22 * (float)((ulong)uVar11 >> 0x20) +
                  fVar23 * (float)*(undefined8 *)(lVar1 + 0x1d68)) *
                  *(float *)(param_1 + lVar9 * 4 + 0x2560), uVar8 = (ulong)(uint)fVar15,
         fVar15 < (float)uVar7)) {
LAB_001d31e4:
        bVar4 = true;
        goto LAB_001d31e8;
      }
      FUN_001d2ebc(param_1,iVar3,&local_80,&local_90,local_a0);
      fVar15 = *(float *)(param_1 + lVar9 * 4 + 0x2560);
      fVar16 = (float)*(undefined8 *)(param_1 + 0x60) * fVar15;
      fVar19 = (float)((ulong)*(undefined8 *)(param_1 + 0x60) >> 0x20) * fVar15;
      uVar11 = CONCAT44(fVar15,fVar15);
      fVar13 = (float)local_a0[1];
      if (((0.0 <= (float)((ulong)local_a0[0] >> 0x20) + fVar19 &&
           0.0 <= (float)local_a0[0] + fVar16) && 0.0 <= fVar13 + fVar16) &&
          0.0 <= (float)((ulong)local_a0[1] >> 0x20) + fVar19) {
        uStack_c8 = uStack_88;
        local_d0 = local_90;
        if (iVar6 == iVar2) {
          local_b4 = param_2;
          break;
        }
        if (bVar4) {
          bVar4 = true;
        }
        else {
          lVar9 = param_1 + lVar9 * 0x10;
          uVar11 = *(undefined8 *)(lVar9 + 0x1d60);
          uVar8 = (ulong)(uint)(fVar15 * (fVar20 * (float)uVar11 +
                                          fVar22 * (float)((ulong)uVar11 >> 0x20) +
                                         fVar23 * (float)*(undefined8 *)(lVar9 + 0x1d68)));
          bVar4 = true;
        }
      }
      else {
        if (bVar4) goto LAB_001d31e4;
        uVar17 = NEON_fminp(local_a0[0],local_a0[0],4);
        bVar4 = false;
        uVar17 = NEON_fmin(CONCAT44(fVar13,fVar13),uVar17,4);
        uVar18 = NEON_frecpe(uVar11,4);
        uVar21 = NEON_frecps(uVar11,uVar18,4);
        fVar15 = (float)uVar18 * (float)uVar21;
        uVar11 = NEON_frecps(uVar11,CONCAT44((float)((ulong)uVar18 >> 0x20) *
                                             (float)((ulong)uVar21 >> 0x20),fVar15),4);
        fVar15 = (float)uVar17 * fVar15 * (float)uVar11;
        if (fVar15 <= (float)local_d8) goto LAB_001d31e8;
        uVar8 = uVar7;
        local_d8 = (ulong)(uint)fVar15;
      }
      uStack_c8 = uStack_88;
      local_d0 = local_90;
      iVar5 = *(int *)(param_1 + 0xd58);
      iVar6 = iVar6 + 1;
      uVar7 = uVar8;
      local_b4 = iVar3;
    } while (iVar6 < iVar5);
  }
LAB_001d33c4:
  *(int *)(param_1 + 0x4df0) = local_b4;
  *(uint *)(param_1 + 0x4de8) = (uint)(fVar24 < 0.0);
  *(undefined4 *)(param_1 + 0x4dec) = 3;
  *(ulong *)(param_1 + 0x4e08) = CONCAT44(fVar14,fVar23);
  *(ulong *)(param_1 + 0x4e00) = CONCAT44(fVar22,fVar20);
  *(float *)(param_1 + 0x4e10) = fVar24;
  *(undefined8 *)(param_1 + 0x4e28) = uStack_c8;
  *(undefined8 *)(param_1 + 20000) = local_d0;
  return;
}


