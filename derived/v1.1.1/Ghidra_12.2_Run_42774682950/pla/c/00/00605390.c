/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00605390; name: FUN_00605390
 */


undefined4 FUN_00605390(long param_1,undefined4 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  undefined *local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  ulong local_78;
  undefined4 local_70;
  undefined1 local_6c;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  puVar7 = (undefined8 *)FUN_003d7720(param_1 + 0x78);
  puVar2 = PTR___tls_init_043738e0;
  local_50 = 0;
  uStack_48 = 0;
  local_58 = 0;
  if (PTR___tls_init_043738e0 != (undefined *)0x0) {
    grpc_core::ApplicationCallbackExecCtx::callback_exec_ctx_::__tls_init();
  }
  puVar4 = PTR_DAT_043737d0;
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x38) == 0) {
    if ((*PTR_DAT_043737d0 & 1) != 0) {
      FUN_002efbd4();
    }
    if (puVar2 != (undefined *)0x0) {
      grpc_core::ApplicationCallbackExecCtx::callback_exec_ctx_::__tls_init();
    }
    *(undefined8 **)(lVar1 + 0x38) = &local_58;
  }
  puVar3 = PTR___tls_init_043737c8;
  puVar2 = PTR_DAT_043737c0;
  local_6c = 0;
  local_78 = 1;
  local_70 = 0xffffffff;
  local_a0 = PTR_DAT_043737c0 + 0x10;
  uStack_90 = 0;
  local_98 = 0;
  local_68 = 0;
  uStack_80 = 0;
  local_88 = 0;
  if (PTR___tls_init_043737c8 != (undefined *)0x0) {
                    /* try { // try from 0060545c to 0060545f has its CatchHandler @ 0060560c */
    grpc_core::ExecCtx::exec_ctx_::__tls_init();
  }
  local_60 = *(undefined8 *)(lVar1 + 0x30);
  if ((*puVar4 & 1) != 0) {
                    /* try { // try from 00605544 to 00605547 has its CatchHandler @ 0060560c */
    FUN_002efbd4();
  }
  if (puVar3 != (undefined *)0x0) {
                    /* try { // try from 00605484 to 00605487 has its CatchHandler @ 0060560c */
    grpc_core::ExecCtx::exec_ctx_::__tls_init();
  }
  *(undefined ***)(lVar1 + 0x30) = &local_a0;
  if (PTR_DAT_04373fe8[0x10] != '\0') {
                    /* try { // try from 0060554c to 00605593 has its CatchHandler @ 006055b0 */
    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/channel_connectivity.cc"
                 ,0x2b,1,"grpc_channel_check_connectivity_state(channel=%p, try_to_connect=%d)",
                 param_1,param_2);
  }
  if ((undefined *)*puVar7 == PTR_PTR_04374a38) {
                    /* try { // try from 006054c4 to 006054cf has its CatchHandler @ 006055b0 */
    uVar6 = FUN_005276c0(puVar7,param_2);
  }
  else {
    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/channel_connectivity.cc"
                 ,0x32,2,
                 "grpc_channel_check_connectivity_state called on something that is not a client channel, but \'%s\'"
                 ,*(undefined8 *)((undefined *)*puVar7 + 0x50));
    uVar6 = 4;
  }
  local_a0 = puVar2 + 0x10;
  local_78 = local_78 | 1;
                    /* try { // try from 006054e8 to 006054fb has its CatchHandler @ 00605620 */
  FUN_002eff00(&local_a0);
  uVar5 = local_60;
  if (puVar3 != (undefined *)0x0) {
    grpc_core::ExecCtx::exec_ctx_::__tls_init();
  }
  *(undefined8 *)(lVar1 + 0x30) = uVar5;
  if ((((byte)local_78 >> 2 & 1) == 0) && ((*puVar4 & 1) != 0)) {
                    /* try { // try from 0060559c to 0060559f has its CatchHandler @ 00605620 */
    FUN_002efca0();
  }
  FUN_002f693c(&local_58);
  return uVar6;
}


