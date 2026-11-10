/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005d6a64; name: FUN_005d6a64
 */


void FUN_005d6a64(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *local_30;
  undefined8 local_28;
  
  if (*(long *)(param_1 + 0x68) != 0) {
    puVar4 = (undefined8 *)FUN_002e2e80(PTR_FUN_04373078,0x18);
    if (puVar4 != (undefined8 *)0x0) {
      lVar6 = *(long *)(param_1 + 0x68);
      if (lVar6 != 0) {
        plVar1 = (long *)(lVar6 + 0x10);
        do {
          lVar5 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar5 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        lVar7 = *(long *)(lVar6 + 8);
        if ((lVar7 != 0) && (*(char *)(lVar7 + 0x10) != '\0')) {
          FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0x5c,1,
                       "%s:%p ref %ld -> %ld",*(undefined8 *)(lVar7 + 8),(long *)(lVar6 + 8),lVar5,
                       lVar5 + 1);
        }
      }
      uVar9 = *(undefined8 *)(param_1 + 0x68);
      local_28 = 0;
      lVar6 = *(long *)(param_1 + 0x50);
      if (lVar6 != 0) {
        plVar1 = (long *)(lVar6 + 0x10);
        do {
          lVar5 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar5 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        lVar7 = *(long *)(lVar6 + 8);
        if ((lVar7 != 0) && (*(char *)(lVar7 + 0x10) != '\0')) {
                    /* try { // try from 005d6b28 to 005d6b43 has its CatchHandler @ 005d6c0c */
          FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0x5c,1,
                       "%s:%p ref %ld -> %ld",*(undefined8 *)(lVar7 + 8),(long *)(lVar6 + 8),lVar5,
                       lVar5 + 1);
        }
      }
      uVar8 = *(undefined8 *)(param_1 + 0x50);
      *puVar4 = &PTR_FUN_0418d798;
      puVar4[1] = uVar9;
      puVar4[2] = uVar8;
      local_28 = 0;
      FUN_005d57b4(&local_28);
    }
    if (PTR_DAT_043750b8[0x10] != '\0') {
                    /* try { // try from 005d6bd0 to 005d6bfb has its CatchHandler @ 005d6c00 */
      uVar9 = FUN_003d3430(*(undefined4 *)(param_1 + 0x60));
      FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/lb_policy/xds/lrs.cc"
                   ,0x10d,1,"[lrs_lb %p] updating connectivity: state=%s picker=%p",param_1,uVar9,
                   puVar4);
    }
    local_30 = puVar4;
                    /* try { // try from 005d6b88 to 005d6b8f has its CatchHandler @ 005d6c20 */
    (**(code **)(**(long **)(param_1 + 0x30) + 0x18))
              (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x60),&local_30);
    puVar4 = local_30;
    local_30 = (undefined8 *)0x0;
    if (puVar4 != (undefined8 *)0x0) {
      (**(code **)*puVar4)(puVar4);
      FUN_002e2ea0(PTR_LAB_04373088,puVar4);
    }
  }
  return;
}


