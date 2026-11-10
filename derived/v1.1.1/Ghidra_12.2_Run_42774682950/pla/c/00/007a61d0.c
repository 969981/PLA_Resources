/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007a61d0; name: FUN_007a61d0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007a61d0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char *pcVar5;
  
  pcVar5 = (char *)FUN_002e2e80(PTR_FUN_04373078,0x30);
  uVar3 = _UNK_03889458;
  uVar2 = _DAT_03889450;
  uVar1 = CONCAT62(s_nn_npln_hydro_v1_SearchContentRe_0397324c._32_6_,
                   s_nn_npln_hydro_v1_SearchContentRe_0397324c._30_2_);
  param_1[2] = pcVar5;
  param_1[1] = uVar3;
  *param_1 = uVar2;
  *(undefined8 *)(pcVar5 + 0x1e) = uVar1;
  uVar4 = s_nn_npln_hydro_v1_SearchContentRe_0397324c._16_8_;
  uVar3 = s_nn_npln_hydro_v1_SearchContentRe_0397324c._8_8_;
  uVar2 = s_nn_npln_hydro_v1_SearchContentRe_0397324c._0_8_;
  uVar1 = CONCAT26(s_nn_npln_hydro_v1_SearchContentRe_0397324c._30_2_,
                   s_nn_npln_hydro_v1_SearchContentRe_0397324c._24_6_);
  pcVar5[0x26] = '\0';
  *(undefined8 *)(pcVar5 + 8) = uVar3;
  *(undefined8 *)pcVar5 = uVar2;
  *(undefined8 *)(pcVar5 + 0x18) = uVar1;
  *(undefined8 *)(pcVar5 + 0x10) = uVar4;
  return;
}


