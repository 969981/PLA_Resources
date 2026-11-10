/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0050dd54; name: FUN_0050dd54
 */


void FUN_0050dd54(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  undefined8 *local_38;
  long local_30 [2];
  
  puVar5 = (undefined8 *)FUN_003d7720(*(long *)(param_1 + 0x20) + 0x78);
  if ((undefined *)*puVar5 != PTR_PTR_04374a38) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_client.cc"
                 ,0x212,2,"assertion failed: %s",
                 "client_channel_elem->filter == &grpc_client_channel_filter");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  plVar6 = (long *)(param_1 + 0x10);
  do {
    lVar7 = *plVar6;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar3) {
      *plVar6 = lVar7 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  lVar8 = *(long *)(param_1 + 8);
  if ((lVar8 != 0) && (*(char *)(lVar8 + 0x10) != '\0')) {
    FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0x5c,1,
                 "%s:%p ref %ld -> %ld",*(undefined8 *)(lVar8 + 8),(long *)(param_1 + 8),lVar7,
                 lVar7 + 1);
  }
  local_30[0] = param_1;
  plVar6 = (long *)FUN_002e2e80(PTR_FUN_04373078,0x30);
  if (plVar6 != (long *)0x0) {
    local_30[0] = 0;
    lVar7 = *(long *)(*(long *)(param_1 + 0x18) + 0x20);
    lVar8 = *(long *)(*(long *)(param_1 + 0x18) + 0x28);
    if (lVar8 != 0) {
      plVar1 = (long *)(lVar8 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    puVar4 = PTR_DAT_04374a40;
    plVar6[2] = 1;
    plVar6[3] = lVar7;
    *plVar6 = (long)(puVar4 + 0x10);
    plVar6[1] = 0;
    plVar6[4] = lVar8;
    plVar6[5] = param_1;
    local_30[1] = 0;
    FUN_0050e3a4(local_30 + 1);
  }
  *(long **)(param_1 + 0x30) = plVar6;
  FUN_0050e3a4(local_30);
  local_38 = *(undefined8 **)(param_1 + 0x30);
                    /* try { // try from 0050de50 to 0050de5f has its CatchHandler @ 0050deb4 */
  FUN_00528250(puVar5,0,&local_38);
  puVar5 = local_38;
  local_38 = (undefined8 *)0x0;
  if (puVar5 != (undefined8 *)0x0) {
                    /* try { // try from 0050de74 to 0050de77 has its CatchHandler @ 0050deb0 */
    (**(code **)*puVar5)();
  }
  return;
}


