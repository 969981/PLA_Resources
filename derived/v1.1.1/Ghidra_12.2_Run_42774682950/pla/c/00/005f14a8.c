/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005f14a8; name: FUN_005f14a8
 */


void FUN_005f14a8(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    lVar4 = *(long *)(param_1 + 8);
    if (*(char *)(*(long *)(lVar4 + 0x20) + 0x10) != '\0') {
      uVar5 = *(ulong *)(lVar4 + 0x28);
      if (uVar5 < 2) goto LAB_005f16a4;
      if ((uVar5 & 1) == 0) {
        lVar7 = lVar4 + 0x30;
      }
      else {
        lVar7 = *(long *)(lVar4 + 0x30);
      }
      FUN_002ebea0("external/com_google_grpc_base\\src/core/ext/filters/client_channel/lb_policy/subchannel_list.h"
                   ,0x148,1,
                   "[%s %p] subchannel list %p index %lu of %lu (subchannel %p): canceling connectivity watch (%s)"
                   ,*(undefined8 *)(*(long *)(lVar4 + 0x20) + 8),*(undefined8 *)(lVar4 + 0x18),lVar4
                   ,(param_1 - lVar7 >> 3) * -0x3333333333333333,uVar5 >> 1,
                   *(undefined8 *)(param_1 + 0x10),"shutdown");
      if (*(long *)(param_1 + 0x18) == 0) goto LAB_005f14e4;
    }
    (**(code **)(**(long **)(param_1 + 0x10) + 0x20))();
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
LAB_005f14e4:
  puVar6 = *(undefined8 **)(param_1 + 0x10);
  if (puVar6 == (undefined8 *)0x0) {
    return;
  }
  lVar4 = *(long *)(param_1 + 8);
  if (*(char *)(*(long *)(lVar4 + 0x20) + 0x10) != '\0') {
    uVar5 = *(ulong *)(lVar4 + 0x28);
    if (uVar5 < 2) {
LAB_005f16a4:
                    /* WARNING: Subroutine does not return */
      __assert_fail("i < size()","external/com_google_absl\\absl/container/inlined_vector.h",0x136,
                    "operator[]");
    }
    if ((uVar5 & 1) == 0) {
      lVar7 = lVar4 + 0x30;
    }
    else {
      lVar7 = *(long *)(lVar4 + 0x30);
    }
    FUN_002ebea0("external/com_google_grpc_base\\src/core/ext/filters/client_channel/lb_policy/subchannel_list.h"
                 ,0x11d,1,
                 "[%s %p] subchannel list %p index %lu of %lu (subchannel %p): unreffing subchannel (%s)"
                 ,*(undefined8 *)(*(long *)(lVar4 + 0x20) + 8),*(undefined8 *)(lVar4 + 0x18),lVar4,
                 (param_1 - lVar7 >> 3) * -0x3333333333333333,uVar5 >> 1,puVar6,"shutdown");
    puVar6 = *(undefined8 **)(param_1 + 0x10);
    if (puVar6 == (undefined8 *)0x0) goto LAB_005f1558;
  }
  lVar4 = puVar6[1];
  plVar1 = puVar6 + 2;
  do {
    lVar7 = *plVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar7 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if ((lVar4 != 0) && (*(char *)(lVar4 + 0x10) != '\0')) {
    FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xb7,1,
                 "%s:%p unref %ld -> %ld",*(undefined8 *)(lVar4 + 8),puVar6 + 1,lVar7);
  }
  if (lVar7 < 1) {
    FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xba,2,
                 "assertion failed: %s","prior > 0");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (lVar7 == 1) {
    (**(code **)*puVar6)(puVar6);
    FUN_002e2ea0(PTR_LAB_04373088,puVar6);
  }
LAB_005f1558:
  *(undefined8 *)(param_1 + 0x10) = 0;
  return;
}


