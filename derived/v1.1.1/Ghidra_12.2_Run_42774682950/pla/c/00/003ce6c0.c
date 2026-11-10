/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003ce6c0; name: FUN_003ce6c0
 */


void FUN_003ce6c0(long *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  
  plVar4 = param_1 + 1;
  lVar3 = *param_1;
  do {
    lVar5 = *plVar4;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar2) {
      *plVar4 = lVar5 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if ((lVar3 != 0) && (*(char *)(lVar3 + 0x10) != '\0')) {
    FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",199,1,
                 "%s:%p %s:%d unref %ld -> %ld %s",*(undefined8 *)(lVar3 + 8),param_1,param_3,
                 param_4,lVar5,lVar5 + -1,param_2);
  }
  if (lVar5 < 1) {
    FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xcb,2,
                 "assertion failed: %s","prior > 0");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (lVar5 == 1) {
    (**(code **)(param_1[3] + 0x20))(param_1 + 0x13);
    (**(code **)(param_1[4] + 0x30))((long)(param_1 + 0x13) + *(long *)(param_1[3] + 8));
    free((void *)param_1[6]);
    free(param_1);
    return;
  }
  return;
}


