/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0166f63c; name: FUN_0166f63c
 */


undefined4 FUN_0166f63c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  undefined4 uVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  
  if (*(long *)(param_1 + 0xa0) == 0) {
    uVar6 = 0;
  }
  else {
    uVar8 = *(ulong *)(param_1 + 0x98);
    lVar5 = tpidr_el0;
    do {
      while( true ) {
        uVar6 = FUN_0163478c(*(undefined8 *)(param_1 + 200),
                             *(long *)(*(long *)(param_1 + 0x60) + (uVar8 >> 6 & 0x3fffffffffffff8))
                             + (uVar8 & 0x1ff) * 8);
        plVar7 = *(long **)(*(long *)(*(long *)(param_1 + 0x60) +
                                     (*(ulong *)(param_1 + 0x98) >> 6 & 0x3fffffffffffff8)) +
                           (*(ulong *)(param_1 + 0x98) & 0x1ff) * 8);
        if (plVar7 != (long *)0x0) {
          plVar1 = plVar7 + 10;
          do {
            iVar4 = (int)*plVar1 + -1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *(int *)plVar1 = iVar4;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar4 == 0) {
            (**(code **)(*plVar7 + 0x10))();
          }
        }
        uVar8 = *(long *)(param_1 + 0x98) + 1;
        lVar9 = *(long *)(param_1 + 0xa0) + -1;
        *(ulong *)(param_1 + 0x98) = uVar8;
        *(long *)(param_1 + 0xa0) = lVar9;
        if (0x3ff < uVar8) break;
        if (lVar9 == 0) {
          return uVar6;
        }
      }
      plVar7 = *(long **)(param_1 + 0xa8);
      uVar10 = **(undefined8 **)(param_1 + 0x60);
      uVar8 = (**(code **)(*plVar7 + 0xc0))(plVar7);
      if ((uVar8 & 1) == 0) {
LAB_0166f774:
        (**(code **)(*plVar7 + 0x18))(plVar7,uVar10,0x1000,8);
      }
      else {
        if (*(char *)(lVar5 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar5 + 0x38d488) = 1;
          *(undefined8 *)(lVar5 + 0x38d478) = 0;
          *(undefined8 *)(lVar5 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (*(int *)(lVar5 + 0x38d480) < 1) goto LAB_0166f774;
        FUN_02bcc824(plVar7,uVar10,0x1000,8);
      }
      *(long *)(param_1 + 0x60) = *(long *)(param_1 + 0x60) + 8;
      uVar8 = *(long *)(param_1 + 0x98) - 0x200;
      *(ulong *)(param_1 + 0x98) = uVar8;
    } while (*(long *)(param_1 + 0xa0) != 0);
  }
  return uVar6;
}


