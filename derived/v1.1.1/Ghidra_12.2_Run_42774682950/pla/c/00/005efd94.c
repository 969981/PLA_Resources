/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005efd94; name: FUN_005efd94
 */


void FUN_005efd94(long param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  ulong uVar12;
  long lVar13;
  long local_40;
  undefined8 *local_38;
  undefined8 local_28;
  
  puVar6 = PTR_DAT_04375160;
  puVar7 = *(undefined8 **)(param_1 + 8);
  lVar10 = puVar7[3];
  puVar2 = *(undefined8 **)(lVar10 + 0xe0);
  puVar3 = *(undefined8 **)(lVar10 + 0xe8);
  if (puVar7 == puVar2) {
    if (puVar7 != puVar3) goto LAB_005efdf8;
  }
  else if (puVar7 != puVar3) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/lb_policy/pick_first/pick_first.cc"
                 ,0x1af,2,"assertion failed: %s",
                 "subchannel_list() == p->subchannel_list_.get() || subchannel_list() == p->latest_pending_subchannel_list_.get()"
                );
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (PTR_DAT_04375160[0x10] == '\0') {
    *(undefined8 **)(lVar10 + 0xe0) = puVar3;
    *(undefined8 *)(lVar10 + 0xe8) = 0;
  }
  else {
    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/lb_policy/pick_first/pick_first.cc"
                 ,0x1b3,1,"Pick First %p promoting pending subchannel list %p to replace %p",lVar10)
    ;
    puVar2 = *(undefined8 **)(lVar10 + 0xe0);
    *(undefined8 *)(lVar10 + 0xe0) = *(undefined8 *)(lVar10 + 0xe8);
    *(undefined8 *)(lVar10 + 0xe8) = 0;
  }
  if (puVar2 != (undefined8 *)0x0) {
                    /* try { // try from 005efde4 to 005efdeb has its CatchHandler @ 005f001c */
    (**(code **)*puVar2)(puVar2);
  }
LAB_005efdf8:
  if (puVar6[0x10] != '\0') {
    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/lb_policy/pick_first/pick_first.cc"
                 ,0x1bd,1,"Pick First %p selected subchannel %p",lVar10,
                 *(undefined8 *)(param_1 + 0x10));
  }
  *(long *)(lVar10 + 0xf0) = param_1;
  lVar13 = *(long *)(param_1 + 0x10);
  plVar11 = *(long **)(lVar10 + 0x30);
  plVar1 = (long *)(lVar13 + 0x10);
  do {
    lVar10 = *plVar1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = lVar10 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  lVar8 = *(long *)(lVar13 + 8);
  if ((lVar8 != 0) && (*(char *)(lVar8 + 0x10) != '\0')) {
    FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0x5c,1,
                 "%s:%p ref %ld -> %ld",*(undefined8 *)(lVar8 + 8),(long *)(lVar13 + 8),lVar10,
                 lVar10 + 1);
  }
  local_40 = lVar13;
  local_38 = (undefined8 *)FUN_002e2e80(PTR_FUN_04373078,0x10);
  if (local_38 != (undefined8 *)0x0) {
    local_40 = 0;
    *local_38 = &PTR_FUN_0418ee68;
    local_38[1] = lVar13;
    local_28 = 0;
    FUN_0052f160(&local_28);
  }
                    /* try { // try from 005efe9c to 005efeab has its CatchHandler @ 005f0020 */
  (**(code **)(*plVar11 + 0x18))(plVar11,2,&local_38);
  puVar2 = local_38;
  local_38 = (undefined8 *)0x0;
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2);
    FUN_002e2ea0(PTR_LAB_04373088,puVar2);
  }
  FUN_0052f160(&local_40);
  lVar10 = *(long *)(param_1 + 8);
  uVar9 = *(ulong *)(lVar10 + 0x28);
  if (1 < uVar9) {
    lVar13 = 0;
    uVar12 = 0;
    do {
      if (uVar9 < 2) {
                    /* WARNING: Subroutine does not return */
        __assert_fail("i < size()","external/com_google_absl\\absl/container/inlined_vector.h",0x136
                      ,"operator[]");
      }
      if ((uVar9 & 1) == 0) {
        lVar8 = lVar10 + 0x30;
      }
      else {
        lVar8 = *(long *)(lVar10 + 0x30);
      }
      if (uVar12 != (param_1 - lVar8 >> 3) * -0x3333333333333333) {
        if ((uVar9 & 1) == 0) {
          lVar10 = lVar10 + 0x30;
        }
        else {
          lVar10 = *(long *)(lVar10 + 0x30);
        }
        FUN_005f14a8(lVar10 + lVar13);
        lVar10 = *(long *)(param_1 + 8);
      }
      uVar9 = *(ulong *)(lVar10 + 0x28);
      uVar12 = uVar12 + 1;
      lVar13 = lVar13 + 0x28;
    } while (uVar12 < uVar9 >> 1);
  }
  return;
}


