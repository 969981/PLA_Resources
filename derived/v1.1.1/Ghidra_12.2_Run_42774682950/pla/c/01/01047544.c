/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01047544; name: FUN_01047544
 */


void FUN_01047544(long param_1,long param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  
  lVar6 = *(long *)(param_1 + 0x10);
  if (lVar6 != param_2) {
    *(long *)(param_1 + 0x10) = lVar6 + -8;
    plVar5 = *(long **)(lVar6 + -8);
    if (plVar5 != (long *)0x0) {
      lVar6 = plVar5[0xb];
      piVar1 = (int *)(lVar6 + 0xc);
      do {
        iVar2 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar2 + -1 == 0) {
        *(undefined8 *)(lVar6 + 0x18) = 0;
        (**(code **)(*plVar5 + 0x20))();
      }
    }
    lVar6 = *(long *)(param_1 + 0x10);
    if (lVar6 != param_2) {
      *(long *)(param_1 + 0x10) = lVar6 + -8;
      plVar5 = *(long **)(lVar6 + -8);
      if (plVar5 != (long *)0x0) {
        lVar6 = plVar5[0xb];
        piVar1 = (int *)(lVar6 + 0xc);
        do {
          iVar2 = *piVar1 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar2;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto joined_r0x010475c4;
        } while( true );
      }
      while (lVar6 = *(long *)(param_1 + 0x10), lVar6 != param_2) {
        *(long *)(param_1 + 0x10) = lVar6 + -8;
        plVar5 = *(long **)(lVar6 + -8);
        if (plVar5 != (long *)0x0) {
          lVar6 = plVar5[0xb];
          piVar1 = (int *)(lVar6 + 0xc);
          do {
            iVar2 = *piVar1 + -1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar2;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
joined_r0x010475c4:
          if (iVar2 == 0) {
            *(undefined8 *)(lVar6 + 0x18) = 0;
            (**(code **)(*plVar5 + 0x20))();
          }
        }
      }
    }
  }
  return;
}


