/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0051755c; name: FUN_0051755c
 */


void FUN_0051755c(long param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long *local_70;
  long local_68;
  long lStack_60;
  long *local_58 [4];
  long *local_38;
  long local_30;
  long lStack_28;
  
  lVar6 = *(long *)(param_1 + 0x18);
  FUN_005179b8(&local_38,*(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x18) + 0x20) + 0x18),
               *(undefined1 *)(lVar6 + 0x170),lVar6 + 0x178);
  cVar1 = *(char *)(param_1 + 0x28);
  if (local_38 != &local_30) {
    plVar5 = local_38;
LAB_005175a8:
    do {
      plVar7 = (long *)plVar5[10];
      while (plVar7 != plVar5 + 0xb) {
        if (plVar7[7] != 0) goto LAB_005177c8;
        plVar8 = (long *)plVar7[1];
        if ((long *)plVar7[1] == (long *)0x0) {
          plVar8 = plVar7 + 2;
          bVar2 = *(long **)*plVar8 != plVar7;
          plVar7 = (long *)*plVar8;
          if (bVar2) {
            do {
              lVar6 = *plVar8;
              plVar8 = (long *)(lVar6 + 0x10);
              plVar7 = (long *)*plVar8;
            } while (*(long *)*plVar8 != lVar6);
          }
        }
        else {
          do {
            plVar7 = plVar8;
            plVar8 = (long *)*plVar7;
          } while (plVar8 != (long *)0x0);
        }
      }
      plVar7 = (long *)plVar5[0xd];
LAB_00517620:
      if (plVar7 != plVar5 + 0xe) {
        do {
          if ((((plVar7[5] != 0) || (plVar7[6] != 0)) || (plVar7[7] != 0)) || (plVar7[8] != 0))
          goto LAB_005177c8;
          plVar8 = (long *)plVar7[9];
LAB_00517650:
          while (plVar8 != plVar7 + 10) {
            while( true ) {
              if ((plVar8[7] != 0) || ((double)plVar8[8] != 0.0)) goto LAB_005177c8;
              plVar9 = (long *)plVar8[1];
              if ((long *)plVar8[1] != (long *)0x0) goto LAB_00517674;
              plVar9 = plVar8 + 2;
              plVar10 = (long *)*plVar9;
              if ((long *)*plVar10 != plVar8) break;
              plVar8 = plVar10;
              if (plVar10 == plVar7 + 10) goto LAB_005176c0;
            }
            do {
              lVar6 = *plVar9;
              plVar9 = (long *)(lVar6 + 0x10);
              plVar8 = (long *)*plVar9;
            } while (*plVar8 != lVar6);
          }
LAB_005176c0:
          plVar8 = (long *)plVar7[1];
          if ((long *)plVar7[1] != (long *)0x0) goto LAB_005176c8;
          plVar8 = plVar7 + 2;
          plVar9 = (long *)*plVar8;
          if ((long *)*plVar9 != plVar7) goto LAB_005176ec;
          plVar7 = plVar9;
          if (plVar9 == plVar5 + 0xe) break;
        } while( true );
      }
      plVar7 = (long *)plVar5[1];
      if ((long *)plVar5[1] == (long *)0x0) {
        plVar7 = plVar5 + 2;
        plVar8 = (long *)*plVar7;
        if ((long *)*plVar8 != plVar5) {
          do {
            lVar6 = *plVar7;
            plVar7 = (long *)(lVar6 + 0x10);
            plVar5 = (long *)*plVar7;
          } while (*plVar5 != lVar6);
          goto LAB_00517758;
        }
        plVar5 = plVar8;
        if (plVar8 == &local_30) break;
        goto LAB_005175a8;
      }
      do {
        plVar5 = plVar7;
        plVar7 = (long *)*plVar5;
      } while ((long *)*plVar5 != (long *)0x0);
LAB_00517758:
    } while (plVar5 != &local_30);
  }
  *(undefined1 *)(param_1 + 0x28) = 1;
  if (cVar1 == '\0') {
LAB_005177cc:
    lVar6 = *(long *)(*(long *)(*(long *)(*(long *)(param_1 + 0x18) + 0x18) + 0x20) + 0x18);
    local_70 = local_38;
    local_68 = local_30;
    lStack_60 = lStack_28;
    if (lStack_28 == 0) {
      local_70 = &local_68;
    }
    else {
      *(long **)(local_30 + 0x10) = &local_68;
      local_30 = 0;
      lStack_28 = 0;
      local_38 = &local_30;
    }
                    /* try { // try from 0051780c to 00517817 has its CatchHandler @ 0051798c */
    FUN_005bd7f8(local_58,lVar6 + 0x40,&local_70);
    FUN_0052353c(&local_70,local_68);
                    /* try { // try from 00517824 to 005178a7 has its CatchHandler @ 005179a0 */
    uVar4 = FUN_003c8370(local_58,1);
    *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x48) = uVar4;
    if ((local_58[0] != (long *)0x0) && (plVar5 = (long *)*local_58[0], plVar5 != (long *)0x0)) {
      plVar7 = plVar5 + 1;
      lVar6 = *plVar5;
      do {
        lVar11 = *plVar7;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar2) {
          *plVar7 = lVar11 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if ((lVar6 != 0) && (*(char *)(lVar6 + 0x10) != '\0')) {
        FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xb7,1,
                     "%s:%p unref %ld -> %ld",*(undefined8 *)(lVar6 + 8),plVar5,lVar11);
      }
      if (lVar11 < 1) {
                    /* try { // try from 0051795c to 00517983 has its CatchHandler @ 005179a0 */
        FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xba,2,
                     "assertion failed: %s","prior > 0");
                    /* WARNING: Subroutine does not return */
        abort();
      }
      if (lVar11 == 1) {
        (*(code *)local_58[0][3])(local_58[0][4]);
      }
    }
    uStack_b8 = 0;
    uStack_a8 = 0;
    local_c0 = 1;
    uStack_98 = 0;
    local_a0 = 0;
    uStack_88 = 0;
    local_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    local_b0 = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x48);
                    /* try { // try from 005178d4 to 0051795b has its CatchHandler @ 00517988 */
    iVar3 = FUN_003cba10(*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x28),&local_c0,1,
                         param_1 + 0xb0);
    if (iVar3 != 0) {
      FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_client.cc"
                   ,0x58d,2,"[xds_client %p] calld=%p call_error=%d sending client load report",
                   *(undefined8 *)
                    (*(long *)(*(long *)(*(long *)(param_1 + 0x18) + 0x18) + 0x20) + 0x18),param_1,
                   iVar3);
      FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_client.cc"
                   ,0x590,2,"assertion failed: %s","GRPC_CALL_OK == call_error");
                    /* WARNING: Subroutine does not return */
      abort();
    }
  }
  else {
    if (PTR___tls_init_043737c8 != (undefined *)0x0) {
                    /* try { // try from 00517788 to 0051778b has its CatchHandler @ 00517984 */
      grpc_core::ExecCtx::exec_ctx_::__tls_init();
    }
    lVar6 = tpidr_el0;
                    /* try { // try from 005177a4 to 005177bb has its CatchHandler @ 00517984 */
    lVar6 = FUN_002f00fc(*(undefined8 *)(lVar6 + 0x30));
    FUN_002f5c60(param_1 + 0x30,*(long *)(param_1 + 0x20) + lVar6,param_1 + 0x68);
    *(undefined1 *)(param_1 + 0x29) = 1;
  }
  FUN_0052353c(&local_38,local_30);
  return;
LAB_005177c8:
  *(undefined1 *)(param_1 + 0x28) = 0;
  goto LAB_005177cc;
LAB_00517674:
  do {
    plVar8 = plVar9;
    plVar9 = (long *)*plVar8;
  } while ((long *)*plVar8 != (long *)0x0);
  goto LAB_00517650;
LAB_005176c8:
  do {
    plVar7 = plVar8;
    plVar8 = (long *)*plVar7;
  } while ((long *)*plVar7 != (long *)0x0);
  goto LAB_00517620;
LAB_005176ec:
  do {
    lVar6 = *plVar8;
    plVar8 = (long *)(lVar6 + 0x10);
    plVar7 = (long *)*plVar8;
  } while (*plVar7 != lVar6);
  goto LAB_00517620;
}


