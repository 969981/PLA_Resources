/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001c7328; name: FUN_001c7328
 */


void FUN_001c7328(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  float fVar6;
  ulong uVar5;
  float fVar7;
  float fVar9;
  undefined8 uVar8;
  int iVar10;
  undefined8 uVar11;
  float fVar12;
  int iVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  float fVar20;
  float fVar21;
  ulong uVar22;
  
  puVar1 = PTR_DAT_04372370;
  fVar9 = (float)*param_1;
  fVar3 = (float)*(undefined8 *)(PTR_DAT_04372370 + 0x70);
  fVar16 = (float)((ulong)*(undefined8 *)(PTR_DAT_04372370 + 0x70) >> 0x20);
  fVar4 = (float)((ulong)*param_1 >> 0x20);
  fVar20 = (float)*(undefined8 *)(PTR_DAT_04372370 + 0x60);
  fVar7 = fVar3 * fVar9 - fVar20;
  fVar21 = (float)((ulong)*(undefined8 *)(PTR_DAT_04372370 + 0x60) >> 0x20);
  fVar9 = fVar16 * fVar9 - fVar21;
  fVar12 = fVar3 * fVar4 - fVar20;
  fVar14 = fVar16 * fVar4 - fVar21;
  fVar4 = fVar12 + fVar7;
  fVar6 = fVar14 + fVar9;
  fVar15 = fVar12 - fVar7;
  fVar14 = fVar14 - fVar9;
  fVar9 = (float)*(undefined8 *)(PTR_DAT_04372370 + 0x40);
  if (0.0 <= fVar12) {
    uVar18 = -(uint)(fVar15 <= fVar20);
    uVar5 = CONCAT44(fVar16 - fVar14,fVar3 - fVar15);
    uVar5 = uVar5 ^ (uVar5 ^ CONCAT44(fVar14,fVar15)) & CONCAT44(-(uint)(fVar14 <= fVar21),uVar18);
    uVar8 = NEON_frecpe(uVar5,4);
    uVar11 = NEON_frecps(uVar5,uVar8,4);
    fVar14 = (float)uVar8 * (float)uVar11;
    uVar8 = NEON_frecps(uVar5,CONCAT44((float)((ulong)uVar8 >> 0x20) *
                                       (float)((ulong)uVar11 >> 0x20),fVar14),4);
    fVar14 = (float)((uint)(fVar20 - fVar12) ^ ((uint)(fVar20 - fVar12) ^ (uint)fVar7) & uVar18) *
             fVar14 * (float)uVar8;
    uVar19 = -(uint)(fVar4 <= fVar20);
    uVar22 = CONCAT44(fVar16 - fVar6,fVar3 - fVar4);
    bVar2 = 0.0 <= fVar7;
    uVar22 = uVar22 ^ (uVar22 ^ CONCAT44(fVar6,fVar4)) & CONCAT44(-(uint)(fVar6 <= fVar21),uVar19);
    uVar8 = NEON_frecpe(uVar22,4);
    uVar17 = ((uint)fVar9 ^ (uint)fVar20) & uVar18;
    if (bVar2) {
      uVar17 = ((uint)fVar9 ^ (uint)fVar20) & uVar19;
    }
    fVar9 = (float)((uint)fVar9 ^ uVar17);
    if (bVar2) {
      uVar5 = uVar22;
    }
    uVar11 = NEON_frecps(uVar22,uVar8,4);
    fVar6 = (float)uVar8 * (float)uVar11;
    uVar8 = NEON_frecps(uVar22,CONCAT44((float)((ulong)uVar8 >> 0x20) *
                                        (float)((ulong)uVar11 >> 0x20),fVar6),4);
    fVar4 = fVar20 + (float)((uint)fVar14 ^ ((uint)fVar14 ^ (uint)-fVar14) & uVar18);
    if (bVar2) {
      fVar4 = (float)((uint)(fVar20 - fVar7) ^ ((uint)(fVar20 - fVar7) ^ (uint)fVar12) & uVar19) *
              fVar6 * (float)uVar8;
    }
  }
  else {
    fVar21 = (float)((ulong)*(undefined8 *)(PTR_DAT_04372370 + 0x40) >> 0x20);
    if (fVar7 < 0.0) {
      uVar17 = -(uint)(fVar9 <= fVar4);
      uVar5 = CONCAT44(fVar16 + fVar6,fVar3 + fVar4);
      uVar5 = uVar5 ^ (uVar5 ^ CONCAT44(-fVar6,-fVar4)) & CONCAT44(-(uint)(fVar21 <= fVar6),uVar17);
      fVar9 = (float)((uint)fVar9 ^ ((uint)fVar9 ^ (uint)fVar20) & uVar17);
      uVar8 = NEON_frecpe(uVar5,4);
      uVar11 = NEON_frecps(uVar5,uVar8,4);
      fVar4 = (float)uVar8 * (float)uVar11;
      uVar8 = NEON_frecps(uVar5,CONCAT44((float)((ulong)uVar8 >> 0x20) *
                                         (float)((ulong)uVar11 >> 0x20),fVar4),4);
      fVar4 = (float)((uint)(fVar20 + fVar7) ^ ((uint)(fVar20 + fVar7) ^ (uint)fVar12) & uVar17) *
              fVar4 * (float)uVar8;
      fVar4 = fVar3 + (float)((uint)fVar4 ^ ((uint)fVar4 ^ (uint)-fVar4) & uVar17);
    }
    else {
      uVar17 = -(uint)(fVar9 <= fVar15);
      uVar5 = CONCAT44(fVar16 + fVar14,fVar3 + fVar15);
      fVar9 = (float)((uint)fVar9 ^ ((uint)fVar9 ^ (uint)fVar20) & uVar17);
      uVar5 = uVar5 ^ (uVar5 ^ CONCAT44(-fVar14,-fVar15)) &
                      CONCAT44(-(uint)(fVar21 <= fVar14),uVar17);
      uVar8 = NEON_frecpe(uVar5,4);
      uVar11 = NEON_frecps(uVar5,uVar8,4);
      fVar4 = (float)uVar8 * (float)uVar11;
      uVar8 = NEON_frecps(uVar5,CONCAT44((float)((ulong)uVar8 >> 0x20) *
                                         (float)((ulong)uVar11 >> 0x20),fVar4),4);
      fVar4 = (float)((uint)(fVar20 + fVar12) ^ ((uint)(fVar20 + fVar12) ^ (uint)fVar7) & uVar17) *
              fVar4 * (float)uVar8 + (float)*(undefined8 *)(PTR_DAT_04372370 + 0x80);
    }
  }
  fVar6 = (float)uVar5;
  fVar7 = (float)(uVar5 >> 0x20);
  fVar3 = fVar3 - fVar6 * fVar6;
  uVar8 = CONCAT44(fVar16 - fVar7 * fVar7,fVar3);
  uVar11 = NEON_frsqrte(uVar8,4);
  fVar16 = (float)uVar11;
  fVar7 = (float)((ulong)uVar11 >> 0x20);
  uVar11 = NEON_frsqrts(uVar8,CONCAT44(fVar7 * fVar7,fVar16 * fVar16),4);
  fVar16 = fVar16 * (float)uVar11;
  fVar7 = fVar7 * (float)((ulong)uVar11 >> 0x20);
  uVar8 = NEON_frsqrts(uVar8,CONCAT44(fVar7 * fVar7,fVar16 * fVar16),4);
  iVar10 = -(uint)(fVar6 == 0.0);
  iVar13 = -(uint)(fVar3 <= 0.0);
  fVar3 = fVar3 * (float)uVar8 * fVar16;
  fVar7 = fVar6 * (float)CONCAT13((byte)((uint)fVar3 >> 0x18) & ~(byte)((uint)iVar13 >> 0x18),
                                  CONCAT12((byte)((uint)fVar3 >> 0x10) &
                                           ~(byte)((uint)iVar13 >> 0x10),
                                           CONCAT11((byte)((uint)fVar3 >> 8) &
                                                    ~(byte)((uint)iVar13 >> 8),
                                                    SUB41(fVar3,0) & ~(byte)iVar13)));
  fVar3 = (float)((uint)(fVar4 * *(float *)(PTR_DAT_04372370 + 0x370)) &
                 CONCAT13(~(byte)((uint)iVar10 >> 0x18),
                          CONCAT12(~(byte)((uint)iVar10 >> 0x10),
                                   CONCAT11(~(byte)((uint)iVar10 >> 8),~(byte)iVar10))));
  fVar16 = sinf(fVar3);
  fVar3 = cosf(fVar3);
  param_2[1] = CONCAT44(*(undefined4 *)(puVar1 + 0x50),fVar9 * (fVar20 - fVar6 * fVar6));
  *param_2 = CONCAT44(fVar16 * fVar7,fVar3 * fVar7);
  return;
}


