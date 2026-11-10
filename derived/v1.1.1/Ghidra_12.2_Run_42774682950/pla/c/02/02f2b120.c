/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f2b120; name: FUN_02f2b120
 */


void FUN_02f2b120(undefined1 (*param_1) [16],uint param_2)

{
  undefined1 (*pauVar2) [16];
  undefined1 (*pauVar1) [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined4 uVar5;
  
  auVar4._8_4_ = 0x4f000000;
  auVar4._0_8_ = 0x4f0000004f000000;
  auVar4._12_4_ = 0x4f000000;
  auVar3._8_4_ = 0xcf000000;
  auVar3._0_8_ = 0xcf000000cf000000;
  auVar3._12_4_ = 0xcf000000;
  pauVar1 = param_1;
  do {
    pauVar2 = pauVar1 + 1;
    auVar4 = NEON_fmin(auVar4,*pauVar1,4);
    auVar3 = NEON_fmax(auVar3,*pauVar1,4);
    pauVar1 = pauVar2;
  } while (pauVar2 < param_1 + (param_2 >> 2));
  uVar5 = NEON_fminnm(auVar4._0_4_,auVar4._4_4_);
  uVar5 = NEON_fminnm(uVar5,auVar4._8_4_);
  NEON_fminnm(uVar5,auVar4._12_4_);
  return;
}


