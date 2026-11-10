/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0333822c; name: FUN_0333822c
 */


void FUN_0333822c(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  
  (**(code **)(**(long **)(param_1 + 0x20) + 0x10))();
  if (*(char *)(param_1 + 0x360) == '\0') {
    *(undefined1 *)(param_1 + 0x360) = 1;
    iVar4 = *(int *)(param_1 + 900);
    if (iVar4 == 0) {
      iVar4 = *(int *)(param_1 + 0x4c);
      if (0 < iVar4) {
        lVar7 = 0;
        do {
          lVar6 = *(long *)(param_1 + 0x50 + lVar7 * 8);
          if ((*(byte *)(lVar6 + 0x10) & 1) != 0) {
            *(undefined1 *)(lVar6 + 0x10) = 0;
            nn::os::ReleaseSemaphore((SemaphoreType *)(lVar6 + 0x150),1);
            iVar4 = *(int *)(param_1 + 0x4c);
          }
          lVar7 = lVar7 + 1;
        } while (lVar7 < iVar4);
      }
    }
    else if (iVar4 == 1) {
      iVar4 = *(int *)(param_1 + 0x4c);
      if (0 < iVar4) {
        lVar7 = 0;
        do {
          lVar6 = *(long *)(param_1 + 0x50 + lVar7 * 8);
          if ((*(byte *)(lVar6 + 0x10) & 1) != 0) {
            *(undefined1 *)(lVar6 + 0x10) = 0;
            *(undefined4 *)(lVar6 + 0x180) = 1;
            iVar4 = *(int *)(param_1 + 0x4c);
          }
          lVar7 = lVar7 + 1;
        } while (lVar7 < iVar4);
      }
    }
    else {
      if (iVar4 != 2) {
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
      iVar4 = *(int *)(param_1 + 0x4c);
      if (0 < iVar4) {
        lVar7 = 0;
        do {
          lVar6 = *(long *)(param_1 + lVar7 * 8 + 0x50);
          if ((*(byte *)(lVar6 + 0x10) & 1) != 0) {
            *(undefined1 *)(lVar6 + 0x10) = 0;
            puVar5 = *(undefined8 **)(lVar6 + 0x150);
            piVar1 = (int *)((long)puVar5 + 0xc);
            do {
              iVar4 = *piVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar3) {
                *piVar1 = iVar4 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (iVar4 < 0) {
              FUN_0332b180(*puVar5,*(undefined4 *)(puVar5 + 1));
            }
            iVar4 = *(int *)(param_1 + 0x4c);
          }
          lVar7 = lVar7 + 1;
        } while (lVar7 < iVar4);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x03338270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x20) + 0x18))();
  return;
}


