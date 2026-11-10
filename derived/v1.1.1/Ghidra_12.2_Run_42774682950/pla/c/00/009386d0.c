/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 009386d0; name: FUN_009386d0
 */


void FUN_009386d0(undefined8 param_1,char *param_2,long *param_3)

{
  undefined8 *puVar1;
  size_t sVar2;
  char *pcVar3;
  long lVar4;
  char acStack_b0 [128];
  char *local_28;
  
  sVar2 = strlen(param_2);
  lVar4 = 0;
  if (*param_3 != 0) {
    lVar4 = *(long *)(*param_3 + 0x68);
  }
  pcVar3 = acStack_b0 + (0x80 - (sVar2 + lVar4 + 0x10 & 0xfffffffffffffff0));
  local_28 = pcVar3;
  *pcVar3 = '\0';
  pcVar3 = strcat(pcVar3,param_2);
  puVar1 = (undefined8 *)PTR_PTR_04379d00;
  if (*param_3 != 0) {
    puVar1 = (undefined8 *)(*param_3 + 0x60);
  }
  strcat(pcVar3,(char *)*puVar1);
  FUN_009313e8(param_1,&local_28);
  return;
}


