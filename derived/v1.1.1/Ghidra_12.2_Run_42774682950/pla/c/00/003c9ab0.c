/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003c9ab0; name: FUN_003c9ab0
 */


void FUN_003c9ab0(long param_1,ulong param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  
  plVar5 = (long *)(param_1 + 0x960);
  do {
    if (*plVar5 != 0) {
      ClearExclusiveLocal();
      if (param_2 < 5) {
        return;
      }
      FUN_002f0430(param_2,"external/com_google_grpc_base/src/core/lib/surface/call.cc",0x2b9);
      return;
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar3) {
      *plVar5 = 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  plVar5 = (long *)(param_1 + 0x9e0);
  if (PTR_DAT_04373fd8[0x10] != '\0') {
    FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/transport/transport.h",0x55,0,
                 "%s %p:%p REF %s",*(undefined8 *)(param_1 + 0xa38),plVar5,
                 *(undefined8 *)(param_1 + 0xa00),"termination");
  }
  plVar1 = (long *)(param_1 + 0x9e8);
  do {
    lVar7 = *plVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar7 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  lVar6 = *plVar5;
  if ((lVar6 != 0) && (*(char *)(lVar6 + 0x10) != '\0')) {
    FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0x85,1,
                 "%s:%p %s:%d ref %ld -> %ld %s",*(undefined8 *)(lVar6 + 8),plVar5,
                 "external/com_google_grpc_base\\src/core/lib/transport/transport.h",0x58,lVar7,
                 lVar7 + 1,"termination");
  }
  if (lVar7 < 1) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("prior > 0","external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0x89
                  ,"RefNonZero");
  }
  uVar4 = param_2;
  if (4 < param_2) {
    uVar4 = FUN_002f03c0(param_2,"external/com_google_grpc_base/src/core/lib/surface/call.cc",0x2c1)
    ;
  }
  FUN_003d7460(param_1 + 0x18,uVar4);
  plVar5 = (long *)FUN_002ebd50(0x98);
  *plVar5 = param_1;
  plVar5[0xb] = (long)&LAB_003cbb40;
  plVar5[0xc] = (long)plVar5;
  plVar5[0xd] = 0;
  *(undefined2 *)(plVar5 + 0xe) = 0;
  plVar5[0x11] = 0;
  *(undefined4 *)(plVar5 + 0x12) = 0;
  plVar5[0xf] = (long)"external/com_google_grpc_base/src/core/lib/surface/call.cc";
  *(undefined4 *)(plVar5 + 0x10) = 0x2c5;
  lVar7 = FUN_003d6a40(plVar5 + 10);
  *(byte *)(lVar7 + 0x10) = *(byte *)(lVar7 + 0x10) | 0x40;
  *(ulong *)(*(long *)(lVar7 + 8) + 0x88) = param_2;
  *(long *)(lVar7 + 0x18) = param_1;
  plVar5[2] = (long)&LAB_003cbb90;
  plVar5[3] = lVar7;
  plVar5[4] = 0;
  *(undefined2 *)(plVar5 + 5) = 0;
  plVar5[8] = 0;
  *(undefined4 *)(plVar5 + 9) = 0;
  plVar5[6] = (long)"external/com_google_grpc_base/src/core/lib/surface/call.cc";
  *(undefined4 *)(plVar5 + 7) = 0x284;
  FUN_003d6e50(param_1 + 0x18,plVar5 + 1,0,
               "external/com_google_grpc_base/src/core/lib/surface/call.cc",0x286,"executing batch")
  ;
  return;
}


