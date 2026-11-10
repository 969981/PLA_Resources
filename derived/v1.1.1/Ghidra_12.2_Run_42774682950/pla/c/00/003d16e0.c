/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003d16e0; name: FUN_003d16e0
 */


void FUN_003d16e0(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  
  if (*(char *)(param_1 + 0xa0) != '\x01') {
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/surface/completion_queue.cc",0x633,2,
                 "assertion failed: %s","cqd->shutdown_called");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  lVar5 = *(long *)(param_1 + 0xa8);
  (**(code **)(*(long *)(param_1 + 0x20) + 0x28))(*(undefined8 *)(param_1 + 0x28),param_1 + 0x48);
  uVar2 = thunk_FUN_002f8c40();
  if ((uVar2 & 1) == 0) {
    puVar3 = (undefined8 *)FUN_002ebd50(0x58);
    puVar1 = PTR_LAB_043738c8;
    *puVar3 = PTR_LAB_04374018;
    puVar3[1] = lVar5;
    puVar3[3] = puVar1;
    *(undefined2 *)(puVar3 + 6) = 0;
    puVar3[4] = puVar3;
    puVar3[5] = 0;
    puVar3[9] = 0;
    *(undefined4 *)(puVar3 + 10) = 0;
    puVar3[7] = "external/com_google_grpc_base/src/core/lib/surface/completion_queue.cc";
    *(undefined4 *)(puVar3 + 8) = 0x63e;
    FUN_00300160(puVar3 + 2,0,0,0);
    return;
  }
  *(undefined4 *)(lVar5 + 0xc) = 1;
  *(undefined8 *)(lVar5 + 0x10) = 0;
  if (PTR___tls_init_043738e0 != (undefined *)0x0) {
    grpc_core::ApplicationCallbackExecCtx::callback_exec_ctx_::__tls_init();
  }
  lVar4 = tpidr_el0;
  lVar4 = *(long *)(lVar4 + 0x38);
  if (*(long *)(lVar4 + 8) == 0) {
    *(long *)(lVar4 + 8) = lVar5;
  }
  if (*(long *)(lVar4 + 0x10) != 0) {
    *(long *)(*(long *)(lVar4 + 0x10) + 0x10) = lVar5;
  }
  *(long *)(lVar4 + 0x10) = lVar5;
  return;
}


