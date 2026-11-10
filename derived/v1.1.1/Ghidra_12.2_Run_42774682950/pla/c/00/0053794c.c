/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0053794c; name: FUN_0053794c
 */


void FUN_0053794c(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  undefined1 auStack_40 [32];
  
  lVar6 = param_1[0x38];
  if (lVar6 != 0) {
                    /* try { // try from 00537968 to 00537987 has its CatchHandler @ 00537b14 */
    FUN_002f2c60(auStack_40,"Subchannel destroyed");
    FUN_003ed490(lVar6 + 0xd8,1,auStack_40);
                    /* try { // try from 0053798c to 0053799b has its CatchHandler @ 00537b18 */
    FUN_005436ec(param_1[0x38],4);
  }
  FUN_002e4a10(param_1[2]);
  puVar4 = (undefined8 *)param_1[9];
  param_1[9] = 0;
  if (puVar4 != (undefined8 *)0x0) {
                    /* try { // try from 005379b0 to 005379b3 has its CatchHandler @ 00537b0c */
    (**(code **)*puVar4)();
  }
                    /* try { // try from 005379b8 to 005379bb has its CatchHandler @ 00537b18 */
  FUN_002fe060(param_1[3]);
  lVar6 = param_1[1];
  if (lVar6 != 0) {
    FUN_0053c26c(lVar6);
    FUN_002e2ea0(PTR_LAB_04373088,lVar6);
  }
  FUN_00535c40(param_1 + 0x38);
  FUN_00539b8c(param_1 + 0x1b,param_1[0x1c]);
  FUN_00539bf4(param_1 + 0x18,param_1[0x19]);
  param_1[0x18] = param_1 + 0x19;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  FUN_0052ea88(param_1 + 0x16);
  FUN_00539328(param_1 + 0xc);
  puVar4 = (undefined8 *)param_1[9];
  param_1[9] = 0;
  if (puVar4 != (undefined8 *)0x0) {
                    /* try { // try from 00537a2c to 00537a2f has its CatchHandler @ 00537b08 */
    (**(code **)*puVar4)();
  }
                    /* try { // try from 00537a34 to 00537a37 has its CatchHandler @ 00537b10 */
  FUN_002ef710(param_1 + 4);
  param_1 = (undefined8 *)*param_1;
  if (param_1 != (undefined8 *)0x0) {
    lVar6 = param_1[1];
    plVar1 = param_1 + 2;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((lVar6 != 0) && (*(char *)(lVar6 + 0x10) != '\0')) {
                    /* try { // try from 00537a6c to 00537a8b has its CatchHandler @ 00537b04 */
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xb7,1,
                   "%s:%p unref %ld -> %ld",*(undefined8 *)(lVar6 + 8),param_1 + 1,lVar5);
    }
    if (lVar5 < 1) {
                    /* try { // try from 00537adc to 00537b03 has its CatchHandler @ 00537b04 */
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xba,2,
                   "assertion failed: %s","prior > 0");
                    /* WARNING: Subroutine does not return */
      abort();
    }
    if (lVar5 == 1) {
      (**(code **)*param_1)(param_1);
      FUN_002e2ea0(PTR_LAB_04373088,param_1);
      return;
    }
  }
  return;
}


