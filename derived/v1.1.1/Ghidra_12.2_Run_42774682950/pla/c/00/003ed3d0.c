/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003ed3d0; name: FUN_003ed3d0
 */


void FUN_003ed3d0(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(long *)(param_1 + 0x30) = param_2;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  if (param_2 != 0) {
    FUN_002ef6d0();
    if (PTR___tls_init_043737c8 != (undefined *)0x0) {
      grpc_core::ExecCtx::exec_ctx_::__tls_init();
    }
    lVar1 = tpidr_el0;
    uVar2 = FUN_002f00fc(*(undefined8 *)(lVar1 + 0x30));
    auVar3 = FUN_002efce0(uVar2,1);
    *(undefined1 (*) [16])(param_1 + 0x48) = auVar3;
  }
  return;
}


