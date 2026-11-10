/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0058e710; name: FUN_0058e710
 */


undefined8 FUN_0058e710(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char *pcVar6;
  undefined8 *in_x5;
  code *UNRECOVERED_JUMPTABLE;
  
  if (((param_1 != (long *)0x0) && (*param_1 != 0)) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 8), UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0058e734. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar5 = (*UNRECOVERED_JUMPTABLE)();
    return uVar5;
  }
  if (in_x5 != (undefined8 *)0x0) {
    pcVar6 = (char *)FUN_002ebd50(0x3e);
    *in_x5 = pcVar6;
    uVar5 = CONCAT62(s_crypter_or_crypter_>vtable_has_n_03985f70._48_6_,
                     s_crypter_or_crypter_>vtable_has_n_03985f70._46_2_);
    *(undefined8 *)(pcVar6 + 0x36) = s_crypter_or_crypter_>vtable_has_n_03985f70._54_8_;
    *(undefined8 *)(pcVar6 + 0x2e) = uVar5;
    uVar4 = s_crypter_or_crypter_>vtable_has_n_03985f70._32_8_;
    uVar3 = s_crypter_or_crypter_>vtable_has_n_03985f70._16_8_;
    uVar2 = s_crypter_or_crypter_>vtable_has_n_03985f70._8_8_;
    uVar1 = s_crypter_or_crypter_>vtable_has_n_03985f70._0_8_;
    uVar5 = CONCAT26(s_crypter_or_crypter_>vtable_has_n_03985f70._46_2_,
                     s_crypter_or_crypter_>vtable_has_n_03985f70._40_6_);
    *(undefined8 *)(pcVar6 + 0x18) = s_crypter_or_crypter_>vtable_has_n_03985f70._24_8_;
    *(undefined8 *)(pcVar6 + 0x10) = uVar3;
    *(undefined8 *)(pcVar6 + 0x28) = uVar5;
    *(undefined8 *)(pcVar6 + 0x20) = uVar4;
    *(undefined8 *)(pcVar6 + 8) = uVar2;
    *(undefined8 *)pcVar6 = uVar1;
  }
  return 3;
}


