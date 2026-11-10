/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00523678; name: FUN_00523678
 */


void FUN_00523678(long *param_1,long *param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  
  param_1[2] = 1;
  *param_1 = (long)(PTR_DAT_04374ab8 + 0x10);
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[3] = *param_2;
  puVar1 = PTR_LAB_04374b40;
  *param_2 = 0;
  param_1[4] = param_3;
  param_1[0xe] = (long)puVar1;
  param_1[0xf] = (long)param_1;
  *(undefined2 *)(param_1 + 5) = 0;
  param_1[0x10] = 0;
  *(undefined2 *)(param_1 + 0x11) = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0x12] =
       (long)"external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_client.cc";
  puVar1 = PTR_LAB_04374b38;
  *(undefined4 *)(param_1 + 0x13) = 0x13b;
  param_1[0x19] = 0;
  param_1[0x17] = (long)puVar1;
  param_1[0x18] = (long)param_1;
  *(undefined2 *)(param_1 + 0x1a) = 0;
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  param_1[0x1b] =
       (long)"external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_client.cc";
  puVar1 = PTR___tls_init_043737c8;
  *(undefined4 *)(param_1 + 0x1c) = 0x13d;
  if (puVar1 != (undefined *)0x0) {
                    /* try { // try from 0052371c to 0052371f has its CatchHandler @ 00523764 */
    grpc_core::ExecCtx::exec_ctx_::__tls_init();
  }
  lVar2 = tpidr_el0;
                    /* try { // try from 00523738 to 0052374f has its CatchHandler @ 00523764 */
  lVar2 = FUN_002f00fc(*(undefined8 *)(lVar2 + 0x30));
  FUN_002f5c60(param_1 + 6,param_1[4] + lVar2,param_1 + 0xd);
  *(undefined1 *)((long)param_1 + 0x29) = 1;
  return;
}


