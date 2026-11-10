/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005181f0; name: FUN_005181f0
 */


void FUN_005181f0(long param_1,ulong param_2)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  char *local_30;
  undefined4 local_28;
  
  FUN_003c8500(*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x48));
  lVar1 = *(long *)(param_1 + 0x18);
  *(undefined8 *)(lVar1 + 0x48) = 0;
  lVar3 = *(long *)(*(long *)(lVar1 + 0x18) + 0x20);
  if (*(long *)(*(long *)(lVar3 + 0x18) + 0x150) == 0) {
    puVar2 = *(undefined8 **)(lVar3 + 0x40);
    *(undefined8 *)(lVar3 + 0x40) = 0;
    if (puVar2 != (undefined8 *)0x0) {
                    /* try { // try from 005182a8 to 005182ab has its CatchHandler @ 00518344 */
      (**(code **)*puVar2)();
    }
    local_30 = "external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_client.cc"
    ;
    local_28 = 0x5a3;
    FUN_00517480(param_1,&local_30,"Reporter+report_done+no_more_reporters");
    return;
  }
  if ((param_2 == 0) && (*(long *)(lVar1 + 0x198) == param_1)) {
    if (PTR___tls_init_043737c8 != (undefined *)0x0) {
      grpc_core::ExecCtx::exec_ctx_::__tls_init();
    }
    lVar1 = tpidr_el0;
    lVar1 = FUN_002f00fc(*(undefined8 *)(lVar1 + 0x30));
    FUN_002f5c60(param_1 + 0x30,*(long *)(param_1 + 0x20) + lVar1,param_1 + 0x68);
    *(undefined1 *)(param_1 + 0x29) = 1;
    return;
  }
  if (*(long *)(lVar1 + 0x198) != param_1) {
    FUN_00516a7c();
  }
  local_30 = "external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_client.cc";
  local_28 = 0x5ac;
  FUN_00517480(param_1,&local_30,"Reporter+report_done");
  if (4 < param_2) {
    FUN_002f0430(param_2,
                 "external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_client.cc"
                 ,0x5b0);
  }
  return;
}


