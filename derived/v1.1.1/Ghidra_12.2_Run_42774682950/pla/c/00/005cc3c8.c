/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005cc3c8; name: FUN_005cc3c8
 */


void FUN_005cc3c8(undefined8 *param_1)

{
  long *plVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  
  *param_1 = &PTR_LAB_0418d4d8;
  if (PTR_DAT_043750b0[0x10] != '\0') {
                    /* try { // try from 005cc5d4 to 005cc5f3 has its CatchHandler @ 005cc6b8 */
    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/lb_policy/xds/eds.cc"
                 ,0x189,1,"[edslb %p] destroying xds LB policy",param_1);
  }
                    /* try { // try from 005cc3f8 to 005cc3fb has its CatchHandler @ 005cc6b8 */
  FUN_002e4a10(param_1[10]);
  FUN_005cc04c(param_1[0x1e]);
  puVar6 = (undefined8 *)param_1[0x1c];
  param_1[0x1c] = 0;
  if (puVar6 != (undefined8 *)0x0) {
                    /* try { // try from 005cc418 to 005cc41b has its CatchHandler @ 005cc6b4 */
    (**(code **)*puVar6)();
  }
  FUN_005cc118(param_1 + 0x1b);
  puVar6 = (undefined8 *)param_1[0x1a];
  if (puVar6 == (undefined8 *)0x0) {
LAB_005cc488:
    lVar8 = param_1[0x17];
  }
  else {
    lVar8 = puVar6[1];
    plVar10 = puVar6 + 2;
    do {
      lVar11 = *plVar10;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar4) {
        *plVar10 = lVar11 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((lVar8 != 0) && (*(char *)(lVar8 + 0x10) != '\0')) {
                    /* try { // try from 005cc458 to 005cc477 has its CatchHandler @ 005cc6ac */
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xb7,1,
                   "%s:%p unref %ld -> %ld",*(undefined8 *)(lVar8 + 8),puVar6 + 1,lVar11);
    }
    if (lVar11 < 1) {
                    /* try { // try from 005cc658 to 005cc67f has its CatchHandler @ 005cc6ac */
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xba,2,
                   "assertion failed: %s","prior > 0");
                    /* WARNING: Subroutine does not return */
      abort();
    }
    if (lVar11 != 1) goto LAB_005cc488;
    (**(code **)*puVar6)(puVar6);
    FUN_002e2ea0(PTR_LAB_04373088,puVar6);
    lVar8 = param_1[0x17];
  }
  if (lVar8 != 0) {
    param_1[0x18] = lVar8;
    FUN_002e2ea0(PTR_LAB_04373088);
  }
  uVar9 = param_1[0x10];
  if ((uVar9 & 1) == 0) {
    puVar6 = param_1 + 0x11;
joined_r0x005cc4c4:
    if (uVar9 >> 1 != 0) {
      uVar12 = uVar9 >> 1;
      puVar5 = puVar6 + uVar12 * 3;
      do {
        uVar12 = uVar12 - 1;
        FUN_0051f624(puVar5 + -3,puVar5[-2]);
        puVar5 = puVar5 + -3;
      } while (uVar12 != 0);
    }
    memset(puVar6,0xab,(uVar9 >> 1) * 0x18);
    if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
      uVar7 = param_1[0x11];
      goto LAB_005cc518;
    }
  }
  else {
    puVar6 = (undefined8 *)param_1[0x11];
    if (puVar6 != (undefined8 *)0x0) goto joined_r0x005cc4c4;
    uVar7 = 0;
LAB_005cc518:
    FUN_002e2ea0(PTR_LAB_04373088,uVar7);
  }
  puVar6 = (undefined8 *)param_1[0xe];
  param_1[0xe] = 0;
  if (puVar6 != (undefined8 *)0x0) {
                    /* try { // try from 005cc538 to 005cc53b has its CatchHandler @ 005cc6b0 */
    (**(code **)*puVar6)();
  }
  plVar10 = (long *)param_1[0xd];
  if (plVar10 != (long *)0x0) {
    lVar8 = plVar10[1];
    plVar1 = plVar10 + 2;
    do {
      lVar11 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar11 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((lVar8 != 0) && (*(char *)(lVar8 + 0x10) != '\0')) {
                    /* try { // try from 005cc570 to 005cc58f has its CatchHandler @ 005cc6a8 */
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xb7,1,
                   "%s:%p unref %ld -> %ld",*(undefined8 *)(lVar8 + 8),plVar10 + 1,lVar11);
    }
    if (lVar11 < 1) {
                    /* try { // try from 005cc680 to 005cc6a7 has its CatchHandler @ 005cc6a8 */
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xba,2,
                   "assertion failed: %s","prior > 0");
                    /* WARNING: Subroutine does not return */
      abort();
    }
    if (lVar11 == 1) {
      (**(code **)(*plVar10 + 8))(plVar10);
      FUN_002e2ea0(PTR_LAB_04373088,plVar10);
      FUN_005cc2fc(param_1[0xb]);
      bVar2 = *(byte *)(param_1 + 7);
      goto joined_r0x005cc5ac;
    }
  }
  FUN_005cc2fc(param_1[0xb]);
  bVar2 = *(byte *)(param_1 + 7);
joined_r0x005cc5ac:
  if ((bVar2 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,param_1[9]);
  }
  FUN_00548ed0(param_1);
  return;
}


