/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b5fd2c; name: FUN_02b5fd2c
 */


void FUN_02b5fd2c(undefined8 param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  char cVar2;
  char *pcVar3;
  size_t sVar4;
  long lVar5;
  char *pcVar6;
  long lVar7;
  char cStack_41;
  char *local_38;
  
  lVar5 = *param_2;
  if (lVar5 == 0) {
    lVar7 = 0;
  }
  else {
    lVar7 = *(long *)(lVar5 + 0x68);
  }
  pcVar6 = (char *)((long)register0x00000008 +
                   (-0x40 - (lVar7 + *(long *)(param_3 + 0x10) + 0x15U & 0xfffffffffffffff0)));
  puVar1 = (undefined8 *)PTR_PTR_04379d00;
  if (lVar5 != 0) {
    puVar1 = (undefined8 *)(lVar5 + 0x60);
  }
  local_38 = pcVar6;
  strcpy(pcVar6,(char *)*puVar1);
  if (pcVar6[lVar7 + -1] == '/') {
    pcVar6[lVar7 + -1] = '\0';
  }
  else {
    pcVar3 = strrchr(pcVar6,0x2f);
    if (pcVar3 == (char *)0x0) {
      *pcVar6 = '\0';
    }
    else {
      *pcVar3 = '\0';
    }
  }
  pcVar6 = *(char **)(param_3 + 8);
  cVar2 = *pcVar6;
  pcVar3 = local_38;
  while (local_38 = pcVar3, cVar2 == '.') {
    if (pcVar6[1] == '.') {
      pcVar3 = strrchr(pcVar3,0x2f);
      lVar5 = 2;
      *pcVar3 = '\0';
    }
    else {
      lVar5 = 1;
    }
    pcVar6 = pcVar6 + 1 + lVar5;
    pcVar3 = local_38;
    cVar2 = *pcVar6;
  }
  sVar4 = strlen(pcVar3);
  (pcVar3 + sVar4)[0] = '/';
  (pcVar3 + sVar4)[1] = '\0';
  strcat(local_38,pcVar6);
  FUN_02b602fc(param_1,&local_38,(int)param_2[5]);
  return;
}


