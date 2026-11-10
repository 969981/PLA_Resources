/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0068e558; name: FUN_0068e558
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0068e558(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char *pcVar5;
  
  pcVar5 = (char *)FUN_002e2e80(PTR_FUN_04373078,0x20);
  uVar4 = s_nn_npln_gamesync_v1_Document_0388d4d2._0_8_;
  uVar3 = _UNK_0388a478;
  uVar2 = _DAT_0388a470;
  uVar1 = CONCAT44(s_nn_npln_gamesync_v1_Document_0388d4d2._12_4_,
                   s_nn_npln_gamesync_v1_Document_0388d4d2._8_4_);
  param_1[2] = pcVar5;
  param_1[1] = uVar3;
  *param_1 = uVar2;
  uVar2 = CONCAT44(s_nn_npln_gamesync_v1_Document_0388d4d2._16_4_,
                   s_nn_npln_gamesync_v1_Document_0388d4d2._12_4_);
  *(undefined8 *)(pcVar5 + 0x14) = s_nn_npln_gamesync_v1_Document_0388d4d2._20_8_;
  *(undefined8 *)(pcVar5 + 0xc) = uVar2;
  *(undefined8 *)(pcVar5 + 8) = uVar1;
  *(undefined8 *)pcVar5 = uVar4;
  pcVar5[0x1c] = '\0';
  return;
}


