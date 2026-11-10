/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00537b64; name: FUN_00537b64
 */


long * FUN_00537b64(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  long local_48;
  undefined8 uStack_38;
  
  uStack_38 = param_2;
  lVar3 = FUN_002e2e80(PTR_FUN_04373078,8);
  if (lVar3 != 0) {
    FUN_0053c250(lVar3,param_2);
  }
  local_48 = lVar3;
  plVar4 = (long *)FUN_0053c2c4(param_2);
  if (plVar4 == (long *)0x0) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/subchannel.cc",
                 0x2c7,2,"assertion failed: %s","subchannel_pool != nullptr");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  plVar5 = (long *)(**(code **)(*plVar4 + 0x20))(plVar4,lVar3);
  if (plVar5 == (long *)0x0) {
    plVar6 = (long *)FUN_0053b188(&local_48,param_1,&uStack_38);
    plVar5 = (long *)(**(code **)(*plVar4 + 0x10))(plVar4,local_48,plVar6);
    if (plVar5 == plVar6) {
      plVar5 = plVar4 + 2;
      do {
        lVar3 = *plVar5;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = lVar3 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      lVar7 = plVar4[1];
      if ((lVar7 != 0) && (*(char *)(lVar7 + 0x10) != '\0')) {
        FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0x5c,1,
                     "%s:%p ref %ld -> %ld",*(undefined8 *)(lVar7 + 8),plVar4 + 1,lVar3,lVar3 + 1);
      }
      puVar8 = (undefined8 *)*plVar6;
      if (puVar8 != (undefined8 *)0x0) {
        lVar3 = puVar8[1];
        plVar5 = puVar8 + 2;
        do {
          lVar7 = *plVar5;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar2) {
            *plVar5 = lVar7 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if ((lVar3 != 0) && (*(char *)(lVar3 + 0x10) != '\0')) {
                    /* try { // try from 00537cb0 to 00537ccf has its CatchHandler @ 00537d74 */
          FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xb7,1,
                       "%s:%p unref %ld -> %ld",*(undefined8 *)(lVar3 + 8),puVar8 + 1,lVar7);
        }
        if (lVar7 < 1) {
                    /* try { // try from 00537d4c to 00537d73 has its CatchHandler @ 00537d74 */
          FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xba,2,
                       "assertion failed: %s","prior > 0");
                    /* WARNING: Subroutine does not return */
          abort();
        }
        if (lVar7 == 1) {
          (**(code **)*puVar8)(puVar8);
          FUN_002e2ea0(PTR_LAB_04373088,puVar8);
        }
      }
      *plVar6 = (long)plVar4;
      plVar5 = plVar6;
    }
  }
  else if (lVar3 != 0) {
    FUN_0053c26c(lVar3);
    FUN_002e2ea0(PTR_LAB_04373088,lVar3);
  }
  return plVar5;
}


