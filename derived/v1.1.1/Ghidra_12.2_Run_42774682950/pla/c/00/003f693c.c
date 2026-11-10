/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003f693c; name: FUN_003f693c
 */


void FUN_003f693c(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  
  lVar4 = param_1[6];
  *param_1 = (long)(PTR_DAT_04374140 + 0x10);
  param_1[6] = 0;
  if (lVar4 != 0) {
    FUN_002e2ea0(PTR_LAB_04373088);
  }
  puVar5 = (undefined8 *)param_1[5];
  if (puVar5 != (undefined8 *)0x0) {
    lVar4 = puVar5[1];
    plVar1 = puVar5 + 2;
    do {
      lVar6 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((lVar4 != 0) && (*(char *)(lVar4 + 0x10) != '\0')) {
                    /* try { // try from 003f69a4 to 003f69c3 has its CatchHandler @ 003f6aec */
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xb7,1,
                   "%s:%p unref %ld -> %ld",*(undefined8 *)(lVar4 + 8),puVar5 + 1,lVar6);
    }
    if (lVar6 < 1) {
                    /* try { // try from 003f6a98 to 003f6abf has its CatchHandler @ 003f6aec */
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xba,2,
                   "assertion failed: %s","prior > 0");
                    /* WARNING: Subroutine does not return */
      abort();
    }
    if (lVar6 == 1) {
      (**(code **)*puVar5)(puVar5);
      FUN_002e2ea0(PTR_LAB_04373088,puVar5);
      puVar5 = (undefined8 *)param_1[4];
      goto joined_r0x003f69d8;
    }
  }
  puVar5 = (undefined8 *)param_1[4];
joined_r0x003f69d8:
  if (puVar5 != (undefined8 *)0x0) {
    lVar4 = puVar5[1];
    plVar1 = puVar5 + 2;
    do {
      lVar6 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((lVar4 != 0) && (*(char *)(lVar4 + 0x10) != '\0')) {
                    /* try { // try from 003f6a08 to 003f6a27 has its CatchHandler @ 003f6ae8 */
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xb7,1,
                   "%s:%p unref %ld -> %ld",*(undefined8 *)(lVar4 + 8),puVar5 + 1,lVar6);
    }
    if (lVar6 < 1) {
                    /* try { // try from 003f6ac0 to 003f6ae7 has its CatchHandler @ 003f6ae8 */
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xba,2,
                   "assertion failed: %s","prior > 0");
                    /* WARNING: Subroutine does not return */
      abort();
    }
    if (lVar6 == 1) {
      (**(code **)*puVar5)(puVar5);
      FUN_002e2ea0(PTR_LAB_04373088,puVar5);
      return;
    }
  }
  return;
}


