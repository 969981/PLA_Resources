/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01b310a4; name: FUN_01b310a4
 */


void FUN_01b310a4(undefined8 param_1,long *param_2,char *param_3,char *param_4)

{
  undefined8 *puVar1;
  size_t sVar2;
  size_t sVar3;
  char *pcVar4;
  long lVar5;
  long lVar6;
  char acStack_50 [8];
  char *local_48;
  
  lVar5 = *param_2;
  if (lVar5 == 0) {
    lVar6 = 1;
  }
  else {
    lVar6 = *(long *)(lVar5 + 0x68) + 1;
  }
  sVar2 = strlen(param_3);
  sVar3 = strlen(param_4);
  pcVar4 = acStack_50 + -(sVar2 + lVar6 + sVar3 + 0xf & 0xfffffffffffffff0);
  local_48 = pcVar4;
  *pcVar4 = '\0';
  puVar1 = (undefined8 *)PTR_PTR_04379d00;
  if (lVar5 != 0) {
    puVar1 = (undefined8 *)(lVar5 + 0x60);
  }
  pcVar4 = strcat(pcVar4,(char *)*puVar1);
  pcVar4 = strcat(pcVar4,param_3);
  strcat(pcVar4,param_4);
  FUN_009313e8(param_1,&local_48);
  return;
}


