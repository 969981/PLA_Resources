/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c2c630; name: FUN_02c2c630
 */


void FUN_02c2c630(undefined8 param_1,long *param_2,char *param_3)

{
  undefined8 *puVar1;
  size_t sVar2;
  char *pcVar3;
  long lVar4;
  long lVar5;
  char acStack_40 [8];
  char *local_38;
  
  lVar4 = *param_2;
  if (lVar4 == 0) {
    lVar5 = 1;
  }
  else {
    lVar5 = *(long *)(lVar4 + 0x68) + 1;
  }
  sVar2 = strlen(param_3);
  pcVar3 = acStack_40 + -(sVar2 + lVar5 + 0xf & 0xfffffffffffffff0);
  local_38 = pcVar3;
  *pcVar3 = '\0';
  puVar1 = (undefined8 *)PTR_PTR_04379d00;
  if (lVar4 != 0) {
    puVar1 = (undefined8 *)(lVar4 + 0x60);
  }
  pcVar3 = strcat(pcVar3,(char *)*puVar1);
  strcat(pcVar3,param_3);
  FUN_009313e8(param_1,&local_38);
  return;
}


