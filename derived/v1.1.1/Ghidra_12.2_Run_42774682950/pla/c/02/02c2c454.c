/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c2c454; name: FUN_02c2c454
 */


void FUN_02c2c454(undefined8 param_1,long *param_2)

{
  undefined8 *puVar1;
  char *pcVar2;
  size_t sVar3;
  long lVar4;
  long lVar5;
  char acStack_30 [8];
  char *local_28;
  
  lVar4 = *param_2;
  if (lVar4 == 0) {
    lVar5 = 8;
  }
  else {
    lVar5 = *(long *)(lVar4 + 0x68) + 8;
  }
  lVar5 = -(lVar5 + 0xfU & 0xfffffffffffffff0);
  pcVar2 = acStack_30 + lVar5;
  local_28 = pcVar2;
  *pcVar2 = '\0';
  puVar1 = (undefined8 *)PTR_PTR_04379d00;
  if (lVar4 != 0) {
    puVar1 = (undefined8 *)(lVar4 + 0x60);
  }
  pcVar2 = strcat(pcVar2,(char *)*puVar1);
  sVar3 = strlen(pcVar2);
  builtin_strncpy(acStack_30 + sVar3 + lVar5,"JPN.dat",8);
  FUN_009313e8(param_1,&local_28);
  return;
}


