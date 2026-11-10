/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01b30fe0; name: FUN_01b30fe0
 */


void FUN_01b30fe0(undefined8 param_1,long *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  size_t sVar2;
  char *pcVar3;
  char *pcVar4;
  long lVar5;
  long lVar6;
  char acStack_40 [8];
  char *local_38;
  
  lVar6 = *param_2;
  if (lVar6 == 0) {
    lVar5 = 10;
  }
  else {
    lVar5 = *(long *)(lVar6 + 0x68) + 10;
  }
  sVar2 = strlen((char *)*param_3);
  pcVar4 = acStack_40 + -(lVar5 + sVar2 + 0xf & 0xfffffffffffffff0);
  local_38 = pcVar4;
  *pcVar4 = '\0';
  puVar1 = (undefined8 *)PTR_PTR_04379d00;
  if (lVar6 != 0) {
    puVar1 = (undefined8 *)(lVar6 + 0x60);
  }
  pcVar3 = strcat(pcVar4,(char *)*puVar1);
  pcVar3 = strcat(pcVar3,(char *)*param_3);
  sVar2 = strlen(pcVar3);
  pcVar4 = pcVar4 + sVar2;
  *(undefined8 *)pcVar4 = s__alb_bntx_038ff909._0_8_;
  pcVar4[8] = 'x';
  pcVar4[9] = '\0';
  FUN_009313e8(param_1,&local_38);
  return;
}


