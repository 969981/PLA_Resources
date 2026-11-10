/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005e06e8; name: FUN_005e06e8
 */


void FUN_005e06e8(long param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  code *pcVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  
  plVar3 = *(long **)(param_1 + 0x40);
  if ((long *)(param_1 + 0x20) == plVar3) {
    pcVar4 = *(code **)(*plVar3 + 0x20);
  }
  else {
    if (plVar3 == (long *)0x0) goto LAB_005e0720;
    pcVar4 = *(code **)(*plVar3 + 0x28);
  }
  (*pcVar4)();
LAB_005e0720:
  puVar6 = *(undefined8 **)(param_1 + 8);
  if (puVar6 != (undefined8 *)0x0) {
    lVar5 = puVar6[1];
    plVar3 = puVar6 + 2;
    do {
      lVar7 = *plVar3;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = lVar7 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if ((lVar5 != 0) && (*(char *)(lVar5 + 0x10) != '\0')) {
                    /* try { // try from 005e0754 to 005e0773 has its CatchHandler @ 005e07e0 */
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xb7,1,
                   "%s:%p unref %ld -> %ld",*(undefined8 *)(lVar5 + 8),puVar6 + 1,lVar7);
    }
    if (lVar7 < 1) {
                    /* try { // try from 005e07b8 to 005e07df has its CatchHandler @ 005e07e0 */
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xba,2,
                   "assertion failed: %s","prior > 0");
                    /* WARNING: Subroutine does not return */
      abort();
    }
    if (lVar7 == 1) {
      (**(code **)*puVar6)(puVar6);
      FUN_002e2ea0(PTR_LAB_04373088,puVar6);
      return;
    }
  }
  return;
}


