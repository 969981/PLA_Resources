/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005c6890; name: FUN_005c6890
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005c6890(void)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  long *local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long *local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long *local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  long *local_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
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
  
  puVar5 = PTR___tls_init_043737c8;
  puVar4 = PTR_DAT_043737c0;
  local_88 = PTR_DAT_043737c0 + 0x10;
  uStack_78 = 0;
  local_80 = 0;
  uStack_68 = 0;
  local_70 = 0;
  local_60 = 1;
  local_58 = 0xffffffff;
  local_54 = 0;
  local_50 = 0;
  if (PTR___tls_init_043737c8 != (undefined *)0x0) {
    grpc_core::ExecCtx::exec_ctx_::__tls_init();
  }
  puVar6 = PTR_DAT_043737d0;
  lVar3 = tpidr_el0;
  local_48 = *(undefined8 *)(lVar3 + 0x30);
  if ((*PTR_DAT_043737d0 & 1) != 0) {
    FUN_002efbd4();
  }
  if (puVar5 != (undefined *)0x0) {
    grpc_core::ExecCtx::exec_ctx_::__tls_init();
  }
  *(undefined ***)(lVar3 + 0x30) = &local_88;
  DAT_0439f048 = 0;
  DAT_0439f050 = 0;
  DAT_0439f040 = PTR_DAT_04373888;
                    /* try { // try from 005c6950 to 005c695f has its CatchHandler @ 005c6bc0 */
  FUN_002f2c60(&local_a8,":path");
  uStack_e8 = uStack_a0;
  local_f0 = local_a8;
  uStack_d8 = uStack_90;
  uStack_e0 = uStack_98;
                    /* try { // try from 005c6968 to 005c6973 has its CatchHandler @ 005c6bb8 */
  FUN_003daa20(&local_c8,&local_f0);
  uRam000000000439f068 = uStack_c0;
  DAT_0439f060 = local_c8;
  uRam000000000439f078 = uStack_b0;
  _DAT_0439f070 = local_b8;
  if ((local_a8 != (long *)0x0) && (plVar8 = (long *)*local_a8, plVar8 != (long *)0x0)) {
    plVar10 = plVar8 + 1;
    lVar9 = *plVar8;
    do {
      lVar11 = *plVar10;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar2) {
        *plVar10 = lVar11 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if ((lVar9 != 0) && (*(char *)(lVar9 + 0x10) != '\0')) {
                    /* try { // try from 005c69c0 to 005c69f7 has its CatchHandler @ 005c6bc0 */
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xb7,1,
                   "%s:%p unref %ld -> %ld",*(undefined8 *)(lVar9 + 8),plVar8,lVar11);
    }
    if (lVar11 < 1) {
                    /* try { // try from 005c6b5c to 005c6b83 has its CatchHandler @ 005c6bc0 */
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xba,2,
                   "assertion failed: %s","prior > 0");
                    /* WARNING: Subroutine does not return */
      abort();
    }
    if (lVar11 == 1) {
      (*(code *)local_a8[3])(local_a8[4]);
    }
  }
                    /* try { // try from 005c69f8 to 005c6a07 has its CatchHandler @ 005c6bb4 */
  FUN_002f2c60(&local_c8,&DAT_0389ffa9);
  uRam000000000439f088 = uStack_c0;
  DAT_0439f080 = local_c8;
  uRam000000000439f098 = uStack_b0;
  _DAT_0439f090 = local_b8;
                    /* try { // try from 005c6a1c to 005c6a2b has its CatchHandler @ 005c6bbc */
  FUN_002f2c60(&local_c8,":authority");
  uStack_128 = uStack_c0;
  local_130 = local_c8;
  uStack_118 = uStack_b0;
  uStack_120 = local_b8;
                    /* try { // try from 005c6a38 to 005c6a43 has its CatchHandler @ 005c6bb0 */
  FUN_003daa20(&local_110,&local_130);
  uRam000000000439f0a8 = uStack_108;
  DAT_0439f0a0 = local_110;
  uRam000000000439f0b8 = uStack_f8;
  _DAT_0439f0b0 = uStack_100;
  if ((local_c8 != (long *)0x0) && (plVar8 = (long *)*local_c8, plVar8 != (long *)0x0)) {
    plVar10 = plVar8 + 1;
    lVar9 = *plVar8;
    do {
      lVar11 = *plVar10;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar2) {
        *plVar10 = lVar11 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if ((lVar9 != 0) && (*(char *)(lVar9 + 0x10) != '\0')) {
                    /* try { // try from 005c6a8c to 005c6ac3 has its CatchHandler @ 005c6bbc */
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xb7,1,
                   "%s:%p unref %ld -> %ld",*(undefined8 *)(lVar9 + 8),plVar8,lVar11);
    }
    if (lVar11 < 1) {
                    /* try { // try from 005c6b84 to 005c6bab has its CatchHandler @ 005c6bbc */
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xba,2,
                   "assertion failed: %s","prior > 0");
                    /* WARNING: Subroutine does not return */
      abort();
    }
    if (lVar11 == 1) {
      (*(code *)local_c8[3])(local_c8[4]);
    }
  }
                    /* try { // try from 005c6ac4 to 005c6ad3 has its CatchHandler @ 005c6bac */
  FUN_002f2c60(&local_110,"inproc-fail");
  local_88 = puVar4 + 0x10;
  uRam000000000439f0c8 = uStack_108;
  DAT_0439f0c0 = local_110;
  uRam000000000439f0d8 = uStack_f8;
  _DAT_0439f0d0 = uStack_100;
  local_60 = local_60 | 1;
                    /* try { // try from 005c6af8 to 005c6b0b has its CatchHandler @ 005c6c20 */
  FUN_002eff00(&local_88);
  uVar7 = local_48;
  if (puVar5 != (undefined *)0x0) {
    grpc_core::ExecCtx::exec_ctx_::__tls_init();
  }
  *(undefined8 *)(lVar3 + 0x30) = uVar7;
  if ((((byte)local_60 >> 2 & 1) == 0) && ((*puVar6 & 1) != 0)) {
                    /* try { // try from 005c6b54 to 005c6b57 has its CatchHandler @ 005c6c20 */
    FUN_002efca0();
  }
  return;
}


