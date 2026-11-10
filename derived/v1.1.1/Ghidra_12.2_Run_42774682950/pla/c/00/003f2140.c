/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003f2140; name: FUN_003f2140
 */


void FUN_003f2140(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  code *pcVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined *local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  ulong local_60;
  undefined4 local_58;
  undefined1 local_54;
  undefined8 local_50;
  undefined8 local_48;
  
  puVar3 = PTR___tls_init_043737c8;
  puVar2 = PTR_DAT_043737c0;
  local_60 = 0;
  local_54 = 0;
  local_50 = 0;
  local_58 = 0xffffffff;
  local_88 = PTR_DAT_043737c0 + 0x10;
  uStack_78 = 0;
  local_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  lVar1 = tpidr_el0;
  if (PTR___tls_init_043737c8 != (undefined *)0x0) {
    grpc_core::ExecCtx::exec_ctx_::__tls_init();
  }
  puVar4 = PTR_DAT_043737d0;
  local_48 = *(undefined8 *)(lVar1 + 0x30);
  if ((*PTR_DAT_043737d0 & 1) != 0) {
    FUN_002efbd4();
  }
  if (puVar3 != (undefined *)0x0) {
    grpc_core::ExecCtx::exec_ctx_::__tls_init();
  }
  *(undefined ***)(lVar1 + 0x30) = &local_88;
                    /* try { // try from 003f21dc to 003f21ef has its CatchHandler @ 003f22ec */
  FUN_003ce390();
  thunk_FUN_002f8c30();
  FUN_002f6000(0);
  FUN_00300174();
  if (-1 < DAT_0439c474) {
    lVar7 = (long)DAT_0439c474 + 1;
    puVar8 = (undefined8 *)(&DAT_0439c4e8 + (long)DAT_0439c474 * 0x10);
    pcVar6 = (code *)*puVar8;
    while( true ) {
      if (pcVar6 != (code *)0x0) {
                    /* try { // try from 003f2230 to 003f2233 has its CatchHandler @ 003f22e8 */
        (*pcVar6)();
      }
      lVar7 = lVar7 + -1;
      puVar8 = puVar8 + -2;
      if (lVar7 < 1) break;
      pcVar6 = (code *)*puVar8;
    }
  }
                    /* try { // try from 003f2238 to 003f225b has its CatchHandler @ 003f22ec */
  FUN_002f5740();
  FUN_004fcfe0();
  FUN_002f4480();
  FUN_003d90f0();
  FUN_003f6de8();
  FUN_003db5f0();
  FUN_003eed28();
  FUN_002fd0e0();
  FUN_002efb38();
  local_88 = puVar2 + 0x10;
  local_60 = local_60 | 1;
                    /* try { // try from 003f2270 to 003f2283 has its CatchHandler @ 003f22e4 */
  FUN_002eff00(&local_88);
  uVar5 = local_48;
  if (puVar3 != (undefined *)0x0) {
    grpc_core::ExecCtx::exec_ctx_::__tls_init();
  }
  *(undefined8 *)(lVar1 + 0x30) = uVar5;
  if ((((byte)local_60 >> 2 & 1) == 0) && ((*puVar4 & 1) != 0)) {
                    /* try { // try from 003f22dc to 003f22df has its CatchHandler @ 003f22e4 */
    FUN_002efca0();
  }
  DAT_0439c470 = 0;
  FUN_002ef9b0(&DAT_0439c4a0);
  FUN_003db890();
  return;
}


