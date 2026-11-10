/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a599a8; name: FUN_02a599a8
 */


void FUN_02a599a8(long param_1,ulong param_2)

{
  int *piVar1;
  long *plVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  
  uVar6 = nn::os::TryAcquireSemaphore((SemaphoreType *)(param_1 + 0x458));
  if ((uVar6 & 1) == 0) {
    *(ulong *)(param_1 + 0x488) = param_2;
    return;
  }
  plVar9 = *(long **)(param_1 + 0x428);
  uVar6 = (long)plVar9 - *(long *)(param_1 + 0x420) >> 3;
  if (param_2 < uVar6) {
    plVar2 = (long *)(*(long *)(param_1 + 0x420) + param_2 * 8);
    if (plVar2 != plVar9) {
      do {
        plVar9 = plVar9 + -1;
        plVar7 = (long *)*plVar9;
        if (plVar7 != (long *)0x0) {
          lVar8 = plVar7[0xb];
          piVar1 = (int *)(lVar8 + 0xc);
          do {
            iVar3 = *piVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
              *piVar1 = iVar3 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar3 + -1 == 0) {
            *(undefined8 *)(lVar8 + 0x18) = 0;
            (**(code **)(*plVar7 + 0x20))();
          }
        }
      } while (plVar9 != plVar2);
      *(long **)(param_1 + 0x428) = plVar2;
    }
  }
  else {
    while (uVar6 < param_2) {
      FUN_02a5efbc(param_1);
      uVar6 = *(long *)(param_1 + 0x428) - *(long *)(param_1 + 0x420) >> 3;
    }
  }
  nn::os::ReleaseSemaphore((SemaphoreType *)(param_1 + 0x458));
  return;
}


