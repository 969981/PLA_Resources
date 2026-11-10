/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031a8a2c; name: FUN_031a8a2c
 */


void FUN_031a8a2c(long param_1,int param_2)

{
  long lVar1;
  undefined8 *puVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  int iVar14;
  undefined8 uVar15;
  int iVar16;
  float fVar17;
  undefined8 uVar18;
  float fVar19;
  undefined8 uVar20;
  undefined1 local_100 [8];
  float fStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  uint local_50;
  uint local_4c;
  undefined1 local_48 [16];
  
  local_48._0_8_ = 0;
  local_48._8_8_ = 0;
  puVar2 = (undefined8 *)(*(long *)(*(long *)(param_1 + 0x220) + 0x18) + (long)param_2 * 0x90);
  local_50 = *(uint *)(puVar2 + 0xe) >> 0x16;
  lVar1 = *(long *)(*(long *)(*(long *)(*(long *)(param_1 + 0x180) + 0x130) + 0x38) +
                   (ulong)local_50 * 0xf0);
  local_f0 = *(undefined8 *)(lVar1 + 0x60);
  uStack_e8 = *(undefined8 *)(lVar1 + 0x68);
  local_e0 = *(undefined8 *)(lVar1 + 0x70);
  uStack_d8 = *(undefined8 *)(lVar1 + 0x78);
  local_d0 = *(undefined8 *)(lVar1 + 0x80);
  uStack_c8 = *(undefined8 *)(lVar1 + 0x88);
  local_c0 = *(undefined8 *)(lVar1 + 0x90);
  uStack_b8 = *(undefined8 *)(lVar1 + 0x98);
  FUN_032cc45c(local_100,&local_f0,param_1 + 0x30);
  fVar3 = (float)*puVar2;
  fVar6 = fVar3 - (float)puVar2[2];
  fVar4 = (float)((ulong)*puVar2 >> 0x20);
  fVar7 = fVar4 - (float)((ulong)puVar2[2] >> 0x20);
  fVar8 = (float)puVar2[1] - (float)puVar2[3];
  fVar9 = local_100._0_4_;
  fVar3 = fVar3 - fVar9;
  fVar10 = local_100._4_4_;
  fVar4 = fVar4 - fVar10;
  fVar5 = (float)puVar2[1] - fStack_f8;
  fVar11 = fVar3 * fVar6;
  fVar12 = fVar4 * fVar7;
  fVar13 = fVar5 * fVar8;
  uVar15 = CONCAT44(fVar6 * fVar6 + fVar7 * fVar7 + fVar8 * fVar8,
                    fVar6 * fVar6 + fVar7 * fVar7 + fVar8 * fVar8);
  uVar18 = NEON_frecpe(uVar15,4);
  uVar20 = NEON_frecps(uVar15,uVar18,4);
  fVar17 = (float)uVar18 * (float)uVar20;
  fVar19 = (float)((ulong)uVar18 >> 0x20) * (float)((ulong)uVar20 >> 0x20);
  uVar15 = NEON_frecps(uVar15,CONCAT44(fVar19,fVar17),4);
  uVar18 = NEON_fmov(0x3f800000,4);
  uVar15 = NEON_fminnm(CONCAT44((fVar11 + fVar12 + fVar13) * fVar19 * (float)((ulong)uVar15 >> 0x20)
                                ,(fVar11 + fVar12 + fVar13) * fVar17 * (float)uVar15),uVar18,4);
  uVar15 = NEON_fmax(uVar15,0,4);
  fVar12 = (float)uVar15;
  fVar3 = fVar3 - fVar6 * fVar12;
  fVar4 = fVar4 - fVar7 * (float)((ulong)uVar15 >> 0x20);
  fVar5 = fVar5 - fVar8 * fVar12;
  fVar6 = fVar3 * fVar3 + fVar4 * fVar4 + fVar5 * fVar5;
  fVar8 = fVar3 * fVar3 + fVar4 * fVar4 + fVar5 * fVar5;
  uVar15 = CONCAT44(fVar8,fVar6);
  uVar18 = NEON_frsqrte(uVar15,4);
  fVar7 = (float)uVar18;
  fVar11 = (float)((ulong)uVar18 >> 0x20);
  uVar18 = NEON_frsqrts(uVar15,CONCAT44(fVar11 * fVar11,fVar7 * fVar7),4);
  fVar7 = fVar7 * (float)uVar18;
  fVar11 = fVar11 * (float)((ulong)uVar18 >> 0x20);
  iVar14 = -(uint)(fVar6 <= 0.0);
  iVar16 = -(uint)(fVar8 <= 0.0);
  uVar15 = NEON_frsqrts(uVar15,CONCAT44(fVar11 * fVar11,fVar7 * fVar7),4);
  fVar7 = (float)uVar15 * fVar7;
  fVar11 = (float)((ulong)uVar15 >> 0x20) * fVar11;
  fVar6 = (float)CONCAT13((byte)((uint)fVar7 >> 0x18) & ~(byte)((uint)iVar14 >> 0x18),
                          CONCAT12((byte)((uint)fVar7 >> 0x10) & ~(byte)((uint)iVar14 >> 0x10),
                                   CONCAT11((byte)((uint)fVar7 >> 8) & ~(byte)((uint)iVar14 >> 8),
                                            SUB41(fVar7,0) & ~(byte)iVar14)));
  local_70 = CONCAT44(fVar10 + fVar4 +
                      (fVar10 - (fVar10 + fVar4)) *
                      (float)(CONCAT17((byte)((uint)fVar11 >> 0x18) & ~(byte)((uint)iVar16 >> 0x18),
                                       CONCAT16((byte)((uint)fVar11 >> 0x10) &
                                                ~(byte)((uint)iVar16 >> 0x10),
                                                CONCAT15((byte)((uint)fVar11 >> 8) &
                                                         ~(byte)((uint)iVar16 >> 8),
                                                         CONCAT14(SUB41(fVar11,0) & ~(byte)iVar16,
                                                                  fVar6)))) >> 0x20) * 0.0,
                      fVar9 + fVar3 + (fVar9 - (fVar9 + fVar3)) * fVar6 * 0.0);
  uStack_68 = CONCAT44(fVar12,fStack_f8 + fVar5 + (fStack_f8 - (fStack_f8 + fVar5)) * fVar6 * 0.0);
  local_4c = *(uint *)(*(long *)(*(long *)(param_1 + 0x220) + 0x18) + (long)param_2 * 0x90 + 0x100)
             >> 0x16;
  uStack_a8 = puVar2[7];
  local_b0 = puVar2[6];
  uStack_98 = puVar2[9];
  local_a0 = puVar2[8];
  uStack_88 = puVar2[0xb];
  local_90 = puVar2[10];
  uStack_78 = puVar2[0xd];
  local_80 = puVar2[0xc];
  local_48 = FUN_03157d70(*(long *)(param_1 + 0x220),param_2);
  local_60 = CONCAT44((float)((ulong)*puVar2 >> 0x20) - (float)((ulong)puVar2[2] >> 0x20),
                      (float)*puVar2 - (float)puVar2[2]);
  uStack_58 = CONCAT44((float)((ulong)puVar2[1] >> 0x20) - (float)((ulong)puVar2[3] >> 0x20),
                       (float)puVar2[1] - (float)puVar2[3]);
  iVar16 = *(int *)(param_1 + 0x250);
  lVar1 = *(long *)(param_1 + 0x248);
  iVar14 = iVar16 + 1;
  if ((int)(*(uint *)(param_1 + 0x254) & 0x3fffffff) <= iVar16) {
    lVar1 = FUN_031aaf24(PTR_PTR_0434a080,iVar14);
    iVar16 = *(int *)(param_1 + 0x250);
    *(long *)(param_1 + 0x248) = lVar1;
  }
  lVar1 = lVar1 + (long)iVar16 * 0xa0;
  *(int *)(param_1 + 0x250) = iVar14;
  *(undefined8 *)(lVar1 + 0x90) = 0;
  *(undefined8 *)(lVar1 + 0x98) = 0x8000000000000000;
  FUN_031a8e7c(lVar1,&local_b0);
  return;
}


