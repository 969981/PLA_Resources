/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030600f0; name: FUN_030600f0
 */


/* WARNING: Removing unreachable block (ram,0x030601e0) */

void FUN_030600f0(long param_1,undefined8 *param_2,uint param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  int iVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  ulong *puVar11;
  int iVar12;
  uint uVar13;
  ulong uVar14;
  ulong uVar15;
  long *plVar16;
  uint uVar17;
  
  nn::os::LockMutex(*(MutexType **)(param_1 + 0x2a10));
  if (0 < (int)param_3) {
    uVar9 = **(ulong **)(param_1 + 0x5c0) >> 0x20;
    iVar7 = (int)(**(ulong **)(param_1 + 0x5c0) >> 0x20);
    iVar12 = iVar7 * 3;
    uVar14 = (ulong)param_3;
    iVar7 = iVar7 << 5;
    lVar6 = tpidr_el0;
    do {
      lVar10 = param_1 + (ulong)*(uint *)(param_1 + 0x128) * 0x10;
      plVar16 = (long *)(lVar10 + 0x28);
      iVar8 = (int)uVar9;
      if (iVar8 == *(int *)(lVar10 + 0x34)) {
        iVar3 = *(int *)(lVar10 + 0x30);
        plVar16 = (long *)(lVar10 + 0x38);
        *(int *)(lVar10 + 0x40) = iVar8;
        *(int *)(lVar10 + 0x44) = iVar12 + iVar3 * -2;
        lVar10 = *(long *)(lVar6 + 0x38d490);
        if (lVar10 == 0) {
          lVar10 = FUN_0333d16c(0,1);
          *(long *)(lVar6 + 0x38d490) = lVar10;
        }
        lVar10 = FUN_032cf864(*(undefined8 *)(*(long *)(lVar10 + 8) + 0x58),iVar7 + iVar3 * -0x20);
        *plVar16 = lVar10;
        DataMemoryBarrier(2,3);
        *(int *)(param_1 + 0x128) = *(int *)(param_1 + 0x128) + 1;
      }
      uVar2 = param_2[1];
      puVar1 = (undefined8 *)(*plVar16 + (long)(iVar8 - (int)plVar16[1]) * 0x10);
      uVar14 = uVar14 - 1;
      uVar9 = (ulong)(iVar8 + 1);
      iVar12 = iVar12 + 3;
      iVar7 = iVar7 + 0x20;
      *puVar1 = *param_2;
      puVar1[1] = uVar2;
      param_2 = param_2 + 2;
    } while (uVar14 != 0);
  }
  DataMemoryBarrier(2,3);
  puVar11 = *(ulong **)(param_1 + 0x5c0);
  uVar15 = *puVar11;
  uVar9 = *puVar11;
  uVar13 = (uint)(uVar15 >> 0x20);
  uVar14 = uVar15 >> 0x20;
  if ((uint)uVar15 <= uVar13) {
    uVar14 = uVar15;
  }
  if (uVar9 == uVar15) {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(puVar11,0x10);
    if (bVar5) {
      *puVar11 = uVar14 & 0xffffffff | (ulong)(uVar13 + param_3) << 0x20;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') {
LAB_03060268:
      if ((0xf < (int)param_3) && (*(int *)(param_1 + 0x130) == 0)) {
        *(undefined4 *)(param_1 + 0x130) = 1;
        DataMemoryBarrier(2,3);
      }
      nn::os::UnlockMutex(*(MutexType **)(param_1 + 0x2a10));
      return;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  uVar13 = 0;
  do {
    uVar17 = -1 << (ulong)(uVar13 & 0x1f);
    DataMemoryBarrier(2,2);
    Yield();
    if ((int)uVar17 < -1) {
      uVar17 = ~uVar17;
      do {
        uVar17 = uVar17 - 1;
        DataMemoryBarrier(2,2);
        Yield();
      } while (0 < (int)uVar17);
    }
    do {
      puVar11 = *(ulong **)(param_1 + 0x5c0);
      if (uVar13 < 8) {
        uVar13 = uVar13 + 1;
      }
      uVar17 = (uint)(uVar9 >> 0x20);
      uVar15 = *puVar11;
      uVar14 = uVar9 >> 0x20;
      if ((uint)uVar9 <= uVar17) {
        uVar14 = uVar9;
      }
      if (uVar15 == uVar9) {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar11,0x10);
        if (bVar5) {
          *puVar11 = uVar14 & 0xffffffff | (ulong)(uVar17 + param_3) << 0x20;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 == '\0') goto LAB_03060268;
      }
      else {
        ClearExclusiveLocal();
      }
      uVar9 = uVar15;
    } while (uVar13 == 0x1f);
  } while( true );
}


