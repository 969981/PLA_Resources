/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0071a9d4; name: FUN_0071a9d4
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0071a9d4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char *pcVar5;
  
  pcVar5 = (char *)FUN_002e2e80(PTR_FUN_04373078,0x30);
  uVar3 = s_nn_npln_matchmaking_v1_Matchmaki_0394bee5._32_8_;
  uVar2 = _UNK_03888ea8;
  uVar1 = _DAT_03888ea0;
  param_1[2] = pcVar5;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  *(undefined8 *)(pcVar5 + 0x20) = uVar3;
  uVar4 = s_nn_npln_matchmaking_v1_Matchmaki_0394bee5._24_8_;
  uVar3 = s_nn_npln_matchmaking_v1_Matchmaki_0394bee5._16_8_;
  uVar2 = s_nn_npln_matchmaking_v1_Matchmaki_0394bee5._8_8_;
  uVar1 = s_nn_npln_matchmaking_v1_Matchmaki_0394bee5._0_8_;
  pcVar5[0x28] = '\0';
  *(undefined8 *)(pcVar5 + 8) = uVar2;
  *(undefined8 *)pcVar5 = uVar1;
  *(undefined8 *)(pcVar5 + 0x18) = uVar4;
  *(undefined8 *)(pcVar5 + 0x10) = uVar3;
  return;
}


