/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003c8870; name: FUN_003c8870
 */


void FUN_003c8870(long *param_1,long *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  void *__src;
  int iVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  size_t __n;
  undefined *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  long *plVar10;
  long *plVar11;
  uint uVar12;
  long lVar13;
  long *plVar14;
  ulong uVar15;
  long lVar16;
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
  long *local_80;
  undefined8 uStack_78;
  void *pvStack_70;
  undefined8 uStack_68;
  
  uVar9 = FUN_003c86a0(param_2[1]);
  FUN_002f27f0(param_1);
  puVar7 = PTR___tls_init_043737c8;
  local_a0 = 1;
  local_98 = 0xffffffff;
  uStack_b8 = 0;
  local_c0 = 0;
  local_c8 = PTR_DAT_043737c0 + 0x10;
  local_94 = 0;
  lVar2 = (long)param_1 + 9;
  if (*param_1 != 0) {
    lVar2 = param_1[2];
  }
  local_90 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  if (PTR___tls_init_043737c8 != (undefined *)0x0) {
    grpc_core::ExecCtx::exec_ctx_::__tls_init();
  }
  lVar6 = tpidr_el0;
  local_88 = *(undefined8 *)(lVar6 + 0x30);
  if ((*PTR_DAT_043737d0 & 1) != 0) {
    FUN_002efbd4();
  }
  if (puVar7 != (undefined *)0x0) {
    grpc_core::ExecCtx::exec_ctx_::__tls_init();
  }
  *(undefined ***)(lVar6 + 0x30) = &local_c8;
  uVar15 = 0;
  iVar3 = *(int *)(*param_2 + 8);
  while (iVar3 == 0) {
    uVar12 = *(uint *)(param_2 + 2);
    if (*(ulong *)(param_2[1] + 0x28) <= (ulong)uVar12) break;
    puVar1 = (undefined8 *)(*(long *)(param_2[1] + 0x20) + (ulong)uVar12 * 0x20);
    if (((long *)*puVar1 != (long *)0x0) && (plVar10 = *(long **)*puVar1, plVar10 != (long *)0x0)) {
      plVar11 = plVar10 + 1;
      do {
        lVar16 = *plVar11;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar5) {
          *plVar11 = lVar16 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      lVar13 = *plVar10;
      if ((lVar13 != 0) && (*(char *)(lVar13 + 0x10) != '\0')) {
                    /* try { // try from 003c89e8 to 003c89ff has its CatchHandler @ 003c8bc0 */
        FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0x79,1,
                     "%s:%p ref %ld -> %ld",*(undefined8 *)(lVar13 + 8),plVar10,lVar16,lVar16 + 1);
      }
      if (lVar16 < 1) {
                    /* try { // try from 003c8b94 to 003c8bb3 has its CatchHandler @ 003c8bb4 */
                    /* WARNING: Subroutine does not return */
        __assert_fail("prior > 0","external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",
                      0x7c,"RefNonZero");
      }
      uVar12 = *(uint *)(param_2 + 2);
    }
    uStack_78 = puVar1[1];
    plVar10 = (long *)*puVar1;
    uStack_68 = puVar1[3];
    pvStack_70 = (void *)puVar1[2];
    *(uint *)(param_2 + 2) = uVar12 + 1;
    __src = pvStack_70;
    __n = uStack_78;
    if (plVar10 == (long *)0x0) {
      __src = (void *)((long)&uStack_78 + 1);
      __n = uStack_78 & 0xff;
    }
    local_80 = plVar10;
    memcpy((void *)(lVar2 + uVar15),__src,__n);
    if ((plVar10 != (long *)0x0) && (plVar11 = (long *)*plVar10, plVar11 != (long *)0x0)) {
      plVar14 = plVar11 + 1;
      lVar16 = *plVar11;
      do {
        lVar13 = *plVar14;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar5) {
          *plVar14 = lVar13 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if ((lVar16 != 0) && (*(char *)(lVar16 + 0x10) != '\0')) {
                    /* try { // try from 003c8a74 to 003c8aa7 has its CatchHandler @ 003c8bc4 */
        FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xb7,1,
                     "%s:%p unref %ld -> %ld",*(undefined8 *)(lVar16 + 8),plVar11,lVar13);
      }
      if (lVar13 < 1) {
        FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xba,2,
                     "assertion failed: %s","prior > 0");
                    /* WARNING: Subroutine does not return */
        abort();
      }
      if (lVar13 == 1) {
        (*(code *)plVar10[3])(plVar10[4]);
      }
    }
    uVar15 = __n + uVar15;
    if (uVar9 < uVar15) {
                    /* try { // try from 003c8b44 to 003c8b93 has its CatchHandler @ 003c8bb8 */
      FUN_002ebea0("external/com_google_grpc_base/src/core/lib/surface/byte_buffer_reader.cc",0x61,2
                   ,"assertion failed: %s","bytes_read <= input_size");
                    /* WARNING: Subroutine does not return */
      abort();
    }
    iVar3 = *(int *)(*param_2 + 8);
  }
  local_c8 = PTR_DAT_043737c0 + 0x10;
  local_a0 = local_a0 | 1;
                    /* try { // try from 003c8ac8 to 003c8ae3 has its CatchHandler @ 003c8bbc */
  FUN_002eff00(&local_c8);
  uVar8 = local_88;
  if (PTR___tls_init_043737c8 != (undefined *)0x0) {
    grpc_core::ExecCtx::exec_ctx_::__tls_init();
  }
  *(undefined8 *)(lVar6 + 0x30) = uVar8;
  if ((((byte)local_a0 >> 2 & 1) == 0) && ((*PTR_DAT_043737d0 & 1) != 0)) {
                    /* try { // try from 003c8b3c to 003c8b3f has its CatchHandler @ 003c8bbc */
    FUN_002efca0();
  }
  return;
}


