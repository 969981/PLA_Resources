/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 016ac110; name: FUN_016ac110
 */


undefined1 FUN_016ac110(long param_1,ulong *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  int iVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  undefined1 *puVar9;
  ulong uVar10;
  undefined1 *puVar11;
  ulong uVar12;
  ulong uVar13;
  long *plVar14;
  long *plVar15;
  undefined1 *puVar16;
  undefined1 uVar17;
  undefined1 *puVar18;
  
  uVar10 = *(ulong *)(param_1 + 0xa0);
  if (uVar10 != 0) {
    uVar12 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
    uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
    uVar7 = *param_2;
    uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar12 < 2) {
      uVar13 = uVar10 - 1 & uVar7;
    }
    else if (uVar7 < uVar10) {
      uVar13 = uVar7;
    }
    else {
      uVar13 = 0;
      if (uVar10 != 0) {
        uVar13 = uVar7 / uVar10;
      }
      uVar13 = uVar7 - uVar13 * uVar10;
    }
    plVar15 = *(long **)(*(long *)(param_1 + 0x98) + uVar13 * 8);
    if ((plVar15 != (long *)0x0) && (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0)) {
      if (uVar12 < 2) {
        do {
          if (plVar15[1] == uVar7) {
            if (plVar15[2] == uVar7) goto LAB_016ac21c;
          }
          else if ((plVar15[1] & uVar10 - 1) != uVar13) {
            return 0;
          }
          plVar15 = (long *)*plVar15;
          if (plVar15 == (long *)0x0) {
            return 0;
          }
        } while( true );
      }
      do {
        uVar12 = plVar15[1];
        if (uVar12 == uVar7) {
          if (plVar15[2] == uVar7) goto LAB_016ac21c;
        }
        else {
          if (uVar10 <= uVar12) {
            uVar4 = 0;
            if (uVar10 != 0) {
              uVar4 = uVar12 / uVar10;
            }
            uVar12 = uVar12 - uVar4 * uVar10;
          }
          if (uVar12 != uVar13) {
            return 0;
          }
        }
        plVar15 = (long *)*plVar15;
      } while (plVar15 != (long *)0x0);
    }
  }
  return 0;
LAB_016ac3b8:
  uVar17 = (undefined1)plVar14[3];
  goto joined_r0x016ac3bc;
LAB_016ac21c:
  puVar18 = (undefined1 *)plVar15[3];
  if (puVar18 == (undefined1 *)0xc0ea47549ab5f3d9) {
    return 0;
  }
  if (puVar18 == &DAT_cbf29ce484222645) {
    return 0;
  }
  if (((*PTR_DAT_04379558 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04379558), iVar5 != 0))
  {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  lVar8 = *(long *)PTR_DAT_04379560;
  *(long *)PTR_DAT_04379568 = lVar8;
  plVar15 = *(long **)(lVar8 + 0x290);
  if (plVar15 != (long *)0x0) {
    lVar8 = plVar15[0xb];
    if (*(undefined8 **)(lVar8 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar8 + 0x10) == 0) {
      uVar6 = (**(code **)**(undefined8 **)(lVar8 + 0x18))();
      *(undefined8 *)(lVar8 + 0x10) = uVar6;
    }
    piVar1 = (int *)(lVar8 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  puVar9 = (undefined1 *)plVar15[0xe];
  if (puVar9 != (undefined1 *)0x0) {
    uVar10 = (long)puVar9 - ((ulong)puVar9 >> 1 & 0x5555555555555555);
    uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333);
    uVar10 = (uVar10 + (uVar10 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar10 < 2) {
      puVar11 = (undefined1 *)((ulong)(puVar9 + -1) & (ulong)puVar18);
    }
    else if (puVar18 < puVar9) {
      puVar11 = puVar18;
    }
    else {
      uVar12 = 0;
      if (puVar9 != (undefined1 *)0x0) {
        uVar12 = (ulong)puVar18 / (ulong)puVar9;
      }
      puVar11 = puVar18 + -(uVar12 * (long)puVar9);
    }
    plVar14 = *(long **)(plVar15[0xd] + (long)puVar11 * 8);
    if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
      if (uVar10 < 2) {
        do {
          if ((undefined1 *)plVar14[1] == puVar18) {
            if ((undefined1 *)plVar14[2] == puVar18) goto LAB_016ac3b8;
          }
          else if ((undefined1 *)((ulong)plVar14[1] & (ulong)(puVar9 + -1)) != puVar11)
          goto LAB_016ac364;
          plVar14 = (long *)*plVar14;
          uVar17 = 0;
        } while (plVar14 != (long *)0x0);
        goto joined_r0x016ac3bc;
      }
      do {
        puVar16 = (undefined1 *)plVar14[1];
        if (puVar16 == puVar18) {
          if ((undefined1 *)plVar14[2] == puVar18) goto LAB_016ac3b8;
        }
        else {
          if (puVar9 <= puVar16) {
            uVar10 = 0;
            if (puVar9 != (undefined1 *)0x0) {
              uVar10 = (ulong)puVar16 / (ulong)puVar9;
            }
            puVar16 = puVar16 + -(uVar10 * (long)puVar9);
          }
          if (puVar16 != puVar11) break;
        }
        plVar14 = (long *)*plVar14;
      } while (plVar14 != (long *)0x0);
    }
  }
LAB_016ac364:
  uVar17 = 0;
joined_r0x016ac3bc:
  if (plVar15 != (long *)0x0) {
    lVar8 = plVar15[0xb];
    piVar1 = (int *)(lVar8 + 0xc);
    do {
      iVar5 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar5 + -1 == 0) {
      *(undefined8 *)(lVar8 + 0x18) = 0;
      (**(code **)(*plVar15 + 0x20))(plVar15);
    }
  }
  return uVar17;
}


