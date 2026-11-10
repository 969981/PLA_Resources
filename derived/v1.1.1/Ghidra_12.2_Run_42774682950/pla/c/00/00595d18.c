/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00595d18; name: FUN_00595d18
 */


void FUN_00595d18(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  
  lVar4 = FUN_002e2e80(PTR_FUN_04373078,0x1b0);
  if (lVar4 != 0) {
    FUN_005764ac(lVar4);
  }
  puVar6 = *(undefined8 **)(param_1 + 0xb8);
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
                    /* try { // try from 00595d7c to 00595d9b has its CatchHandler @ 00595e50 */
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xb7,1,
                   "%s:%p unref %ld -> %ld",*(undefined8 *)(lVar5 + 8),puVar6 + 1,lVar7);
    }
    if (lVar7 < 1) {
                    /* try { // try from 00595e28 to 00595e4f has its CatchHandler @ 00595e50 */
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
  *(long *)(param_1 + 0xb8) = lVar4;
  FUN_003f70f8(0,*(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x38),lVar4);
  FUN_003082f0(*(undefined8 *)(param_1 + 0x68),*(undefined8 *)(param_1 + 0x38));
  FUN_005770c4(*(undefined8 *)(param_1 + 0xb8),*(undefined8 *)(param_1 + 0x68),
               *(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x40),0,PTR_LAB_04374ee0,
               param_1);
  *(undefined8 *)(param_1 + 0x68) = 0;
  return;
}


