/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0053de98; name: FUN_0053de98
 */


void FUN_0053de98(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  *param_1 = (long)(PTR_DAT_04374c40 + 0x10);
  if (PTR_DAT_04374be8[0x10] != '\0') {
                    /* try { // try from 0053df80 to 0053df9f has its CatchHandler @ 0053dfac */
    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/health/health_check_client.cc"
                 ,0xfc,1,"HealthCheckClient %p: destroying CallState %p",param_1[1],param_1);
  }
  if ((code *)param_1[0x12] != (code *)0x0) {
                    /* try { // try from 0053ded0 to 0053df03 has its CatchHandler @ 0053dfa8 */
    (*(code *)param_1[0x12])(param_1[0x11]);
  }
  if ((code *)param_1[0x14] != (code *)0x0) {
    (*(code *)param_1[0x14])(param_1[0x13]);
  }
  if ((code *)param_1[0x16] != (code *)0x0) {
    (*(code *)param_1[0x16])(param_1[0x15]);
  }
  if ((code *)param_1[0x18] != (code *)0x0) {
    (*(code *)param_1[0x18])(param_1[0x17]);
  }
                    /* try { // try from 0053df08 to 0053df23 has its CatchHandler @ 0053dfac */
  FUN_003d727c(param_1 + 5,0);
  if (PTR___tls_init_043737c8 != (undefined *)0x0) {
    grpc_core::ExecCtx::exec_ctx_::__tls_init();
  }
  lVar1 = tpidr_el0;
                    /* try { // try from 0053df3c to 0053df47 has its CatchHandler @ 0053dfac */
  FUN_002eff00(*(undefined8 *)(lVar1 + 0x30));
  FUN_003f59f0(param_1[4]);
  puVar2 = (undefined8 *)param_1[0xe9];
  param_1[0xe9] = 0;
  if (puVar2 != (undefined8 *)0x0) {
                    /* try { // try from 0053df5c to 0053df5f has its CatchHandler @ 0053dfa4 */
    (**(code **)*puVar2)();
  }
  param_1[0x1f] = 0;
  FUN_003d6d10(param_1 + 5);
  FUN_0053d124(param_1 + 1);
  return;
}


