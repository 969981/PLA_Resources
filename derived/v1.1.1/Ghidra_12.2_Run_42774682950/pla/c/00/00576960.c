/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00576960; name: FUN_00576960
 */


bool FUN_00576960(long param_1,ulong param_2)

{
  long *plVar1;
  char cVar2;
  undefined1 uVar3;
  undefined *puVar4;
  bool bVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  byte local_100 [16];
  ulong local_f0;
  byte local_e8 [16];
  undefined8 local_d8;
  long *local_d0;
  undefined *local_c8;
  undefined8 local_c0;
  undefined *puStack_b8;
  undefined8 local_b0;
  undefined *puStack_a8;
  byte *local_a0;
  undefined *puStack_98;
  undefined8 local_90;
  undefined *puStack_88;
  undefined8 local_80;
  undefined *puStack_78;
  ulong local_70;
  undefined *puStack_68;
  
  puVar4 = PTR_DAT_04374dd0;
  if (PTR_DAT_04374dd0[0x10] != '\0') {
    uVar6 = FUN_002f1480(param_2);
    uVar3 = *(undefined1 *)(param_1 + 0x38);
    uVar13 = *(undefined8 *)(param_1 + 0x58);
    if (*(undefined8 **)(param_1 + 0x180) == (undefined8 *)0x0) {
      uVar14 = 0;
      lVar12 = *(long *)(param_1 + 0x188);
      if (lVar12 == 0) goto LAB_00576bf4;
LAB_00576bec:
      uVar15 = *(undefined8 *)(lVar12 + 0x20);
    }
    else {
      uVar14 = **(undefined8 **)(param_1 + 0x180);
      lVar12 = *(long *)(param_1 + 0x188);
      if (lVar12 != 0) goto LAB_00576bec;
LAB_00576bf4:
      uVar15 = 0;
    }
    FUN_002e5180(local_e8);
    local_d0 = *(long **)(param_1 + 0x178);
    local_c8 = PTR_LAB_043737e8;
    local_c0 = *(undefined8 *)(param_1 + 0x180);
    puStack_b8 = PTR_LAB_043737e8;
    puStack_a8 = PTR_LAB_04374a10;
    puStack_98 = PTR_LAB_04374a18;
    local_90 = *(undefined8 *)(param_1 + 0x188);
    puStack_88 = PTR_LAB_043737e8;
    puStack_78 = PTR_LAB_04374a10;
    local_70 = (ulong)*(byte *)(param_1 + 400);
    puStack_68 = PTR_LAB_04374dd8;
                    /* try { // try from 00576c50 to 00576c6b has its CatchHandler @ 00576d84 */
    local_b0 = uVar14;
    local_a0 = local_e8;
    local_80 = uVar15;
    FUN_002e6390(local_100,
                 "{endpoint=%p, args=%p {size=%lu: %s}, read_buffer=%p (length=%lu), exit_early=%d}"
                 ,0x51,&local_d0,7);
    if ((local_e8[0] & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,local_d8);
    }
    uVar10 = (ulong)local_100 | 1;
    if ((local_100[0] & 1) != 0) {
      uVar10 = local_f0;
    }
                    /* try { // try from 00576c9c to 00576ccb has its CatchHandler @ 00576d70 */
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/channel/handshaker.cc",0x81,1,
                 "handshake_manager %p: error=%s shutdown=%d index=%lu, args=%s",param_1,uVar6,uVar3
                 ,uVar13,uVar10);
    if ((local_100[0] & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,local_f0);
    }
  }
  uVar10 = *(ulong *)(param_1 + 0x40) >> 1;
  uVar11 = *(ulong *)(param_1 + 0x58);
  if (uVar10 < uVar11) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/channel/handshaker.cc",0x87,2,
                 "assertion failed: %s","index_ <= handshakers_.size()");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (param_2 == 0) {
    if (*(char *)(param_1 + 0x38) == '\0') {
      param_2 = 0;
      if ((uVar11 != uVar10) && (*(char *)(param_1 + 400) == '\0')) {
        if (uVar10 <= uVar11) {
                    /* WARNING: Subroutine does not return */
          __assert_fail("i < size()","external/com_google_absl\\absl/container/inlined_vector.h",
                        0x136,"operator[]");
        }
        if ((*(ulong *)(param_1 + 0x40) & 1) == 0) {
          lVar12 = param_1 + 0x48;
          lVar8 = *(long *)(lVar12 + uVar11 * 8);
        }
        else {
          lVar12 = *(long *)(param_1 + 0x48);
          lVar8 = *(long *)(lVar12 + uVar11 * 8);
        }
        if (lVar8 != 0) {
          local_d0 = (long *)0x0;
          plVar1 = (long *)(lVar8 + 0x10);
          do {
            lVar7 = *plVar1;
            cVar2 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar5) {
              *plVar1 = lVar7 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          lVar9 = *(long *)(lVar8 + 8);
          if ((lVar9 != 0) && (*(char *)(lVar9 + 0x10) != '\0')) {
            FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0x5c,1,
                         "%s:%p ref %ld -> %ld",*(undefined8 *)(lVar9 + 8),(long *)(lVar8 + 8),lVar7
                         ,lVar7 + 1);
          }
        }
        local_d0 = *(long **)(lVar12 + uVar11 * 8);
        if (puVar4[0x10] != '\0') {
                    /* try { // try from 00576cf0 to 00576d1f has its CatchHandler @ 00576da8 */
          uVar6 = (**(code **)(*local_d0 + 0x20))();
          FUN_002ebea0("external/com_google_grpc_base/src/core/lib/channel/handshaker.cc",0xb0,1,
                       "handshake_manager %p: calling handshaker %s [%p] at index %lu",param_1,uVar6
                       ,local_d0,*(undefined8 *)(param_1 + 0x58));
        }
                    /* try { // try from 00576b98 to 00576b9b has its CatchHandler @ 00576da8 */
        (**(code **)(*local_d0 + 0x18))
                  (local_d0,*(undefined8 *)(param_1 + 0xa8),param_1 + 0x60,param_1 + 0x178);
        FUN_00576dbc(&local_d0);
        bVar5 = *(char *)(param_1 + 0x38) != '\0';
        goto LAB_005769e8;
      }
      goto LAB_005769ac;
    }
    FUN_002f2c60(&local_d0,"handshaker shutdown");
    param_2 = FUN_002f0690("external/com_google_grpc_base/src/core/lib/channel/handshaker.cc",0x8e,
                           &local_d0,0,0);
    lVar12 = *(long *)(param_1 + 0x178);
    if (lVar12 == 0) goto LAB_005769ac;
    uVar10 = param_2;
    if (4 < param_2) {
      uVar10 = FUN_002f03c0(param_2,
                            "external/com_google_grpc_base/src/core/lib/channel/handshaker.cc",0x97)
      ;
    }
    FUN_00308310(lVar12,uVar10);
    FUN_00308320(*(undefined8 *)(param_1 + 0x178));
    *(undefined8 *)(param_1 + 0x178) = 0;
    FUN_002e4a10(*(undefined8 *)(param_1 + 0x180));
    *(undefined8 *)(param_1 + 0x180) = 0;
    FUN_00305020(*(undefined8 *)(param_1 + 0x188));
    free(*(void **)(param_1 + 0x188));
    *(undefined8 *)(param_1 + 0x188) = 0;
    cVar2 = puVar4[0x10];
  }
  else {
LAB_005769ac:
    cVar2 = puVar4[0x10];
  }
  if (cVar2 != '\0') {
    uVar6 = FUN_002f1480(param_2);
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/channel/handshaker.cc",0xa2,1,
                 "handshake_manager %p: handshaking complete -- scheduling on_handshake_done with error=%s"
                 ,param_1,uVar6);
  }
  FUN_002f5c80(param_1 + 0xb0);
  local_d0 = (long *)0x3911567;
  local_c8 = (undefined *)CONCAT44(local_c8._4_4_,0xaa);
  FUN_002f019c(&local_d0,param_1 + 0x130,param_2);
  bVar5 = true;
  *(undefined1 *)(param_1 + 0x38) = 1;
LAB_005769e8:
  *(long *)(param_1 + 0x58) = *(long *)(param_1 + 0x58) + 1;
  return bVar5;
}


