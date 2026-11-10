/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007123dc; name: FUN_007123dc
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007123dc(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  char *pcVar8;
  
  pcVar8 = (char *)FUN_002e2e80(PTR_FUN_04373078,0x40);
  uVar2 = _UNK_03889138;
  uVar1 = _DAT_03889130;
  param_1[2] = pcVar8;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  pcVar8[0x3c] = '\0';
  uVar7 = s_nn_npln_matchmaking_v1_ListLaten_039aa989._32_8_;
  uVar6 = s_nn_npln_matchmaking_v1_ListLaten_039aa989._24_8_;
  uVar5 = s_nn_npln_matchmaking_v1_ListLaten_039aa989._16_8_;
  uVar4 = s_nn_npln_matchmaking_v1_ListLaten_039aa989._8_8_;
  uVar3 = s_nn_npln_matchmaking_v1_ListLaten_039aa989._0_8_;
  uVar1 = CONCAT44(s_nn_npln_matchmaking_v1_ListLaten_039aa989._44_4_,
                   s_nn_npln_matchmaking_v1_ListLaten_039aa989._40_4_);
  uVar2 = CONCAT44(s_nn_npln_matchmaking_v1_ListLaten_039aa989._48_4_,
                   s_nn_npln_matchmaking_v1_ListLaten_039aa989._44_4_);
  *(undefined8 *)(pcVar8 + 0x34) = s_nn_npln_matchmaking_v1_ListLaten_039aa989._52_8_;
  *(undefined8 *)(pcVar8 + 0x2c) = uVar2;
  *(undefined8 *)(pcVar8 + 0x18) = uVar6;
  *(undefined8 *)(pcVar8 + 0x10) = uVar5;
  *(undefined8 *)(pcVar8 + 0x28) = uVar1;
  *(undefined8 *)(pcVar8 + 0x20) = uVar7;
  *(undefined8 *)(pcVar8 + 8) = uVar4;
  *(undefined8 *)pcVar8 = uVar3;
  return;
}


