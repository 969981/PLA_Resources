/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00518dd4; name: FUN_00518dd4
 */


void FUN_00518dd4(long *param_1)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  
  *param_1 = (long)(PTR_DAT_04374a88 + 0x10);
                    /* try { // try from 00518df0 to 00518e87 has its CatchHandler @ 00518f10 */
  FUN_004fcf80(param_1 + 6);
  FUN_004fcf80(param_1 + 0x1d);
  FUN_003c8500(param_1[9]);
  FUN_003c8500(param_1[0x13]);
  plVar8 = (long *)param_1[0x21];
  if ((plVar8 != (long *)0x0) && (plVar4 = (long *)*plVar8, plVar4 != (long *)0x0)) {
    plVar6 = plVar4 + 1;
    lVar5 = *plVar4;
    do {
      lVar7 = *plVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = lVar7 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if ((lVar5 != 0) && (*(char *)(lVar5 + 0x10) != '\0')) {
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xb7,1,
                   "%s:%p unref %ld -> %ld",*(undefined8 *)(lVar5 + 8),plVar4,lVar7);
    }
    if (lVar7 < 1) {
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xba,2,
                   "assertion failed: %s","prior > 0");
                    /* WARNING: Subroutine does not return */
      abort();
    }
    if (lVar7 == 1) {
      (*(code *)plVar8[3])(plVar8[4]);
    }
  }
  if (param_1[5] == 0) {
                    /* try { // try from 00518ebc to 00518f0b has its CatchHandler @ 00518f10 */
    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_client.cc"
                 ,0x61c,2,"assertion failed: %s","call_ != nullptr");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  FUN_003c9e40();
  puVar3 = (undefined8 *)param_1[0x33];
  param_1[0x33] = 0;
  if (puVar3 != (undefined8 *)0x0) {
                    /* try { // try from 00518e9c to 00518e9f has its CatchHandler @ 00518f0c */
    (**(code **)*puVar3)();
  }
  FUN_0036b9a4(param_1 + 0x2f,param_1[0x30]);
  FUN_00518d08(param_1 + 3);
  return;
}


