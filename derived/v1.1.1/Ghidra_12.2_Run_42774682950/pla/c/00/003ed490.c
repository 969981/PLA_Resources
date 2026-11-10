/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003ed490; name: FUN_003ed490
 */


void FUN_003ed490(long param_1,undefined4 param_2,undefined8 *param_3)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  undefined4 *puVar12;
  long *plVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined1 auVar16 [16];
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (*(long *)(param_1 + 0x30) == 0) {
    plVar11 = (long *)*param_3;
    if ((plVar11 != (long *)0x0) && (plVar13 = (long *)*plVar11, plVar13 != (long *)0x0)) {
      plVar7 = plVar13 + 1;
      lVar6 = *plVar13;
      do {
        lVar10 = *plVar7;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar2) {
          *plVar7 = lVar10 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if ((lVar6 != 0) && (*(char *)(lVar6 + 0x10) != '\0')) {
        FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xb7,1,
                     "%s:%p unref %ld -> %ld",*(undefined8 *)(lVar6 + 8),plVar13,lVar10);
      }
      if (lVar10 < 1) {
        FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xba,2,
                     "assertion failed: %s","prior > 0");
                    /* WARNING: Subroutine does not return */
        abort();
      }
      if (lVar10 == 1) {
                    /* WARNING: Could not recover jumptable at 0x003ed5d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)plVar11[3])(plVar11[4]);
        return;
      }
    }
  }
  else {
    puVar4 = (undefined4 *)FUN_002e2e80(PTR_FUN_04373078,0x50);
    if (puVar4 != (undefined4 *)0x0) {
      *puVar4 = param_2;
      uVar14 = param_3[1];
      uVar5 = *param_3;
      uVar15 = param_3[2];
      *(undefined8 *)(puVar4 + 8) = param_3[3];
      *(undefined8 *)(puVar4 + 6) = uVar15;
      *(undefined8 *)(puVar4 + 4) = uVar14;
      *(undefined8 *)(puVar4 + 2) = uVar5;
      if (PTR___tls_init_043737c8 != (undefined *)0x0) {
        grpc_core::ExecCtx::exec_ctx_::__tls_init();
      }
      lVar6 = tpidr_el0;
      uVar5 = FUN_002f00fc(*(undefined8 *)(lVar6 + 0x30));
      auVar16 = FUN_002efce0(uVar5,1);
      *(undefined8 *)(puVar4 + 0xe) = 0;
      *(undefined8 *)(puVar4 + 0x10) = 0;
      *(undefined1 (*) [16])(puVar4 + 10) = auVar16;
      uStack_48 = param_3[1];
      local_50 = *param_3;
      uStack_38 = param_3[3];
      uStack_40 = param_3[2];
                    /* try { // try from 003ed520 to 003ed527 has its CatchHandler @ 003ed688 */
      lVar6 = FUN_002f2c10(&local_50);
      *(long *)(puVar4 + 0x12) = lVar6 + 0x50;
    }
    plVar13 = (long *)(param_1 + 0x38);
    *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + 1;
    plVar11 = (long *)(param_1 + 0x40);
    if ((undefined4 *)*plVar13 == (undefined4 *)0x0) {
      plVar7 = plVar13;
      puVar12 = puVar4;
    }
    else {
      plVar7 = plVar11;
      plVar11 = (long *)(*plVar11 + 0x38);
      puVar12 = (undefined4 *)*plVar13;
    }
    *plVar11 = (long)puVar4;
    *plVar7 = (long)puVar4;
    uVar9 = *(ulong *)(param_1 + 0x30);
    uVar8 = *(long *)(param_1 + 0x28) + *(long *)(puVar4 + 0x12);
    *(ulong *)(param_1 + 0x28) = uVar8;
    puVar3 = PTR_LAB_04373088;
    if (uVar9 < uVar8) {
      while( true ) {
        uVar8 = uVar8 - *(long *)(puVar12 + 0x12);
        *(ulong *)(param_1 + 0x28) = uVar8;
        *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(puVar12 + 0xe);
        if (puVar12 != (undefined4 *)0x0) {
          FUN_003ed308(puVar12);
          FUN_002e2ea0(puVar3,puVar12);
          uVar8 = *(ulong *)(param_1 + 0x28);
          uVar9 = *(ulong *)(param_1 + 0x30);
        }
        if (uVar8 <= uVar9) break;
        puVar12 = (undefined4 *)*plVar13;
      }
    }
  }
  return;
}


