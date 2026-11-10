/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003f7380; name: FUN_003f7380
 */


void FUN_003f7380(char *param_1,undefined8 *param_2,undefined8 *param_3,long *param_4,
                 undefined8 *param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  char *__s;
  char *pcVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  char *pcVar9;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined8 local_48;
  
  uStack_78 = param_3[1];
  local_80 = *param_3;
  uStack_68 = param_3[3];
  uStack_70 = param_3[2];
  __s = (char *)FUN_002f2680(&local_80);
  pcVar5 = strrchr(__s,0x2f);
  local_48 = 0;
  if ((void *)*param_5 != (void *)0x0) {
    free((void *)*param_5);
    *param_5 = 0;
  }
  if ((void *)param_5[1] != (void *)0x0) {
    free((void *)param_5[1]);
    param_5[1] = 0;
  }
  if (param_5[2] != 0) {
    local_60 = "external/com_google_grpc_base/src/core/lib/security/transport/client_auth_filter.cc"
    ;
    local_58 = 0x90;
    FUN_003f3870(param_5[2],&local_60,"grpc_auth_metadata_context");
    param_5[2] = 0;
  }
  if (pcVar5 == (char *)0x0) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/security/transport/client_auth_filter.cc"
                 ,0xc6,2,"No \'/\' found in fully qualified method name");
    *__s = '\0';
  }
  else if (pcVar5 != __s) {
    pcVar9 = pcVar5 + 1;
    *pcVar5 = '\0';
    goto LAB_003f745c;
  }
  pcVar9 = "";
LAB_003f745c:
  uVar6 = FUN_002ec2d0(pcVar9);
  uStack_98 = param_2[1];
  local_a0 = *param_2;
  uStack_88 = param_2[3];
  uStack_90 = param_2[2];
  pcVar5 = (char *)FUN_002f2680(&local_a0);
  if ((((param_1 != (char *)0x0) && (iVar4 = strcmp(param_1,"https"), iVar4 == 0)) &&
      (pcVar9 = strrchr(pcVar5,0x3a), pcVar9 != (char *)0x0)) &&
     (iVar4 = strcmp(pcVar9 + 1,"443"), iVar4 == 0)) {
    *pcVar9 = '\0';
  }
  pcVar9 = "";
  if (param_1 != (char *)0x0) {
    pcVar9 = param_1;
  }
  FUN_002f4490(&local_48,"%s://%s%s",pcVar9,pcVar5,__s);
  *param_5 = local_48;
  param_5[1] = uVar6;
  if (param_4 == (long *)0x0) {
    param_5[2] = 0;
  }
  else {
    plVar1 = param_4 + 1;
    do {
      lVar7 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar7 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    lVar8 = *param_4;
    if ((lVar8 != 0) && (*(char *)(lVar8 + 0x10) != '\0')) {
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0x67,1,
                   "%s:%p %s:%d ref %ld -> %ld %s",*(undefined8 *)(lVar8 + 8),param_4,
                   "external/com_google_grpc_base/src/core/lib/security/transport/client_auth_filter.cc"
                   ,0xde,lVar7,lVar7 + 1,"grpc_auth_metadata_context");
    }
    local_60 = (char *)0x0;
    param_5[2] = param_4;
    FUN_003f2f48(&local_60);
  }
  free(__s);
  free(pcVar5);
  return;
}


