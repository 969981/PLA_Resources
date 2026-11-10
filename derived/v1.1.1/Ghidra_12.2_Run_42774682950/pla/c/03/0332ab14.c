/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0332ab14; name: FUN_0332ab14
 */


void FUN_0332ab14(long param_1,ulong param_2)

{
  SemaphoreType *pSVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  SemaphoreType *pSVar8;
  long lVar9;
  undefined8 *puVar10;
  int *piVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  
  uVar5 = nn::os::GetSystemTick();
  *(undefined8 *)(param_1 + 0x58) = uVar5;
  *(undefined8 *)(param_1 + 0x60) = uVar5;
  *(ulong *)(param_1 + 0x40) = param_2;
  *(undefined4 *)(param_1 + 0x30) = 0;
  pSVar8 = *(SemaphoreType **)(param_1 + 0x48);
  *(undefined4 *)(pSVar8 + 0x28) = 0;
  *(undefined4 *)(pSVar8 + 0x2c) = 0;
  iVar2 = *(int *)(pSVar8 + 0x38);
  if (iVar2 != 0) {
    piVar11 = *(int **)(pSVar8 + 0x30);
    if (-1 < *piVar11) {
      nn::os::AcquireSemaphore(pSVar8);
    }
    *piVar11 = -1;
    if (iVar2 != 1) {
      lVar13 = (long)iVar2 * 4 + -4;
      do {
        piVar11 = piVar11 + 1;
        if (-1 < *piVar11) {
          nn::os::AcquireSemaphore(pSVar8);
        }
        lVar13 = lVar13 + -4;
        *piVar11 = -1;
      } while (lVar13 != 0);
    }
  }
  pSVar1 = pSVar8 + 0x40;
  do {
    iVar2 = *(int *)pSVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(pSVar1,0x10);
    if (bVar4) {
      *(int *)pSVar1 = 0;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (0 < iVar2) {
    do {
      nn::os::AcquireSemaphore(pSVar8);
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_0332a5c4(param_1);
  FUN_0332a110(param_1);
  uVar6 = nn::os::GetSystemTick();
  lVar14 = *(long *)(param_1 + 0x60);
  lVar12 = *(long *)(param_1 + 0x58);
  uVar16 = uVar6;
  lVar13 = 0;
  if (param_2 <= uVar6) {
    uVar16 = param_2;
    lVar13 = uVar6 - param_2;
  }
  lVar9 = tpidr_el0;
  if (*(long *)(lVar9 + 0x38d490) == 0) {
    lVar7 = FUN_0333d16c(0,1);
    *(long *)(lVar9 + 0x38d490) = lVar7;
    lVar9 = *(long *)(lVar7 + 0x10);
  }
  else {
    lVar9 = *(long *)(*(long *)(lVar9 + 0x38d490) + 0x10);
  }
  if (lVar9 != 0) {
    puVar10 = *(undefined8 **)(lVar9 + 8);
    uVar6 = *(ulong *)(lVar9 + 0x10);
    uVar15 = (ulong)((long)puVar10 + 0xf) & 0xfffffffffffffff8;
    if (uVar15 <= uVar6) {
      *(ulong *)(lVar9 + 8) = uVar15;
      if (puVar10 == (undefined8 *)0x0) {
        puVar10 = (undefined8 *)&DAT_00000008;
      }
      else {
        *puVar10 = "YtprocessForegroundImpl";
        puVar10 = *(undefined8 **)(lVar9 + 8);
        uVar6 = *(ulong *)(lVar9 + 0x10);
      }
    }
    uVar15 = (ulong)((long)puVar10 + 0xf) & 0xfffffffffffffff8;
    if (uVar15 <= uVar6) {
      *(ulong *)(lVar9 + 8) = uVar15;
      if (puVar10 == (undefined8 *)0x0) {
        puVar10 = (undefined8 *)&DAT_00000008;
      }
      else {
        *puVar10 = "YtdriveToForeground";
        puVar10 = *(undefined8 **)(lVar9 + 8);
        uVar6 = *(ulong *)(lVar9 + 0x10);
      }
    }
    uVar15 = (ulong)((long)puVar10 + 0x1f) & 0xfffffffffffffff8;
    lVar12 = lVar14 - lVar12;
    if (uVar15 <= uVar6) {
      *(ulong *)(lVar9 + 8) = uVar15;
      if (puVar10 == (undefined8 *)0x0) {
        puVar10 = (undefined8 *)&DAT_00000018;
      }
      else {
        *puVar10 = &DAT_03965d10;
        puVar10[1] = lVar12;
        *(undefined4 *)(puVar10 + 2) = 1;
        puVar10 = *(undefined8 **)(lVar9 + 8);
        uVar6 = *(ulong *)(lVar9 + 0x10);
      }
    }
    uVar15 = (ulong)((long)puVar10 + 0xf) & 0xfffffffffffffff8;
    if (uVar15 <= uVar6) {
      *(ulong *)(lVar9 + 8) = uVar15;
      if (puVar10 == (undefined8 *)0x0) {
        puVar10 = (undefined8 *)&DAT_00000008;
      }
      else {
        *puVar10 = "Ytwaiting";
        puVar10 = *(undefined8 **)(lVar9 + 8);
        uVar6 = *(ulong *)(lVar9 + 0x10);
      }
    }
    uVar15 = (ulong)((long)puVar10 + 0x1f) & 0xfffffffffffffff8;
    lVar14 = uVar16 - lVar14;
    if (uVar15 <= uVar6) {
      *(ulong *)(lVar9 + 8) = uVar15;
      if (puVar10 == (undefined8 *)0x0) {
        puVar10 = (undefined8 *)&DAT_00000018;
      }
      else {
        *puVar10 = &DAT_03965d10;
        puVar10[1] = lVar14;
        *(undefined4 *)(puVar10 + 2) = 1;
        puVar10 = *(undefined8 **)(lVar9 + 8);
        uVar6 = *(ulong *)(lVar9 + 0x10);
      }
    }
    uVar16 = (ulong)((long)puVar10 + 0xf) & 0xfffffffffffffff8;
    if (uVar16 <= uVar6) {
      *(ulong *)(lVar9 + 8) = uVar16;
      if (puVar10 == (undefined8 *)0x0) {
        puVar10 = (undefined8 *)&DAT_00000008;
      }
      else {
        *puVar10 = "YtdriveToBackground";
        puVar10 = *(undefined8 **)(lVar9 + 8);
        uVar6 = *(ulong *)(lVar9 + 0x10);
      }
    }
    uVar16 = (ulong)((long)puVar10 + 0x1f) & 0xfffffffffffffff8;
    if (uVar16 <= uVar6) {
      *(ulong *)(lVar9 + 8) = uVar16;
      if (puVar10 == (undefined8 *)0x0) {
        puVar10 = (undefined8 *)&DAT_00000018;
      }
      else {
        *(undefined4 *)(puVar10 + 2) = 1;
        *puVar10 = &DAT_03965d10;
        puVar10[1] = lVar13;
        puVar10 = *(undefined8 **)(lVar9 + 8);
        uVar6 = *(ulong *)(lVar9 + 0x10);
      }
    }
    uVar16 = (ulong)((long)puVar10 + 0x1f) & 0xfffffffffffffff8;
    if ((uVar16 <= uVar6) && (*(ulong *)(lVar9 + 8) = uVar16, puVar10 != (undefined8 *)0x0)) {
      *puVar10 = &DAT_03965d10;
      puVar10[1] = lVar14 + lVar13 + lVar12;
      *(undefined4 *)(puVar10 + 2) = 1;
    }
  }
  return;
}


