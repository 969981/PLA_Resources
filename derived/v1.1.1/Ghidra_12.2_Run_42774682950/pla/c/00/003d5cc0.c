/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003d5cc0; name: FUN_003d5cc0
 */


void FUN_003d5cc0(long param_1)

{
  long lVar1;
  ulong uVar2;
  char *local_20;
  undefined4 local_18;
  
  uVar2 = thunk_FUN_002f8c40();
  if ((uVar2 & 1) == 0) {
    if (PTR___tls_init_043737c8 != (undefined *)0x0) {
      grpc_core::ExecCtx::exec_ctx_::__tls_init();
    }
    lVar1 = tpidr_el0;
    if ((*(byte *)(*(long *)(lVar1 + 0x30) + 0x28) >> 1 & 1) != 0) {
      FUN_00300160(param_1 + 0x10,0,0,0);
      return;
    }
  }
  local_20 = "external/com_google_grpc_base/src/core/lib/transport/transport.cc";
  local_18 = 0x37;
  FUN_002f019c(&local_20,param_1 + 0x10,0);
  return;
}


