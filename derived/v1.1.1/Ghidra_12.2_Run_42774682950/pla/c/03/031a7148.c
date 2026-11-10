/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031a7148; name: FUN_031a7148
 */


void FUN_031a7148(long param_1)

{
  int iVar1;
  long *plVar2;
  undefined1 *puVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  long lVar7;
  int iVar8;
  ulong uVar9;
  MutexType *pMVar10;
  undefined1 *puVar11;
  long lVar12;
  long lVar13;
  undefined1 *local_68;
  undefined8 local_60;
  undefined1 auStack_58 [16];
  long local_48;
  
  local_48 = 0;
  local_68 = auStack_58;
  local_60 = -0x7ffffffeffffffff;
  FUN_031a72b8(param_1,&local_68);
  lVar12 = *(long *)(*(long *)(param_1 + 0x180) + 0x250);
  lVar13 = *(long *)(param_1 + 0x210);
  pMVar10 = *(MutexType **)(lVar12 + 0x28);
  nn::os::LockMutex(pMVar10);
  lVar12 = *(long *)(*(long *)(lVar12 + 0x18) + (ulong)*(byte *)(lVar13 + 0x18) * 8);
  if ((lVar13 != 0) && (*(long *)(lVar13 + 8) != 0)) {
    plVar6 = (long *)(lVar13 + 0x10);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar5) {
        *plVar6 = *plVar6 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  iVar8 = *(int *)(lVar12 + 0x48);
  lVar7 = *(long *)(lVar12 + 0x40);
  iVar1 = iVar8 + 1;
  if ((int)(*(uint *)(lVar12 + 0x4c) & 0x3fffffff) <= iVar8) {
    lVar7 = FUN_031c55e4(PTR_PTR_0434a080,iVar1);
    iVar8 = *(int *)(lVar12 + 0x48);
    *(long *)(lVar12 + 0x40) = lVar7;
  }
  *(long *)(lVar7 + (long)iVar8 * 8) = lVar13;
  *(int *)(lVar12 + 0x48) = iVar1;
  nn::os::UnlockMutex(pMVar10);
  if (local_48 != 0) {
    puVar3 = local_68 + local_48 * 0x10;
    puVar11 = local_68;
    do {
      plVar6 = *(long **)(puVar11 + 8);
      if ((plVar6 != (long *)0x0) && (plVar6[1] != 0)) {
        plVar2 = plVar6 + 2;
        do {
          lVar12 = *plVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar5) {
            *plVar2 = lVar12 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar12 + -1 == 0) {
          (**(code **)(*plVar6 + 0x18))();
        }
      }
      puVar11 = puVar11 + 0x10;
    } while (puVar11 != puVar3);
  }
  lVar12 = local_60;
  uVar9 = (ulong)local_60._4_4_;
  local_60 = (ulong)local_60._4_4_ << 0x20;
  if ((-1 < lVar12) && (local_68 != (undefined1 *)0x0)) {
    (**(code **)(*(long *)PTR_PTR_0434a080 + 0x18))
              (PTR_PTR_0434a080,local_68,(uVar9 & 0x3fffffff) << 4);
  }
  return;
}


