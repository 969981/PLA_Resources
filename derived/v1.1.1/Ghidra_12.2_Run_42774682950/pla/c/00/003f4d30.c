/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003f4d30; name: FUN_003f4d30
 */


long * FUN_003f4d30(ulong *param_1,long param_2)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long local_28;
  undefined8 local_18;
  
  if (param_2 == 0) {
    local_28 = 0;
  }
  else {
    plVar4 = (long *)(param_2 + 0x10);
    do {
      lVar5 = *plVar4;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar3) {
        *plVar4 = lVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    lVar6 = *(long *)(param_2 + 8);
    if ((lVar6 != 0) && (*(char *)(lVar6 + 0x10) != '\0')) {
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0x5c,1,
                   "%s:%p ref %ld -> %ld",*(undefined8 *)(lVar6 + 8),(long *)(param_2 + 8),lVar5,
                   lVar5 + 1);
    }
    local_28 = param_2;
  }
  do {
    uVar7 = *param_1;
    uVar1 = uVar7 + 0x20;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar3) {
      *param_1 = uVar1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (param_1[1] < uVar1) {
                    /* try { // try from 003f4dbc to 003f4dc7 has its CatchHandler @ 003f4e1c */
    plVar4 = (long *)FUN_003f5a34(param_1,0x20);
    param_2 = local_28;
  }
  else {
    plVar4 = (long *)((long)param_1 + uVar7 + 0x20);
  }
  local_28 = 0;
  *plVar4 = 0;
  plVar4[1] = 0;
  *plVar4 = param_2;
  local_18 = 0;
  plVar4[2] = 0;
  plVar4[3] = 0;
  FUN_003f4f54(&local_18);
  FUN_003f4f54(&local_28);
  return plVar4;
}


