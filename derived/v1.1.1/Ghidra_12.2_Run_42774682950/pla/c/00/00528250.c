/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00528250; name: FUN_00528250
 */


void FUN_00528250(long param_1,undefined4 param_2,undefined8 *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  code *pcVar5;
  long lVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  char *local_70;
  undefined4 local_68;
  undefined **local_60;
  long *plStack_58;
  undefined ***local_40;
  
  lVar9 = *(long *)(param_1 + 8);
  puVar7 = (undefined8 *)*param_3;
  *param_3 = 0;
  plVar4 = (long *)FUN_002e2e80(PTR_FUN_04373078,0x18);
  if (plVar4 == (long *)0x0) {
    if (puVar7 != (undefined8 *)0x0) {
                    /* try { // try from 005283ac to 005283b3 has its CatchHandler @ 005283f8 */
      (**(code **)*puVar7)(puVar7);
    }
  }
  else {
    *plVar4 = lVar9;
    *(undefined4 *)(plVar4 + 1) = param_2;
    plVar4[2] = (long)puVar7;
    plVar8 = *(long **)(lVar9 + 0x10);
    if (PTR_DAT_04373fd8[0x10] != '\0') {
                    /* try { // try from 005282b0 to 0052833f has its CatchHandler @ 00528438 */
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/transport/transport.h",0x55,0,
                   "%s %p:%p REF %s",plVar8[0xb],plVar8,plVar8[4],"ConnectivityWatcherAdder");
    }
    plVar1 = plVar8 + 1;
    do {
      lVar9 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar9 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    lVar6 = *plVar8;
    if ((lVar6 != 0) && (*(char *)(lVar6 + 0x10) != '\0')) {
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0x85,1,
                   "%s:%p %s:%d ref %ld -> %ld %s",*(undefined8 *)(lVar6 + 8),plVar8,
                   "external/com_google_grpc_base\\src/core/lib/transport/transport.h",0x58,lVar9,
                   lVar9 + 1,"ConnectivityWatcherAdder");
    }
    if (lVar9 < 1) {
                    /* try { // try from 005283d8 to 005283f7 has its CatchHandler @ 00528438 */
                    /* WARNING: Subroutine does not return */
      __assert_fail("prior > 0","external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",
                    0x89,"RefNonZero");
    }
    local_60 = &PTR_LAB_04185d90;
    local_70 = "external/com_google_grpc_base/src/core/ext/filters/client_channel/client_channel.cc"
    ;
    local_68 = 0x4f8;
                    /* try { // try from 00528378 to 00528383 has its CatchHandler @ 005283fc */
    plStack_58 = plVar4;
    local_40 = &local_60;
    FUN_003d4d40(*(undefined8 *)(*plVar4 + 0xb0),&local_60,&local_70);
    if (&local_60 == local_40) {
      pcVar5 = (code *)(*local_40)[4];
    }
    else {
      if (local_40 == (undefined ***)0x0) {
        return;
      }
      pcVar5 = (code *)(*local_40)[5];
    }
    (*pcVar5)();
  }
  return;
}


