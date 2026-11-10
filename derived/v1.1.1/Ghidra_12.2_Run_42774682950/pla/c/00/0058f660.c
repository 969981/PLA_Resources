/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0058f660; name: FUN_0058f660
 */


undefined8 FUN_0058f660(long *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char *pcVar6;
  code *UNRECOVERED_JUMPTABLE;
  
  if (((param_1 != (long *)0x0) && (*param_1 != 0)) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x30), UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0058f684. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar5 = (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3);
    return uVar5;
  }
  if (param_3 != (undefined8 *)0x0) {
    pcVar6 = (char *)FUN_002ebd50(0x3d);
    *param_3 = pcVar6;
    uVar5 = CONCAT53(s_crypter_or_crypter_>vtable_has_n_039aa341._48_5_,
                     s_crypter_or_crypter_>vtable_has_n_039aa341._45_3_);
    *(undefined8 *)(pcVar6 + 0x35) = s_crypter_or_crypter_>vtable_has_n_039aa341._53_8_;
    *(undefined8 *)(pcVar6 + 0x2d) = uVar5;
    uVar4 = s_crypter_or_crypter_>vtable_has_n_039aa341._32_8_;
    uVar3 = s_crypter_or_crypter_>vtable_has_n_039aa341._16_8_;
    uVar2 = s_crypter_or_crypter_>vtable_has_n_039aa341._8_8_;
    uVar1 = s_crypter_or_crypter_>vtable_has_n_039aa341._0_8_;
    uVar5 = CONCAT35(s_crypter_or_crypter_>vtable_has_n_039aa341._45_3_,
                     s_crypter_or_crypter_>vtable_has_n_039aa341._40_5_);
    *(undefined8 *)(pcVar6 + 0x18) = s_crypter_or_crypter_>vtable_has_n_039aa341._24_8_;
    *(undefined8 *)(pcVar6 + 0x10) = uVar3;
    *(undefined8 *)(pcVar6 + 0x28) = uVar5;
    *(undefined8 *)(pcVar6 + 0x20) = uVar4;
    *(undefined8 *)(pcVar6 + 8) = uVar2;
    *(undefined8 *)pcVar6 = uVar1;
  }
  return 3;
}


