/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01c5a7f0; name: FUN_01c5a7f0
 */


undefined4 FUN_01c5a7f0(long param_1)

{
  int *piVar1;
  uint uVar2;
  byte bVar3;
  bool bVar4;
  char cVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long *plVar10;
  bool bVar11;
  int iVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined1 *puVar15;
  uint *puVar16;
  long lVar17;
  byte *pbVar18;
  long *plVar19;
  long lVar20;
  undefined4 uVar21;
  uint *puVar23;
  uint *puVar22;
  int iVar24;
  long lVar25;
  undefined8 *puVar26;
  long *local_68;
  
  puVar9 = PTR_DAT_04380750;
  puVar8 = PTR_DAT_04380748;
  puVar7 = PTR_DAT_043794d8;
  puVar6 = PTR_DAT_043794d0;
  lVar20 = *(long *)(param_1 + 0x330);
  if ((lVar20 != 0) && (*(int *)(lVar20 + 0xc) != 0)) {
    piVar1 = (int *)(lVar20 + 0xc);
    iVar24 = *(int *)(lVar20 + 0xc);
    do {
      puVar26 = *(undefined8 **)(lVar20 + 0x10);
      if (((*puVar8 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar8), iVar12 != 0)) {
        if (((*puVar6 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar6), iVar12 != 0)) {
          uVar14 = FUN_0087f8f0();
          *(undefined8 *)puVar7 = uVar14;
          __cxa_guard_release(puVar6);
        }
        *(undefined **)puVar9 = puVar7;
        __cxa_guard_release(puVar8);
      }
      if (puVar26 == (undefined8 *)0x0) {
        return 1;
      }
      while (puVar26 != (undefined8 *)puVar9) {
        puVar26 = (undefined8 *)*puVar26;
        if (puVar26 == (undefined8 *)0x0) {
          return 1;
        }
      }
      iVar12 = *piVar1;
      if (iVar12 == iVar24) {
        cVar5 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar11) {
          *piVar1 = iVar24 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
        if (cVar5 == '\0') {
          lVar20 = *(long *)(lVar20 + 0x18);
          if (lVar20 == 0) {
            return 1;
          }
          puVar16 = *(uint **)(param_1 + 0x248);
          plVar19 = (long *)(lVar20 + -0x50);
          uVar2 = *puVar16;
          if (uVar2 == 0) {
            uVar21 = 1;
            goto LAB_01c5a988;
          }
          lVar25 = (long)puVar16 + 9;
          uVar21 = 1;
          puVar22 = puVar16 + 1;
          goto LAB_01c5a8f0;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar24 = iVar12;
    } while (iVar12 != 0);
  }
  return 1;
LAB_01c5a8f0:
  puVar23 = puVar22 + 1;
  bVar3 = *(byte *)((long)puVar23 + (ulong)*puVar22);
  if (bVar3 == 0) {
LAB_01c5a988:
    lVar20 = *(long *)(lVar20 + 8);
    piVar1 = (int *)(lVar20 + 0xc);
    do {
      iVar24 = *piVar1;
      cVar5 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar11) {
        *piVar1 = iVar24 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar24 + -1 == 0) {
      *(undefined8 *)(lVar20 + 0x18) = 0;
      (**(code **)(*plVar19 + 0x20))(plVar19);
    }
    return uVar21;
  }
  puVar15 = &DAT_cbf29ce484222645;
  pbVar18 = (byte *)(lVar25 + (ulong)*puVar22);
  do {
    puVar15 = (undefined1 *)(((ulong)puVar15 ^ (ulong)bVar3) * 0x100000001b3);
    bVar3 = *pbVar18;
    pbVar18 = pbVar18 + 1;
  } while (bVar3 != 0);
  if (puVar15 == &DAT_cbf29ce484222645) goto LAB_01c5a988;
  FUN_01c62980(&local_68,plVar19);
  plVar10 = local_68;
  if (local_68 == (long *)0x0) {
    bVar11 = false;
  }
  else {
    uVar13 = FUN_01c4ef10(local_68);
    bVar11 = (uVar13 & 1) == 0;
    lVar17 = plVar10[0xb];
    if (bVar11) {
      uVar21 = 0;
    }
    piVar1 = (int *)(lVar17 + 0xc);
    do {
      iVar24 = *piVar1;
      cVar5 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar24 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar24 + -1 == 0) {
      *(undefined8 *)(lVar17 + 0x18) = 0;
      (**(code **)(*plVar10 + 0x20))(plVar10);
    }
  }
  if ((puVar23 == puVar16 + 1 + uVar2) || (lVar25 = lVar25 + 4, puVar22 = puVar23, bVar11))
  goto LAB_01c5a988;
  goto LAB_01c5a8f0;
}


