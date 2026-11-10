/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f43380; name: FUN_02f43380
 */


undefined8 FUN_02f43380(long *param_1,char *param_2,undefined4 param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  void *pvVar7;
  long lVar8;
  char *pcVar9;
  ulong __n;
  undefined4 local_44;
  char *local_38;
  
  local_44 = param_3;
  local_38 = param_2;
  iVar4 = (**(code **)(*param_1 + 0x88))();
  uVar6 = DAT_0440a148;
  if (iVar4 != 9) {
    lVar8 = param_1[2];
    uVar5 = (**(code **)(*param_1 + 0x88))(param_1);
    FUN_02e96d3c(uVar6,(int)lVar8,9,uVar5);
    return 0x5b;
  }
  uVar6 = FUN_02f4adc8(param_1,&local_38,&local_44,0);
  if ((int)uVar6 != 1) {
    return uVar6;
  }
  pcVar9 = local_38 + 5;
  *(bool *)(param_1 + 0x28) = *local_38 != '\0';
  uVar2 = *(uint *)(local_38 + 1);
  __n = (ulong)(uVar2 << 2);
  local_38 = pcVar9;
  if (param_1[0x29] == 0) {
    lVar8 = param_1[0x2a];
  }
  else {
    (*DAT_0442d150)(2);
    param_1[0x29] = 0;
    lVar8 = param_1[0x2a];
  }
  if (lVar8 != 0) {
    (*DAT_0442d150)(2);
    param_1[0x2a] = 0;
  }
  pvVar7 = (void *)(*DAT_0442d138)(2,__n);
  param_1[0x29] = (long)pvVar7;
  if (pvVar7 == (void *)0x0) {
    if (uVar2 != 0) {
      return 0x34;
    }
  }
  else {
    memcpy(pvVar7,pcVar9,__n);
    pvVar7 = (void *)(*DAT_0442d138)(2,(ulong)uVar2);
    param_1[0x2a] = (long)pvVar7;
    if (pvVar7 == (void *)0x0) {
      return 0x34;
    }
    memcpy(pvVar7,pcVar9 + __n,(ulong)uVar2);
  }
  puVar1 = (uint *)(local_38 + uVar2 * 5);
  pcVar9 = (char *)((long)puVar1 + 5);
  uVar3 = *puVar1;
  *(char *)((long)param_1 + 0x13a) = (char)puVar1[1];
  local_38 = pcVar9;
  if (param_1[0x26] != 0) {
    (*DAT_0442d150)(1);
    param_1[0x26] = 0;
  }
  if (uVar3 != 0) {
    pvVar7 = (void *)(*DAT_0442d138)(1,(ulong)uVar3);
    param_1[0x26] = (long)pvVar7;
    if (pvVar7 == (void *)0x0) {
      return 0x34;
    }
    memcpy(pvVar7,pcVar9,(ulong)uVar3);
  }
  *(uint *)(param_1 + 0x25) = uVar2;
  return 1;
}


