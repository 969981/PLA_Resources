/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e4c480; name: FUN_02e4c480
 */


undefined4
FUN_02e4c480(long param_1,undefined8 *param_2,undefined1 (*param_3) [16],undefined8 param_4,
            uint param_5)

{
  undefined *puVar1;
  int iVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined4 local_44;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  if (*(long *)(param_1 + 8) == 0) {
    local_44 = 0;
  }
  else {
    if ((*PTR_DAT_04388628 & 1) == 0) {
      iVar2 = __cxa_guard_acquire(PTR_DAT_04388628);
      puVar1 = PTR_DAT_04388630;
      if (iVar2 != 0) {
        auVar3 = NEON_fmov(0x3f800000,4);
        *(long *)(PTR_DAT_04388630 + 8) = auVar3._8_8_;
        *(long *)puVar1 = auVar3._0_8_;
        __cxa_guard_release(PTR_DAT_04388628);
      }
    }
    local_40 = *param_2;
    uStack_38 = param_2[1];
    auVar3 = *param_3;
    local_44 = 0;
    auVar4 = NEON_frecpe(auVar3,4);
    auVar6 = NEON_frecps(auVar3,auVar4,4);
    auVar5._0_8_ = CONCAT44(auVar4._4_4_ * (float)((ulong)*(undefined8 *)PTR_DAT_04388630 >> 0x20) *
                            auVar6._4_4_,
                            auVar4._0_4_ * (float)*(undefined8 *)PTR_DAT_04388630 * auVar6._0_4_);
    auVar5._8_4_ = auVar4._8_4_ * (float)*(undefined8 *)(PTR_DAT_04388630 + 8) * auVar6._8_4_;
    auVar5._12_4_ =
         auVar4._12_4_ * (float)((ulong)*(undefined8 *)(PTR_DAT_04388630 + 8) >> 0x20) *
         auVar6._12_4_;
    uStack_28 = auVar3._8_8_;
    local_30 = auVar3._0_8_;
    uStack_18 = auVar5._8_8_;
    uStack_20 = auVar5._0_8_;
    FUN_02e4dea0(param_1,*(undefined8 *)(param_1 + 8),&local_40,&local_44,param_4,param_5 & 1);
  }
  return local_44;
}


