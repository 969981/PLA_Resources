/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00598b70; name: FUN_00598b70
 */


void FUN_00598b70(long param_1,undefined8 param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  
  plVar5 = *(long **)(param_1 + 0x10);
  if (PTR_DAT_04373fd8[0x10] != '\0') {
    FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/transport/transport.h",0x55,0,
                 "%s %p:%p REF %s",plVar5[0xb],plVar5,plVar5[4],param_2);
  }
  plVar1 = plVar5 + 1;
  do {
    lVar6 = *plVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar6 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  lVar4 = *plVar5;
  if ((lVar4 != 0) && (*(char *)(lVar4 + 0x10) != '\0')) {
    FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0x85,1,
                 "%s:%p %s:%d ref %ld -> %ld %s",*(undefined8 *)(lVar4 + 8),plVar5,
                 "external/com_google_grpc_base\\src/core/lib/transport/transport.h",0x58,lVar6,
                 lVar6 + 1,param_2);
  }
  if (lVar6 < 1) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("prior > 0","external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0x89
                  ,"RefNonZero");
  }
  return;
}


