/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005efb5c; name: FUN_005efb5c
 */


void FUN_005efb5c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 *local_48;
  
  lVar9 = *(long *)(param_1 + 8);
  if (*(char *)(*(long *)(lVar9 + 0x20) + 0x10) == '\0') {
    lVar9 = *(long *)(param_1 + 0x18);
  }
  else {
    uVar7 = *(ulong *)(lVar9 + 0x28);
    if (uVar7 < 2) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("i < size()","external/com_google_absl\\absl/container/inlined_vector.h",0x136,
                    "operator[]");
    }
    uVar10 = *(undefined8 *)(*(long *)(lVar9 + 0x20) + 8);
    uVar11 = *(undefined8 *)(lVar9 + 0x18);
    if ((uVar7 & 1) == 0) {
      lVar6 = lVar9 + 0x30;
    }
    else {
      lVar6 = *(long *)(lVar9 + 0x30);
    }
    uVar12 = *(undefined8 *)(param_1 + 0x10);
    uVar5 = FUN_003d3430(*(undefined4 *)(param_1 + 0x20));
    FUN_002ebea0("external/com_google_grpc_base\\src/core/ext/filters/client_channel/lb_policy/subchannel_list.h"
                 ,0x134,1,
                 "[%s %p] subchannel list %p index %lu of %lu (subchannel %p): starting watch (from %s)"
                 ,uVar10,uVar11,lVar9,(param_1 - lVar6 >> 3) * -0x3333333333333333,uVar7 >> 1,uVar12
                 ,uVar5);
    lVar9 = *(long *)(param_1 + 0x18);
  }
  if (lVar9 != 0) {
    FUN_002ebea0("external/com_google_grpc_base\\src/core/ext/filters/client_channel/lb_policy/subchannel_list.h"
                 ,0x13b,2,"assertion failed: %s","pending_watcher_ == nullptr");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  lVar9 = *(long *)(param_1 + 8);
  plVar1 = (long *)(lVar9 + 0x10);
  do {
    lVar6 = *plVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar6 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  lVar8 = *(long *)(lVar9 + 8);
  if ((lVar8 != 0) && (*(char *)(lVar8 + 0x10) != '\0')) {
    FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0x67,1,
                 "%s:%p %s:%d ref %ld -> %ld %s",*(undefined8 *)(lVar8 + 8),(long *)(lVar9 + 8),
                 "external/com_google_grpc_base\\src/core/ext/filters/client_channel/lb_policy/subchannel_list.h"
                 ,0x13d,lVar6,lVar6 + 1,"Watcher");
  }
  puVar4 = (undefined8 *)FUN_002e2e80(PTR_FUN_04373078,0x18);
  if (puVar4 != (undefined8 *)0x0) {
    puVar4[2] = lVar9;
    lVar9 = 0;
    *puVar4 = &PTR_FUN_0418eea8;
    puVar4[1] = param_1;
  }
  *(undefined8 **)(param_1 + 0x18) = puVar4;
  FUN_005f16c4(lVar9);
  local_48 = *(undefined8 **)(param_1 + 0x18);
                    /* try { // try from 005efc40 to 005efc47 has its CatchHandler @ 005efd5c */
  (**(code **)(**(long **)(param_1 + 0x10) + 0x18))
            (*(long **)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x20),&local_48);
  puVar4 = local_48;
  local_48 = (undefined8 *)0x0;
  if (puVar4 != (undefined8 *)0x0) {
    (**(code **)*puVar4)(puVar4);
    FUN_002e2ea0(PTR_LAB_04373088,puVar4);
  }
  return;
}


