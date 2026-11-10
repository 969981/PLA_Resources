/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003d7fd0; name: FUN_003d7fd0
 */


undefined4 FUN_003d7fd0(undefined4 param_1,long param_2)

{
  long lVar1;
  undefined4 uVar2;
  
  uVar2 = 0xd;
  switch(param_1) {
  case 7:
    uVar2 = 0xe;
    break;
  case 8:
    if (PTR___tls_init_043737c8 != (undefined *)0x0) {
      grpc_core::ExecCtx::exec_ctx_::__tls_init();
    }
    lVar1 = tpidr_el0;
    lVar1 = FUN_002f00fc(*(undefined8 *)(lVar1 + 0x30));
    uVar2 = 4;
    if (lVar1 <= param_2) {
      uVar2 = 1;
    }
    return uVar2;
  case 0xb:
    return 8;
  case 0xc:
    return 7;
  }
  return uVar2;
}


