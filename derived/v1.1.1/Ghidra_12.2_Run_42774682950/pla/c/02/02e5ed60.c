/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e5ed60; name: FUN_02e5ed60
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02e5ed60(long param_1,undefined8 *param_2,undefined1 (*param_3) [16],undefined8 param_4)

{
  int iVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  if ((DAT_04409e30 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(&DAT_04409e30);
    if (iVar1 != 0) {
      auVar2 = NEON_fmov(0x3f800000,4);
      uRam0000000004409e28 = auVar2._8_8_;
      _DAT_04409e20 = auVar2._0_8_;
      __cxa_guard_release(&DAT_04409e30);
    }
  }
  local_40 = *param_2;
  uStack_38 = param_2[1];
  auVar2 = *param_3;
  local_48 = 0x7f7fffff;
  uStack_44 = 0;
  auVar3 = NEON_frecpe(auVar2,4);
  auVar5 = NEON_frecps(auVar2,auVar3,4);
  auVar4._0_8_ = CONCAT44(auVar3._4_4_ * (float)((ulong)_DAT_04409e20 >> 0x20) * auVar5._4_4_,
                          auVar3._0_4_ * (float)_DAT_04409e20 * auVar5._0_4_);
  auVar4._8_4_ = auVar3._8_4_ * (float)uRam0000000004409e28 * auVar5._8_4_;
  auVar4._12_4_ = auVar3._12_4_ * (float)((ulong)uRam0000000004409e28 >> 0x20) * auVar5._12_4_;
  uStack_28 = auVar2._8_8_;
  local_30 = auVar2._0_8_;
  uStack_18 = auVar4._8_8_;
  uStack_20 = auVar4._0_8_;
  FUN_02e62d78(param_1,*(undefined8 *)(param_1 + 8),&local_40,&uStack_44,param_4,&local_48);
  return;
}


