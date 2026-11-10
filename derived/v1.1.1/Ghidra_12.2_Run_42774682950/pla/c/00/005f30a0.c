/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005f30a0; name: FUN_005f30a0
 */


void FUN_005f30a0(long param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  char *local_70;
  undefined4 local_68;
  
  if (*(char *)(*(long *)(param_1 + 0x20) + 0x10) == '\0') {
    cVar1 = *(char *)(param_1 + 0x210);
  }
  else {
    FUN_002ebea0("external/com_google_grpc_base\\src/core/ext/filters/client_channel/lb_policy/subchannel_list.h"
                 ,0x1a8,1,"[%s %p] Shutting down subchannel_list %p",
                 *(undefined8 *)(*(long *)(param_1 + 0x20) + 8),*(undefined8 *)(param_1 + 0x18),
                 param_1);
    cVar1 = *(char *)(param_1 + 0x210);
  }
  if (cVar1 != '\0') {
    FUN_002ebea0("external/com_google_grpc_base\\src/core/ext/filters/client_channel/lb_policy/subchannel_list.h"
                 ,0x1ab,2,"assertion failed: %s","!shutting_down_");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(undefined1 *)(param_1 + 0x210) = 1;
  uVar4 = *(ulong *)(param_1 + 0x28);
  if (1 < uVar4) {
    uVar7 = 0;
    do {
      lVar8 = param_1 + 0x30;
      if ((uVar4 & 1) != 0) {
        lVar8 = *(long *)(param_1 + 0x30);
      }
      lVar6 = lVar8 + uVar7 * 0x30;
      plVar9 = (long *)(lVar6 + 0x18);
      if (*plVar9 != 0) {
        lVar3 = *(long *)(lVar8 + uVar7 * 0x30 + 8);
        if (*(char *)(*(long *)(lVar3 + 0x20) + 0x10) != '\0') {
          uVar4 = *(ulong *)(lVar3 + 0x28);
          if (uVar4 < 2) goto LAB_005f33c0;
          if ((uVar4 & 1) == 0) {
            lVar5 = lVar3 + 0x30;
          }
          else {
            lVar5 = *(long *)(lVar3 + 0x30);
          }
          FUN_002ebea0("external/com_google_grpc_base\\src/core/ext/filters/client_channel/lb_policy/subchannel_list.h"
                       ,0x148,1,
                       "[%s %p] subchannel list %p index %lu of %lu (subchannel %p): canceling connectivity watch (%s)"
                       ,*(undefined8 *)(*(long *)(lVar3 + 0x20) + 8),*(undefined8 *)(lVar3 + 0x18),
                       lVar3,(lVar6 - lVar5 >> 4) * -0x5555555555555555,uVar4 >> 1,
                       *(undefined8 *)(lVar8 + uVar7 * 0x30 + 0x10),"shutdown");
          if (*plVar9 == 0) goto LAB_005f3170;
        }
        (**(code **)(**(long **)(lVar8 + uVar7 * 0x30 + 0x10) + 0x20))();
        *plVar9 = 0;
      }
LAB_005f3170:
      puVar10 = (undefined8 *)(lVar8 + uVar7 * 0x30 + 0x10);
      puVar11 = (undefined8 *)*puVar10;
      if (puVar11 != (undefined8 *)0x0) {
        lVar8 = *(long *)(lVar8 + uVar7 * 0x30 + 8);
        if (*(char *)(*(long *)(lVar8 + 0x20) + 0x10) == '\0') {
LAB_005f3190:
          lVar8 = puVar11[1];
          plVar9 = puVar11 + 2;
          do {
            lVar6 = *plVar9;
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
            if (bVar2) {
              *plVar9 = lVar6 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if ((lVar8 != 0) && (*(char *)(lVar8 + 0x10) != '\0')) {
            FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xb7,1,
                         "%s:%p unref %ld -> %ld",*(undefined8 *)(lVar8 + 8),puVar11 + 1,lVar6);
          }
          if (lVar6 < 1) {
            FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xba,2,
                         "assertion failed: %s","prior > 0");
                    /* WARNING: Subroutine does not return */
            abort();
          }
          if (lVar6 == 1) {
            (**(code **)*puVar11)(puVar11);
            FUN_002e2ea0(PTR_LAB_04373088,puVar11);
          }
        }
        else {
          uVar4 = *(ulong *)(lVar8 + 0x28);
          if (uVar4 < 2) {
LAB_005f33c0:
                    /* WARNING: Subroutine does not return */
            __assert_fail("i < size()","external/com_google_absl\\absl/container/inlined_vector.h",
                          0x136,"operator[]");
          }
          if ((uVar4 & 1) == 0) {
            lVar3 = lVar8 + 0x30;
          }
          else {
            lVar3 = *(long *)(lVar8 + 0x30);
          }
          FUN_002ebea0("external/com_google_grpc_base\\src/core/ext/filters/client_channel/lb_policy/subchannel_list.h"
                       ,0x11d,1,
                       "[%s %p] subchannel list %p index %lu of %lu (subchannel %p): unreffing subchannel (%s)"
                       ,*(undefined8 *)(*(long *)(lVar8 + 0x20) + 8),*(undefined8 *)(lVar8 + 0x18),
                       lVar8,(lVar6 - lVar3 >> 4) * -0x5555555555555555,uVar4 >> 1,puVar11,
                       "shutdown");
          puVar11 = (undefined8 *)*puVar10;
          if (puVar11 != (undefined8 *)0x0) goto LAB_005f3190;
        }
        *puVar10 = 0;
      }
      uVar4 = *(ulong *)(param_1 + 0x28);
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar4 >> 1);
  }
  local_70 = 
  "external/com_google_grpc_base\\src/core/ext/filters/client_channel/lb_policy/subchannel_list.h";
  local_68 = 0xc6;
  FUN_005f479c(param_1,&local_70,"shutdown");
  return;
}


