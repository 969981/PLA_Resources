/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005f2cec; name: FUN_005f2cec
 */


void FUN_005f2cec(long param_1)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  ulong uVar16;
  long *plVar17;
  undefined8 uVar18;
  long lVar19;
  long lVar20;
  undefined8 *local_68;
  
  uVar9 = *(ulong *)(param_1 + 0x28);
  if (1 < uVar9) {
    lVar15 = 0;
    uVar16 = 0;
    do {
      lVar11 = param_1 + 0x30;
      if ((uVar9 & 1) != 0) {
        lVar11 = *(long *)(param_1 + 0x30);
      }
      lVar11 = lVar11 + lVar15;
      if (*(long *)(lVar11 + 0x18) != 0) {
        FUN_002ebea0("external/com_google_grpc_base\\src/core/ext/filters/client_channel/lb_policy/subchannel_list.h"
                     ,99,2,"assertion failed: %s","pending_watcher_ == nullptr");
                    /* WARNING: Subroutine does not return */
        abort();
      }
      iVar5 = (**(code **)(**(long **)(lVar11 + 0x10) + 0x10))();
      *(int *)(lVar11 + 0x20) = iVar5;
      if (iVar5 != 0) {
        if (*(ulong *)(param_1 + 0x28) >> 1 <= uVar16) goto LAB_005f3048;
        lVar11 = param_1 + 0x30;
        if ((*(ulong *)(param_1 + 0x28) & 1) != 0) {
          lVar11 = *(long *)(param_1 + 0x30);
        }
        FUN_005f39c8(lVar11 + lVar15,iVar5);
      }
      puVar4 = PTR_LAB_04373088;
      puVar3 = PTR_FUN_04373078;
      uVar9 = *(ulong *)(param_1 + 0x28);
      uVar16 = uVar16 + 1;
      lVar15 = lVar15 + 0x30;
    } while (uVar16 < uVar9 >> 1);
    if (1 < uVar9) {
      uVar16 = 0;
      lVar15 = param_1 + 0x30;
      do {
        lVar11 = lVar15;
        if ((uVar9 & 1) != 0) {
          lVar11 = *(long *)(param_1 + 0x30);
        }
        if (*(long *)(lVar11 + uVar16 * 0x30 + 0x10) != 0) {
          lVar11 = lVar15;
          if ((uVar9 & 1) != 0) {
            lVar11 = *(long *)(param_1 + 0x30);
          }
          lVar19 = lVar11 + uVar16 * 0x30;
          lVar20 = *(long *)(lVar19 + 8);
          if (*(char *)(*(long *)(lVar20 + 0x20) + 0x10) == '\0') {
            plVar17 = (long *)(lVar11 + uVar16 * 0x30 + 0x18);
            lVar20 = *plVar17;
          }
          else {
            uVar9 = *(ulong *)(lVar20 + 0x28);
            if (uVar9 < 2) {
LAB_005f3048:
                    /* WARNING: Subroutine does not return */
              __assert_fail("i < size()","external/com_google_absl\\absl/container/inlined_vector.h"
                            ,0x136,"operator[]");
            }
            uVar13 = *(undefined8 *)(*(long *)(lVar20 + 0x20) + 8);
            uVar14 = *(undefined8 *)(lVar20 + 0x18);
            if ((uVar9 & 1) == 0) {
              lVar10 = lVar20 + 0x30;
            }
            else {
              lVar10 = *(long *)(lVar20 + 0x30);
            }
            lVar12 = lVar11 + uVar16 * 0x30;
            uVar18 = *(undefined8 *)(lVar12 + 0x10);
            uVar8 = FUN_003d3430(*(undefined4 *)(lVar12 + 0x20));
            FUN_002ebea0("external/com_google_grpc_base\\src/core/ext/filters/client_channel/lb_policy/subchannel_list.h"
                         ,0x134,1,
                         "[%s %p] subchannel list %p index %lu of %lu (subchannel %p): starting watch (from %s)"
                         ,uVar13,uVar14,lVar20,(lVar19 - lVar10 >> 4) * -0x5555555555555555,
                         uVar9 >> 1,uVar18,uVar8);
            plVar17 = (long *)(lVar11 + uVar16 * 0x30 + 0x18);
            lVar20 = *plVar17;
          }
          if (lVar20 != 0) {
            FUN_002ebea0("external/com_google_grpc_base\\src/core/ext/filters/client_channel/lb_policy/subchannel_list.h"
                         ,0x13b,2,"assertion failed: %s","pending_watcher_ == nullptr");
                    /* WARNING: Subroutine does not return */
            abort();
          }
          lVar20 = *(long *)(lVar19 + 8);
          plVar7 = (long *)(lVar20 + 0x10);
          do {
            lVar10 = *plVar7;
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
            if (bVar2) {
              *plVar7 = lVar10 + 1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          lVar12 = *(long *)(lVar20 + 8);
          if ((lVar12 != 0) && (*(char *)(lVar12 + 0x10) != '\0')) {
            FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0x67,1,
                         "%s:%p %s:%d ref %ld -> %ld %s",*(undefined8 *)(lVar12 + 8),
                         (long *)(lVar20 + 8),
                         "external/com_google_grpc_base\\src/core/ext/filters/client_channel/lb_policy/subchannel_list.h"
                         ,0x13d,lVar10,lVar10 + 1,"Watcher");
          }
          puVar6 = (undefined8 *)FUN_002e2e80(puVar3,0x18);
          if (puVar6 != (undefined8 *)0x0) {
            puVar6[2] = lVar20;
            lVar20 = 0;
            *puVar6 = &PTR_FUN_0418f158;
            puVar6[1] = lVar19;
          }
          *plVar17 = (long)puVar6;
          FUN_005f4878(lVar20);
          lVar11 = lVar11 + uVar16 * 0x30;
          plVar7 = *(long **)(lVar11 + 0x10);
          local_68 = (undefined8 *)*plVar17;
                    /* try { // try from 005f2ef0 to 005f2ef7 has its CatchHandler @ 005f3068 */
          (**(code **)(*plVar7 + 0x18))(plVar7,*(undefined4 *)(lVar11 + 0x20),&local_68);
          puVar6 = local_68;
          local_68 = (undefined8 *)0x0;
          if (puVar6 != (undefined8 *)0x0) {
            (**(code **)*puVar6)(puVar6);
            FUN_002e2ea0(puVar4,puVar6);
          }
          if (*(ulong *)(param_1 + 0x28) >> 1 <= uVar16) goto LAB_005f3048;
          lVar11 = lVar15;
          if ((*(ulong *)(param_1 + 0x28) & 1) != 0) {
            lVar11 = *(long *)(param_1 + 0x30);
          }
          (**(code **)(**(long **)(lVar11 + uVar16 * 0x30 + 0x10) + 0x28))();
          uVar9 = *(ulong *)(param_1 + 0x28);
        }
        uVar16 = uVar16 + 1;
      } while (uVar16 < uVar9 >> 1);
    }
    FUN_005f3b5c(param_1);
  }
  return;
}


