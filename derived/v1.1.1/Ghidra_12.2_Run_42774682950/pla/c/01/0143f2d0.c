/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0143f2d0; name: FUN_0143f2d0
 */


void FUN_0143f2d0(undefined8 param_1,long param_2)

{
  char *pcVar1;
  size_t sVar2;
  char *pcVar3;
  char acStack_30 [8];
  undefined8 local_28;
  
  pcVar1 = *(char **)(param_2 + 8);
  pcVar3 = acStack_30 + -(*(long *)(param_2 + 0x10) + 0x29U & 0xfffffffffffffff0);
  local_28 = pcVar3;
  *pcVar3 = '\0';
  pcVar1 = strcat(pcVar3,pcVar1);
  sVar2 = strlen(pcVar1);
  pcVar3 = pcVar3 + sVar2;
  *(undefined8 *)(pcVar3 + 0x10) = s__L_nspoke_gauge_00_ef_off_039752e1._16_8_;
  *(undefined8 *)pcVar3 = s__L_nspoke_gauge_00_ef_off_039752e1._0_8_;
  *(undefined8 *)(pcVar3 + 8) = s__L_nspoke_gauge_00_ef_off_039752e1._8_8_;
  pcVar3[0x18] = 'f';
  pcVar3[0x19] = '\0';
  FUN_009313e8(param_1,&local_28);
  return;
}


