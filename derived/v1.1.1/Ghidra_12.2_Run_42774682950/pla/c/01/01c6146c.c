/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01c6146c; name: FUN_01c6146c
 */


void FUN_01c6146c(long param_1)

{
  int *piVar1;
  uint uVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long *plVar10;
  int iVar11;
  undefined8 uVar12;
  undefined1 *puVar13;
  uint *puVar14;
  long lVar15;
  byte *pbVar16;
  uint *puVar17;
  long lVar18;
  int iVar19;
  uint *puVar20;
  long lVar21;
  long *plVar22;
  long *local_58;
  
  puVar9 = PTR_DAT_04380750;
  puVar8 = PTR_DAT_04380748;
  puVar7 = PTR_DAT_043794d8;
  puVar6 = PTR_DAT_043794d0;
  lVar18 = *(long *)(param_1 + 0x330);
  if (lVar18 == 0) {
    return;
  }
  if (*(int *)(lVar18 + 0xc) == 0) {
    return;
  }
  piVar1 = (int *)(lVar18 + 0xc);
  iVar19 = *(int *)(lVar18 + 0xc);
  do {
    plVar22 = *(long **)(lVar18 + 0x10);
    if (((*puVar8 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar8), iVar11 != 0)) {
      if (((*puVar6 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar6), iVar11 != 0)) {
        uVar12 = FUN_0087f8f0();
        *(undefined8 *)puVar7 = uVar12;
        __cxa_guard_release(puVar6);
      }
      *(undefined **)puVar9 = puVar7;
      __cxa_guard_release(puVar8);
    }
    while( true ) {
      if (plVar22 == (long *)0x0) {
        return;
      }
      if (plVar22 == (long *)puVar9) break;
      plVar22 = (long *)*plVar22;
    }
    iVar11 = *piVar1;
    if (iVar11 == iVar19) {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar19 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 == '\0') {
        lVar18 = *(long *)(lVar18 + 0x18);
        if (lVar18 == 0) {
          return;
        }
        puVar14 = *(uint **)(param_1 + 0x248);
        uVar2 = *puVar14;
        plVar22 = (long *)(lVar18 + -0x50);
        if (uVar2 == 0) goto LAB_01c615dc;
        lVar21 = (long)puVar14 + 9;
        puVar17 = puVar14 + 1;
        break;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    iVar19 = iVar11;
    if (iVar11 == 0) {
      return;
    }
  } while( true );
  while( true ) {
    puVar13 = &DAT_cbf29ce484222645;
    pbVar16 = (byte *)(lVar21 + (ulong)*puVar17);
    do {
      puVar13 = (undefined1 *)(((ulong)puVar13 ^ (ulong)bVar3) * 0x100000001b3);
      bVar3 = *pbVar16;
      pbVar16 = pbVar16 + 1;
    } while (bVar3 != 0);
    if (puVar13 == &DAT_cbf29ce484222645) break;
    FUN_01c62980(&local_58,plVar22);
    plVar10 = local_58;
    if (local_58 != (long *)0x0) {
      (**(code **)(*local_58 + 0x128))(local_58);
      lVar15 = plVar10[0xb];
      piVar1 = (int *)(lVar15 + 0xc);
      do {
        iVar19 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar19 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar19 + -1 == 0) {
        *(undefined8 *)(lVar15 + 0x18) = 0;
        (**(code **)(*plVar10 + 0x20))(plVar10);
      }
    }
    lVar21 = lVar21 + 4;
    puVar17 = puVar20;
    if (puVar20 == puVar14 + 1 + uVar2) break;
    puVar20 = puVar17 + 1;
    bVar3 = *(byte *)((long)puVar20 + (ulong)*puVar17);
    if (bVar3 == 0) break;
  }
LAB_01c615dc:
  puVar14 = *(uint **)(param_1 + 0x250);
  uVar2 = *puVar14;
  if (uVar2 != 0) {
    lVar21 = (long)puVar14 + 9;
    puVar17 = puVar14 + 1;
    do {
      puVar20 = puVar17 + 1;
      bVar3 = *(byte *)((long)puVar20 + (ulong)*puVar17);
      if (bVar3 == 0) break;
      puVar13 = &DAT_cbf29ce484222645;
      pbVar16 = (byte *)(lVar21 + (ulong)*puVar17);
      do {
        puVar13 = (undefined1 *)(((ulong)puVar13 ^ (ulong)bVar3) * 0x100000001b3);
        bVar3 = *pbVar16;
        pbVar16 = pbVar16 + 1;
      } while (bVar3 != 0);
      if (puVar13 == &DAT_cbf29ce484222645) break;
      FUN_01c62dd8(&local_58,plVar22,0x12);
      if (local_58 != (long *)0x0) {
        FUN_01b57e80(local_58,1,0x10);
        FUN_01b54fa0(local_58,0);
        if (local_58 != (long *)0x0) {
          lVar15 = local_58[0xb];
          piVar1 = (int *)(lVar15 + 0xc);
          do {
            iVar19 = *piVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
              *piVar1 = iVar19 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar19 + -1 == 0) {
            *(undefined8 *)(lVar15 + 0x18) = 0;
            (**(code **)(*local_58 + 0x20))();
          }
        }
      }
      lVar21 = lVar21 + 4;
      puVar17 = puVar20;
    } while (puVar20 != puVar14 + 1 + uVar2);
  }
  lVar18 = *(long *)(lVar18 + 8);
  piVar1 = (int *)(lVar18 + 0xc);
  do {
    iVar19 = *piVar1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar5) {
      *piVar1 = iVar19 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar19 + -1 == 0) {
    *(undefined8 *)(lVar18 + 0x18) = 0;
    (**(code **)(*plVar22 + 0x20))(plVar22);
  }
  return;
}


