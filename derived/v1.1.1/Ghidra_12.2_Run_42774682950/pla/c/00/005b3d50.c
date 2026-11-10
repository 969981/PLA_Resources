/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005b3d50; name: FUN_005b3d50
 */


long FUN_005b3d50(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined4 *puVar8;
  undefined *local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  ulong local_70;
  undefined4 local_68;
  undefined1 local_64;
  undefined8 local_60;
  undefined8 local_58;
  
  puVar3 = PTR___tls_init_043737c8;
  puVar2 = PTR_DAT_043737c0;
  local_70 = 1;
  local_64 = 0;
  local_68 = 0xffffffff;
  local_98 = PTR_DAT_043737c0 + 0x10;
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  local_60 = 0;
  if (PTR___tls_init_043737c8 != (undefined *)0x0) {
    grpc_core::ExecCtx::exec_ctx_::__tls_init();
  }
  puVar4 = PTR_DAT_043737d0;
  lVar1 = tpidr_el0;
  local_58 = *(undefined8 *)(lVar1 + 0x30);
  if ((*PTR_DAT_043737d0 & 1) != 0) {
    FUN_002efbd4();
  }
  if (puVar3 != (undefined *)0x0) {
    grpc_core::ExecCtx::exec_ctx_::__tls_init();
  }
  *(undefined ***)(lVar1 + 0x30) = &local_98;
                    /* try { // try from 005b3e00 to 005b3e27 has its CatchHandler @ 005b3f34 */
  lVar6 = FUN_003e22a0(param_1,0,2,0,0);
  puVar7 = (undefined8 *)FUN_003d7710(lVar6 + 0x78,0);
  if (PTR_DAT_04373fe8[0x10] != '\0') {
                    /* try { // try from 005b3ed4 to 005b3efb has its CatchHandler @ 005b3f34 */
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/surface/lame_client.cc",0xb8,1,
                 "grpc_lame_client_channel_create(target=%s, error_code=%d, error_message=%s)",
                 param_1,param_2,param_3);
  }
  if ((undefined *)*puVar7 != PTR_PTR_04374100) {
                    /* try { // try from 005b3f08 to 005b3f2f has its CatchHandler @ 005b3f34 */
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/surface/lame_client.cc",0xb9,2,
                 "assertion failed: %s","elem->filter == &grpc_lame_filter");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  puVar8 = (undefined4 *)puVar7[1];
  *puVar8 = param_2;
  *(undefined8 *)(puVar8 + 2) = param_3;
  local_98 = puVar2 + 0x10;
  local_70 = local_70 | 1;
                    /* try { // try from 005b3e70 to 005b3e83 has its CatchHandler @ 005b3f30 */
  FUN_002eff00(&local_98);
  uVar5 = local_58;
  if (puVar3 != (undefined *)0x0) {
    grpc_core::ExecCtx::exec_ctx_::__tls_init();
  }
  *(undefined8 *)(lVar1 + 0x30) = uVar5;
  if ((((byte)local_70 >> 2 & 1) == 0) && ((*puVar4 & 1) != 0)) {
                    /* try { // try from 005b3f00 to 005b3f03 has its CatchHandler @ 005b3f30 */
    FUN_002efca0();
  }
  return lVar6;
}


