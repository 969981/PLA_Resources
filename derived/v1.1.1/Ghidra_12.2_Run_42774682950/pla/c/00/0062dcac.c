/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0062dcac; name: FUN_0062dcac
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0062dcac(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char *pcVar6;
  
  pcVar6 = (char *)FUN_002e2e80(PTR_FUN_04373078,0x30);
  uVar2 = _UNK_03888dc8;
  uVar1 = _DAT_03888dc0;
  param_1[2] = pcVar6;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  pcVar6[0x2e] = '\0';
  uVar5 = s_nn_npln_friends_v1_SubscribeFrie_039aa895._16_8_;
  uVar4 = s_nn_npln_friends_v1_SubscribeFrie_039aa895._8_8_;
  uVar3 = s_nn_npln_friends_v1_SubscribeFrie_039aa895._0_8_;
  uVar1 = CONCAT26(s_nn_npln_friends_v1_SubscribeFrie_039aa895._30_2_,
                   s_nn_npln_friends_v1_SubscribeFrie_039aa895._24_6_);
  uVar2 = CONCAT62(s_nn_npln_friends_v1_SubscribeFrie_039aa895._32_6_,
                   s_nn_npln_friends_v1_SubscribeFrie_039aa895._30_2_);
  *(undefined8 *)(pcVar6 + 0x26) = s_nn_npln_friends_v1_SubscribeFrie_039aa895._38_8_;
  *(undefined8 *)(pcVar6 + 0x1e) = uVar2;
  *(undefined8 *)(pcVar6 + 8) = uVar4;
  *(undefined8 *)pcVar6 = uVar3;
  *(undefined8 *)(pcVar6 + 0x18) = uVar1;
  *(undefined8 *)(pcVar6 + 0x10) = uVar5;
  return;
}


