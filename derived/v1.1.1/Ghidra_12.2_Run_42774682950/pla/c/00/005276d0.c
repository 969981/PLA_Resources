/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005276d0; name: FUN_005276d0
 */


int FUN_005276d0(long param_1,ulong param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  code *pcVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  char *local_70;
  undefined4 local_68;
  undefined **local_60;
  long lStack_58;
  undefined ***local_40;
  
  iVar4 = FUN_003d3ef4(param_1 + 0xd8);
  if ((iVar4 == 0) && ((param_2 & 1) != 0)) {
    plVar7 = *(long **)(param_1 + 0x10);
    if (PTR_DAT_04373fd8[0x10] != '\0') {
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/transport/transport.h",0x55,0,
                   "%s %p:%p REF %s",plVar7[0xb],plVar7,plVar7[4],"TryToConnect");
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
                   lVar8 + 1,"TryToConnect");
    }
    if (lVar8 < 1) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("prior > 0","external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",
                    0x89,"RefNonZero");
    }
    local_60 = &PTR_LAB_04185a38;
    local_70 = "external/com_google_grpc_base/src/core/ext/filters/client_channel/client_channel.cc"
    ;
    local_68 = 0x7f4;
                    /* try { // try from 005277dc to 005277e7 has its CatchHandler @ 00527848 */
    lStack_58 = param_1;
    local_40 = &local_60;
    FUN_003d4d40(*(undefined8 *)(param_1 + 0xb0),&local_60,&local_70);
    if (&local_60 == local_40) {
      pcVar5 = (code *)(*local_40)[4];
    }
    else {
      if (local_40 == (undefined ***)0x0) {
        return 0;
      }
      pcVar5 = (code *)(*local_40)[5];
    }
    (*pcVar5)();
  }
  return iVar4;
}


