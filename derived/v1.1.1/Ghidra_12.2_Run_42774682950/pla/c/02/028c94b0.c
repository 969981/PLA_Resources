/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028c94b0; name: FUN_028c94b0
 */


void FUN_028c94b0(undefined8 *param_1,long *param_2,long param_3,char *param_4)

{
  undefined8 *puVar1;
  char cVar2;
  long *plVar3;
  size_t sVar4;
  char *pcVar5;
  long *plVar6;
  long lVar7;
  char *pcVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  char acStack_61 [9];
  long *local_58;
  char *local_48;
  
  lVar11 = *param_2;
  if (lVar11 == 0) {
    lVar10 = 0;
  }
  else {
    lVar10 = *(long *)(lVar11 + 0x68);
  }
  lVar9 = *(long *)(param_3 + 0x10);
  sVar4 = strlen(param_4);
  pcVar8 = acStack_61 + (1 - (lVar10 + lVar9 + sVar4 + 0x10 & 0xfffffffffffffff0));
  puVar1 = (undefined8 *)PTR_PTR_04379d00;
  if (lVar11 != 0) {
    puVar1 = (undefined8 *)(lVar11 + 0x60);
  }
  local_48 = pcVar8;
  strcpy(pcVar8,(char *)*puVar1);
  if (pcVar8[lVar10 + -1] == '/') {
    pcVar8[lVar10 + -1] = '\0';
  }
  else {
    pcVar5 = strrchr(pcVar8,0x2f);
    if (pcVar5 == (char *)0x0) {
      *pcVar8 = '\0';
    }
    else {
      *pcVar5 = '\0';
    }
  }
  pcVar8 = *(char **)(param_3 + 8);
  cVar2 = *pcVar8;
  pcVar5 = local_48;
  while (local_48 = pcVar5, cVar2 == '.') {
    if (pcVar8[1] == '.') {
      pcVar5 = strrchr(pcVar5,0x2f);
      lVar11 = 2;
      *pcVar5 = '\0';
    }
    else {
      lVar11 = 1;
    }
    pcVar8 = pcVar8 + 1 + lVar11;
    pcVar5 = local_48;
    cVar2 = *pcVar8;
  }
  sVar4 = strlen(pcVar5);
  (pcVar5 + sVar4)[0] = '/';
  (pcVar5 + sVar4)[1] = '\0';
  strcat(local_48,pcVar8);
  sVar4 = strlen(param_4);
  if (sVar4 != 0) {
    FUN_010c513c(param_1,&local_48,param_4,(int)param_2[5]);
    return;
  }
  FUN_009313e8(&local_58,&local_48);
  plVar3 = local_58;
  lVar11 = param_2[5];
  local_58 = (long *)0x0;
  *param_1 = plVar3;
  if (plVar3 == (long *)0x0) {
    lVar10 = *(long *)PTR_DAT_04379c88;
  }
  else {
    lVar10 = plVar3[0xb];
    if (plVar3 != (long *)0x0) {
      lVar9 = plVar3[0xc];
      goto joined_r0x028c96d4;
    }
  }
  lVar9 = *(long *)PTR_PTR_04379d00;
joined_r0x028c96d4:
  if (plVar3 == (long *)0x0) {
    lVar7 = 0;
  }
  else {
    lVar7 = plVar3[0xd];
  }
  param_1[1] = lVar10;
  param_1[2] = lVar9;
  param_1[3] = lVar7;
  param_1[4] = 0;
  if (plVar3 == (long *)0x0) {
    param_1[4] = 0;
  }
  else {
    (**(code **)(*plVar3 + 0x18))(plVar3);
    plVar6 = (long *)param_1[4];
    param_1[4] = plVar3;
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 0x20))();
    }
  }
  *(int *)(param_1 + 5) = (int)lVar11;
  FUN_02a8eb50(param_1);
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  return;
}


