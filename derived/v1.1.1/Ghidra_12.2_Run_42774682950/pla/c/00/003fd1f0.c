/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003fd1f0; name: FUN_003fd1f0
 */


void FUN_003fd1f0(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  undefined8 *puVar7;
  long *plVar8;
  
  if (param_1 == (undefined8 *)0x0) {
    return;
  }
  plVar8 = (long *)*param_1;
  if ((plVar8 != (long *)0x0) && (plVar3 = (long *)*plVar8, plVar3 != (long *)0x0)) {
    plVar5 = plVar3 + 1;
    lVar4 = *plVar3;
    do {
      lVar6 = *plVar5;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = lVar6 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if ((lVar4 != 0) && (*(char *)(lVar4 + 0x10) != '\0')) {
                    /* try { // try from 003fd238 to 003fd26f has its CatchHandler @ 003fd2e8 */
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xb7,1,
                   "%s:%p unref %ld -> %ld",*(undefined8 *)(lVar4 + 8),plVar3,lVar6);
    }
    if (lVar6 < 1) {
                    /* try { // try from 003fd2c0 to 003fd2e7 has its CatchHandler @ 003fd2e8 */
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xba,2,
                   "assertion failed: %s","prior > 0");
                    /* WARNING: Subroutine does not return */
      abort();
    }
    if (lVar6 == 1) {
      (*(code *)plVar8[3])(plVar8[4]);
    }
  }
  puVar7 = (undefined8 *)param_1[4];
  param_1[4] = 0;
  if (puVar7 != (undefined8 *)0x0) {
    (**(code **)*puVar7)(puVar7);
    FUN_002e2ea0(PTR_LAB_04373088,puVar7);
  }
  FUN_002e2ea0(PTR_LAB_04373088,param_1);
  return;
}


