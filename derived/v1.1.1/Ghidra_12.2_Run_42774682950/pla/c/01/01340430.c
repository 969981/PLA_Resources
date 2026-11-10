/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01340430; name: FUN_01340430
 */


int FUN_01340430(int param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  int iVar18;
  long *plVar19;
  undefined8 *local_70 [2];
  undefined8 local_58;
  
  FUN_02599804(local_70);
  puVar5 = local_70[0];
  puVar9 = PTR_DAT_0437eee0;
  puVar8 = PTR_DAT_0437eed8;
  puVar7 = PTR_DAT_043794d8;
  puVar6 = PTR_DAT_043794d0;
  if (local_70[0] == (undefined8 *)0x0) {
    return 0;
  }
  if (*(int *)((long)local_70[0] + 0xc) != 0) {
    piVar1 = (int *)((long)local_70[0] + 0xc);
    iVar18 = *(int *)((long)local_70[0] + 0xc);
    do {
      plVar19 = (long *)puVar5[2];
      if (((*puVar8 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar8), iVar10 != 0)) {
        if (((*puVar6 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar6), iVar10 != 0)) {
          uVar11 = FUN_0087f8f0();
          *(undefined8 *)puVar7 = uVar11;
          __cxa_guard_release(puVar6);
        }
        *(undefined **)puVar9 = puVar7;
        __cxa_guard_release(puVar8);
      }
      while( true ) {
        if (plVar19 == (long *)0x0) goto LAB_01340620;
        if (plVar19 == (long *)puVar9) break;
        plVar19 = (long *)*plVar19;
      }
      iVar10 = *piVar1;
      if (iVar10 == iVar18) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar18 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          lVar13 = puVar5[3];
          if (lVar13 != 0) {
            uVar15 = *(ulong *)(lVar13 + 0xb8);
            if (uVar15 == 0) goto LAB_01340710;
            uVar14 = *(ulong *)(PTR_DAT_0437ee60 + (long)param_1 * 0x18);
            uVar16 = uVar15 - (uVar15 >> 1 & 0x5555555555555555);
            uVar16 = (uVar16 & 0x3333333333333333) + (uVar16 >> 2 & 0x3333333333333333);
            uVar16 = (uVar16 + (uVar16 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
            if (uVar16 < 2) {
              uVar17 = uVar15 - 1 & uVar14;
            }
            else if (uVar14 < uVar15) {
              uVar17 = uVar14;
            }
            else {
              uVar17 = 0;
              if (uVar15 != 0) {
                uVar17 = uVar14 / uVar15;
              }
              uVar17 = uVar14 - uVar17 * uVar15;
            }
            plVar19 = *(long **)(*(long *)(lVar13 + 0xb0) + uVar17 * 8);
            if ((plVar19 == (long *)0x0) || (plVar19 = (long *)*plVar19, plVar19 == (long *)0x0))
            goto LAB_01340710;
            if (1 < uVar16) goto LAB_013405dc;
            goto LAB_01340640;
          }
          break;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar18 = iVar10;
    } while (iVar10 != 0);
  }
LAB_01340620:
  iVar18 = 0;
  puVar5 = local_70[0];
  goto joined_r0x013406ac;
LAB_013405dc:
  do {
    uVar16 = plVar19[1];
    if (uVar16 == uVar14) {
      if (plVar19[2] == uVar14) goto LAB_01340678;
    }
    else {
      if (uVar15 <= uVar16) {
        uVar4 = 0;
        if (uVar15 != 0) {
          uVar4 = uVar16 / uVar15;
        }
        uVar16 = uVar16 - uVar4 * uVar15;
      }
      if (uVar16 != uVar17) goto LAB_01340710;
    }
    plVar19 = (long *)*plVar19;
    iVar18 = 0;
  } while (plVar19 != (long *)0x0);
  goto LAB_0134068c;
LAB_01340678:
  iVar18 = (int)plVar19[8] + -1;
  if (6 < (int)plVar19[8] - 2U) {
    iVar18 = 0;
  }
  goto LAB_0134068c;
LAB_01340710:
  iVar18 = 0;
  goto LAB_0134068c;
  while( true ) {
    plVar19 = (long *)*plVar19;
    iVar18 = 0;
    if (plVar19 == (long *)0x0) break;
LAB_01340640:
    if (plVar19[1] == uVar14) {
      if (plVar19[2] == uVar14) goto LAB_01340678;
    }
    else if ((plVar19[1] & uVar15 - 1) != uVar17) goto LAB_01340710;
  }
LAB_0134068c:
  lVar12 = *(long *)(lVar13 + 8);
  piVar1 = (int *)(lVar12 + 0xc);
  do {
    iVar10 = *piVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar3) {
      *piVar1 = iVar10 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  puVar5 = local_70[0];
  if (iVar10 + -1 == 0) {
    *(undefined8 *)(lVar12 + 0x18) = 0;
    (**(code **)(*(long *)(lVar13 + -0x50) + 0x20))();
    puVar5 = local_70[0];
  }
joined_r0x013406ac:
  if (puVar5 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar5 + 1);
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
      puVar5[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar13 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar13;
      local_58 = *puVar5;
      FUN_02a44274(lVar13 + 0xd8,&local_58);
    }
  }
  return iVar18;
}


