/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005e1970; name: FUN_005e1970
 */


void FUN_005e1970(long param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
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
  long *local_70 [4];
  ulong *local_50;
  long local_48;
  long local_40;
  long local_38;
  long local_28;
  
  if (*(long *)(param_1 + 0x40) != 0) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/lb_policy/grpclb/grpclb.cc"
                 ,0x396,2,"assertion failed: %s","send_message_payload_ == nullptr");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  local_50 = (ulong *)0x0;
                    /* try { // try from 005e1994 to 005e19ab has its CatchHandler @ 005e1c68 */
  FUN_005e3fc4(*(undefined8 *)(param_1 + 0x170),&local_28,&local_38,&local_40,&local_48,&local_50);
  if ((((local_38 == 0 && local_28 == 0) && local_40 == 0) && local_48 == 0) &&
     ((local_50 == (ulong *)0x0 || (*local_50 < 2)))) {
    if (*(char *)(param_1 + 0x1b9) != '\0') {
      if (PTR___tls_init_043737c8 != (undefined *)0x0) {
                    /* try { // try from 005e1b24 to 005e1b27 has its CatchHandler @ 005e1c68 */
        grpc_core::ExecCtx::exec_ctx_::__tls_init();
      }
      lVar4 = tpidr_el0;
                    /* try { // try from 005e1b40 to 005e1b87 has its CatchHandler @ 005e1c68 */
      lVar4 = FUN_002f00fc(*(undefined8 *)(lVar4 + 0x30));
      *(long *)(param_1 + 0x1d0) = param_1;
      *(undefined8 *)(param_1 + 0x1d8) = 0;
      *(undefined2 *)(param_1 + 0x1e0) = 0;
      *(undefined8 *)(param_1 + 0x1f8) = 0;
      *(undefined1 **)(param_1 + 0x1c8) = &LAB_005e1550;
      *(undefined4 *)(param_1 + 0x200) = 0;
      *(char **)(param_1 + 0x1e8) =
           "external/com_google_grpc_base/src/core/ext/filters/client_channel/lb_policy/grpclb/grpclb.cc"
      ;
      *(undefined4 *)(param_1 + 0x1f0) = 0x373;
      FUN_002f5c60(param_1 + 0x180,*(long *)(param_1 + 0x178) + lVar4,param_1 + 0x1c0);
      *(undefined1 *)(param_1 + 0x1b8) = 1;
      goto LAB_005e1b90;
    }
    *(undefined1 *)(param_1 + 0x1b9) = 1;
  }
  else {
    *(undefined1 *)(param_1 + 0x1b9) = 0;
  }
                    /* try { // try from 005e19d0 to 005e19e3 has its CatchHandler @ 005e1c64 */
  lVar4 = FUN_0053f520(0,0,PTR_PTR_04374c10);
                    /* try { // try from 005e19f4 to 005e1a7f has its CatchHandler @ 005e1c7c */
  FUN_005e43e0(local_70,local_28,local_38,local_40,local_48,local_50,lVar4);
  uVar5 = FUN_003c8370(local_70,1);
  *(undefined8 *)(param_1 + 0x40) = uVar5;
  if ((local_70[0] != (long *)0x0) && (plVar6 = (long *)*local_70[0], plVar6 != (long *)0x0)) {
    plVar8 = plVar6 + 1;
    lVar7 = *plVar6;
    do {
      lVar9 = *plVar8;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar2) {
        *plVar8 = lVar9 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if ((lVar7 != 0) && (*(char *)(lVar7 + 0x10) != '\0')) {
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xb7,1,
                   "%s:%p unref %ld -> %ld",*(undefined8 *)(lVar7 + 8),plVar6,lVar9);
    }
    if (lVar9 < 1) {
                    /* try { // try from 005e1c2c to 005e1c53 has its CatchHandler @ 005e1c7c */
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xba,2,
                   "assertion failed: %s","prior > 0");
                    /* WARNING: Subroutine does not return */
      abort();
    }
    if (lVar9 == 1) {
      (*(code *)local_70[0][3])(local_70[0][4]);
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
  local_b0 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x1d8) = 0;
  *(undefined2 *)(param_1 + 0x1e0) = 0;
  *(undefined8 *)(param_1 + 0x1f8) = 0;
  *(undefined4 *)(param_1 + 0x200) = 0;
  *(undefined1 **)(param_1 + 0x1c8) = &LAB_005e1d7c;
  *(long *)(param_1 + 0x1d0) = param_1;
  *(char **)(param_1 + 0x1e8) =
       "external/com_google_grpc_base/src/core/ext/filters/client_channel/lb_policy/grpclb/grpclb.cc"
  ;
  *(undefined4 *)(param_1 + 0x1f0) = 0x3bd;
                    /* try { // try from 005e1ad8 to 005e1ae3 has its CatchHandler @ 005e1c58 */
  iVar3 = FUN_003cba10(*(undefined8 *)(param_1 + 0x20),&local_c0,1,param_1 + 0x1c0);
  if (iVar3 != 0) {
                    /* try { // try from 005e1be4 to 005e1c2b has its CatchHandler @ 005e1c58 */
    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/lb_policy/grpclb/grpclb.cc"
                 ,0x3c1,2,"[grpclb %p] lb_calld=%p call_error=%d sending client load report",
                 *(undefined8 *)(param_1 + 0x18),param_1,iVar3);
    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/lb_policy/grpclb/grpclb.cc"
                 ,0x3c4,2,"assertion failed: %s","GRPC_CALL_OK == call_error");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (lVar4 != 0) {
                    /* try { // try from 005e1af0 to 005e1af7 has its CatchHandler @ 005e1c54 */
    FUN_0053f5f0(lVar4);
  }
LAB_005e1b90:
  FUN_005e1ee0(&local_50);
  return;
}


