/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0050d560; name: FUN_0050d560
 */


long FUN_0050d560(long param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  
                    /* try { // try from 0050d574 to 0050d617 has its CatchHandler @ 0050d684 */
  FUN_0050d35c();
  uVar7 = *(undefined8 *)(param_2 + 0x98);
  puVar5 = *(undefined8 **)(param_1 + 0x98);
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
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xb7,1,
                   "%s:%p unref %ld -> %ld",*(undefined8 *)(lVar4 + 8),puVar5 + 1,lVar6);
    }
    if (lVar6 < 1) {
                    /* try { // try from 0050d65c to 0050d683 has its CatchHandler @ 0050d684 */
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
  *(undefined8 *)(param_1 + 0x98) = uVar7;
  *(undefined8 *)(param_2 + 0x98) = 0;
  if (4 < *(ulong *)(param_1 + 0xa0)) {
    FUN_002f0430(*(ulong *)(param_1 + 0xa0),
                 "external/com_google_grpc_base/src/core/ext/filters/client_channel/resolver.cc",
                 0x4c);
  }
  *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(param_2 + 0xa0);
  *(undefined8 *)(param_2 + 0xa0) = 0;
  FUN_002e4a10(*(undefined8 *)(param_1 + 0xa8));
  *(undefined8 *)(param_1 + 0xa8) = *(undefined8 *)(param_2 + 0xa8);
  *(undefined8 *)(param_2 + 0xa8) = 0;
  return param_1;
}


