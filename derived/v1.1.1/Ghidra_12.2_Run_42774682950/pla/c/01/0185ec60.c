/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0185ec60; name: FUN_0185ec60
 */


void FUN_0185ec60(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  ulong uVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 local_58;
  
  puVar12 = *(undefined8 **)(param_1 + 0x80);
  puVar15 = *(undefined8 **)(param_1 + 0x88);
  if ((puVar12 != puVar15) && (uVar11 = FUN_018614c0(puVar12), (uVar11 & 1) == 0)) {
    do {
      puVar14 = puVar15;
      if (puVar15 + -4 == puVar12) goto LAB_0185ec98;
      puVar12 = puVar12 + 4;
      uVar11 = FUN_018614c0(puVar12);
    } while ((uVar11 & 1) == 0);
  }
  puVar14 = puVar12;
  puVar5 = puVar12;
  if (puVar12 != puVar15) {
    while (puVar5 = puVar5 + 4, puVar14 = puVar12, puVar5 != puVar15) {
      uVar11 = FUN_018614c0(puVar5);
      if ((uVar11 & 1) == 0) {
        FUN_00b6081c(puVar12,puVar5);
        FUN_00b5fc1c(puVar12 + 2,puVar5 + 2);
        puVar12 = puVar12 + 4;
      }
    }
  }
LAB_0185ec98:
  puVar12 = *(undefined8 **)(param_1 + 0x88);
  lVar13 = (long)puVar12 - (long)puVar14;
  if (lVar13 == 0) goto LAB_0185eca4;
  if ((undefined8 *)((long)puVar14 + lVar13) == puVar12) {
    if (puVar12 != puVar14) {
LAB_0185eda0:
      puVar8 = PTR_DAT_043794a8;
      puVar7 = PTR_DAT_043794a0;
      puVar6 = PTR_DAT_04379498;
      puVar15 = puVar12 + -4;
      puVar12 = (undefined8 *)puVar12[-2];
      if (puVar12 != (undefined8 *)0x0) {
        piVar1 = (int *)(puVar12 + 1);
        do {
          iVar10 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar10 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar10 + -1 == 0) {
          puVar12[2] = 0;
          if (((*puVar6 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0))
          {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar13 = *(long *)puVar7;
          *(long *)puVar8 = lVar13;
          local_58 = *puVar12;
          FUN_02a44274(lVar13 + 0xd8,&local_58);
        }
      }
      puVar12 = (undefined8 *)*puVar15;
      puVar4 = PTR_LAB_04379590;
      puVar9 = PTR_LAB_04379590;
      if (puVar12 != (undefined8 *)0x0) {
        piVar1 = (int *)(puVar12 + 1);
        do {
          iVar10 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar10 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        puVar4 = PTR_LAB_04379590;
        puVar9 = PTR_LAB_04379590;
        if (iVar10 + -1 == 0) {
          puVar12[2] = 0;
          if (((*puVar6 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0))
          {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar13 = *(long *)puVar7;
          *(long *)puVar8 = lVar13;
          local_58 = *puVar12;
          FUN_02a44274(lVar13 + 0xd8,&local_58);
          puVar4 = PTR_LAB_04379590;
          puVar9 = PTR_LAB_04379590;
        }
      }
      while (PTR_LAB_04379590 = puVar9, puVar9 = PTR_LAB_04379590, PTR_LAB_04379590 = puVar4,
            puVar15 != puVar14) {
        puVar12 = (undefined8 *)puVar15[-2];
        puVar15 = puVar15 + -4;
        if (puVar12 != (undefined8 *)0x0) {
          piVar1 = (int *)(puVar12 + 1);
          do {
            iVar10 = *piVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar10 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar10 + -1 == 0) {
            puVar12[2] = 0;
            if (((*puVar6 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar6), iVar10 != 0)) {
              FUN_00100250(puVar9,puVar7,&PTR_LOOP_0411a000);
              __cxa_guard_release(puVar6);
            }
            lVar13 = *(long *)puVar7;
            *(long *)puVar8 = lVar13;
            local_58 = *puVar12;
            FUN_02a44274(lVar13 + 0xd8,&local_58);
          }
        }
        puVar12 = (undefined8 *)*puVar15;
        puVar4 = PTR_LAB_04379590;
        if (puVar12 != (undefined8 *)0x0) {
          piVar1 = (int *)(puVar12 + 1);
          do {
            iVar10 = *piVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar10 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          puVar4 = PTR_LAB_04379590;
          if (iVar10 + -1 == 0) {
            puVar12[2] = 0;
            if (((*puVar6 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar6), iVar10 != 0)) {
              FUN_00100250(puVar9,puVar7,&PTR_LOOP_0411a000);
              __cxa_guard_release(puVar6);
            }
            lVar13 = *(long *)puVar7;
            *(long *)puVar8 = lVar13;
            local_58 = *puVar12;
            FUN_02a44274(lVar13 + 0xd8,&local_58);
            puVar4 = PTR_LAB_04379590;
          }
        }
      }
    }
  }
  else {
    do {
      FUN_00b6081c(puVar14,puVar14 + (lVar13 >> 5) * 4);
      FUN_00b5fc1c(puVar14 + 2,puVar14 + (lVar13 >> 5) * 4 + 2);
      puVar14 = puVar14 + 4;
    } while (puVar12 + (lVar13 >> 5) * -4 != puVar14);
    puVar12 = *(undefined8 **)(param_1 + 0x88);
    if (puVar12 != puVar14) goto LAB_0185eda0;
  }
  *(undefined8 **)(param_1 + 0x88) = puVar14;
LAB_0185eca4:
  if (*(undefined8 **)(param_1 + 0x80) == puVar14) {
    *(undefined1 *)(param_1 + 0xf0) = 0;
  }
  return;
}


