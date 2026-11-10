/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004facd0; name: FUN_004facd0
 */


long FUN_004facd0(long param_1,long param_2,long param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long local_48;
  long local_40 [3];
  long lStack_28;
  
  if (PTR_DAT_04373fe8[0x10] != '\0') {
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/security/credentials/composite/composite_credentials.cc"
                 ,0xbd,1,"grpc_composite_call_credentials_create(creds1=%p, creds2=%p, reserved=%p)"
                 ,param_1,param_2,param_3);
  }
  if (param_3 != 0) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/security/credentials/composite/composite_credentials.cc"
                 ,0xbe,2,"assertion failed: %s","reserved == nullptr");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (param_1 == 0) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/security/credentials/composite/composite_credentials.cc"
                 ,0xbf,2,"assertion failed: %s","creds1 != nullptr");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (param_2 == 0) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/security/credentials/composite/composite_credentials.cc"
                 ,0xc0,2,"assertion failed: %s","creds2 != nullptr");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  plVar1 = (long *)(param_1 + 0x10);
  do {
    lVar4 = *plVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar4 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  lVar5 = *(long *)(param_1 + 8);
  if ((lVar5 != 0) && (*(char *)(lVar5 + 0x10) != '\0')) {
    FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0x5c,1,
                 "%s:%p ref %ld -> %ld",*(undefined8 *)(lVar5 + 8),(long *)(param_1 + 8),lVar4,
                 lVar4 + 1);
  }
  plVar1 = (long *)(param_2 + 0x10);
  do {
    lVar4 = *plVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar4 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  lVar5 = *(long *)(param_2 + 8);
  local_40[0] = param_1;
  if ((lVar5 != 0) && (*(char *)(lVar5 + 0x10) != '\0')) {
                    /* try { // try from 004fad84 to 004fad9f has its CatchHandler @ 004faebc */
    FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0x5c,1,
                 "%s:%p ref %ld -> %ld",*(undefined8 *)(lVar5 + 8),(long *)(param_2 + 8),lVar4,
                 lVar4 + 1);
  }
  local_48 = param_2;
  lVar5 = FUN_002e2e80(PTR_FUN_04373078,0x40);
  lVar4 = local_40[0];
  if (lVar5 != 0) {
    local_48 = 0;
    local_40[0] = 0;
    lStack_28 = lVar4;
                    /* try { // try from 004fadc8 to 004fadd7 has its CatchHandler @ 004faed0 */
    local_40[2] = param_2;
    FUN_004fa940(lVar5,&lStack_28,local_40 + 2);
    FUN_003f4f54(local_40 + 2);
    FUN_003f4f54(&lStack_28);
  }
  local_40[1] = 0;
  FUN_003f4f54(local_40 + 1);
  FUN_003f4f54(&local_48);
  FUN_003f4f54(local_40);
  return lVar5;
}


