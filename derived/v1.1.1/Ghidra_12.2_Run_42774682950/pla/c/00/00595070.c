/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00595070; name: FUN_00595070
 */


long FUN_00595070(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  void *__ptr;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 local_e8;
  undefined1 auStack_e0 [8];
  undefined8 local_d8;
  undefined *local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  ulong local_98;
  undefined4 local_90;
  undefined1 local_8c;
  undefined8 local_88;
  undefined8 local_80;
  char *local_78;
  undefined1 auStack_70 [32];
  void *local_48;
  
  puVar3 = PTR___tls_init_043737c8;
  puVar2 = PTR_DAT_043737c0;
  local_98 = 1;
  local_8c = 0;
  local_90 = 0xffffffff;
  local_c0 = PTR_DAT_043737c0 + 0x10;
  uStack_b0 = 0;
  local_b8 = 0;
  local_88 = 0;
  uStack_a0 = 0;
  local_a8 = 0;
  if (PTR___tls_init_043737c8 != (undefined *)0x0) {
    grpc_core::ExecCtx::exec_ctx_::__tls_init();
  }
  puVar4 = PTR_DAT_043737d0;
  lVar1 = tpidr_el0;
  local_80 = *(undefined8 *)(lVar1 + 0x30);
  if ((*PTR_DAT_043737d0 & 1) != 0) {
    FUN_002efbd4();
  }
  if (puVar3 != (undefined *)0x0) {
    grpc_core::ExecCtx::exec_ctx_::__tls_init();
  }
  *(undefined ***)(lVar1 + 0x30) = &local_c0;
  if (PTR_DAT_04373fe8[0x10] != '\0') {
                    /* try { // try from 005952bc to 005952e3 has its CatchHandler @ 0059534c */
    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/transport/chttp2/client/insecure/channel_create.cc"
                 ,0x60,1,"grpc_insecure_channel_create(target=%s, args=%p, reserved=%p)",param_1,
                 param_2,param_3);
  }
  if (param_3 != 0) {
                    /* try { // try from 005952f0 to 00595317 has its CatchHandler @ 0059534c */
    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/transport/chttp2/client/insecure/channel_create.cc"
                 ,0x61,2,"assertion failed: %s","reserved == nullptr");
                    /* WARNING: Subroutine does not return */
    abort();
  }
                    /* try { // try from 00595138 to 0059514b has its CatchHandler @ 0059534c */
  FUN_002ef9f0(&DAT_0439ef40,&LAB_005953d0);
                    /* try { // try from 00595154 to 0059515b has its CatchHandler @ 00595348 */
  FUN_00544a44(auStack_e0,DAT_0439ef48);
  local_e8 = local_d8;
                    /* try { // try from 00595164 to 0059517b has its CatchHandler @ 00595344 */
  uVar5 = FUN_002e4270(param_2,&local_e8,1,auStack_e0,1);
  if (param_1 == 0) {
                    /* try { // try from 00595200 to 0059523f has its CatchHandler @ 00595370 */
    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/transport/chttp2/client/insecure/channel_create.cc"
                 ,0x36,2,"cannot create channel with NULL target name");
    lVar7 = 0;
  }
  else {
                    /* try { // try from 00595184 to 0059518f has its CatchHandler @ 00595370 */
    FUN_0050cbb8(&local_48,param_1);
                    /* try { // try from 00595194 to 005951a7 has its CatchHandler @ 00595330 */
    FUN_002e5130(auStack_70,"grpc.server_uri",local_48);
    local_78 = "grpc.server_uri";
                    /* try { // try from 005951ac to 005951c3 has its CatchHandler @ 0059531c */
    uVar6 = FUN_002e4270(uVar5,&local_78,1,auStack_70,1);
                    /* try { // try from 005951c8 to 005951eb has its CatchHandler @ 00595350 */
    lVar7 = FUN_003e22a0(param_1,uVar6,0,0,0);
    FUN_002e4a10(uVar6);
    __ptr = local_48;
    local_48 = (void *)0x0;
    if (__ptr != (void *)0x0) {
                    /* try { // try from 005951f8 to 005951fb has its CatchHandler @ 00595318 */
      free(__ptr);
    }
  }
  FUN_002e4a10(uVar5);
  if (lVar7 == 0) {
    lVar7 = FUN_005b3d50(param_1,0xd,"Failed to create client channel");
  }
  local_c0 = puVar2 + 0x10;
  local_98 = local_98 | 1;
                    /* try { // try from 00595258 to 0059526b has its CatchHandler @ 0059536c */
  FUN_002eff00(&local_c0);
  uVar5 = local_80;
  if (puVar3 != (undefined *)0x0) {
    grpc_core::ExecCtx::exec_ctx_::__tls_init();
  }
  *(undefined8 *)(lVar1 + 0x30) = uVar5;
  if ((((byte)local_98 >> 2 & 1) == 0) && ((*puVar4 & 1) != 0)) {
                    /* try { // try from 005952e8 to 005952eb has its CatchHandler @ 0059536c */
    FUN_002efca0();
  }
  return lVar7;
}


