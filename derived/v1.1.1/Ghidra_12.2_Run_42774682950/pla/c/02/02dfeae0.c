/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02dfeae0; name: FUN_02dfeae0
 */


void FUN_02dfeae0(uint param_1,long param_2,long param_3,long param_4,long param_5)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auVar15 [16];
  undefined1 local_90 [16];
  undefined1 auStack_80 [16];
  float local_70 [4];
  undefined1 auStack_60 [16];
  undefined8 local_50;
  undefined8 uStack_48;
  
  FUN_02dfebd0(param_2,&local_50,auStack_60,local_70,auStack_80,local_90);
  if (param_1 != 0) {
    fVar9 = local_70[2];
    fVar10 = local_70[3];
    fVar8 = local_70[1];
    uVar4 = 0;
    do {
      fVar11 = local_70[0] * 512.0;
      fVar12 = fVar8 * 512.0;
      fVar13 = fVar9 * 512.0;
      fVar14 = fVar10 * 512.0;
      uVar1 = (int)uVar4 + 4;
      auVar15._4_4_ = fVar8;
      auVar15._0_4_ = local_70[0];
      auVar15._8_4_ = fVar9;
      auVar15._12_4_ = fVar10;
      auVar15 = NEON_fcvtzs(auVar15,9,4);
      lVar5 = uVar4 * 4;
      fVar6 = (float)((ulong)local_50 >> 0x20);
      fVar7 = (float)((ulong)uStack_48 >> 0x20);
      local_70[0] = local_70[0] + local_90._0_4_ + auStack_80._0_4_ * (float)local_50;
      fVar8 = fVar8 + local_90._4_4_ + auStack_80._4_4_ * fVar6;
      fVar9 = fVar9 + local_90._8_4_ + auStack_80._8_4_ * (float)uStack_48;
      fVar10 = fVar10 + local_90._12_4_ + auStack_80._12_4_ * fVar7;
      local_50 = CONCAT44(fVar6 + auStack_60._4_4_,(float)local_50 + auStack_60._0_4_);
      uStack_48 = CONCAT44(fVar7 + auStack_60._12_4_,(float)uStack_48 + auStack_60._8_4_);
      ((undefined8 *)(param_3 + lVar5))[1] = auVar15._8_8_;
      *(undefined8 *)(param_3 + lVar5) = auVar15._0_8_;
      local_70[0] = local_70[0] - (float)(int)local_70[0];
      fVar8 = fVar8 - (float)(int)fVar8;
      fVar9 = fVar9 - (float)(int)fVar9;
      fVar10 = fVar10 - (float)(int)fVar10;
      iVar2 = auVar15._4_4_ + 1;
      iVar3 = auVar15._12_4_ + 1;
      ((ulong *)(param_4 + lVar5))[1] =
           (ulong)(CONCAT15((char)((uint)iVar3 >> 8),
                            CONCAT14((char)iVar3,(uint)(auVar15._8_2_ + 1U & 0x1ff))) &
                  0x1ffffffffff);
      *(ulong *)(param_4 + lVar5) =
           (ulong)(CONCAT15((char)((uint)iVar2 >> 8),
                            CONCAT14((char)iVar2,(uint)(auVar15._0_2_ + 1U & 0x1ff))) &
                  0x1ffffffffff);
      ((undefined8 *)(param_5 + lVar5))[1] =
           CONCAT44(fVar14 - (float)(int)fVar14,fVar13 - (float)(int)fVar13);
      *(undefined8 *)(param_5 + lVar5) =
           CONCAT44(fVar12 - (float)(int)fVar12,fVar11 - (float)(int)fVar11);
      uVar4 = (ulong)uVar1;
    } while (uVar1 < param_1);
  }
  *(float *)(param_2 + 0x14) = local_70[0];
  return;
}


