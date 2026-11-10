/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005d0640; name: FUN_005d0640
 */


void FUN_005d0640(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  
  puVar4 = (undefined8 *)FUN_002e2e80(PTR_FUN_04373078,0x20);
  if (puVar4 != (undefined8 *)0x0) {
    lVar9 = *param_2;
    *puVar4 = &PTR_LAB_0418d540;
    puVar4[1] = 0;
    lVar6 = *(long *)(lVar9 + 0xd0);
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
                    /* try { // try from 005d06b4 to 005d06cf has its CatchHandler @ 005d08c8 */
        FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0x5c,1,
                     "%s:%p ref %ld -> %ld",*(undefined8 *)(lVar7 + 8),(long *)(lVar6 + 8),lVar5,
                     lVar5 + 1);
      }
    }
    uVar8 = *(undefined8 *)(lVar9 + 0xd0);
    puVar4[2] = 0;
    puVar4[1] = uVar8;
    lVar6 = *(long *)(lVar9 + 0xd8);
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
                    /* try { // try from 005d0718 to 005d0733 has its CatchHandler @ 005d080c */
        FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0x5c,1,
                     "%s:%p ref %ld -> %ld",*(undefined8 *)(lVar7 + 8),(long *)(lVar6 + 8),lVar5,
                     lVar5 + 1);
      }
    }
    puVar4[2] = *(undefined8 *)(lVar9 + 0xd8);
    puVar4[3] = 0;
    lVar6 = *(long *)(lVar9 + 0xf0);
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
                    /* try { // try from 005d0774 to 005d078f has its CatchHandler @ 005d07f4 */
        FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0x5c,1,
                     "%s:%p ref %ld -> %ld",*(undefined8 *)(lVar7 + 8),(long *)(lVar6 + 8),lVar5,
                     lVar5 + 1);
      }
    }
    puVar4[3] = *(undefined8 *)(lVar9 + 0xf0);
    if (PTR_DAT_043750b0[0x10] != '\0') {
                    /* try { // try from 005d07bc to 005d07df has its CatchHandler @ 005d07e4 */
      FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/lb_policy/xds/eds.cc"
                   ,0xe5,1,"[edslb %p] constructed new drop picker %p",lVar9,puVar4);
    }
  }
  *param_1 = puVar4;
  return;
}


