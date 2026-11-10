/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005362b0; name: FUN_005362b0
 */


void FUN_005362b0(long *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  
  plVar1 = (long *)(param_2 + 0x70);
  if (PTR_DAT_04373fd8[0x10] != '\0') {
    FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/transport/transport.h",0x55,0,
                 "%s %p:%p REF %s",*(undefined8 *)(param_2 + 200),plVar1,
                 *(undefined8 *)(param_2 + 0x90),param_4);
  }
  plVar2 = (long *)(param_2 + 0x78);
  do {
    lVar6 = *plVar2;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar4) {
      *plVar2 = lVar6 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  lVar5 = *plVar1;
  if ((lVar5 != 0) && (*(char *)(lVar5 + 0x10) != '\0')) {
    FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0x85,1,
                 "%s:%p %s:%d ref %ld -> %ld %s",*(undefined8 *)(lVar5 + 8),plVar1,
                 "external/com_google_grpc_base\\src/core/lib/transport/transport.h",0x58,lVar6,
                 lVar6 + 1,param_4);
  }
  if (lVar6 < 1) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("prior > 0","external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0x89
                  ,"RefNonZero");
  }
  *param_1 = param_2;
  return;
}


