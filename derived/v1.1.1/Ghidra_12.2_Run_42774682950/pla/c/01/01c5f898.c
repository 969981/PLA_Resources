/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01c5f898; name: FUN_01c5f898
 */


void FUN_01c5f898(long param_1,ulong param_2)

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
  uint *puVar16;
  byte *pbVar17;
  uint *puVar18;
  long lVar19;
  int iVar20;
  long lVar21;
  long *plVar22;
  long *local_68;
  
  puVar9 = PTR_DAT_04380750;
  puVar8 = PTR_DAT_04380748;
  puVar7 = PTR_DAT_043794d8;
  puVar6 = PTR_DAT_043794d0;
  lVar19 = *(long *)(param_1 + 0x330);
  if (lVar19 == 0) {
    return;
  }
  if (*(int *)(lVar19 + 0xc) == 0) {
    return;
  }
  piVar1 = (int *)(lVar19 + 0xc);
  iVar20 = *(int *)(lVar19 + 0xc);
  do {
    plVar22 = *(long **)(lVar19 + 0x10);
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
    if (iVar11 == iVar20) {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar20 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 == '\0') {
        lVar19 = *(long *)(lVar19 + 0x18);
        if (lVar19 == 0) {
          return;
        }
        puVar14 = *(uint **)(param_1 + 0x248);
        puVar16 = puVar14 + 1;
        plVar22 = (long *)(lVar19 + -0x50);
        if (*puVar14 == 0) goto LAB_01c5fb10;
        puVar18 = puVar16 + *puVar14;
        lVar21 = (long)puVar14 + 9;
        if ((param_2 & 1) == 0) goto LAB_01c5fa04;
        break;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    param_2 = param_2 & 0xffffffff;
    iVar20 = iVar11;
    if (iVar11 == 0) {
      return;
    }
  } while( true );
  while( true ) {
    puVar13 = &DAT_cbf29ce484222645;
    pbVar17 = (byte *)(lVar21 + (ulong)*puVar16);
    do {
      puVar13 = (undefined1 *)(((ulong)puVar13 ^ (ulong)bVar3) * 0x100000001b3);
      bVar3 = *pbVar17;
      pbVar17 = pbVar17 + 1;
    } while (bVar3 != 0);
    if (puVar13 == &DAT_cbf29ce484222645) break;
    FUN_01c62980(&local_68,plVar22);
    plVar10 = local_68;
    if (local_68 != (long *)0x0) {
      FUN_01c4ee60(local_68);
      lVar15 = plVar10[0xb];
      piVar1 = (int *)(lVar15 + 0xc);
      do {
        iVar20 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar20 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar20 + -1 == 0) {
        *(undefined8 *)(lVar15 + 0x18) = 0;
        (**(code **)(*plVar10 + 0x20))(plVar10);
      }
    }
    lVar21 = lVar21 + 4;
    puVar16 = puVar14;
    if (puVar14 == puVar18) break;
    puVar14 = puVar16 + 1;
    bVar3 = *(byte *)((long)puVar14 + (ulong)*puVar16);
    if (bVar3 == 0) break;
  }
  goto LAB_01c5fb10;
  while( true ) {
    puVar13 = &DAT_cbf29ce484222645;
    pbVar17 = (byte *)(lVar21 + (ulong)*puVar16);
    do {
      puVar13 = (undefined1 *)(((ulong)puVar13 ^ (ulong)bVar3) * 0x100000001b3);
      bVar3 = *pbVar17;
      pbVar17 = pbVar17 + 1;
    } while (bVar3 != 0);
    if (puVar13 == &DAT_cbf29ce484222645) break;
    FUN_01c62980(&local_68,plVar22);
    plVar10 = local_68;
    if (local_68 != (long *)0x0) {
      FUN_01c4ee40(local_68);
      lVar15 = plVar10[0xb];
      piVar1 = (int *)(lVar15 + 0xc);
      do {
        iVar20 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar20 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar20 + -1 == 0) {
        *(undefined8 *)(lVar15 + 0x18) = 0;
        (**(code **)(*plVar10 + 0x20))(plVar10);
      }
    }
    lVar21 = lVar21 + 4;
    puVar16 = puVar14;
    if (puVar14 == puVar18) break;
LAB_01c5fa04:
    puVar14 = puVar16 + 1;
    bVar3 = *(byte *)((long)puVar14 + (ulong)*puVar16);
    if (bVar3 == 0) break;
  }
LAB_01c5fb10:
  puVar16 = *(uint **)(param_1 + 0x250);
  uVar2 = *puVar16;
  if (uVar2 != 0) {
    lVar21 = (long)puVar16 + 9;
    puVar14 = puVar16 + 1;
    do {
      puVar18 = puVar14 + 1;
      bVar3 = *(byte *)((long)puVar18 + (ulong)*puVar14);
      if (bVar3 == 0) break;
      puVar13 = &DAT_cbf29ce484222645;
      pbVar17 = (byte *)(lVar21 + (ulong)*puVar14);
      do {
        puVar13 = (undefined1 *)(((ulong)puVar13 ^ (ulong)bVar3) * 0x100000001b3);
        bVar3 = *pbVar17;
        pbVar17 = pbVar17 + 1;
      } while (bVar3 != 0);
      if (puVar13 == &DAT_cbf29ce484222645) break;
      FUN_01c62dd8(&local_68,plVar22,0x12);
      if (local_68 != (long *)0x0) {
        FUN_01b54e4c();
        FUN_01b57e80(local_68,0,0x10);
        if (local_68 != (long *)0x0) {
          lVar15 = local_68[0xb];
          piVar1 = (int *)(lVar15 + 0xc);
          do {
            iVar20 = *piVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
              *piVar1 = iVar20 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar20 + -1 == 0) {
            *(undefined8 *)(lVar15 + 0x18) = 0;
            (**(code **)(*local_68 + 0x20))();
          }
        }
      }
      lVar21 = lVar21 + 4;
      puVar14 = puVar18;
    } while (puVar18 != puVar16 + 1 + uVar2);
  }
  lVar19 = *(long *)(lVar19 + 8);
  piVar1 = (int *)(lVar19 + 0xc);
  do {
    iVar20 = *piVar1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar5) {
      *piVar1 = iVar20 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar20 + -1 == 0) {
    *(undefined8 *)(lVar19 + 0x18) = 0;
    (**(code **)(*plVar22 + 0x20))(plVar22);
  }
  return;
}


