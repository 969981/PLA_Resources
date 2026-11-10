/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005b5a40; name: FUN_005b5a40
 */


long FUN_005b5a40(long *param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  void *__ptr;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined1 auStack_110 [40];
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined *local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  ulong local_a0;
  undefined4 local_98;
  undefined1 local_94;
  undefined8 local_90;
  undefined8 local_88;
  char *local_80;
  undefined1 auStack_78 [32];
  void *local_58;
  
  puVar3 = PTR___tls_init_043737c8;
  puVar2 = PTR_DAT_043737c0;
  local_a0 = 1;
  local_94 = 0;
  local_98 = 0xffffffff;
  local_c8 = PTR_DAT_043737c0 + 0x10;
  uStack_b8 = 0;
  local_c0 = 0;
  local_90 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  if (PTR___tls_init_043737c8 != (undefined *)0x0) {
    grpc_core::ExecCtx::exec_ctx_::__tls_init();
  }
  puVar4 = PTR_DAT_043737d0;
  lVar1 = tpidr_el0;
  local_88 = *(undefined8 *)(lVar1 + 0x30);
  if ((*PTR_DAT_043737d0 & 1) != 0) {
    FUN_002efbd4();
  }
  if (puVar3 != (undefined *)0x0) {
    grpc_core::ExecCtx::exec_ctx_::__tls_init();
  }
  *(undefined ***)(lVar1 + 0x30) = &local_c8;
  if (PTR_DAT_04373fe8[0x10] != '\0') {
                    /* try { // try from 005b5cc4 to 005b5cef has its CatchHandler @ 005b5d24 */
    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/transport/chttp2/client/secure/secure_channel_create.cc"
                 ,0xc9,1,"grpc_secure_channel_create(creds=%p, target=%s, args=%p, reserved=%p)",
                 param_1,param_2,param_3,param_4);
  }
  if (param_4 != 0) {
                    /* try { // try from 005b5cfc to 005b5d23 has its CatchHandler @ 005b5d24 */
    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/transport/chttp2/client/secure/secure_channel_create.cc"
                 ,0xca,2,"assertion failed: %s","reserved == nullptr");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (param_1 != (long *)0x0) {
                    /* try { // try from 005b5b10 to 005b5b23 has its CatchHandler @ 005b5d78 */
    FUN_002ef9f0(&DAT_0439f018,&LAB_005b5de0);
                    /* try { // try from 005b5b2c to 005b5b33 has its CatchHandler @ 005b5d58 */
    FUN_00544a44(&local_e8,DAT_0439f020);
    uStack_128 = uStack_e0;
    local_130 = local_e8;
    uStack_118 = uStack_d0;
    uStack_120 = local_d8;
                    /* try { // try from 005b5b48 to 005b5b4f has its CatchHandler @ 005b5d54 */
    FUN_004fcc20(auStack_110,param_1);
    local_138 = uStack_e0;
                    /* try { // try from 005b5b58 to 005b5b97 has its CatchHandler @ 005b5d80 */
    uVar5 = FUN_002e4270(param_3,&local_138,1,&local_130,2);
    uVar5 = (**(code **)(*param_1 + 0x20))(param_1,uVar5);
    if (param_2 == 0) {
                    /* try { // try from 005b5c08 to 005b5c2f has its CatchHandler @ 005b5d80 */
      FUN_002ebea0("external/com_google_grpc_base/src/core/ext/transport/chttp2/client/secure/secure_channel_create.cc"
                   ,0x9d,2,"cannot create channel with NULL target name");
      lVar7 = 0;
    }
    else {
      FUN_0050cbb8(&local_58,param_2);
                    /* try { // try from 005b5b9c to 005b5baf has its CatchHandler @ 005b5d40 */
      FUN_002e5130(auStack_78,"grpc.server_uri",local_58);
      local_80 = "grpc.server_uri";
                    /* try { // try from 005b5bb4 to 005b5bcb has its CatchHandler @ 005b5d2c */
      uVar6 = FUN_002e4270(uVar5,&local_80,1,auStack_78,1);
                    /* try { // try from 005b5bd0 to 005b5bf3 has its CatchHandler @ 005b5d5c */
      lVar7 = FUN_003e22a0(param_2,uVar6,0,0,0);
      FUN_002e4a10(uVar6);
      __ptr = local_58;
      local_58 = (void *)0x0;
      if (__ptr != (void *)0x0) {
                    /* try { // try from 005b5c00 to 005b5c03 has its CatchHandler @ 005b5d28 */
        free(__ptr);
      }
    }
    FUN_002e4a10(uVar5);
    if (lVar7 != 0) goto LAB_005b5c4c;
  }
                    /* try { // try from 005b5c34 to 005b5c47 has its CatchHandler @ 005b5d78 */
  lVar7 = FUN_005b3d50(param_2,0xd,"Failed to create secure client channel");
LAB_005b5c4c:
  local_c8 = puVar2 + 0x10;
  local_a0 = local_a0 | 1;
                    /* try { // try from 005b5c60 to 005b5c73 has its CatchHandler @ 005b5d7c */
  FUN_002eff00(&local_c8);
  uVar5 = local_88;
  if (puVar3 != (undefined *)0x0) {
    grpc_core::ExecCtx::exec_ctx_::__tls_init();
  }
  *(undefined8 *)(lVar1 + 0x30) = uVar5;
  if ((((byte)local_a0 >> 2 & 1) == 0) && ((*puVar4 & 1) != 0)) {
                    /* try { // try from 005b5cf4 to 005b5cf7 has its CatchHandler @ 005b5d7c */
    FUN_002efca0();
  }
  return lVar7;
}


