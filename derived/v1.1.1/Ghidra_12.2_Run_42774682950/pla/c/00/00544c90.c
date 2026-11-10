/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00544c90; name: FUN_00544c90
 */


void FUN_00544c90(void)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  
  puVar4 = PTR_DAT_04374c90;
  puVar8 = *(undefined8 **)PTR_DAT_04374c90;
  if (puVar8 == (undefined8 *)0x0) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/global_subchannel_pool.cc"
                 ,0x2f,2,"assertion failed: %s","instance_ != nullptr");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  puVar6 = (undefined8 *)*puVar8;
  if (puVar6 == (undefined8 *)0x0) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/global_subchannel_pool.cc"
                 ,0x31,2,"assertion failed: %s","*instance_ != nullptr");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  lVar5 = puVar6[1];
  plVar1 = puVar6 + 2;
  do {
    lVar7 = *plVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar7 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if ((lVar5 != 0) && (*(char *)(lVar5 + 0x10) != '\0')) {
    FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xb7,1,
                 "%s:%p unref %ld -> %ld",*(undefined8 *)(lVar5 + 8),puVar6 + 1,lVar7);
  }
  if (lVar7 < 1) {
    FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xba,2,
                 "assertion failed: %s","prior > 0");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (lVar7 == 1) {
    (**(code **)*puVar6)(puVar6);
    FUN_002e2ea0(PTR_LAB_04373088,puVar6);
    *puVar8 = 0;
    puVar8 = *(undefined8 **)puVar4;
  }
  else {
    *puVar8 = 0;
    puVar8 = *(undefined8 **)puVar4;
  }
  if (puVar8 == (undefined8 *)0x0) {
    return;
  }
  puVar6 = (undefined8 *)*puVar8;
  if (puVar6 != (undefined8 *)0x0) {
    lVar5 = puVar6[1];
    plVar1 = puVar6 + 2;
    do {
      lVar7 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((lVar5 != 0) && (*(char *)(lVar5 + 0x10) != '\0')) {
                    /* try { // try from 00544d50 to 00544d6f has its CatchHandler @ 00544e9c */
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xb7,1,
                   "%s:%p unref %ld -> %ld",*(undefined8 *)(lVar5 + 8),puVar6 + 1,lVar7);
    }
    if (lVar7 < 1) {
                    /* try { // try from 00544e74 to 00544e9b has its CatchHandler @ 00544e9c */
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xba,2,
                   "assertion failed: %s","prior > 0");
                    /* WARNING: Subroutine does not return */
      abort();
    }
    if (lVar7 == 1) {
      (**(code **)*puVar6)(puVar6);
      FUN_002e2ea0(PTR_LAB_04373088,puVar6);
    }
  }
  FUN_002e2ea0(PTR_LAB_04373088,puVar8);
  return;
}


