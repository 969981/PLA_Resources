/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005770c4; name: FUN_005770c4
 */


void FUN_005770c4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 long param_5,undefined8 param_6,undefined8 param_7)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  
  FUN_002ef750(param_1 + 3);
  if (param_1[0xb] != 0) {
                    /* try { // try from 0057733c to 0057738b has its CatchHandler @ 005773c0 */
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/channel/handshaker.cc",0xda,2,
                 "assertion failed: %s","index_ == 0");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (*(char *)(param_1 + 7) != '\0') {
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/channel/handshaker.cc",0xdb,2,
                 "assertion failed: %s","!is_shutdown_");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  param_1[0x2f] = param_2;
                    /* try { // try from 00577114 to 00577153 has its CatchHandler @ 005773c0 */
  uVar6 = FUN_002e45d0(param_3);
  param_1[0x30] = uVar6;
  param_1[0x33] = param_7;
  uVar6 = FUN_002ebd50(0x128);
  param_1[0x31] = uVar6;
  FUN_00305000();
  if (((param_5 != 0) && (*(char *)(param_5 + 0x10) != '\0')) && (*(long *)(param_5 + 0x18) != 0)) {
    FUN_00305510(param_1[0x31],*(long *)(param_5 + 0x18) + 0x18);
  }
  param_1[0x15] = param_5;
  puVar5 = PTR_LAB_04374de0;
  param_1[0x27] = param_6;
  param_1[0x28] = param_1 + 0x2f;
  plVar1 = param_1 + 1;
  param_1[0xe] = param_1;
  param_1[0xf] = 0;
  plVar2 = param_1 + 2;
  param_1[0x11] = "external/com_google_grpc_base/src/core/lib/channel/handshaker.cc";
  param_1[0x2b] = "external/com_google_grpc_base/src/core/lib/channel/handshaker.cc";
  param_1[0xd] = puVar5;
  *(undefined2 *)(param_1 + 0x10) = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x12) = 0xed;
  param_1[0x29] = 0;
  *(undefined2 *)(param_1 + 0x2a) = 0;
  param_1[0x2d] = 0;
  *(undefined4 *)(param_1 + 0x2e) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0xef;
  do {
    lVar8 = *plVar2;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar4) {
      *plVar2 = lVar8 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  lVar9 = *plVar1;
  if ((lVar9 != 0) && (*(char *)(lVar9 + 0x10) != '\0')) {
                    /* try { // try from 005771dc to 005771fb has its CatchHandler @ 005773b8 */
    FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0x5c,1,
                 "%s:%p ref %ld -> %ld",*(undefined8 *)(lVar9 + 8),plVar1,lVar8,lVar8 + 1);
  }
  param_1[0x20] = 0;
  puVar5 = PTR_LAB_04374de8;
  *(undefined2 *)(param_1 + 0x21) = 0;
  param_1[0x1e] = puVar5;
  param_1[0x1f] = param_1;
  param_1[0x24] = 0;
  *(undefined4 *)(param_1 + 0x25) = 0;
  param_1[0x22] = "external/com_google_grpc_base/src/core/lib/channel/handshaker.cc";
  *(undefined4 *)(param_1 + 0x23) = 0xf3;
                    /* try { // try from 0057722c to 00577233 has its CatchHandler @ 005773c0 */
  FUN_002f5c60(param_1 + 0x16,param_4,param_1 + 0x1d);
  do {
    lVar8 = *plVar2;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar4) {
      *plVar2 = lVar8 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  lVar9 = *plVar1;
  if ((lVar9 != 0) && (*(char *)(lVar9 + 0x10) != '\0')) {
                    /* try { // try from 0057725c to 0057727b has its CatchHandler @ 005773b4 */
    FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0x5c,1,
                 "%s:%p ref %ld -> %ld",*(undefined8 *)(lVar9 + 8),plVar1,lVar8,lVar8 + 1);
  }
                    /* try { // try from 0057727c to 00577287 has its CatchHandler @ 005773c0 */
  uVar7 = FUN_00576960(param_1,0);
                    /* try { // try from 0057728c to 00577293 has its CatchHandler @ 005773bc */
  FUN_002ef790(param_1 + 3);
  if ((uVar7 & 1) != 0) {
    lVar8 = *plVar1;
    do {
      lVar9 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((lVar8 != 0) && (*(char *)(lVar8 + 0x10) != '\0')) {
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xb7,1,
                   "%s:%p unref %ld -> %ld",*(undefined8 *)(lVar8 + 8),plVar1,lVar9);
    }
    if (lVar9 < 1) {
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xba,2,
                   "assertion failed: %s","prior > 0");
                    /* WARNING: Subroutine does not return */
      abort();
    }
    if (lVar9 == 1) {
      (**(code **)*param_1)(param_1);
      FUN_002e2ea0(PTR_LAB_04373088,param_1);
      return;
    }
  }
  return;
}


