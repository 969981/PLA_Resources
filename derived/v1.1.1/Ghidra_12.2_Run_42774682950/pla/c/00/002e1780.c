/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002e1780; name: FUN_002e1780
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_002e1780(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char *pcVar4;
  
  pcVar4 = (char *)FUN_002e2e80(PTR_FUN_04373078,0x20);
  uVar3 = _UNK_03889b78;
  uVar2 = _DAT_03889b70;
  uVar1 = CONCAT71(s_nn_npln_common_MapValue_038a050a._16_7_,s_nn_npln_common_MapValue_038a050a[0xf]
                  );
  param_1[2] = pcVar4;
  param_1[1] = uVar3;
  *param_1 = uVar2;
  *(undefined8 *)(pcVar4 + 0xf) = uVar1;
  uVar2 = s_nn_npln_common_MapValue_038a050a._0_8_;
  uVar1 = CONCAT17(s_nn_npln_common_MapValue_038a050a[0xf],s_nn_npln_common_MapValue_038a050a._8_7_)
  ;
  pcVar4[0x17] = '\0';
  *(undefined8 *)(pcVar4 + 8) = uVar1;
  *(undefined8 *)pcVar4 = uVar2;
  return;
}


