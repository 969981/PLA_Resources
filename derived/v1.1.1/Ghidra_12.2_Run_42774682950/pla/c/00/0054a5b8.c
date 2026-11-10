/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0054a5b8; name: FUN_0054a5b8
 */


void FUN_0054a5b8(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  
  *param_1 = (long)(PTR_DAT_04374cc0 + 0x10);
  puVar4 = (undefined8 *)param_1[0xb];
  param_1[0xb] = 0;
  if (puVar4 != (undefined8 *)0x0) {
                    /* try { // try from 0054a5e8 to 0054a5eb has its CatchHandler @ 0054a6d8 */
    (**(code **)*puVar4)();
  }
  puVar4 = (undefined8 *)param_1[10];
  param_1[10] = 0;
  if (puVar4 != (undefined8 *)0x0) {
                    /* try { // try from 0054a600 to 0054a603 has its CatchHandler @ 0054a6d4 */
    (**(code **)*puVar4)();
  }
  puVar4 = (undefined8 *)param_1[9];
  if (puVar4 != (undefined8 *)0x0) {
    lVar5 = puVar4[1];
    plVar1 = puVar4 + 2;
    do {
      lVar6 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((lVar5 != 0) && (*(char *)(lVar5 + 0x10) != '\0')) {
                    /* try { // try from 0054a638 to 0054a657 has its CatchHandler @ 0054a6d0 */
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xb7,1,
                   "%s:%p unref %ld -> %ld",*(undefined8 *)(lVar5 + 8),puVar4 + 1,lVar6);
    }
    if (lVar6 < 1) {
                    /* try { // try from 0054a6a8 to 0054a6cf has its CatchHandler @ 0054a6d0 */
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xba,2,
                   "assertion failed: %s","prior > 0");
                    /* WARNING: Subroutine does not return */
      abort();
    }
    if (lVar6 == 1) {
      (**(code **)*puVar4)(puVar4);
      FUN_002e2ea0(PTR_LAB_04373088,puVar4);
      FUN_00548ed0(param_1);
      return;
    }
  }
  FUN_00548ed0(param_1);
  return;
}


