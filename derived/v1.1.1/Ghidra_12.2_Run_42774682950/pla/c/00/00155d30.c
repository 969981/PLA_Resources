/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00155d30; name: FUN_00155d30
 */


void FUN_00155d30(undefined8 param_1,char *param_2,char *param_3,char *param_4)

{
  undefined8 uVar1;
  size_t sVar2;
  char *pcVar3;
  size_t sVar4;
  void *pvVar5;
  code *pcVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  undefined1 *local_2090;
  undefined8 uStack_2088;
  long local_2080;
  undefined8 local_2078;
  undefined1 auStack_2070 [8192];
  undefined8 local_70 [2];
  
  sVar2 = strlen(param_3);
  local_2080 = 0;
  uStack_2088 = 0x2000;
  local_2090 = auStack_2070;
  local_2078 = param_1;
  pcVar3 = strstr(param_2,param_3);
  if (pcVar3 == (char *)0x0) {
    lVar9 = 0;
  }
  else {
    lVar9 = 0;
    sVar4 = (long)pcVar3 - (long)param_2;
    while( true ) {
      if (sVar4 != 0) {
        pvVar5 = (void *)FUN_00154c30(&local_2090,sVar4);
        memcpy(pvVar5,param_2,sVar4);
        lVar9 = local_2080 + sVar4;
        local_2080 = lVar9;
      }
      sVar4 = strlen(param_4);
      if (sVar4 != 0) {
        pvVar5 = (void *)FUN_00154c30(&local_2090,sVar4);
        memcpy(pvVar5,param_4,sVar4);
        lVar9 = local_2080 + sVar4;
        local_2080 = lVar9;
      }
      param_2 = pcVar3 + sVar2;
      pcVar3 = strstr(param_2,param_3);
      if (pcVar3 == (char *)0x0) break;
      sVar4 = (long)pcVar3 - (long)param_2;
    }
  }
  sVar2 = strlen(param_2);
  if (sVar2 != 0) {
    pvVar5 = (void *)FUN_00154c30(&local_2090,sVar2);
    memcpy(pvVar5,param_2,sVar2);
    lVar9 = local_2080 + sVar2;
    local_2080 = lVar9;
  }
  uVar1 = local_2078;
  FUN_001514f0(local_2078,local_2090,lVar9);
  if (local_2090 != auStack_2070) {
    pcVar6 = (code *)FUN_00153500(uVar1,local_70);
    puVar7 = (undefined8 *)FUN_001511d0(uVar1,0xfffffffe);
    uVar8 = (*pcVar6)(local_70[0],*puVar7,puVar7[1],0);
    *puVar7 = uVar8;
    puVar7[1] = 0;
    FUN_0014ff70(uVar1,0xfffffffe,0xffffffff);
    FUN_0014ff10(uVar1,0xfffffffe);
  }
  FUN_00150da0(param_1,0xffffffff,0);
  return;
}


