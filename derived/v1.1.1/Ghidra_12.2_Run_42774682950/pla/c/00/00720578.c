/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00720578; name: FUN_00720578
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00720578(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char *pcVar5;
  
  pcVar5 = (char *)FUN_002e2e80(PTR_FUN_04373078,0x30);
  uVar1 = _DAT_03889b60;
  param_1[1] = _UNK_03889b68;
  *param_1 = uVar1;
  param_1[2] = pcVar5;
  pcVar5[0x20] = 'e';
  uVar4 = s_nn_npln_matchmaking_v1_Acceptanc_038b5a44._24_8_;
  uVar3 = s_nn_npln_matchmaking_v1_Acceptanc_038b5a44._16_8_;
  uVar2 = s_nn_npln_matchmaking_v1_Acceptanc_038b5a44._8_8_;
  uVar1 = s_nn_npln_matchmaking_v1_Acceptanc_038b5a44._0_8_;
  pcVar5[0x21] = '\0';
  *(undefined8 *)(pcVar5 + 8) = uVar2;
  *(undefined8 *)pcVar5 = uVar1;
  *(undefined8 *)(pcVar5 + 0x18) = uVar4;
  *(undefined8 *)(pcVar5 + 0x10) = uVar3;
  return;
}


