/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0053ed18; name: FUN_0053ed18
 */


long FUN_0053ed18(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  if (*(char *)(param_1 + 0x24) == '\0') {
    dVar4 = *(double *)(param_1 + 8) * (double)*(long *)(param_1 + 0x28);
    dVar5 = (double)*(long *)(param_1 + 0x18);
    if (dVar4 <= (double)*(long *)(param_1 + 0x18)) {
      dVar5 = dVar4;
    }
    *(long *)(param_1 + 0x28) = (long)dVar5;
    dVar4 = (double)(long)dVar5;
    dVar7 = *(double *)(param_1 + 0x10) * dVar4;
    dVar5 = -(*(double *)(param_1 + 0x10) * dVar4);
    if (dVar7 != dVar5) {
      dVar6 = dVar7;
      if (dVar5 <= dVar7) {
        dVar6 = dVar5;
        dVar5 = dVar7;
      }
      uVar1 = *(int *)(param_1 + 0x20) * 0x41c64e6d + 0x3039U & 0x7fffffff;
      *(uint *)(param_1 + 0x20) = uVar1;
      dVar5 = dVar6 + (dVar5 - dVar6) * (double)uVar1 * 4.656612873077393e-10;
    }
    lVar3 = (long)(dVar5 + dVar4);
  }
  else {
    lVar3 = *(long *)(param_1 + 0x28);
    *(undefined1 *)(param_1 + 0x24) = 0;
  }
  if (PTR___tls_init_043737c8 != (undefined *)0x0) {
    grpc_core::ExecCtx::exec_ctx_::__tls_init();
  }
  lVar2 = tpidr_el0;
  lVar2 = FUN_002f00fc(*(undefined8 *)(lVar2 + 0x30));
  return lVar2 + lVar3;
}


