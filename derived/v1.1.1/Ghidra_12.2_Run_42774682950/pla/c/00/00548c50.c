/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00548c50; name: FUN_00548c50
 */


void FUN_00548c50(long *param_1,undefined8 param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int *piVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  piVar4 = (int *)FUN_002e4780(param_2,"grpc.internal.config_selector");
  if (((piVar4 == (int *)0x0) || (*piVar4 != 2)) || (lVar7 = *(long *)(piVar4 + 4), lVar7 == 0)) {
    *param_1 = 0;
    return;
  }
  plVar1 = (long *)(lVar7 + 0x10);
  do {
    lVar5 = *plVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar5 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  lVar6 = *(long *)(lVar7 + 8);
  if ((lVar6 != 0) && (*(char *)(lVar6 + 0x10) != '\0')) {
    FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0x5c,1,
                 "%s:%p ref %ld -> %ld",*(undefined8 *)(lVar6 + 8),(long *)(lVar7 + 8),lVar5,
                 lVar5 + 1);
  }
  *param_1 = lVar7;
  return;
}


