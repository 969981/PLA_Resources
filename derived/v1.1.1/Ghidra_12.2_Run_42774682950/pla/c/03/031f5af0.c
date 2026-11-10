/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031f5af0; name: FUN_031f5af0
 */


int FUN_031f5af0(undefined1 (*param_1) [16],undefined1 (*param_2) [16],undefined1 (*param_3) [16],
                undefined8 *param_4)

{
  char cVar1;
  ulong uVar2;
  float fVar3;
  undefined8 uVar4;
  float fVar7;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined8 local_50 [2];
  undefined8 local_38;
  
  cVar1 = param_1[1][8];
  uVar2 = FUN_031f6230();
  if ((uVar2 & 1) != 0) {
    uVar4 = NEON_fmov(0x3f800000,4);
    uVar4 = NEON_fminnm(local_38,uVar4,4);
    uVar4 = NEON_fmax(uVar4,0,4);
    fVar3 = (float)uVar4;
    fVar7 = (float)((ulong)uVar4 >> 0x20);
    if (fVar3 == (float)local_38) {
      auVar9._0_4_ = *(float *)*param_2 + fVar3 * (*(float *)*param_3 - *(float *)*param_2);
      auVar9._4_4_ = *(float *)(*param_2 + 4) +
                     fVar7 * (*(float *)(*param_3 + 4) - *(float *)(*param_2 + 4));
      auVar9._8_4_ = *(float *)(*param_2 + 8) +
                     fVar3 * (*(float *)(*param_3 + 8) - *(float *)(*param_2 + 8));
      auVar9._12_4_ =
           *(float *)(*param_2 + 0xc) +
           fVar7 * (*(float *)(*param_3 + 0xc) - *(float *)(*param_2 + 0xc));
      auVar9 = auVar9 ^ (auVar9 ^ *param_1) &
                        *(undefined1 (*) [16])
                         (PTR_DAT_043723a0 +
                         (ulong)(uint)(1 << (ulong)((int)cVar1 >> 1 & 0x1f)) * 0x10);
      FUN_031f5d88(param_1,local_50);
      auVar5._8_8_ = local_50[1];
      auVar5._0_8_ = local_50[0];
      auVar8._0_4_ = -(uint)(auVar9._0_4_ < (float)local_50[0]);
      auVar8._4_4_ = -(uint)(auVar9._4_4_ < SUB84(local_50[0],4));
      auVar8._8_4_ = -(uint)(auVar9._8_4_ < (float)local_50[1]);
      auVar8._12_4_ = -(uint)(auVar9._12_4_ < SUB84(local_50[1],4));
      auVar5 = NEON_fmax(*param_1,auVar5 ^ (auVar5 ^ auVar9) & auVar8,4);
      param_4[1] = auVar5._8_8_;
      *param_4 = auVar5._0_8_;
      return -(uint)(auVar5._8_4_ == auVar9._8_4_ &&
                    (auVar5._0_4_ == auVar9._0_4_ && auVar5._4_4_ == auVar9._4_4_));
    }
    auVar6._0_8_ = CONCAT44(-(uint)(fVar7 < (float)((ulong)local_38 >> 0x20)),
                            -(uint)(fVar3 < (float)local_38));
    auVar5 = *param_2;
    param_2 = (undefined1 (*) [16])local_50;
    auVar6._8_8_ = auVar6._0_8_;
    auVar5 = *param_3 ^ (*param_3 ^ auVar5) & auVar6;
    local_50[1] = auVar5._8_8_;
    local_50[0] = auVar5._0_8_;
  }
  FUN_031f61a0(param_1,param_2,param_4);
  return 0;
}


