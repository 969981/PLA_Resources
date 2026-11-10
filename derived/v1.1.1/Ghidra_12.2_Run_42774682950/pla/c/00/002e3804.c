/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002e3804; name: FUN_002e3804
 */


void FUN_002e3804(long *param_1)

{
  int *piVar1;
  long lVar2;
  int *piVar3;
  long *plVar4;
  byte bVar5;
  long *plVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  long lVar11;
  undefined *local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  ulong local_60;
  undefined4 local_58;
  undefined1 local_54;
  undefined8 local_50;
  undefined8 local_48;
  
  puVar8 = PTR___tls_init_043737c8;
  puVar7 = PTR_DAT_043737c0;
  local_54 = 0;
  local_60 = 1;
  uStack_78 = 0;
  local_80 = 0;
  local_58 = 0xffffffff;
  local_88 = PTR_DAT_043737c0 + 0x10;
  local_50 = 0;
  uStack_68 = 0;
  local_70 = 0;
  if (PTR___tls_init_043737c8 != (undefined *)0x0) {
                    /* try { // try from 002e385c to 002e385f has its CatchHandler @ 002e39e8 */
    grpc_core::ExecCtx::exec_ctx_::__tls_init();
  }
  puVar9 = PTR_DAT_043737d0;
  lVar2 = tpidr_el0;
  local_48 = *(undefined8 *)(lVar2 + 0x30);
  if ((*PTR_DAT_043737d0 & 1) != 0) {
                    /* try { // try from 002e39d8 to 002e39db has its CatchHandler @ 002e39e8 */
    FUN_002efbd4();
  }
  if (puVar8 != (undefined *)0x0) {
                    /* try { // try from 002e3890 to 002e3893 has its CatchHandler @ 002e39e8 */
    grpc_core::ExecCtx::exec_ctx_::__tls_init();
  }
  *(undefined ***)(lVar2 + 0x30) = &local_88;
  piVar3 = (int *)param_1[1];
  for (piVar1 = (int *)*param_1; piVar1 != piVar3; piVar1 = piVar1 + 8) {
    if (*piVar1 == 2) {
                    /* try { // try from 002e38dc to 002e38df has its CatchHandler @ 002e39f4 */
      (**(code **)(*(long *)(piVar1 + 6) + 8))(*(undefined8 *)(piVar1 + 4));
    }
  }
  local_88 = puVar7 + 0x10;
  local_60 = local_60 | 1;
                    /* try { // try from 002e38f8 to 002e390b has its CatchHandler @ 002e39f0 */
  FUN_002eff00(&local_88);
  uVar10 = local_48;
  if (puVar8 != (undefined *)0x0) {
    grpc_core::ExecCtx::exec_ctx_::__tls_init();
  }
  *(undefined8 *)(lVar2 + 0x30) = uVar10;
  if ((((byte)local_60 >> 2 & 1) == 0) && ((*puVar9 & 1) != 0)) {
                    /* try { // try from 002e39e0 to 002e39e3 has its CatchHandler @ 002e39f0 */
    FUN_002efca0();
  }
  if (param_1[5] != 0) {
    lVar2 = param_1[3];
    plVar4 = (long *)param_1[4];
    lVar11 = *plVar4;
    *(undefined8 *)(lVar11 + 8) = *(undefined8 *)(lVar2 + 8);
    **(long **)(lVar2 + 8) = lVar11;
    param_1[5] = 0;
    puVar7 = PTR_LAB_04373088;
    if (plVar4 != param_1 + 3) {
      bVar5 = *(byte *)(plVar4 + 2);
      plVar6 = (long *)plVar4[1];
      while( true ) {
        if ((bVar5 & 1) != 0) {
          FUN_002e2ea0(puVar7,plVar4[4]);
        }
        FUN_002e2ea0(puVar7,plVar4);
        if (plVar6 == param_1 + 3) break;
        bVar5 = *(byte *)(plVar6 + 2);
        plVar4 = plVar6;
        plVar6 = (long *)plVar6[1];
      }
    }
  }
  if (*param_1 != 0) {
    param_1[1] = *param_1;
    FUN_002e2ea0(PTR_LAB_04373088);
  }
  return;
}


