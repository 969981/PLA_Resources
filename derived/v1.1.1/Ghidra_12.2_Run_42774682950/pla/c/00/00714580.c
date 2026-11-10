/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00714580; name: FUN_00714580
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00714580(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  char *pcVar7;
  
  pcVar7 = (char *)FUN_002e2e80(PTR_FUN_04373078,0x40);
  uVar3 = _UNK_03889cd8;
  uVar2 = _DAT_03889cd0;
  uVar1 = CONCAT53(s_nn_npln_matchmaking_v1_CreateMat_039120b5._48_5_,
                   s_nn_npln_matchmaking_v1_CreateMat_039120b5._45_3_);
  param_1[2] = pcVar7;
  param_1[1] = uVar3;
  *param_1 = uVar2;
  *(undefined8 *)(pcVar7 + 0x2d) = uVar1;
  uVar5 = s_nn_npln_matchmaking_v1_CreateMat_039120b5._24_8_;
  uVar4 = s_nn_npln_matchmaking_v1_CreateMat_039120b5._16_8_;
  uVar3 = s_nn_npln_matchmaking_v1_CreateMat_039120b5._8_8_;
  uVar2 = s_nn_npln_matchmaking_v1_CreateMat_039120b5._0_8_;
  pcVar7[0x35] = '\0';
  uVar6 = s_nn_npln_matchmaking_v1_CreateMat_039120b5._32_8_;
  uVar1 = CONCAT35(s_nn_npln_matchmaking_v1_CreateMat_039120b5._45_3_,
                   s_nn_npln_matchmaking_v1_CreateMat_039120b5._40_5_);
  *(undefined8 *)(pcVar7 + 0x18) = uVar5;
  *(undefined8 *)(pcVar7 + 0x10) = uVar4;
  *(undefined8 *)(pcVar7 + 0x28) = uVar1;
  *(undefined8 *)(pcVar7 + 0x20) = uVar6;
  *(undefined8 *)(pcVar7 + 8) = uVar3;
  *(undefined8 *)pcVar7 = uVar2;
  return;
}


