/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00543570; name: FUN_00543570
 */


void FUN_00543570(long *param_1)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  
  *param_1 = (long)(PTR_DAT_04374c68 + 0x10);
  FUN_003ed42c(param_1 + 0x1b);
  if ((param_1[0x11] & 1U) == 0) {
    plVar4 = param_1 + 0x12;
LAB_005435a8:
    memset(plVar4,0xab,(param_1[0x11] & 0x7fffffffffffffeU) << 5);
    if ((*(byte *)(param_1 + 0x11) & 1) == 0) {
      bVar1 = *(byte *)(param_1 + 0xe);
      goto joined_r0x005435f0;
    }
    lVar5 = param_1[0x12];
  }
  else {
    plVar4 = (long *)param_1[0x12];
    lVar5 = 0;
    if (plVar4 != (long *)0x0) goto LAB_005435a8;
  }
  FUN_002e2ea0(PTR_LAB_04373088,lVar5);
  bVar1 = *(byte *)(param_1 + 0xe);
joined_r0x005435f0:
  if ((bVar1 & 1) == 0) {
    puVar6 = (undefined8 *)param_1[0xd];
  }
  else {
    FUN_002e2ea0(PTR_LAB_04373088,param_1[0x10]);
    puVar6 = (undefined8 *)param_1[0xd];
  }
  if (puVar6 != (undefined8 *)0x0) {
    lVar5 = puVar6[1];
    plVar4 = puVar6 + 2;
    do {
      lVar7 = *plVar4;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar3) {
        *plVar4 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((lVar5 != 0) && (*(char *)(lVar5 + 0x10) != '\0')) {
                    /* try { // try from 00543638 to 00543657 has its CatchHandler @ 005436cc */
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xb7,1,
                   "%s:%p unref %ld -> %ld",*(undefined8 *)(lVar5 + 8),puVar6 + 1,lVar7);
    }
    if (lVar7 < 1) {
                    /* try { // try from 005436a4 to 005436cb has its CatchHandler @ 005436cc */
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
                    /* try { // try from 0054366c to 0054366f has its CatchHandler @ 005436d0 */
  FUN_002ef710(param_1 + 9);
  FUN_003e4ba4(param_1);
  return;
}


