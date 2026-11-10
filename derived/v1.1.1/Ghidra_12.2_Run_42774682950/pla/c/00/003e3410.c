/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003e3410; name: FUN_003e3410
 */


long * FUN_003e3410(long param_1,ulong param_2,ulong param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  long *plVar10;
  long *plVar11;
  undefined8 local_e0;
  undefined8 uStack_d8;
  ulong local_d0;
  ulong uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined *local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  ulong local_88;
  undefined4 local_80;
  undefined1 local_7c;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  puVar2 = PTR___tls_init_043738e0;
  if (PTR_DAT_04373fe8[0x10] != '\0') {
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/surface/channel.cc",0x1c5,1,
                 "grpc_channel_register_call(channel=%p, method=%s, host=%s, reserved=%p)",param_1,
                 param_2,param_3,param_4);
    puVar2 = PTR___tls_init_043738e0;
  }
  PTR___tls_init_043738e0 = puVar2;
  if (param_4 != 0) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/surface/channel.cc",0x1c6,2,
                 "assertion failed: %s","!reserved");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  local_60 = 0;
  uStack_58 = 0;
  local_68 = 0;
  if (puVar2 != (undefined *)0x0) {
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
    *(undefined8 **)(lVar1 + 0x38) = &local_68;
  }
  puVar3 = PTR___tls_init_043737c8;
  puVar2 = PTR_DAT_043737c0;
  local_7c = 0;
  local_88 = 1;
  local_80 = 0xffffffff;
  local_b0 = PTR_DAT_043737c0 + 0x10;
  uStack_a0 = 0;
  local_a8 = 0;
  local_78 = 0;
  uStack_90 = 0;
  local_98 = 0;
  if (PTR___tls_init_043737c8 != (undefined *)0x0) {
                    /* try { // try from 003e34f0 to 003e34f3 has its CatchHandler @ 003e379c */
    grpc_core::ExecCtx::exec_ctx_::__tls_init();
  }
  local_70 = *(undefined8 *)(lVar1 + 0x30);
  if ((*puVar4 & 1) != 0) {
                    /* try { // try from 003e36f4 to 003e36f7 has its CatchHandler @ 003e379c */
    FUN_002efbd4();
  }
  if (puVar3 != (undefined *)0x0) {
                    /* try { // try from 003e3518 to 003e351b has its CatchHandler @ 003e379c */
    grpc_core::ExecCtx::exec_ctx_::__tls_init();
  }
  *(undefined ***)(lVar1 + 0x30) = &local_b0;
                    /* try { // try from 003e3538 to 003e353f has its CatchHandler @ 003e3740 */
  FUN_002ef750(param_1 + 0x28);
  plVar10 = (long *)(param_1 + 0x50);
  plVar8 = (long *)*plVar10;
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
  if (plVar8 == (long *)0x0) {
LAB_003e35d4:
                    /* try { // try from 003e35d4 to 003e35e3 has its CatchHandler @ 003e3728 */
    FUN_003e3144(&local_e0,param_2,param_3);
    uStack_b8 = uStack_d8;
    local_c0 = local_e0;
    local_e0 = 0;
    uStack_d8 = 0;
                    /* try { // try from 003e35f8 to 003e3607 has its CatchHandler @ 003e3710 */
    local_d0 = param_3;
    uStack_c8 = param_2;
    plVar7 = (long *)FUN_003e40fc(param_1 + 0x48,&local_d0,&local_d0);
    FUN_003e32a0(&local_c0);
    FUN_003e32a0(&local_e0);
LAB_003e361c:
                    /* try { // try from 003e361c to 003e3623 has its CatchHandler @ 003e373c */
    FUN_002ef790(param_1 + 0x28);
    local_b0 = puVar2 + 0x10;
    local_88 = local_88 | 1;
                    /* try { // try from 003e3638 to 003e364b has its CatchHandler @ 003e37b0 */
    FUN_002eff00(&local_b0);
    uVar5 = local_70;
    if (puVar3 != (undefined *)0x0) {
      grpc_core::ExecCtx::exec_ctx_::__tls_init();
    }
    *(undefined8 *)(lVar1 + 0x30) = uVar5;
    if ((((byte)local_88 >> 2 & 1) == 0) && ((*puVar4 & 1) != 0)) {
                    /* try { // try from 003e36fc to 003e36ff has its CatchHandler @ 003e37b0 */
      FUN_002efca0();
    }
    FUN_002f693c(&local_68);
    return plVar7 + 6;
  }
  uVar9 = plVar8[4];
  plVar7 = plVar10;
  if (param_3 <= uVar9) goto LAB_003e3588;
LAB_003e3568:
  do {
    plVar8 = plVar8 + 1;
    plVar11 = plVar7;
    do {
      plVar6 = (long *)*plVar8;
      plVar7 = plVar11;
      while( true ) {
        plVar8 = plVar6;
        if (plVar8 == (long *)0x0) {
          if (((plVar7 == plVar10) || (param_3 < (ulong)plVar7[4])) ||
             ((param_3 <= (ulong)plVar7[4] && (param_2 < (ulong)plVar7[5])))) goto LAB_003e35d4;
          goto LAB_003e361c;
        }
        uVar9 = plVar8[4];
        if (uVar9 < param_3) goto LAB_003e3568;
LAB_003e3588:
        if (uVar9 <= param_3) break;
        plVar6 = (long *)*plVar8;
        plVar7 = plVar8;
      }
      plVar11 = plVar8;
    } while (param_2 <= (ulong)plVar8[5]);
  } while( true );
}


