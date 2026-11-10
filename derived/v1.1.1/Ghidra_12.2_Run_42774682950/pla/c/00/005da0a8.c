/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005da0a8; name: FUN_005da0a8
 */


void FUN_005da0a8(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 *puVar8;
  long *plVar9;
  long lVar10;
  undefined1 *puVar11;
  long lVar12;
  ulong uVar13;
  undefined1 *local_1f0;
  long local_1e8;
  undefined1 auStack_1e0 [32];
  byte local_1c0 [16];
  ulong local_1b0;
  undefined1 auStack_1a8 [32];
  undefined1 auStack_188 [32];
  char *local_168;
  undefined8 local_160;
  
  puVar1 = param_1 + 3;
  FUN_002ef750(puVar1);
  if (param_2 == 0) {
    if (*(char *)(param_1 + 7) == '\0') {
      lVar7 = param_1[10];
      if (*(long *)(*(long *)(lVar7 + 0x10) + 0x10) != 0) {
        lVar12 = 0;
        uVar13 = 0;
        plVar9 = *(long **)(*(long *)(lVar7 + 0x10) + 8);
        if (*plVar9 != 0) goto LAB_005da1e4;
LAB_005da1f4:
        if (*(char *)((long)plVar9 + lVar12 + 8) == '\0') goto LAB_005da1c0;
        while( true ) {
          local_1f0 = (undefined1 *)0x0;
                    /* try { // try from 005da208 to 005da213 has its CatchHandler @ 005da550 */
          uVar4 = FUN_00579ad0(param_1 + 0x43,(long)plVar9 + lVar12,&local_1f0);
          if (uVar4 != 0) {
            if (*(char *)(param_1 + 7) == '\0') {
              uVar5 = *(undefined8 *)param_1[10];
              uVar13 = uVar4;
              if (4 < uVar4) {
                    /* try { // try from 005da24c to 005da2c3 has its CatchHandler @ 005da520 */
                uVar13 = FUN_002f03c0(uVar4,
                                      "external/com_google_grpc_base/src/core/ext/filters/client_channel/http_connect_handshaker.cc"
                                      ,0x7a);
              }
              FUN_00308310(uVar5,uVar13);
              puVar8 = (undefined8 *)param_1[10];
              param_1[8] = *puVar8;
              *puVar8 = 0;
              param_1[9] = puVar8[2];
              puVar8[2] = 0;
              FUN_002e4a10(puVar8[1]);
              *(undefined8 *)(param_1[10] + 8) = 0;
              *(undefined1 *)(param_1 + 7) = 1;
            }
            local_168 = 
            "external/com_google_grpc_base/src/core/ext/filters/client_channel/http_connect_handshaker.cc"
            ;
            local_160 = CONCAT44(local_160._4_4_,0x83);
            FUN_002f019c(&local_168,param_1[0xb],uVar4);
            goto LAB_005da110;
          }
          if (*(int *)(param_1 + 0x43) == 2) break;
          lVar7 = param_1[10];
LAB_005da1c0:
          do {
            uVar13 = uVar13 + 1;
            lVar12 = lVar12 + 0x20;
            if (*(ulong *)(*(long *)(lVar7 + 0x10) + 0x10) <= uVar13) goto LAB_005da364;
            plVar9 = *(long **)(*(long *)(lVar7 + 0x10) + 8);
            if (*(long *)((long)plVar9 + lVar12) == 0) goto LAB_005da1f4;
LAB_005da1e4:
          } while (*(long *)((long)plVar9 + lVar12 + 8) == 0);
        }
                    /* try { // try from 005da2c8 to 005da363 has its CatchHandler @ 005da54c */
        FUN_00305000(&local_168);
        lVar7 = *(long *)(param_1[10] + 0x10);
        lVar10 = *(long *)(lVar7 + 8);
        if (*(long *)(lVar10 + lVar12) == 0) {
          puVar11 = (undefined1 *)(ulong)*(byte *)(lVar10 + lVar12 + 8);
        }
        else {
          puVar11 = *(undefined1 **)(lVar10 + lVar12 + 8);
        }
        if (local_1f0 < puVar11) {
          FUN_002f3850(auStack_188,lVar10 + lVar12);
          FUN_003052c0(&local_168,auStack_188);
          lVar7 = *(long *)(param_1[10] + 0x10);
          lVar10 = *(long *)(lVar7 + 8);
        }
        FUN_00305480(&local_168,lVar10 + lVar12 + 0x20,~uVar13 + *(long *)(lVar7 + 0x10));
        FUN_00305510(*(undefined8 *)(param_1[10] + 0x10),&local_168);
        FUN_00305020(&local_168);
      }
LAB_005da364:
      if (*(int *)(param_1 + 0x43) != 2) {
        FUN_00305050(*(undefined8 *)(param_1[10] + 0x10));
        uVar6 = ((undefined8 *)param_1[10])[2];
        uVar5 = *(undefined8 *)param_1[10];
        param_1[0x3d] = 0;
        param_1[0x3b] = FUN_005da020;
        param_1[0x3c] = param_1;
        param_1[0x3f] =
             "external/com_google_grpc_base/src/core/ext/filters/client_channel/http_connect_handshaker.cc"
        ;
        *(undefined2 *)(param_1 + 0x3e) = 0;
        param_1[0x41] = 0;
        *(undefined4 *)(param_1 + 0x42) = 0;
        *(undefined4 *)(param_1 + 0x40) = 0xef;
        FUN_003082c0(uVar5,uVar6,param_1 + 0x3a,1);
                    /* try { // try from 005da47c to 005da483 has its CatchHandler @ 005da528 */
        FUN_002ef790(puVar1);
        return;
      }
      if (*(int *)(param_1 + 0x249) - 200U < 100) {
        local_168 = 
        "external/com_google_grpc_base/src/core/ext/filters/client_channel/http_connect_handshaker.cc"
        ;
        local_160 = CONCAT44(local_160._4_4_,0xfe);
                    /* try { // try from 005da4a0 to 005da4ab has its CatchHandler @ 005da51c */
        FUN_002f019c(&local_168,param_1[0xb],0);
      }
      else {
        local_168 = "HTTP proxy returned response code ";
        local_160 = 0x22;
                    /* try { // try from 005da398 to 005da3c3 has its CatchHandler @ 005da524 */
        local_1e8 = FUN_002ed6a0(*(int *)(param_1 + 0x249),auStack_1e0);
        local_1e8 = local_1e8 - (long)auStack_1e0;
        local_1f0 = auStack_1e0;
        if (local_1e8 < 0) {
                    /* try { // try from 005da4fc to 005da51b has its CatchHandler @ 005da524 */
                    /* WARNING: Subroutine does not return */
          __assert_fail("false && \"len <= kMaxSize\"",
                        "external/com_google_absl\\absl/strings/string_view.h",0x20a,"operator()");
        }
        FUN_002eced0(local_1c0,&local_168,&local_1f0);
        uVar13 = (ulong)local_1c0 | 1;
        if ((local_1c0[0] & 1) != 0) {
          uVar13 = local_1b0;
        }
                    /* try { // try from 005da3d8 to 005da3fb has its CatchHandler @ 005da52c */
        FUN_002f2ff0(auStack_1a8,uVar13);
        uVar5 = FUN_002f0690("external/com_google_grpc_base/src/core/ext/filters/client_channel/http_connect_handshaker.cc"
                             ,0xf9,auStack_1a8,0,0);
        if ((local_1c0[0] & 1) != 0) {
          FUN_002e2ea0(PTR_LAB_04373088,local_1b0);
        }
                    /* try { // try from 005da418 to 005da47b has its CatchHandler @ 005da560 */
        FUN_005d9f28(param_1,uVar5);
      }
      goto LAB_005da110;
    }
    param_2 = 0;
  }
  else if (4 < param_2) {
                    /* try { // try from 005da0dc to 005da10f has its CatchHandler @ 005da560 */
    param_2 = FUN_002f03c0(param_2,
                           "external/com_google_grpc_base/src/core/ext/filters/client_channel/http_connect_handshaker.cc"
                           ,0xbb);
  }
  FUN_005d9f28(param_1,param_2);
LAB_005da110:
  *(undefined1 *)(param_1 + 7) = 1;
                    /* try { // try from 005da118 to 005da16b has its CatchHandler @ 005da554 */
  FUN_002ef790(puVar1);
  lVar7 = param_1[1];
  plVar9 = param_1 + 2;
  do {
    lVar12 = *plVar9;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar3) {
      *plVar9 = lVar12 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if ((lVar7 != 0) && (*(char *)(lVar7 + 0x10) != '\0')) {
    FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xb7,1,
                 "%s:%p unref %ld -> %ld",*(undefined8 *)(lVar7 + 8),param_1 + 1,lVar12);
  }
  if (lVar12 < 1) {
                    /* try { // try from 005da4d4 to 005da4fb has its CatchHandler @ 005da554 */
    FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xba,2,
                 "assertion failed: %s","prior > 0");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (lVar12 == 1) {
    (**(code **)*param_1)(param_1);
    FUN_002e2ea0(PTR_LAB_04373088,param_1);
  }
  return;
}


