/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00b78c0c; name: FUN_00b78c0c
 */


void FUN_00b78c0c(undefined8 param_1,long *param_2,char *param_3,long *param_4)

{
  undefined8 *puVar1;
  size_t sVar2;
  char *pcVar3;
  char *__dest;
  long lVar4;
  long lVar5;
  char acStack_c0 [128];
  char *local_38;
  
  lVar5 = *param_2;
  if (lVar5 == 0) {
    lVar4 = 3;
  }
  else {
    lVar4 = *(long *)(lVar5 + 0x68) + 3;
  }
  sVar2 = strlen(param_3);
  __dest = acStack_c0 +
           (0x80 - (lVar4 + sVar2 + (ulong)*(uint *)*param_4 + 0xf & 0xfffffffffffffff0));
  local_38 = __dest;
  *__dest = '\0';
  puVar1 = (undefined8 *)PTR_PTR_04379d00;
  if (lVar5 != 0) {
    puVar1 = (undefined8 *)(lVar5 + 0x60);
  }
  pcVar3 = strcat(__dest,(char *)*puVar1);
  sVar2 = strlen(pcVar3);
  (__dest + sVar2)[0] = '/';
  (__dest + sVar2)[1] = '\0';
  pcVar3 = strcat(__dest,param_3);
  sVar2 = strlen(pcVar3);
  (__dest + sVar2)[0] = '/';
  (__dest + sVar2)[1] = '\0';
  pcVar3 = (char *)0x0;
  if (*param_4 != 0) {
    pcVar3 = (char *)(*param_4 + 4);
  }
  strcat(__dest,pcVar3);
  FUN_009313e8(param_1,&local_38);
  return;
}


