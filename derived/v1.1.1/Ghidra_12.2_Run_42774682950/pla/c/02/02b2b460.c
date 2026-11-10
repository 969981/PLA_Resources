/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b2b460; name: FUN_02b2b460
 */


void FUN_02b2b460(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  long *local_68;
  
  if (*(char *)(param_1 + 0x18a) != '\0') {
    if (*(long *)(param_1 + 0xc0) != 0) {
      if (*(long **)(param_1 + 0x98) != (long *)0x0) {
        lVar8 = tpidr_el0;
        plVar10 = *(long **)(param_1 + 0x98);
LAB_02b2b4c4:
        do {
          plVar11 = (long *)*plVar10;
          plVar5 = (long *)plVar10[6];
          if (plVar5 == (long *)0x0) {
LAB_02b2b4e8:
            plVar5 = (long *)plVar10[5];
          }
          else {
            plVar1 = plVar5 + 10;
            do {
              iVar4 = (int)*plVar1 + -1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar3) {
                *(int *)plVar1 = iVar4;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (iVar4 != 0) goto LAB_02b2b4e8;
            (**(code **)(*plVar5 + 0x10))();
            plVar5 = (long *)plVar10[5];
          }
          if (plVar5 != (long *)0x0) {
            (**(code **)(*plVar5 + 0x20))();
          }
          plVar5 = *(long **)(param_1 + 0xa0);
          uVar6 = (**(code **)(*plVar5 + 0xc0))(plVar5);
          if ((uVar6 & 1) != 0) {
            if (*(char *)(lVar8 + 0x38d488) == '\0') {
              *(undefined1 *)(lVar8 + 0x38d488) = 1;
              *(undefined8 *)(lVar8 + 0x38d478) = 0;
              *(undefined8 *)(lVar8 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,lVar8 + 0x80078,&PTR_LOOP_0411a000);
            }
            if (0 < *(int *)(lVar8 + 0x38d480)) {
              FUN_02bcc824(plVar5,plVar10,0x38,8);
              plVar10 = plVar11;
              if (plVar11 == (long *)0x0) break;
              goto LAB_02b2b4c4;
            }
          }
          (**(code **)(*plVar5 + 0x18))(plVar5,plVar10,0x38,8);
          plVar10 = plVar11;
        } while (plVar11 != (long *)0x0);
      }
      uVar6 = *(ulong *)(param_1 + 0x70);
      *(undefined8 *)(param_1 + 0x98) = 0;
      if (uVar6 != 0) {
        uVar7 = uVar6 & 3;
        if (uVar6 - 1 < 3) {
          lVar8 = 0;
        }
        else {
          lVar8 = 0;
          do {
            lVar9 = lVar8 * 8;
            lVar8 = lVar8 + 4;
            *(undefined8 *)(*(long *)(param_1 + 0x68) + lVar9) = 0;
            *(undefined8 *)(*(long *)(param_1 + 0x68) + lVar9 + 8) = 0;
            *(undefined8 *)(*(long *)(param_1 + 0x68) + lVar9 + 0x10) = 0;
            *(undefined8 *)(*(long *)(param_1 + 0x68) + lVar9 + 0x18) = 0;
          } while (uVar6 - uVar7 != lVar8);
        }
        if (uVar7 != 0) {
          lVar8 = lVar8 << 3;
          do {
            *(undefined8 *)(*(long *)(param_1 + 0x68) + lVar8) = 0;
            uVar7 = uVar7 - 1;
            lVar8 = lVar8 + 8;
          } while (uVar7 != 0);
        }
      }
      *(undefined8 *)(param_1 + 0xc0) = 0;
    }
    lVar9 = *(long *)(param_1 + 0xe0);
    for (lVar8 = *(long *)(param_1 + 0xd8); lVar8 != lVar9; lVar8 = lVar8 + 0x28) {
      FUN_02b3343c(&local_68,*(undefined8 *)(param_1 + 0x58),lVar8);
      FUN_02b2bfd4(param_1,&local_68);
      if (local_68 != (long *)0x0) {
        plVar10 = local_68 + 10;
        do {
          iVar4 = (int)*plVar10 + -1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar3) {
            *(int *)plVar10 = iVar4;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar4 == 0) {
          (**(code **)(*local_68 + 0x10))();
        }
      }
    }
    FUN_02b2bfd4(param_1,param_1 + 0xd0);
    *(undefined1 *)(param_1 + 0x18a) = 0;
  }
  return;
}


