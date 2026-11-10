/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003d7088; name: FUN_003d7088
 */


void FUN_003d7088(long *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  char *local_60;
  undefined4 local_58;
  undefined1 auStack_44 [4];
  
  puVar3 = PTR_DAT_04374090;
  if (PTR_DAT_04374090[0x10] != '\0') {
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/iomgr/call_combiner.cc",0x96,1,
                 "==> CallCombiner::Stop() [%p] [%s:%d: %s]",param_1,param_2,param_3,param_4);
  }
  do {
    lVar5 = *param_1;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar2) {
      *param_1 = lVar5 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (puVar3[0x10] != '\0') {
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/iomgr/call_combiner.cc",0x9c,1,
                 "  size: %ld -> %ld",lVar5);
  }
  if (lVar5 == 1) {
    if (puVar3[0x10] == '\0') {
      return;
    }
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/iomgr/call_combiner.cc",0xb8,1,
                 "  queue empty");
    return;
  }
  if (lVar5 == 0) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/iomgr/call_combiner.cc",0x9f,2,
                 "assertion failed: %s","prev_size >= 1");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  do {
    cVar1 = puVar3[0x10];
    while( true ) {
      if (cVar1 != '\0') {
        FUN_002ebea0("external/com_google_grpc_base/src/core/lib/iomgr/call_combiner.cc",0xa3,1,
                     "  checking queue");
      }
      lVar5 = FUN_0030bcfc(param_1 + 1,auStack_44);
      if (lVar5 != 0) {
        if (puVar3[0x10] != '\0') {
          uVar4 = FUN_002f1480(*(undefined8 *)(lVar5 + 0x18));
          FUN_002ebea0("external/com_google_grpc_base/src/core/lib/iomgr/call_combiner.cc",0xb1,1,
                       "  EXECUTING FROM QUEUE: closure=%p error=%s",lVar5,uVar4);
        }
        local_60 = "external/com_google_grpc_base/src/core/lib/iomgr/call_combiner.cc";
        local_58 = 0x62;
        FUN_002f019c(&local_60,lVar5,*(undefined8 *)(lVar5 + 0x18));
        return;
      }
      if (puVar3[0x10] == '\0') break;
      FUN_002ebea0("external/com_google_grpc_base/src/core/lib/iomgr/call_combiner.cc",0xac,1,
                   "  queue returned no result; checking again");
      cVar1 = puVar3[0x10];
    }
  } while( true );
}


