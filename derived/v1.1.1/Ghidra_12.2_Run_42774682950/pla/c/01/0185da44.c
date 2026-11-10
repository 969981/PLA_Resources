/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0185da44; name: FUN_0185da44
 */


void FUN_0185da44(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long *plVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  ulong uVar11;
  long *plVar12;
  long lVar13;
  long *plVar14;
  undefined8 *puVar15;
  long *plVar16;
  float fVar17;
  long *local_58;
  
  plVar12 = *(long **)(param_1 + 0xb8);
  plVar16 = *(long **)(param_1 + 0xc0);
  if ((plVar12 != plVar16) && (uVar11 = FUN_01861730(plVar12), (uVar11 & 1) == 0)) {
    do {
      plVar14 = plVar16;
      if (plVar16 + -4 == plVar12) goto LAB_0185da7c;
      plVar12 = plVar12 + 4;
      uVar11 = FUN_01861730(plVar12);
    } while ((uVar11 & 1) == 0);
  }
  plVar14 = plVar12;
  plVar5 = plVar12;
  if (plVar12 != plVar16) {
    while (plVar5 = plVar5 + 4, plVar14 = plVar12, plVar5 != plVar16) {
      uVar11 = FUN_01861730(plVar5);
      if ((uVar11 & 1) == 0) {
        FUN_00b6141c(plVar12,plVar5);
        FUN_00b5fc1c(plVar12 + 2,plVar5 + 2);
        plVar12 = plVar12 + 4;
      }
    }
  }
LAB_0185da7c:
  plVar12 = *(long **)(param_1 + 0xc0);
  lVar13 = (long)plVar12 - (long)plVar14;
  if (lVar13 == 0) goto LAB_0185da88;
  if ((long *)((long)plVar14 + lVar13) == plVar12) {
    if (plVar12 != plVar14) {
LAB_0185db88:
      puVar8 = PTR_DAT_043794a8;
      puVar7 = PTR_DAT_043794a0;
      puVar6 = PTR_DAT_04379498;
      plVar16 = plVar12 + -4;
      puVar15 = (undefined8 *)plVar12[-2];
      if (puVar15 != (undefined8 *)0x0) {
        piVar1 = (int *)(puVar15 + 1);
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
          puVar15[2] = 0;
          if (((*puVar6 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0))
          {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar13 = *(long *)puVar7;
          *(long *)puVar8 = lVar13;
          local_58 = (long *)*puVar15;
          FUN_02a44274(lVar13 + 0xd8,&local_58);
        }
      }
      puVar15 = (undefined8 *)*plVar16;
      puVar4 = PTR_LAB_04379590;
      puVar9 = PTR_LAB_04379590;
      if (puVar15 != (undefined8 *)0x0) {
        piVar1 = (int *)(puVar15 + 1);
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
          puVar15[2] = 0;
          if (((*puVar6 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0))
          {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar13 = *(long *)puVar7;
          *(long *)puVar8 = lVar13;
          local_58 = (long *)*puVar15;
          FUN_02a44274(lVar13 + 0xd8,&local_58);
          puVar4 = PTR_LAB_04379590;
          puVar9 = PTR_LAB_04379590;
        }
      }
      while (PTR_LAB_04379590 = puVar9, puVar9 = PTR_LAB_04379590, PTR_LAB_04379590 = puVar4,
            plVar16 != plVar14) {
        puVar15 = (undefined8 *)plVar16[-2];
        plVar16 = plVar16 + -4;
        if (puVar15 != (undefined8 *)0x0) {
          piVar1 = (int *)(puVar15 + 1);
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
            puVar15[2] = 0;
            if (((*puVar6 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar6), iVar10 != 0)) {
              FUN_00100250(puVar9,puVar7,&PTR_LOOP_0411a000);
              __cxa_guard_release(puVar6);
            }
            lVar13 = *(long *)puVar7;
            *(long *)puVar8 = lVar13;
            local_58 = (long *)*puVar15;
            FUN_02a44274(lVar13 + 0xd8,&local_58);
          }
        }
        puVar15 = (undefined8 *)*plVar16;
        puVar4 = PTR_LAB_04379590;
        if (puVar15 != (undefined8 *)0x0) {
          piVar1 = (int *)(puVar15 + 1);
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
            puVar15[2] = 0;
            if (((*puVar6 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar6), iVar10 != 0)) {
              FUN_00100250(puVar9,puVar7,&PTR_LOOP_0411a000);
              __cxa_guard_release(puVar6);
            }
            lVar13 = *(long *)puVar7;
            *(long *)puVar8 = lVar13;
            local_58 = (long *)*puVar15;
            FUN_02a44274(lVar13 + 0xd8,&local_58);
            puVar4 = PTR_LAB_04379590;
          }
        }
      }
    }
  }
  else {
    do {
      FUN_00b6141c(plVar14,plVar14 + (lVar13 >> 5) * 4);
      FUN_00b5fc1c(plVar14 + 2,plVar14 + (lVar13 >> 5) * 4 + 2);
      plVar14 = plVar14 + 4;
    } while (plVar12 + (lVar13 >> 5) * -4 != plVar14);
    plVar12 = *(long **)(param_1 + 0xc0);
    if (plVar12 != plVar14) goto LAB_0185db88;
  }
  *(long **)(param_1 + 0xc0) = plVar14;
LAB_0185da88:
  plVar12 = *(long **)(param_1 + 0xb8);
  *(undefined8 *)(param_1 + 0x104) = 0;
  for (; plVar12 != plVar14; plVar12 = plVar12 + 4) {
    if ((*plVar12 != 0) && (FUN_00be940c(&local_58), plVar16 = local_58, local_58 != (long *)0x0)) {
      fVar17 = (float)FUN_01eca818(local_58);
      *(float *)(param_1 + 0x108) = fVar17 + *(float *)(param_1 + 0x108);
      uVar11 = FUN_01ec9c98(plVar16);
      if ((uVar11 & 1) == 0) {
        *(int *)(param_1 + 0x104) = *(int *)(param_1 + 0x104) + 1;
      }
      lVar13 = plVar16[0xb];
      piVar1 = (int *)(lVar13 + 0xc);
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
        *(undefined8 *)(lVar13 + 0x18) = 0;
        (**(code **)(*plVar16 + 0x20))(plVar16);
      }
    }
  }
  return;
}


