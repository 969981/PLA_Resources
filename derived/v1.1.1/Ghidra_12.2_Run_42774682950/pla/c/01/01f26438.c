/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01f26438; name: FUN_01f26438
 */


ulong * FUN_01f26438(long *param_1,ulong *param_2)

{
  int *piVar1;
  bool bVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  undefined8 uVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  int iVar20;
  long *plVar21;
  long *local_68;
  
  puVar9 = PTR_DAT_04380750;
  puVar8 = PTR_DAT_04380748;
  puVar7 = PTR_DAT_043794d0;
  lVar14 = param_1[0xd];
  if ((lVar14 != 0) && (*(int *)(lVar14 + 0xc) != 0)) {
    piVar1 = (int *)(lVar14 + 0xc);
    iVar20 = *(int *)(lVar14 + 0xc);
    do {
      plVar21 = *(long **)(lVar14 + 0x10);
      if (((*puVar8 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar8), iVar10 != 0)) {
        if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar7), iVar10 != 0)) {
          uVar11 = FUN_0087f8f0();
          *(undefined8 *)PTR_DAT_043794d8 = uVar11;
          __cxa_guard_release(puVar7);
        }
        *(undefined **)puVar9 = PTR_DAT_043794d8;
        __cxa_guard_release(puVar8);
      }
      while( true ) {
        if (plVar21 == (long *)0x0) goto LAB_01f26470;
        if (plVar21 == (long *)puVar9) break;
        plVar21 = (long *)*plVar21;
      }
      iVar10 = *piVar1;
      if (iVar10 == iVar20) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar20 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
          lVar14 = *(long *)(lVar14 + 0x18);
          if (lVar14 != 0) {
            uVar15 = param_1[0x13];
            if (uVar15 == 0) goto LAB_01f266c4;
            uVar12 = uVar15 - (uVar15 >> 1 & 0x5555555555555555);
            uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
            uVar13 = *param_2;
            uVar5 = 0;
            if (uVar15 != 0) {
              uVar5 = uVar13 / uVar15;
            }
            uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
            if (uVar12 < 2) {
              uVar18 = uVar15 - 1 & uVar13;
            }
            else {
              uVar18 = uVar13;
              if (uVar15 <= uVar13) {
                uVar18 = uVar13 - uVar5 * uVar15;
              }
            }
            lVar17 = param_1[0x12];
            plVar21 = *(long **)(lVar17 + uVar18 * 8);
            if ((plVar21 == (long *)0x0) || (plVar21 = (long *)*plVar21, plVar21 == (long *)0x0))
            goto LAB_01f266c4;
            uVar16 = uVar15 - 1;
            if (1 < uVar12) goto LAB_01f2659c;
            goto LAB_01f26630;
          }
          break;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar20 = iVar10;
    } while (iVar10 != 0);
  }
  goto LAB_01f26470;
LAB_01f26630:
  do {
    if (plVar21[1] == uVar13) {
      if (plVar21[2] == uVar13) goto LAB_01f26648;
    }
    else if ((plVar21[1] & uVar16) != uVar18) break;
    plVar21 = (long *)*plVar21;
  } while (plVar21 != (long *)0x0);
  goto LAB_01f266c4;
LAB_01f26648:
  param_1 = (long *)(lVar14 + -0x50);
  if (plVar21[4] != plVar21[3]) {
    if (uVar12 < 2) {
      uVar18 = uVar16 & uVar13;
      plVar21 = *(long **)(lVar17 + uVar18 * 8);
    }
    else {
      uVar18 = uVar13;
      if (uVar15 <= uVar13) {
        uVar18 = uVar13 - uVar5 * uVar15;
      }
      plVar21 = *(long **)(lVar17 + uVar18 * 8);
    }
    if ((plVar21 != (long *)0x0) && (plVar21 = (long *)*plVar21, plVar21 != (long *)0x0)) {
      if (uVar12 < 2) {
        do {
          if (plVar21[1] == uVar13) {
            if (plVar21[2] == uVar13) goto LAB_01f26710;
          }
          else if ((plVar21[1] & uVar16) != uVar18) break;
          plVar21 = (long *)*plVar21;
        } while (plVar21 != (long *)0x0);
      }
      else {
        do {
          uVar12 = plVar21[1];
          if (uVar12 == uVar13) {
            if (plVar21[2] == uVar13) goto LAB_01f26710;
          }
          else {
            if (uVar15 <= uVar12) {
              uVar5 = 0;
              if (uVar15 != 0) {
                uVar5 = uVar12 / uVar15;
              }
              uVar12 = uVar12 - uVar5 * uVar15;
            }
            if (uVar12 != uVar18) break;
          }
          plVar21 = (long *)*plVar21;
        } while (plVar21 != (long *)0x0);
      }
    }
    goto LAB_01f266c4;
  }
  goto LAB_01f266c8;
LAB_01f26710:
  FUN_01f25fc8(&local_68,param_1,*(undefined8 *)plVar21[3]);
  if (local_68 == (long *)0x0) {
    bVar4 = false;
  }
  else {
    uVar15 = *param_2;
    param_2 = (ulong *)&DAT_cbf29ce484222645;
    if (local_68[0x45] == uVar15) {
      param_2 = (ulong *)local_68[0x47];
    }
    lVar17 = local_68[0xb];
    piVar1 = (int *)(lVar17 + 0xc);
    do {
      iVar20 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar20 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar20 == 1) {
      *(undefined8 *)(lVar17 + 0x18) = 0;
      (**(code **)(*local_68 + 0x20))();
    }
    bVar4 = true;
  }
  goto LAB_01f26768;
  while (plVar21 = (long *)*plVar21, plVar21 != (long *)0x0) {
LAB_01f2659c:
    uVar19 = plVar21[1];
    if (uVar19 == uVar13) {
      if (plVar21[2] == uVar13) goto LAB_01f26648;
    }
    else {
      if (uVar15 <= uVar19) {
        uVar6 = 0;
        if (uVar15 != 0) {
          uVar6 = uVar19 / uVar15;
        }
        uVar19 = uVar19 - uVar6 * uVar15;
      }
      if (uVar19 != uVar18) break;
    }
  }
LAB_01f266c4:
  FUN_01f28040();
LAB_01f266c8:
  bVar4 = true;
  param_2 = (ulong *)&DAT_cbf29ce484222645;
LAB_01f26768:
  lVar14 = *(long *)(lVar14 + 8);
  piVar1 = (int *)(lVar14 + 0xc);
  do {
    iVar20 = *piVar1;
    cVar3 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar2) {
      *piVar1 = iVar20 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar20 + -1 == 0) {
    *(undefined8 *)(lVar14 + 0x18) = 0;
    (**(code **)(*param_1 + 0x20))(param_1);
  }
  if (!bVar4) {
LAB_01f26470:
    param_2 = (ulong *)&DAT_cbf29ce484222645;
  }
  return param_2;
}


