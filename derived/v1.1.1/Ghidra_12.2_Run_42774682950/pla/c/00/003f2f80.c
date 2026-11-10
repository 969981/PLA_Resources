/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003f2f80; name: FUN_003f2f80
 */


void FUN_003f2f80(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  char *local_30;
  undefined4 local_28;
  
  *param_1 = &PTR_FUN_04157258;
                    /* try { // try from 003f2f9c to 003f2fdf has its CatchHandler @ 003f311c */
  FUN_002ef710(param_1 + 5);
  FUN_003f49e0(param_1[3]);
  FUN_003f4ac0(param_1[0x51]);
  if (param_1[10] != 0) {
    FUN_00308320();
  }
  if (param_1[0xb] != 0) {
    FUN_00305020();
    free((void *)param_1[0xb]);
  }
  free((void *)param_1[0xf]);
  FUN_00305020(param_1 + 0x10);
  local_30 = "external/com_google_grpc_base/src/core/lib/security/transport/security_handshaker.cc";
  local_28 = 0x8e;
                    /* try { // try from 003f2ff8 to 003f300b has its CatchHandler @ 003f3118 */
  FUN_003f378c(param_1 + 0x50,&local_30,"handshake",0);
  local_30 = "external/com_google_grpc_base/src/core/lib/security/transport/security_handshaker.cc";
  local_28 = 0x8f;
  if (param_1[4] != 0) {
                    /* try { // try from 003f3020 to 003f302f has its CatchHandler @ 003f3114 */
    FUN_003f3a08(param_1[4],&local_30,"handshake");
  }
  param_1[4] = 0;
  if (param_1[0x50] != 0) {
                    /* try { // try from 003f303c to 003f303f has its CatchHandler @ 003f3110 */
    FUN_003f3604();
    puVar5 = (undefined8 *)param_1[4];
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
                    /* try { // try from 003f3074 to 003f3093 has its CatchHandler @ 003f310c */
        FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xb7,1,
                     "%s:%p unref %ld -> %ld",*(undefined8 *)(lVar4 + 8),puVar5 + 1,lVar6);
      }
      if (lVar6 < 1) {
                    /* try { // try from 003f30e4 to 003f310b has its CatchHandler @ 003f310c */
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
  }
  return;
}


