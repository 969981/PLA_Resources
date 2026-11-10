/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00528460; name: FUN_00528460
 */


void FUN_00528460(long param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  code *pcVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  char *local_60;
  undefined4 local_58;
  undefined **local_50;
  long *plStack_48;
  undefined ***local_30;
  
  lVar8 = *(long *)(param_1 + 8);
  plVar4 = (long *)FUN_002e2e80(PTR_FUN_04373078,0x10);
  if (plVar4 != (long *)0x0) {
    *plVar4 = lVar8;
    plVar4[1] = param_2;
    plVar7 = *(long **)(lVar8 + 0x10);
    if (PTR_DAT_04373fd8[0x10] != '\0') {
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/transport/transport.h",0x55,0,
                   "%s %p:%p REF %s",plVar7[0xb],plVar7,plVar7[4],"ConnectivityWatcherRemover");
    }
    plVar1 = plVar7 + 1;
    do {
      lVar8 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar8 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    lVar6 = *plVar7;
    if ((lVar6 != 0) && (*(char *)(lVar6 + 0x10) != '\0')) {
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0x85,1,
                   "%s:%p %s:%d ref %ld -> %ld %s",*(undefined8 *)(lVar6 + 8),plVar7,
                   "external/com_google_grpc_base\\src/core/lib/transport/transport.h",0x58,lVar8,
                   lVar8 + 1,"ConnectivityWatcherRemover");
    }
    if (lVar8 < 1) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("prior > 0","external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",
                    0x89,"RefNonZero");
    }
    local_50 = &PTR_LAB_04185e10;
    local_60 = "external/com_google_grpc_base/src/core/ext/filters/client_channel/client_channel.cc"
    ;
    local_58 = 0x512;
                    /* try { // try from 00528574 to 0052857f has its CatchHandler @ 005285d8 */
    plStack_48 = plVar4;
    local_30 = &local_50;
    FUN_003d4d40(*(undefined8 *)(*plVar4 + 0xb0),&local_50,&local_60);
    if (&local_50 == local_30) {
      pcVar5 = (code *)(*local_30)[4];
    }
    else {
      if (local_30 == (undefined ***)0x0) {
        return;
      }
      pcVar5 = (code *)(*local_30)[5];
    }
    (*pcVar5)();
  }
  return;
}


