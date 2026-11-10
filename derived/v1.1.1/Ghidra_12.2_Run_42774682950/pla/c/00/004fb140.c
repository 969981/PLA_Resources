/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004fb140; name: FUN_004fb140
 */


long * FUN_004fb140(long param_1,long param_2,long param_3)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long local_38;
  long local_30 [2];
  undefined8 local_18;
  
  if (((param_3 != 0) || (param_1 == 0)) || (param_2 == 0)) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/security/credentials/composite/composite_credentials.cc"
                 ,0xde,2,"assertion failed: %s",
                 "channel_creds != nullptr && call_creds != nullptr && reserved == nullptr");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (PTR_DAT_04373fe8[0x10] != '\0') {
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/security/credentials/composite/composite_credentials.cc"
                 ,0xe2,1,
                 "grpc_composite_channel_credentials_create(channel_creds=%p, call_creds=%p, reserved=%p)"
                 ,param_1,param_2,0);
  }
  plVar3 = (long *)(param_1 + 0x10);
  do {
    lVar4 = *plVar3;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar2) {
      *plVar3 = lVar4 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  lVar5 = *(long *)(param_1 + 8);
  if ((lVar5 != 0) && (*(char *)(lVar5 + 0x10) != '\0')) {
    FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0x5c,1,
                 "%s:%p ref %ld -> %ld",*(undefined8 *)(lVar5 + 8),(long *)(param_1 + 8),lVar4,
                 lVar4 + 1);
  }
  plVar3 = (long *)(param_2 + 0x10);
  do {
    lVar4 = *plVar3;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar2) {
      *plVar3 = lVar4 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  lVar5 = *(long *)(param_2 + 8);
  local_30[0] = param_1;
  if ((lVar5 != 0) && (*(char *)(lVar5 + 0x10) != '\0')) {
                    /* try { // try from 004fb1f0 to 004fb20b has its CatchHandler @ 004fb2e4 */
    FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0x5c,1,
                 "%s:%p ref %ld -> %ld",*(undefined8 *)(lVar5 + 8),(long *)(param_2 + 8),lVar4,
                 lVar4 + 1);
  }
  local_38 = param_2;
  plVar3 = (long *)FUN_002e2e80(PTR_FUN_04373078,0x30);
  lVar4 = local_30[0];
  if (plVar3 != (long *)0x0) {
    local_38 = 0;
    local_30[0] = 0;
    lVar5 = *(long *)(lVar4 + 0x18);
    plVar3[4] = lVar4;
    *plVar3 = (long)(PTR_DAT_043747f0 + 0x10);
    plVar3[1] = 0;
    plVar3[2] = 1;
    plVar3[3] = lVar5;
    local_18 = 0;
    plVar3[5] = param_2;
    local_30[1] = 0;
    FUN_003f4f54(local_30 + 1);
    FUN_004fb2f8(&local_18);
  }
  FUN_003f4f54(&local_38);
  FUN_004fb2f8(local_30);
  return plVar3;
}


