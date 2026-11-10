/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0068a86c; name: FUN_0068a86c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0068a86c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char *pcVar6;
  
  pcVar6 = (char *)FUN_002e2e80(PTR_FUN_04373078,0x30);
  uVar2 = _UNK_0388a188;
  uVar1 = _DAT_0388a180;
  param_1[2] = pcVar6;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  pcVar6[0x2b] = '\0';
  uVar5 = s_nn_npln_gamesync_v1_KeepUserSess_039696d9._16_8_;
  uVar4 = s_nn_npln_gamesync_v1_KeepUserSess_039696d9._8_8_;
  uVar3 = s_nn_npln_gamesync_v1_KeepUserSess_039696d9._0_8_;
  uVar1 = CONCAT53(s_nn_npln_gamesync_v1_KeepUserSess_039696d9._27_5_,
                   s_nn_npln_gamesync_v1_KeepUserSess_039696d9._24_3_);
  uVar2 = CONCAT35(s_nn_npln_gamesync_v1_KeepUserSess_039696d9._32_3_,
                   s_nn_npln_gamesync_v1_KeepUserSess_039696d9._27_5_);
  *(undefined8 *)(pcVar6 + 0x23) = s_nn_npln_gamesync_v1_KeepUserSess_039696d9._35_8_;
  *(undefined8 *)(pcVar6 + 0x1b) = uVar2;
  *(undefined8 *)(pcVar6 + 8) = uVar4;
  *(undefined8 *)pcVar6 = uVar3;
  *(undefined8 *)(pcVar6 + 0x18) = uVar1;
  *(undefined8 *)(pcVar6 + 0x10) = uVar5;
  return;
}


