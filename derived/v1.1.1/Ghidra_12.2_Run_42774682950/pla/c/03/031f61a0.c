/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031f61a0; name: FUN_031f61a0
 */


void FUN_031f61a0(undefined1 (*param_1) [16],undefined1 (*param_2) [16],undefined8 *param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auStack_30 [16];
  
  if (param_1[1][8] == 0xff) {
    auVar1 = *param_1;
  }
  else {
    auVar2 = *param_2 ^
             (*param_2 ^ *param_1) &
             *(undefined1 (*) [16])
              (PTR_DAT_043723a0 +
              (ulong)(uint)(1 << (ulong)((int)((uint)(byte)param_1[1][8] << 0x18) >> 0x19 & 0x1f)) *
              0x10);
    FUN_031f5d88(param_1,auStack_30);
    auVar1._0_4_ = -(uint)(auVar2._0_4_ < auStack_30._0_4_);
    auVar1._4_4_ = -(uint)(auVar2._4_4_ < auStack_30._4_4_);
    auVar1._8_4_ = -(uint)(auVar2._8_4_ < auStack_30._8_4_);
    auVar1._12_4_ = -(uint)(auVar2._12_4_ < auStack_30._12_4_);
    auVar1 = NEON_fmax(*param_1,auStack_30 ^ (auStack_30 ^ auVar2) & auVar1,4);
  }
  param_3[1] = auVar1._8_8_;
  *param_3 = auVar1._0_8_;
  return;
}


