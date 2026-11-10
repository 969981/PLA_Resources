/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005ab610; name: FUN_005ab610
 */


long FUN_005ab610(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  double dVar7;
  double dVar8;
  undefined1 auVar9 [12];
  undefined1 auVar10 [16];
  
  auVar10 = FUN_002eec80(0);
  auVar9 = FUN_002ef280(auVar10._0_8_,auVar10._8_8_,*(undefined8 *)(param_1 + 6),
                        *(undefined8 *)(param_1 + 8));
  puVar3 = PTR_DAT_04374f00;
  dVar7 = (double)auVar9._8_4_ * 1e-09 + (double)auVar9._0_8_;
  if (dVar7 <= 0.0) {
    dVar8 = 0.0;
  }
  else {
    dVar8 = (double)*(long *)(param_1 + 2) / dVar7;
  }
  iVar1 = param_1[10];
  if (PTR_DAT_04374f00[0x10] == '\0') {
    iVar4 = *param_1;
  }
  else {
    FUN_002ebea0(dVar7,dVar8 / 125000.0,*(double *)(param_1 + 0xc) / 125000.0,
                 "external/com_google_grpc_base/src/core/lib/transport/bdp_estimator.cc",0x32,1,
                 "bdp[%s]:complete acc=%ld est=%ld dt=%lf bw=%lfMbs bw_est=%lfMbs",
                 *(undefined8 *)(param_1 + 0xe),*(undefined8 *)(param_1 + 2),
                 *(undefined8 *)(param_1 + 4));
    iVar4 = *param_1;
  }
  if (iVar4 != 2) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/transport/bdp_estimator.cc",0x38,2,
                 "assertion failed: %s","ping_state_ == PingState::STARTED");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  lVar5 = *(long *)(param_1 + 2);
  lVar6 = *(ulong *)(param_1 + 4) * 2;
  if ((lVar5 <= (long)(lVar6 / 3 + (lVar6 >> 0x3f) +
                      ((*(ulong *)(param_1 + 4) & 0x7fffffffffffffff) >> 0x3e))) ||
     (dVar8 <= *(double *)(param_1 + 0xc))) {
    iVar4 = param_1[10];
    if ((9999 < iVar4) || (iVar2 = param_1[0xb], param_1[0xb] = iVar2 + 1, iVar2 < 1))
    goto LAB_005ab744;
    iVar4 = rand();
    iVar4 = param_1[10] + (int)(((double)iVar4 * 100.0) / 2147483647.0) + 100;
  }
  else {
    if (lVar5 <= lVar6) {
      lVar5 = lVar6;
    }
    *(long *)(param_1 + 4) = lVar5;
    *(double *)(param_1 + 0xc) = dVar8;
    if (puVar3[0x10] != '\0') {
      FUN_002ebea0("external/com_google_grpc_base/src/core/lib/transport/bdp_estimator.cc",0x3d,1,
                   "bdp[%s]: estimate increased to %ld",*(undefined8 *)(param_1 + 0xe));
    }
    iVar4 = param_1[10];
    if (iVar4 < 0) {
      iVar4 = iVar4 + 1;
    }
    iVar4 = iVar4 >> 1;
  }
  param_1[10] = iVar4;
LAB_005ab744:
  if ((iVar1 != iVar4) && (param_1[0xb] = 0, puVar3[0x10] != '\0')) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/transport/bdp_estimator.cc",0x4e,1,
                 "bdp[%s]:update_inter_time to %dms",*(undefined8 *)(param_1 + 0xe));
  }
  *param_1 = 0;
  puVar3 = PTR___tls_init_043737c8;
  param_1[2] = 0;
  param_1[3] = 0;
  if (puVar3 != (undefined *)0x0) {
    grpc_core::ExecCtx::exec_ctx_::__tls_init();
  }
  lVar5 = tpidr_el0;
  lVar5 = FUN_002f00fc(*(undefined8 *)(lVar5 + 0x30));
  return lVar5 + param_1[10];
}


