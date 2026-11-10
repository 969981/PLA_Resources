/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02bbc014; name: FUN_02bbc014
 */


void FUN_02bbc014(undefined8 param_1,long *param_2,long param_3,long *param_4)

{
  undefined8 *puVar1;
  char *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  char acStack_b0 [128];
  char *local_28;
  
  lVar3 = *param_2;
  if (lVar3 == 0) {
    lVar4 = 1;
  }
  else {
    lVar4 = *(long *)(lVar3 + 0x68) + 1;
  }
  lVar5 = 0;
  if (*param_4 != 0) {
    lVar5 = *(long *)(*param_4 + 0x68);
  }
  pcVar2 = acStack_b0 +
           (0x80 - (*(long *)(param_3 + 0x10) + lVar4 + lVar5 + 0xfU & 0xfffffffffffffff0));
  local_28 = pcVar2;
  *pcVar2 = '\0';
  puVar1 = (undefined8 *)PTR_PTR_04379d00;
  if (lVar3 != 0) {
    puVar1 = (undefined8 *)(lVar3 + 0x60);
  }
  pcVar2 = strcat(pcVar2,(char *)*puVar1);
  pcVar2 = strcat(pcVar2,*(char **)(param_3 + 8));
  puVar1 = (undefined8 *)PTR_PTR_04379d00;
  if (*param_4 != 0) {
    puVar1 = (undefined8 *)(*param_4 + 0x60);
  }
  strcat(pcVar2,(char *)*puVar1);
  FUN_009313e8(param_1,&local_28);
  return;
}


