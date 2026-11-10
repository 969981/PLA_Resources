/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00534910; name: FUN_00534910
 */


void FUN_00534910(long param_1,long param_2)

{
  long *plVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined8 *puVar10;
  long lVar11;
  
  if (param_2 == 0x7fffffffffffffff) {
    return;
  }
  puVar10 = *(undefined8 **)(param_1 + 0x10);
  iVar2 = *(int *)(puVar10 + 2);
  if (iVar2 == 0) {
    *(undefined4 *)(puVar10 + 2) = 1;
    puVar10[0xb] = &LAB_00534f70;
    puVar10[0xc] = param_1;
    puVar8 = puVar10 + 10;
    puVar10[0xf] = "external/com_google_grpc_base/src/core/ext/filters/deadline/deadline_filter.cc";
    puVar10[0xd] = 0;
    *(undefined2 *)(puVar10 + 0xe) = 0;
    puVar10[0x11] = 0;
    *(undefined4 *)(puVar10 + 0x12) = 0;
    *(undefined4 *)(puVar10 + 0x10) = 0x6e;
  }
  else {
    if (iVar2 == 1) {
      return;
    }
    if (iVar2 != 2) {
      FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/deadline/deadline_filter.cc",
                   0x71,2,"assertion failed: %s","closure != nullptr");
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined4 *)(puVar10 + 2) = 1;
    puVar6 = (undefined8 *)FUN_002ebd50(0x58);
    puVar6[5] = 0;
    puVar5 = PTR_LAB_043738c8;
    *(undefined2 *)(puVar6 + 6) = 0;
    puVar6[3] = puVar5;
    puVar6[4] = puVar6;
    puVar6[7] = "external/com_google_grpc_base/src/core/ext/filters/deadline/deadline_filter.cc";
    *puVar6 = &LAB_00534f70;
    puVar6[1] = param_1;
    puVar8 = puVar6 + 2;
    puVar6[9] = 0;
    *(undefined4 *)(puVar6 + 10) = 0;
    *(undefined4 *)(puVar6 + 8) = 0x68;
  }
  plVar9 = (long *)*puVar10;
  if (PTR_DAT_04373fd8[0x10] != '\0') {
    FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/transport/transport.h",0x55,0,
                 "%s %p:%p REF %s",plVar9[0xb],plVar9,plVar9[4],"deadline_timer");
  }
  plVar1 = plVar9 + 1;
  do {
    lVar11 = *plVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = lVar11 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  lVar7 = *plVar9;
  if ((lVar7 != 0) && (*(char *)(lVar7 + 0x10) != '\0')) {
    FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0x85,1,
                 "%s:%p %s:%d ref %ld -> %ld %s",*(undefined8 *)(lVar7 + 8),plVar9,
                 "external/com_google_grpc_base\\src/core/lib/transport/transport.h",0x58,lVar11,
                 lVar11 + 1,"deadline_timer");
  }
  if (lVar11 < 1) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("prior > 0","external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0x89
                  ,"RefNonZero");
  }
  FUN_002f5c60(puVar10 + 3,param_2,puVar8);
  return;
}


