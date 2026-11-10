/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003ce7c0; name: FUN_003ce7c0
 */


undefined8 * FUN_003ce7c0(uint param_1,uint param_2,undefined8 param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  uint uVar11;
  undefined8 *puVar12;
  code *pcVar13;
  ulong uVar14;
  long lVar15;
  undefined **ppuVar16;
  long lVar17;
  undefined *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  ulong local_80;
  undefined4 local_78;
  undefined1 local_74;
  undefined8 local_70;
  undefined8 local_68;
  
  uVar14 = (ulong)param_2;
  if (PTR_DAT_04373fe8[0x10] != '\0') {
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/surface/completion_queue.cc",0x29d,1,
                 "grpc_completion_queue_create_internal(completion_type=%d, polling_type=%d)",
                 param_1,uVar14);
  }
  puVar8 = PTR___tls_init_043737c8;
  puVar7 = PTR_DAT_043737c0;
  local_80 = 1;
  uStack_98 = 0;
  local_a0 = 0;
  local_78 = 0xffffffff;
  local_a8 = PTR_DAT_043737c0 + 0x10;
  local_74 = 0;
  local_70 = 0;
  puVar3 = &DAT_0439a7a0 + (ulong)param_1 * 0x50;
  if (param_2 != 2) {
    puVar3 = &DAT_041568f0 + (ulong)param_1 * 0x50;
  }
  uStack_88 = 0;
  local_90 = 0;
  if (PTR___tls_init_043737c8 != (undefined *)0x0) {
    grpc_core::ExecCtx::exec_ctx_::__tls_init();
  }
  puVar9 = PTR_DAT_043737d0;
  lVar6 = tpidr_el0;
  local_68 = *(undefined8 *)(lVar6 + 0x30);
  if ((*PTR_DAT_043737d0 & 1) != 0) {
    FUN_002efbd4();
  }
  if (puVar8 != (undefined *)0x0) {
    grpc_core::ExecCtx::exec_ctx_::__tls_init();
  }
  ppuVar16 = &local_a8;
  *(undefined ***)(lVar6 + 0x30) = ppuVar16;
  lVar17 = *(long *)PTR_DAT_043738c0;
  if (puVar8 != (undefined *)0x0) {
                    /* try { // try from 003ce8bc to 003ce8bf has its CatchHandler @ 003cea7c */
    grpc_core::ExecCtx::exec_ctx_::__tls_init();
    ppuVar16 = *(undefined ***)(lVar6 + 0x30);
  }
  uVar11 = *(uint *)(ppuVar16 + 6);
  if (uVar11 == 0xffffffff) {
                    /* try { // try from 003ce8e0 to 003ce9a3 has its CatchHandler @ 003cea7c */
    uVar11 = nn::os::GetCurrentCoreNumber();
    *(uint *)(ppuVar16 + 6) = uVar11;
  }
  plVar1 = (long *)(lVar17 + (ulong)uVar11 * 0x1d50 + 0x10);
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = *plVar1 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  lVar15 = *(long *)(puVar3 + 8);
  lVar17 = (*(code *)(&PTR_FUN_041569e8)[uVar14 * 7])();
  puVar12 = (undefined8 *)FUN_002ebd80(lVar15 + lVar17 + 0x98);
  puVar12[3] = puVar3;
  puVar12[4] = uVar14 * 0x38 + 0x41569e0;
  *puVar12 = 0;
  puVar12[1] = 2;
  puVar2 = puVar12 + 0x13;
  (**(code **)(puVar3 + 0x10))(puVar2,param_3);
  pcVar13 = *(code **)(puVar12[3] + 0x48);
  if (pcVar13 == (code *)0x0) {
    lVar15 = *(long *)(puVar12[3] + 8);
    lVar17 = (long)puVar2 + lVar15;
  }
  else {
    lVar17 = (*pcVar13)(puVar12);
    lVar15 = *(long *)(puVar12[3] + 8);
  }
  puVar12[5] = lVar17;
  (**(code **)(puVar12[4] + 0x10))((long)puVar2 + lVar15,puVar12 + 2);
  puVar12[0xc] = 0;
  puVar12[10] = &LAB_003ceae0;
  puVar12[0xb] = puVar12;
  *(undefined2 *)(puVar12 + 0xd) = 0;
  puVar12[0x10] = 0;
  *(undefined4 *)(puVar12 + 0x11) = 0;
  puVar12[0xe] = "external/com_google_grpc_base/src/core/lib/surface/completion_queue.cc";
  *(undefined4 *)(puVar12 + 0xf) = 0x2bf;
  local_a8 = puVar7 + 0x10;
  local_80 = local_80 | 1;
                    /* try { // try from 003ce9e0 to 003ce9f3 has its CatchHandler @ 003cea78 */
  FUN_002eff00(&local_a8);
  uVar10 = local_68;
  if (puVar8 != (undefined *)0x0) {
    grpc_core::ExecCtx::exec_ctx_::__tls_init();
  }
  *(undefined8 *)(lVar6 + 0x30) = uVar10;
  if ((((byte)local_80 >> 2 & 1) == 0) && ((*puVar9 & 1) != 0)) {
                    /* try { // try from 003cea70 to 003cea73 has its CatchHandler @ 003cea78 */
    FUN_002efca0();
  }
  return puVar12;
}


