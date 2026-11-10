/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005b8800; name: FUN_005b8800
 */


void FUN_005b8800(undefined8 param_1,byte *param_2,byte *param_3,byte *param_4,byte *param_5,
                 undefined8 *param_6)

{
  byte bVar1;
  size_t sVar2;
  long *plVar3;
  char *__s;
  long lVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long *plVar9;
  byte *pbVar10;
  char *local_60;
  undefined8 uStack_58;
  
  if (param_2 == (byte *)0x0) goto LAB_005b8af8;
  bVar1 = *param_2;
  if ((bVar1 & 1) == 0) {
    if (bVar1 >> 1 != 0) goto LAB_005b8844;
LAB_005b8858:
    uVar6 = (ulong)param_2[0x18];
    if ((param_2[0x18] & 1) == 0) goto LAB_005b8864;
LAB_005b8894:
    uVar7 = *(ulong *)(param_2 + 0x20);
  }
  else {
    if (*(long *)(param_2 + 8) == 0) goto LAB_005b8858;
LAB_005b8844:
    if ((bVar1 & 1) == 0) {
      pbVar10 = param_2 + 1;
    }
    else {
      pbVar10 = *(byte **)(param_2 + 0x10);
    }
    sVar2 = strlen((char *)pbVar10);
    *param_6 = pbVar10;
    param_6[1] = sVar2;
    uVar6 = (ulong)param_2[0x18];
    if ((param_2[0x18] & 1) != 0) goto LAB_005b8894;
LAB_005b8864:
    uVar7 = uVar6 >> 1;
  }
  if (uVar7 != 0) {
    if ((uVar6 & 1) == 0) {
      pbVar10 = param_2 + 0x19;
    }
    else {
      pbVar10 = *(byte **)(param_2 + 0x28);
    }
    sVar2 = strlen((char *)pbVar10);
    param_6[2] = pbVar10;
    param_6[3] = sVar2;
  }
  if (*(long *)(param_2 + 0xa8) != 0) {
    lVar4 = param_6[8];
    if ((lVar4 == 0) && (lVar4 = FUN_0053ee00(PTR_PTR_04375008,param_1), lVar4 != 0)) {
      param_6[8] = lVar4;
    }
    FUN_005be030(param_1,lVar4,param_2 + 0x98);
  }
  uVar6 = (ulong)(*param_5 >> 1);
  if ((*param_5 & 1) != 0) {
    uVar6 = *(ulong *)(param_5 + 8);
  }
  if (uVar6 != 0) {
    plVar9 = (long *)param_6[8];
    if ((plVar9 == (long *)0x0) &&
       (plVar9 = (long *)FUN_0053ee00(PTR_PTR_04375008,param_1), plVar9 != (long *)0x0)) {
      param_6[8] = plVar9;
    }
    plVar3 = (long *)FUN_0053ee00(PTR_PTR_04375010,param_1);
    uVar6 = *(ulong *)(param_5 + 8);
    pbVar10 = *(byte **)(param_5 + 0x10);
    if ((*param_5 & 1) == 0) {
      pbVar10 = param_5 + 1;
      uVar6 = (ulong)(*param_5 >> 1);
    }
    *(undefined4 *)(plVar3 + 2) = 3;
    *plVar3 = (long)pbVar10;
    plVar3[1] = uVar6;
    lVar4 = *plVar9;
    if (lVar4 == 0) {
      lVar4 = FUN_0053f280(param_1,0,8);
      *plVar9 = lVar4;
    }
    FUN_00540250(lVar4 + 8,"PROXYLESS_CLIENT_HOSTNAME",0x19,0,param_1);
    FUN_0053fb10(lVar4 + 8,"PROXYLESS_CLIENT_HOSTNAME",0x19,plVar3,param_1);
  }
  bVar1 = param_2[0x30];
  if ((bVar1 & 1) == 0) {
    if (bVar1 >> 1 == 0) goto LAB_005b89d0;
  }
  else if (*(long *)(param_2 + 0x38) == 0) {
LAB_005b89d0:
    if ((param_2[0x48] & 1) == 0) {
      if (param_2[0x48] >> 1 == 0) goto LAB_005b89e0;
    }
    else if (*(long *)(param_2 + 0x50) == 0) {
LAB_005b89e0:
      if ((param_2[0x60] & 1) == 0) {
        if (param_2[0x60] >> 1 == 0) goto LAB_005b8af8;
      }
      else if (*(long *)(param_2 + 0x68) == 0) goto LAB_005b8af8;
    }
  }
  puVar8 = (undefined8 *)param_6[9];
  if ((puVar8 == (undefined8 *)0x0) &&
     (puVar8 = (undefined8 *)FUN_0053ee00(PTR_DAT_04375018,param_1), puVar8 != (undefined8 *)0x0)) {
    param_6[9] = puVar8;
  }
  bVar1 = param_2[0x30];
  if ((bVar1 & 1) == 0) {
    if (bVar1 >> 1 != 0) goto LAB_005b8a48;
LAB_005b8a5c:
    uVar6 = (ulong)param_2[0x48];
    if ((param_2[0x48] & 1) == 0) goto LAB_005b8a68;
LAB_005b8a98:
    if (*(long *)(param_2 + 0x50) == 0) goto LAB_005b8aa0;
LAB_005b8a70:
    if ((uVar6 & 1) == 0) {
      pbVar10 = param_2 + 0x49;
    }
    else {
      pbVar10 = *(byte **)(param_2 + 0x58);
    }
    sVar2 = strlen((char *)pbVar10);
    puVar8[2] = pbVar10;
    puVar8[3] = sVar2;
    uVar6 = (ulong)param_2[0x60];
    if ((param_2[0x60] & 1) != 0) goto LAB_005b8adc;
LAB_005b8aac:
    uVar7 = uVar6 >> 1;
  }
  else {
    if (*(long *)(param_2 + 0x38) == 0) goto LAB_005b8a5c;
LAB_005b8a48:
    if ((bVar1 & 1) == 0) {
      pbVar10 = param_2 + 0x31;
    }
    else {
      pbVar10 = *(byte **)(param_2 + 0x40);
    }
    sVar2 = strlen((char *)pbVar10);
    *puVar8 = pbVar10;
    puVar8[1] = sVar2;
    uVar6 = (ulong)param_2[0x48];
    if ((param_2[0x48] & 1) != 0) goto LAB_005b8a98;
LAB_005b8a68:
    if (uVar6 >> 1 != 0) goto LAB_005b8a70;
LAB_005b8aa0:
    uVar6 = (ulong)param_2[0x60];
    if ((param_2[0x60] & 1) == 0) goto LAB_005b8aac;
LAB_005b8adc:
    uVar7 = *(ulong *)(param_2 + 0x68);
  }
  if (uVar7 != 0) {
    if ((uVar6 & 1) == 0) {
      param_2 = param_2 + 0x61;
    }
    else {
      param_2 = *(byte **)(param_2 + 0x70);
    }
    sVar2 = strlen((char *)param_2);
    puVar8[4] = param_2;
    puVar8[5] = sVar2;
  }
LAB_005b8af8:
  uVar6 = *(ulong *)(param_3 + 8);
  pbVar10 = *(byte **)(param_3 + 0x10);
  if ((*param_3 & 1) == 0) {
    pbVar10 = param_3 + 1;
    uVar6 = (ulong)(*param_3 >> 1);
  }
  param_6[4] = pbVar10;
  param_6[5] = uVar6;
  uVar6 = *(ulong *)(param_4 + 8);
  pbVar10 = *(byte **)(param_4 + 0x10);
  if ((*param_4 & 1) == 0) {
    pbVar10 = param_4 + 1;
    uVar6 = (ulong)(*param_4 >> 1);
  }
  param_6[6] = pbVar10;
  param_6[7] = uVar6;
  __s = (char *)FUN_005030f0();
  sVar2 = strlen(__s);
  *(undefined4 *)(param_6 + 0xf) = 7;
  param_6[0xd] = __s;
  param_6[0xe] = sVar2;
  uStack_58 = 0x2a;
  local_60 = "envoy.lb.does_not_support_overprovisioning";
  puVar5 = (ulong *)param_6[0xb];
  if ((puVar5 == (ulong *)0x0) || (puVar5[1] == puVar5[2])) {
    FUN_0053f0c0(param_6 + 0xb,&local_60,10,param_1);
  }
  else {
    puVar8 = (undefined8 *)((*puVar5 & 0xfffffffffffffff8) + puVar5[1] * 0x10);
    puVar8[1] = 0x2a;
    *puVar8 = "envoy.lb.does_not_support_overprovisioning";
    puVar5[1] = puVar5[1] + 1;
  }
  return;
}


