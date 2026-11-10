/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005e95d8; name: FUN_005e95d8
 */


void FUN_005e95d8(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  
  *param_1 = &PTR_LAB_0418e7c8;
  if (PTR_DAT_04375158[0x10] != '\0') {
                    /* try { // try from 005e9694 to 005e96b3 has its CatchHandler @ 005e9714 */
    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/lb_policy/priority/priority.cc"
                 ,0xf4,1,"[priority_lb %p] destroying priority LB policy",param_1);
  }
                    /* try { // try from 005e9604 to 005e9607 has its CatchHandler @ 005e9714 */
  FUN_002e4a10(param_1[8]);
  FUN_005e9c40(param_1 + 0xe,param_1[0xf]);
  FUN_005d3668(param_1 + 10,param_1[0xb]);
  puVar5 = (undefined8 *)param_1[9];
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
                    /* try { // try from 005e9654 to 005e9673 has its CatchHandler @ 005e9710 */
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xb7,1,
                   "%s:%p unref %ld -> %ld",*(undefined8 *)(lVar4 + 8),puVar5 + 1,lVar6);
    }
    if (lVar6 < 1) {
                    /* try { // try from 005e96e8 to 005e970f has its CatchHandler @ 005e9710 */
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xba,2,
                   "assertion failed: %s","prior > 0");
                    /* WARNING: Subroutine does not return */
      abort();
    }
    if (lVar6 == 1) {
      (**(code **)*puVar5)(puVar5);
      FUN_002e2ea0(PTR_LAB_04373088,puVar5);
      FUN_00548ed0(param_1);
      return;
    }
  }
  FUN_00548ed0(param_1);
  return;
}


