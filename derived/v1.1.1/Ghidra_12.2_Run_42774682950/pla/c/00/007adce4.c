/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007adce4; name: FUN_007adce4
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007adce4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char *pcVar6;
  
  pcVar6 = (char *)FUN_002e2e80(PTR_FUN_04373078,0x30);
  uVar2 = _UNK_03889fe8;
  uVar1 = _DAT_03889fe0;
  param_1[2] = pcVar6;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  pcVar6[0x2d] = '\0';
  uVar5 = s_nn_npln_hydro_v1_BulkTransformCo_039a2d21._16_8_;
  uVar4 = s_nn_npln_hydro_v1_BulkTransformCo_039a2d21._8_8_;
  uVar3 = s_nn_npln_hydro_v1_BulkTransformCo_039a2d21._0_8_;
  uVar1 = CONCAT35(s_nn_npln_hydro_v1_BulkTransformCo_039a2d21._29_3_,
                   s_nn_npln_hydro_v1_BulkTransformCo_039a2d21._24_5_);
  uVar2 = CONCAT53(s_nn_npln_hydro_v1_BulkTransformCo_039a2d21._32_5_,
                   s_nn_npln_hydro_v1_BulkTransformCo_039a2d21._29_3_);
  *(undefined8 *)(pcVar6 + 0x25) = s_nn_npln_hydro_v1_BulkTransformCo_039a2d21._37_8_;
  *(undefined8 *)(pcVar6 + 0x1d) = uVar2;
  *(undefined8 *)(pcVar6 + 8) = uVar4;
  *(undefined8 *)pcVar6 = uVar3;
  *(undefined8 *)(pcVar6 + 0x18) = uVar1;
  *(undefined8 *)(pcVar6 + 0x10) = uVar5;
  return;
}


