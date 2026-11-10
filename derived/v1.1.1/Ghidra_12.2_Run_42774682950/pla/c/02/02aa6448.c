/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02aa6448; name: FUN_02aa6448
 */


long * FUN_02aa6448(long param_1,long *param_2,int param_3)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  undefined8 *puVar9;
  long *plVar10;
  long *plVar11;
  
  lVar2 = *(long *)(param_1 + 0xd8);
  if ((ulong)(long)param_3 < (ulong)((*(long *)(param_1 + 0xe0) - lVar2 >> 3) * 0x6db6db6db6db6db7))
  {
    lVar6 = (long)param_3 * 0x38;
    plVar8 = *(long **)(lVar2 + lVar6);
    puVar9 = (undefined8 *)(lVar2 + lVar6 + 8);
    plVar10 = (long *)*puVar9;
    if (plVar8 != plVar10) {
      do {
        plVar7 = *(long **)(*plVar8 + 0x58);
        if (plVar7 == (long *)0x0) {
          if (*param_2 == 0) goto LAB_02aa6534;
        }
        else {
          plVar1 = plVar7 + 10;
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar4) {
              *(int *)plVar1 = (int)*plVar1 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          plVar11 = (long *)*param_2;
          do {
            iVar5 = (int)*plVar1 + -1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar4) {
              *(int *)plVar1 = iVar5;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar5 == 0) {
            (**(code **)(*plVar7 + 0x10))(plVar7);
          }
          if (plVar11 == plVar7) goto LAB_02aa6534;
        }
        plVar8 = plVar8 + 1;
      } while (plVar8 != plVar10);
      plVar8 = plVar10;
LAB_02aa6534:
      if ((long *)*puVar9 != plVar8) {
        return plVar8;
      }
    }
  }
  if (((DAT_043ef028 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_043ef028), iVar5 != 0)) {
    FUN_00100250(&LAB_02aa65b4,&DAT_043ef020,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043ef028);
  }
  return (long *)&DAT_043ef020;
}


