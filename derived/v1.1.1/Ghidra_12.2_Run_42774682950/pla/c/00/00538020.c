/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00538020; name: FUN_00538020
 */


void FUN_00538020(long *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  
  plVar3 = (long *)*param_1;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x18))(plVar3,param_1[1]);
    puVar5 = (undefined8 *)*param_1;
    if (puVar5 != (undefined8 *)0x0) {
      lVar4 = puVar5[1];
      plVar3 = puVar5 + 2;
      do {
        lVar6 = *plVar3;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = lVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if ((lVar4 != 0) && (*(char *)(lVar4 + 0x10) != '\0')) {
        FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xb7,1,
                     "%s:%p unref %ld -> %ld",*(undefined8 *)(lVar4 + 8),puVar5 + 1,lVar6);
      }
      if (lVar6 < 1) {
        FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xba,2,
                     "assertion failed: %s","prior > 0");
                    /* WARNING: Subroutine does not return */
        abort();
      }
      if (lVar6 == 1) {
        (**(code **)*puVar5)(puVar5);
        FUN_002e2ea0(PTR_LAB_04373088,puVar5);
      }
    }
    *param_1 = 0;
  }
  FUN_002ef750(param_1 + 4);
  if (*(char *)((long)param_1 + 0xb9) != '\0') {
                    /* try { // try from 005381c0 to 0053820f has its CatchHandler @ 00538238 */
    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/subchannel.cc",
                 0x452,2,"assertion failed: %s","!disconnected_");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  puVar5 = (undefined8 *)param_1[9];
  *(undefined1 *)((long)param_1 + 0xb9) = 1;
  param_1[9] = 0;
  if (puVar5 != (undefined8 *)0x0) {
                    /* try { // try from 005380e0 to 005380e3 has its CatchHandler @ 00538250 */
    (**(code **)*puVar5)();
  }
  puVar5 = (undefined8 *)param_1[0x16];
  if (puVar5 != (undefined8 *)0x0) {
    lVar4 = puVar5[1];
    plVar3 = puVar5 + 2;
    do {
      lVar6 = *plVar3;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = lVar6 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if ((lVar4 != 0) && (*(char *)(lVar4 + 0x10) != '\0')) {
                    /* try { // try from 00538118 to 00538137 has its CatchHandler @ 00538238 */
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xb7,1,
                   "%s:%p unref %ld -> %ld",*(undefined8 *)(lVar4 + 8),puVar5 + 1,lVar6);
    }
    if (lVar6 < 1) {
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xba,2,
                   "assertion failed: %s","prior > 0");
                    /* WARNING: Subroutine does not return */
      abort();
    }
    if (lVar6 == 1) {
      (**(code **)*puVar5)(puVar5);
      FUN_002e2ea0(PTR_LAB_04373088,puVar5);
    }
  }
  param_1[0x16] = 0;
  FUN_00539b8c(param_1 + 0x1b,param_1[0x1c]);
  param_1[0x1b] = (long)(param_1 + 0x1c);
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
                    /* try { // try from 00538160 to 00538167 has its CatchHandler @ 00538254 */
  FUN_002ef790(param_1 + 4);
  return;
}


