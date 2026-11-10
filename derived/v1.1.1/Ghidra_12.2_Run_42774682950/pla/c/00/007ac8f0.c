/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007ac8f0; name: FUN_007ac8f0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007ac8f0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char *pcVar6;
  
  pcVar6 = (char *)FUN_002e2e80(PTR_FUN_04373078,0x30);
  uVar2 = _UNK_03889a08;
  uVar1 = _DAT_03889a00;
  param_1[2] = pcVar6;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  pcVar6[0x2a] = '\0';
  uVar5 = s_nn_npln_hydro_v1_BulkDeleteConte_039aaae0._16_8_;
  uVar4 = s_nn_npln_hydro_v1_BulkDeleteConte_039aaae0._8_8_;
  uVar3 = s_nn_npln_hydro_v1_BulkDeleteConte_039aaae0._0_8_;
  uVar1 = CONCAT62(s_nn_npln_hydro_v1_BulkDeleteConte_039aaae0._26_6_,
                   s_nn_npln_hydro_v1_BulkDeleteConte_039aaae0._24_2_);
  uVar2 = CONCAT26(s_nn_npln_hydro_v1_BulkDeleteConte_039aaae0._32_2_,
                   s_nn_npln_hydro_v1_BulkDeleteConte_039aaae0._26_6_);
  *(undefined8 *)(pcVar6 + 0x22) = s_nn_npln_hydro_v1_BulkDeleteConte_039aaae0._34_8_;
  *(undefined8 *)(pcVar6 + 0x1a) = uVar2;
  *(undefined8 *)(pcVar6 + 8) = uVar4;
  *(undefined8 *)pcVar6 = uVar3;
  *(undefined8 *)(pcVar6 + 0x18) = uVar1;
  *(undefined8 *)(pcVar6 + 0x10) = uVar5;
  return;
}


