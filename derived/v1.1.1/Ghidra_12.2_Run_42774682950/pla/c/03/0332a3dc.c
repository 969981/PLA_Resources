/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0332a3dc; name: FUN_0332a3dc
 */


void FUN_0332a3dc(long param_1)

{
  SemaphoreType *pSVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  int *piVar7;
  SemaphoreType *pSVar8;
  long lVar9;
  int iVar10;
  
  if (*(char *)(param_1 + 0x18) != '\0') {
    *(undefined8 *)(param_1 + 0x40) = 0xffffffffffffffff;
    *(undefined8 *)(param_1 + 0x58) = 0;
    *(undefined4 *)(param_1 + 0x30) = 0;
    pSVar8 = *(SemaphoreType **)(param_1 + 0x48);
    *(undefined4 *)(pSVar8 + 0x28) = 0;
    *(undefined4 *)(pSVar8 + 0x2c) = 0;
    iVar10 = *(int *)(pSVar8 + 0x38);
    if (iVar10 != 0) {
      piVar7 = *(int **)(pSVar8 + 0x30);
      if (-1 < *piVar7) {
        nn::os::AcquireSemaphore(pSVar8);
      }
      *piVar7 = -1;
      if (iVar10 != 1) {
        lVar9 = (long)iVar10 * 4 + -4;
        do {
          piVar7 = piVar7 + 1;
          if (-1 < *piVar7) {
            nn::os::AcquireSemaphore(pSVar8);
          }
          lVar9 = lVar9 + -4;
          *piVar7 = -1;
        } while (lVar9 != 0);
      }
    }
    pSVar1 = pSVar8 + 0x40;
    do {
      iVar10 = *(int *)pSVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(pSVar1,0x10);
      if (bVar3) {
        *(int *)pSVar1 = 0;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (0 < iVar10) {
      do {
        nn::os::AcquireSemaphore(pSVar8);
        iVar10 = iVar10 + -1;
      } while (iVar10 != 0);
    }
    FUN_0332a5c4(param_1);
    if (*(int *)(param_1 + 0x28) != 0) {
      lVar9 = (long)*(int *)(param_1 + 0x28) << 7;
      plVar5 = (long *)(*(long *)(param_1 + 0x20) + 0x10);
      do {
        FUN_032ba194(*plVar5);
        plVar4 = (long *)*plVar5;
        *plVar5 = 0;
        if (plVar4 != (long *)0x0) {
          (**(code **)(*plVar4 + 8))();
        }
        lVar9 = lVar9 + -0x80;
        plVar5 = plVar5 + 0x10;
      } while (lVar9 != 0);
    }
    pSVar8 = *(SemaphoreType **)(param_1 + 0x48);
    *(undefined8 *)(param_1 + 0x48) = 0;
    if (pSVar8 != (SemaphoreType *)0x0) {
      *(undefined4 *)(pSVar8 + 0x38) = 0;
      if ((-1 < (int)*(uint *)(pSVar8 + 0x3c)) && (*(long *)(pSVar8 + 0x30) != 0)) {
        FUN_032cf244(PTR_PTR_0434a080,*(long *)(pSVar8 + 0x30),4,
                     *(uint *)(pSVar8 + 0x3c) & 0x3fffffff);
      }
      *(undefined8 *)(pSVar8 + 0x30) = 0;
      *(undefined4 *)(pSVar8 + 0x3c) = 0x80000000;
      nn::os::FinalizeSemaphore(pSVar8);
      lVar9 = tpidr_el0;
      lVar6 = *(long *)(lVar9 + 0x38d490);
      if (lVar6 == 0) {
        lVar6 = FUN_0333d16c(0,1);
        *(long *)(lVar9 + 0x38d490) = lVar6;
      }
      plVar5 = *(long **)(*(long *)(lVar6 + 8) + 0x58);
      (**(code **)(*plVar5 + 0x18))(plVar5,pSVar8,0x48);
    }
    *(undefined1 *)(param_1 + 0x18) = 0;
  }
  return;
}


