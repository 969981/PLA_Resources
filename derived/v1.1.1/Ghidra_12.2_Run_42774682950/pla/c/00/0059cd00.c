/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0059cd00; name: FUN_0059cd00
 */


void FUN_0059cd00(long param_1,void *param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  
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
    FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0x67,1,
                 "%s:%p %s:%d ref %ld -> %ld %s",*(undefined8 *)(lVar5 + 8),(long *)(param_1 + 8),
                 "external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/chttp2_transport.cc"
                 ,0xd18,lVar4,lVar4 + 1,"reading_action");
  }
  if (param_2 != (void *)0x0) {
    FUN_00305640(param_2,param_1 + 0x1f0);
    free(param_2);
  }
  *(undefined8 *)(param_1 + 0x38) = param_3;
  *(code **)(param_1 + 0x1b0) = FUN_0059cdf0;
  *(long *)(param_1 + 0x1b8) = param_1;
  *(undefined8 *)(param_1 + 0x1c0) = 0;
  *(undefined2 *)(param_1 + 0x1c8) = 0;
  *(undefined8 *)(param_1 + 0x1e0) = 0;
  *(undefined4 *)(param_1 + 0x1e8) = 0;
  *(char **)(param_1 + 0x1d0) =
       "external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/chttp2_transport.cc";
  *(undefined4 *)(param_1 + 0x1d8) = 0xd1f;
  FUN_002f4f9c(*(undefined8 *)(param_1 + 0x30),param_1 + 0x1a8,0);
  return;
}


