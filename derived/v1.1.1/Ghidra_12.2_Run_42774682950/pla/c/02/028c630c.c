/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028c630c; name: FUN_028c630c
 */


void FUN_028c630c(undefined8 *param_1,long *param_2,long *param_3,char *param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  char cVar3;
  long *plVar4;
  size_t sVar5;
  char *pcVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  char *pcVar10;
  long lVar11;
  long lVar12;
  char acStack_61 [9];
  long *local_58;
  char *local_48;
  
  lVar12 = *param_2;
  if (lVar12 == 0) {
    lVar11 = 0;
  }
  else {
    lVar11 = *(long *)(lVar12 + 0x68);
  }
  uVar2 = *(uint *)*param_3;
  sVar5 = strlen(param_4);
  pcVar10 = acStack_61 + (1 - (lVar11 + (ulong)uVar2 + sVar5 + 0x10 & 0xfffffffffffffff0));
  puVar1 = (undefined8 *)PTR_PTR_04379d00;
  if (lVar12 != 0) {
    puVar1 = (undefined8 *)(lVar12 + 0x60);
  }
  local_48 = pcVar10;
  strcpy(pcVar10,(char *)*puVar1);
  if (pcVar10[lVar11 + -1] == '/') {
    pcVar10[lVar11 + -1] = '\0';
  }
  else {
    pcVar6 = strrchr(pcVar10,0x2f);
    if (pcVar6 == (char *)0x0) {
      *pcVar10 = '\0';
    }
    else {
      *pcVar6 = '\0';
    }
  }
  pcVar10 = (char *)0x0;
  if (*param_3 != 0) {
    pcVar10 = (char *)(*param_3 + 4);
  }
  cVar3 = *pcVar10;
  pcVar6 = local_48;
  while (local_48 = pcVar6, cVar3 == '.') {
    if (pcVar10[1] == '.') {
      pcVar6 = strrchr(pcVar6,0x2f);
      lVar12 = 2;
      *pcVar6 = '\0';
    }
    else {
      lVar12 = 1;
    }
    pcVar10 = pcVar10 + 1 + lVar12;
    pcVar6 = local_48;
    cVar3 = *pcVar10;
  }
  sVar5 = strlen(pcVar6);
  (pcVar6 + sVar5)[0] = '/';
  (pcVar6 + sVar5)[1] = '\0';
  strcat(local_48,pcVar10);
  sVar5 = strlen(param_4);
  if (sVar5 != 0) {
    FUN_010c513c(param_1,&local_48,param_4,(int)param_2[5]);
    return;
  }
  FUN_009313e8(&local_58,&local_48);
  plVar4 = local_58;
  lVar12 = param_2[5];
  local_58 = (long *)0x0;
  *param_1 = plVar4;
  if (plVar4 == (long *)0x0) {
    lVar11 = *(long *)PTR_DAT_04379c88;
  }
  else {
    lVar11 = plVar4[0xb];
    if (plVar4 != (long *)0x0) {
      lVar8 = plVar4[0xc];
      goto joined_r0x028c6540;
    }
  }
  lVar8 = *(long *)PTR_PTR_04379d00;
joined_r0x028c6540:
  if (plVar4 == (long *)0x0) {
    lVar9 = 0;
  }
  else {
    lVar9 = plVar4[0xd];
  }
  param_1[1] = lVar11;
  param_1[2] = lVar8;
  param_1[3] = lVar9;
  param_1[4] = 0;
  if (plVar4 == (long *)0x0) {
    param_1[4] = 0;
  }
  else {
    (**(code **)(*plVar4 + 0x18))(plVar4);
    plVar7 = (long *)param_1[4];
    param_1[4] = plVar4;
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 0x20))();
    }
  }
  *(int *)(param_1 + 5) = (int)lVar12;
  FUN_02a8eb50(param_1);
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  return;
}


