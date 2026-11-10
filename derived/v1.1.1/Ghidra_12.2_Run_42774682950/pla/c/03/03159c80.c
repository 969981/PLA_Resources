/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03159c80; name: FUN_03159c80
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_03159c80(byte *param_1,undefined1 (*param_2) [16])

{
  byte bVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  
  bVar1 = *param_1;
  if (CONCAT31(0,bVar1) != 0) {
    auVar6[4] = bVar1;
    auVar6._0_4_ = CONCAT31(0,bVar1);
    auVar6._5_3_ = 0;
    auVar6[8] = bVar1;
    auVar6._9_3_ = 0;
    auVar6[0xc] = bVar1;
    auVar6._13_3_ = 0;
    auVar8._8_8_ = _UNK_038896d8;
    auVar8._0_8_ = _DAT_038896d0;
    auVar3 = *param_2;
    auVar9 = NEON_ushl(auVar8,auVar6,4);
    auVar2._8_8_ = _UNK_03889f38;
    auVar2._0_8_ = _DAT_03889f30;
    auVar4._8_8_ = _UNK_03889f28;
    auVar4._0_8_ = _DAT_03889f20;
    auVar5._8_4_ = (int)_UNK_0388a548;
    auVar5._0_8_ = _DAT_0388a540;
    auVar5._12_4_ = (int)((ulong)_UNK_0388a548 >> 0x20);
    auVar7 = NEON_ushl(auVar5,auVar6,4);
    auVar2 = a64_TBL(ZEXT816(0),auVar3,auVar2);
    auVar10._0_4_ = -(uint)(-1 < auVar9._0_4_);
    auVar10._4_4_ = -(uint)(-1 < auVar9._4_4_);
    auVar10._8_4_ = -(uint)(-1 < auVar9._8_4_);
    auVar10._12_4_ = -(uint)(-1 < auVar9._8_8_);
    auVar5 = a64_TBL(ZEXT816(0),auVar3,auVar4);
    auVar9._0_4_ = -(uint)(-1 < auVar7._0_4_);
    auVar9._4_4_ = -(uint)(-1 < auVar7._4_4_);
    auVar9._8_4_ = -(uint)(-1 < auVar7._8_4_);
    auVar9._12_4_ = -(uint)(-1 < auVar7._12_4_);
    auVar5 = auVar5 ^ (auVar5 ^ auVar2 ^ (auVar2 ^ auVar3) & auVar10) & auVar9;
    *(long *)(*param_2 + 8) = auVar5._8_8_;
    *(long *)*param_2 = auVar5._0_8_;
    auVar7._8_8_ = _UNK_0388a208;
    auVar7._0_8_ = _DAT_0388a200;
    auVar3._0_4_ = -(uint)*param_1;
    auVar3._4_4_ = auVar3._0_4_;
    auVar3._8_4_ = auVar3._0_4_;
    auVar3._12_4_ = auVar3._0_4_;
    auVar3 = NEON_ushl(auVar7,auVar3,4);
    (*param_2)[8] = auVar5[8];
    (*param_2)[9] = auVar5[9];
    (*param_2)[10] = auVar5[10];
    (*param_2)[0xb] = (byte)((uint)(auVar3._8_4_ << 0x1f) >> 0x18) ^ auVar5[0xb];
    (*param_2)[0xc] = auVar5[0xc];
    (*param_2)[0xd] = auVar5[0xd];
    (*param_2)[0xe] = auVar5[0xe];
    (*param_2)[0xf] = (byte)((uint)(auVar3._12_4_ << 0x1f) >> 0x18) ^ auVar5[0xf];
    (*param_2)[0] = auVar5[0];
    (*param_2)[1] = auVar5[1];
    (*param_2)[2] = auVar5[2];
    (*param_2)[3] = (byte)((uint)(auVar3._0_4_ << 0x1f) >> 0x18) ^ auVar5[3];
    (*param_2)[4] = auVar5[4];
    (*param_2)[5] = auVar5[5];
    (*param_2)[6] = auVar5[6];
    (*param_2)[7] = (byte)((uint)(auVar3._4_4_ << 0x1f) >> 0x18) ^ auVar5[7];
  }
  return;
}


