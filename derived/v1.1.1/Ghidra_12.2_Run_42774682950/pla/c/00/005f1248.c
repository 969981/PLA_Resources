/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005f1248; name: FUN_005f1248
 */


void FUN_005f1248(undefined4 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  
  *(undefined8 *)(param_1 + 0x10) = 0;
  puVar7 = (undefined8 *)(param_1 + 2);
  *puVar7 = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *param_1 = 0;
  lVar5 = *(long *)(param_2 + 8);
  if (lVar5 != 0) {
    plVar1 = (long *)(lVar5 + 0x10);
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    lVar6 = *(long *)(lVar5 + 8);
    if ((lVar6 != 0) && (*(char *)(lVar6 + 0x10) != '\0')) {
                    /* try { // try from 005f12a8 to 005f131b has its CatchHandler @ 005f138c */
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0x5c,1,
                   "%s:%p ref %ld -> %ld",*(undefined8 *)(lVar6 + 8),(long *)(lVar5 + 8),lVar4,
                   lVar4 + 1);
    }
  }
  uVar9 = *(undefined8 *)(param_2 + 8);
  puVar8 = (undefined8 *)*puVar7;
  if (puVar8 != (undefined8 *)0x0) {
    lVar5 = puVar8[1];
    plVar1 = puVar8 + 2;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((lVar5 != 0) && (*(char *)(lVar5 + 0x10) != '\0')) {
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xb7,1,
                   "%s:%p unref %ld -> %ld",*(undefined8 *)(lVar5 + 8),puVar8 + 1,lVar4);
    }
    if (lVar4 < 1) {
                    /* try { // try from 005f1364 to 005f138b has its CatchHandler @ 005f138c */
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xba,2,
                   "assertion failed: %s","prior > 0");
                    /* WARNING: Subroutine does not return */
      abort();
    }
    if (lVar4 == 1) {
      (**(code **)*puVar8)(puVar8);
      FUN_002e2ea0(PTR_LAB_04373088,puVar8);
    }
  }
  *puVar7 = uVar9;
  return;
}


