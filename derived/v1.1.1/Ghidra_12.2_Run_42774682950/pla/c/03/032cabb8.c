/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032cabb8; name: FUN_032cabb8
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_032cabb8(float *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [12];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  float fVar15;
  float local_70;
  float local_60;
  
  uVar6 = *param_4;
  local_60 = (float)*param_3;
  fVar15 = (float)*param_2 * 0.5;
  fVar1 = sinf(fVar15);
  fVar15 = cosf(fVar15);
  local_70 = (float)uVar6;
  fVar2 = sinf(local_70 * 0.5);
  fVar3 = cosf(local_70 * 0.5);
  fVar4 = sinf(local_60 * 0.5);
  fVar5 = cosf(local_60 * 0.5);
  auVar11._4_4_ = fVar3;
  auVar11._0_4_ = fVar2;
  auVar11._8_4_ = fVar4;
  auVar11._12_4_ = fVar5;
  auVar7._8_8_ = _UNK_03889d38;
  auVar7._0_8_ = _DAT_03889d30;
  auVar8._8_8_ = _UNK_038895e8;
  auVar8._0_8_ = _DAT_038895e0;
  auVar7 = a64_TBL(ZEXT816(0),auVar11,auVar7);
  auVar8 = a64_TBL(ZEXT816(0),auVar11,auVar8);
  auVar9._8_8_ = _UNK_03889608;
  auVar9._0_8_ = _DAT_03889600;
  auVar9 = a64_TBL(ZEXT816(0),auVar11,auVar9);
  auVar12._8_8_ = _UNK_0388a3a8;
  auVar12._0_8_ = _DAT_0388a3a0;
  auVar13[4] = SUB41(fVar3,0);
  auVar13._0_4_ = fVar2;
  auVar13[5] = (char)((uint)fVar3 >> 8);
  auVar13[6] = (char)((uint)fVar3 >> 0x10);
  auVar13[7] = (char)((uint)fVar3 >> 0x18);
  auVar13[8] = SUB41(fVar4,0);
  auVar13[9] = (char)((uint)fVar4 >> 8);
  auVar13[10] = (char)((uint)fVar4 >> 0x10);
  auVar13[0xb] = (char)((uint)fVar4 >> 0x18);
  auVar13[0xc] = SUB41(fVar5,0);
  auVar13[0xd] = (char)((uint)fVar5 >> 8);
  auVar13[0xe] = (char)((uint)fVar5 >> 0x10);
  auVar13[0xf] = (char)((uint)fVar5 >> 0x18);
  auVar13 = a64_TBL(ZEXT816(0),auVar13,auVar12);
  fVar2 = (float)CONCAT13((byte)((ulong)*(undefined8 *)(PTR_DAT_04388880 + 0xc0) >> 0x18) & 0x80 ^
                          auVar13[3],auVar13._0_3_);
  auVar10._0_8_ =
       CONCAT17((byte)((ulong)*(undefined8 *)(PTR_DAT_04388880 + 0xc0) >> 0x38) & 0x80 ^ auVar13[7],
                CONCAT16(auVar13[6],CONCAT15(auVar13[5],CONCAT14(auVar13[4],fVar2))));
  auVar10[8] = auVar13[8];
  auVar10[9] = auVar13[9];
  auVar10[10] = auVar13[10];
  auVar10[0xb] = (byte)((ulong)*(undefined8 *)(PTR_DAT_04388880 + 200) >> 0x18) & 0x80 ^
                 auVar13[0xb];
  auVar14[0xc] = auVar13[0xc];
  auVar14._0_12_ = auVar10;
  auVar14[0xd] = auVar13[0xd];
  auVar14[0xe] = auVar13[0xe];
  auVar14[0xf] = (byte)((ulong)*(undefined8 *)(PTR_DAT_04388880 + 200) >> 0x38) & 0x80 ^
                 auVar13[0xf];
  param_1[2] = auVar7._8_4_ * auVar8._8_4_ * fVar15 + auVar9._8_4_ * auVar10._8_4_ * fVar1;
  param_1[3] = auVar7._12_4_ * auVar8._12_4_ * fVar15 + auVar9._12_4_ * auVar14._12_4_ * fVar1;
  *param_1 = auVar7._0_4_ * auVar8._0_4_ * fVar15 + auVar9._0_4_ * fVar2 * fVar1;
  param_1[1] = auVar7._4_4_ * auVar8._4_4_ * fVar15 +
               auVar9._4_4_ * (float)((ulong)auVar10._0_8_ >> 0x20) * fVar1;
  return;
}


