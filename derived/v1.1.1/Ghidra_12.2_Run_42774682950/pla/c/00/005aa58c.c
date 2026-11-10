/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005aa58c; name: FUN_005aa58c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005aa58c(long *param_1,long param_2,byte param_3)

{
  undefined *puVar1;
  bool bVar2;
  undefined8 uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  double local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  
  param_1[2] = 0xffff;
  param_1[1] = 0xffff;
  puVar1 = PTR_DAT_04374f68;
  param_1[5] = 0;
  *(byte *)(param_1 + 6) = param_3 & 1;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[3] = 0xffff;
  param_1[4] = param_2;
                    /* try { // try from 005aa5d4 to 005aa5d7 has its CatchHandler @ 005aa72c */
  FUN_005ab5c8(param_1 + 7,*(undefined8 *)(param_2 + 0x20));
  local_50 = 0;
  local_48 = 0.0;
  uStack_38 = _UNK_03889808;
  local_40 = _DAT_03889800;
  local_30 = 0x7fefffffffffffff;
  uStack_58 = _UNK_0388a278;
  local_60 = _DAT_0388a270;
                    /* try { // try from 005aa604 to 005aa6e7 has its CatchHandler @ 005aa734 */
  FUN_00308350(*(undefined8 *)(param_1[4] + 0x18));
  uVar3 = FUN_003075a0();
  dVar5 = log2((double)param_1[9]);
  dVar6 = (double)FUN_00306cb0(uVar3);
  local_48 = dVar5 + 1.0;
  bVar2 = false;
  if ((local_48 < 22.0) && (bVar2 = false, !NAN(dVar6))) {
    bVar2 = dVar6 < 0.1;
  }
  if (bVar2) {
    local_48 = (dVar6 * (local_48 + -22.0)) / 0.1 + 22.0;
  }
  else if (0.8 < dVar6) {
    dVar5 = (dVar6 + -0.8) / 0.09999999999999998;
    if (1.0 < dVar5) {
      dVar5 = 1.0;
    }
    local_48 = local_48 * (1.0 - dVar5);
  }
  local_30 = 0x4024000000000000;
  uStack_38 = _UNK_0388a288;
  local_40 = _DAT_0388a280;
  FUN_005ab878(param_1 + 0xf,&local_60);
  if (PTR___tls_init_043737c8 != (undefined *)0x0) {
                    /* try { // try from 005aa6f4 to 005aa6f7 has its CatchHandler @ 005aa730 */
    grpc_core::ExecCtx::exec_ctx_::__tls_init();
  }
  lVar4 = tpidr_el0;
                    /* try { // try from 005aa710 to 005aa713 has its CatchHandler @ 005aa730 */
  lVar4 = FUN_002f00fc(*(undefined8 *)(lVar4 + 0x30));
  param_1[0x1a] = lVar4;
  return;
}


