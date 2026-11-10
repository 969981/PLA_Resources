/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ae5d24; name: FUN_02ae5d24
 */


void FUN_02ae5d24(undefined8 *param_1,char *param_2)

{
  undefined8 *puVar1;
  char cVar2;
  undefined4 uVar3;
  long *plVar4;
  size_t sVar5;
  char *pcVar6;
  char *pcVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  char acStack_51 [9];
  long *local_48;
  char *local_38;
  
  lVar8 = DAT_0427f7a8;
  if (DAT_0427f7a8 == 0) {
    lVar11 = 0;
  }
  else {
    lVar11 = *(long *)(DAT_0427f7a8 + 0x68);
  }
  sVar5 = strlen(param_2);
  pcVar7 = acStack_51 + (1 - (lVar11 + sVar5 + 0x10 & 0xfffffffffffffff0));
  puVar1 = (undefined8 *)PTR_PTR_04379d00;
  if (lVar8 != 0) {
    puVar1 = (undefined8 *)(lVar8 + 0x60);
  }
  local_38 = pcVar7;
  strcpy(pcVar7,(char *)*puVar1);
  if (pcVar7[lVar11 + -1] == '/') {
    pcVar7[lVar11 + -1] = '\0';
  }
  else {
    pcVar6 = strrchr(pcVar7,0x2f);
    if (pcVar6 == (char *)0x0) {
      *pcVar7 = '\0';
    }
    else {
      *pcVar6 = '\0';
    }
  }
  cVar2 = *param_2;
  pcVar7 = local_38;
  while (local_38 = pcVar7, cVar2 == '.') {
    if (param_2[1] == '.') {
      pcVar7 = strrchr(pcVar7,0x2f);
      lVar8 = 2;
      *pcVar7 = '\0';
    }
    else {
      lVar8 = 1;
    }
    param_2 = param_2 + 1 + lVar8;
    pcVar7 = local_38;
    cVar2 = *param_2;
  }
  sVar5 = strlen(pcVar7);
  (pcVar7 + sVar5)[0] = '/';
  (pcVar7 + sVar5)[1] = '\0';
  strcat(local_38,param_2);
  FUN_009313e8(&local_48,&local_38);
  plVar4 = local_48;
  uVar3 = DAT_0427f7d0;
  local_48 = (long *)0x0;
  *param_1 = plVar4;
  if (plVar4 == (long *)0x0) {
    lVar8 = *(long *)PTR_DAT_04379c88;
  }
  else {
    lVar8 = plVar4[0xb];
    if (plVar4 != (long *)0x0) {
      lVar11 = plVar4[0xc];
      goto joined_r0x02ae5e70;
    }
  }
  lVar11 = *(long *)PTR_PTR_04379d00;
joined_r0x02ae5e70:
  if (plVar4 == (long *)0x0) {
    lVar10 = 0;
  }
  else {
    lVar10 = plVar4[0xd];
  }
  param_1[1] = lVar8;
  param_1[2] = lVar11;
  param_1[3] = lVar10;
  param_1[4] = 0;
  plVar9 = (long *)0x0;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x18))(plVar4);
    plVar9 = plVar4;
  }
  param_1[4] = plVar9;
  *(undefined4 *)(param_1 + 5) = uVar3;
  FUN_02a8eb50(param_1);
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  return;
}


