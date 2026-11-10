/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003ce650; name: FUN_003ce650
 */


void FUN_003ce650(long *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  
  plVar1 = param_1 + 1;
  do {
    lVar4 = *plVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar4 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  lVar5 = *param_1;
  if ((lVar5 != 0) && (*(char *)(lVar5 + 0x10) != '\0')) {
    FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0x67,1,
                 "%s:%p %s:%d ref %ld -> %ld %s",*(undefined8 *)(lVar5 + 8),param_1,param_3,param_4,
                 lVar4,lVar4 + 1,param_2);
  }
  return;
}


