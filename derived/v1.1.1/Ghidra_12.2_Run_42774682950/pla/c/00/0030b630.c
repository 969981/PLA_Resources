/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0030b630; name: FUN_0030b630
 */


long FUN_0030b630(long param_1,undefined8 *param_2,undefined4 param_3,undefined4 param_4,
                 int *param_5,long *param_6)

{
  ulong uVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined4 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined4 local_184;
  undefined8 local_180 [17];
  ulong local_f8;
  ulong local_f0;
  char *local_c8;
  undefined8 uStack_c0;
  byte local_98 [16];
  ulong local_88;
  byte local_80 [8];
  ulong local_78;
  ulong local_70;
  int local_64;
  
  lVar4 = FUN_00309870(param_2,1,0,param_5,&local_184);
  if (lVar4 == 0) {
    if (*param_5 == 1) {
      iVar3 = FUN_00308390(param_2,local_180);
      if (iVar3 != 0) {
        param_2 = local_180;
      }
    }
    local_64 = -1;
    lVar4 = FUN_0030b970(param_1,local_184,param_2,*(undefined1 *)(param_1 + 0x4a),&local_64);
    iVar3 = local_64;
    if (lVar4 == 0) {
      if (local_64 < 1) {
        FUN_002ebea0("external/com_google_grpc_base/src/core/lib/iomgr/tcp_server_utils_posix_common.cc"
                     ,0x61,2,"assertion failed: %s","port > 0");
                    /* WARNING: Subroutine does not return */
        abort();
      }
      FUN_003086d0(local_80,param_2,1);
      local_c8 = "tcp-server-listener:";
      uStack_c0 = 0x14;
      if ((local_80[0] & 1) == 0) {
        local_f8 = (ulong)local_80 | 1;
        local_78 = (ulong)(local_80[0] >> 1);
      }
      else {
        local_f8 = local_70;
        if ((long)local_78 < 0) {
                    /* try { // try from 0030b8e8 to 0030b907 has its CatchHandler @ 0030b908 */
                    /* WARNING: Subroutine does not return */
          __assert_fail("false && \"len <= kMaxSize\"",
                        "external/com_google_absl\\absl/strings/string_view.h",0x20a,"operator()");
        }
      }
                    /* try { // try from 0030b738 to 0030b747 has its CatchHandler @ 0030b90c */
      local_f0 = local_78;
      FUN_002eced0(local_98,&local_c8,&local_f8);
                    /* try { // try from 0030b74c to 0030b817 has its CatchHandler @ 0030b91c */
      FUN_002ef750(param_1 + 0x18);
      *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
      if (*(long *)(param_1 + 8) != 0) {
                    /* try { // try from 0030b898 to 0030b8e7 has its CatchHandler @ 0030b91c */
        FUN_002ebea0("external/com_google_grpc_base/src/core/lib/iomgr/tcp_server_utils_posix_common.cc"
                     ,0x66,2,"assertion failed: %s",
                     "!s->on_accept_cb && \"must add ports before starting server\"");
                    /* WARNING: Subroutine does not return */
        abort();
      }
      puVar7 = (undefined4 *)FUN_002ebd50(0x150);
      *(undefined8 *)(puVar7 + 0x4e) = 0;
      plVar6 = (long *)(param_1 + 0x50);
      if (*plVar6 != 0) {
        plVar6 = (long *)(*(long *)(param_1 + 0x58) + 0x138);
      }
      *plVar6 = (long)puVar7;
      *(undefined4 **)(param_1 + 0x58) = puVar7;
      *(long *)(puVar7 + 4) = param_1;
      *puVar7 = local_184;
      uVar1 = (ulong)local_98 | 1;
      if ((local_98[0] & 1) != 0) {
        uVar1 = local_88;
      }
      lVar5 = FUN_002f9420(local_184,uVar1,1);
      *(long *)(puVar7 + 2) = lVar5;
      uVar8 = *param_2;
      *(undefined8 *)(puVar7 + 8) = param_2[1];
      *(undefined8 *)(puVar7 + 6) = uVar8;
      uVar9 = param_2[3];
      uVar8 = param_2[2];
      uVar11 = param_2[5];
      uVar10 = param_2[4];
      uVar13 = param_2[7];
      uVar12 = param_2[6];
      uVar14 = param_2[8];
      *(undefined8 *)(puVar7 + 0x18) = param_2[9];
      *(undefined8 *)(puVar7 + 0x16) = uVar14;
      *(undefined8 *)(puVar7 + 0x14) = uVar13;
      *(undefined8 *)(puVar7 + 0x12) = uVar12;
      *(undefined8 *)(puVar7 + 0x10) = uVar11;
      *(undefined8 *)(puVar7 + 0xe) = uVar10;
      *(undefined8 *)(puVar7 + 0xc) = uVar9;
      *(undefined8 *)(puVar7 + 10) = uVar8;
      uVar13 = param_2[0xf];
      uVar12 = param_2[0xe];
      uVar9 = param_2[0xb];
      uVar8 = param_2[10];
      uVar11 = param_2[0xd];
      uVar10 = param_2[0xc];
      uVar2 = *(undefined4 *)(param_2 + 0x10);
      puVar7[0x28] = param_3;
      puVar7[0x29] = param_4;
      puVar7[0x52] = 0;
      *(undefined8 *)(puVar7 + 0x20) = uVar11;
      *(undefined8 *)(puVar7 + 0x1e) = uVar10;
      puVar7[0x26] = uVar2;
      puVar7[0x27] = iVar3;
      *(undefined8 *)(puVar7 + 0x24) = uVar13;
      *(undefined8 *)(puVar7 + 0x22) = uVar12;
      *(undefined8 *)(puVar7 + 0x50) = 0;
      *(undefined8 *)(puVar7 + 0x1c) = uVar9;
      *(undefined8 *)(puVar7 + 0x1a) = uVar8;
      if (lVar5 == 0) {
        FUN_002ebea0("external/com_google_grpc_base/src/core/lib/iomgr/tcp_server_utils_posix_common.cc"
                     ,0x78,2,"assertion failed: %s","sp->emfd");
                    /* WARNING: Subroutine does not return */
        abort();
      }
      FUN_002ef790(param_1 + 0x18);
      if ((local_98[0] & 1) != 0) {
        FUN_002e2ea0(PTR_LAB_04373088,local_88);
      }
      if ((local_80[0] & 1) != 0) {
        FUN_002e2ea0(PTR_LAB_04373088,local_70);
      }
    }
    else {
      puVar7 = (undefined4 *)0x0;
    }
    *param_6 = (long)puVar7;
  }
  return lVar4;
}


