/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0062d0c0; name: FUN_0062d0c0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0062d0c0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char *pcVar5;
  
  pcVar5 = (char *)FUN_002e2e80(PTR_FUN_04373078,0x30);
  uVar3 = _UNK_03889b88;
  uVar2 = _DAT_03889b80;
  uVar1 = CONCAT71(s_nn_npln_friends_v1_ActivateUserR_03955659._32_7_,
                   s_nn_npln_friends_v1_ActivateUserR_03955659[0x1f]);
  param_1[2] = pcVar5;
  param_1[1] = uVar3;
  *param_1 = uVar2;
  *(undefined8 *)(pcVar5 + 0x1f) = uVar1;
  uVar4 = s_nn_npln_friends_v1_ActivateUserR_03955659._16_8_;
  uVar3 = s_nn_npln_friends_v1_ActivateUserR_03955659._8_8_;
  uVar2 = s_nn_npln_friends_v1_ActivateUserR_03955659._0_8_;
  uVar1 = CONCAT17(s_nn_npln_friends_v1_ActivateUserR_03955659[0x1f],
                   s_nn_npln_friends_v1_ActivateUserR_03955659._24_7_);
  pcVar5[0x27] = '\0';
  *(undefined8 *)(pcVar5 + 8) = uVar3;
  *(undefined8 *)pcVar5 = uVar2;
  *(undefined8 *)(pcVar5 + 0x18) = uVar1;
  *(undefined8 *)(pcVar5 + 0x10) = uVar4;
  return;
}


