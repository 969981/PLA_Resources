/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002af484; name: FUN_002af484
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_002af484(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  char *pcVar7;
  
  pcVar7 = (char *)FUN_002e2e80(PTR_FUN_04373078,0x40);
  uVar1 = _DAT_0388a240;
  param_1[1] = _UNK_0388a248;
  *param_1 = uVar1;
  param_1[2] = pcVar7;
  pcVar7[0x30] = 'e';
  uVar4 = s_nn_npln_auth_v1_IssuePrearranged_039a8232._24_8_;
  uVar3 = s_nn_npln_auth_v1_IssuePrearranged_039a8232._16_8_;
  uVar2 = s_nn_npln_auth_v1_IssuePrearranged_039a8232._8_8_;
  uVar1 = s_nn_npln_auth_v1_IssuePrearranged_039a8232._0_8_;
  pcVar7[0x31] = '\0';
  uVar6 = s_nn_npln_auth_v1_IssuePrearranged_039a8232._40_8_;
  uVar5 = s_nn_npln_auth_v1_IssuePrearranged_039a8232._32_8_;
  *(undefined8 *)(pcVar7 + 0x18) = uVar4;
  *(undefined8 *)(pcVar7 + 0x10) = uVar3;
  *(undefined8 *)(pcVar7 + 0x28) = uVar6;
  *(undefined8 *)(pcVar7 + 0x20) = uVar5;
  *(undefined8 *)(pcVar7 + 8) = uVar2;
  *(undefined8 *)pcVar7 = uVar1;
  return;
}


