/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 016a9288; name: FUN_016a9288
 */


void FUN_016a9288(long param_1,ulong *param_2)

{
  int *piVar1;
  uint *puVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  int iVar6;
  undefined8 uVar7;
  undefined4 *puVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  undefined1 *puVar12;
  ulong uVar13;
  ulong uVar14;
  long *plVar15;
  undefined1 *puVar16;
  long *plVar17;
  undefined1 *puVar18;
  undefined1 *local_48;
  long local_40;
  int *local_38;
  
  uVar11 = *(ulong *)(param_1 + 0xa0);
  if (uVar11 == 0) {
    return;
  }
  uVar13 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
  uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
  uVar9 = *param_2;
  uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
  if (uVar13 < 2) {
    uVar14 = uVar11 - 1 & uVar9;
  }
  else if (uVar9 < uVar11) {
    uVar14 = uVar9;
  }
  else {
    uVar14 = 0;
    if (uVar11 != 0) {
      uVar14 = uVar9 / uVar11;
    }
    uVar14 = uVar9 - uVar14 * uVar11;
  }
  plVar15 = *(long **)(*(long *)(param_1 + 0x98) + uVar14 * 8);
  if (plVar15 == (long *)0x0) {
    return;
  }
  plVar15 = (long *)*plVar15;
  if (plVar15 == (long *)0x0) {
    return;
  }
  if (uVar13 < 2) {
    do {
      if (plVar15[1] == uVar9) {
        if (plVar15[2] == uVar9) goto LAB_016a93b0;
      }
      else if ((plVar15[1] & uVar11 - 1) != uVar14) {
        return;
      }
      plVar15 = (long *)*plVar15;
      if (plVar15 == (long *)0x0) {
        return;
      }
    } while( true );
  }
  do {
    uVar13 = plVar15[1];
    if (uVar13 == uVar9) {
      if (plVar15[2] == uVar9) goto LAB_016a93b0;
    }
    else {
      if (uVar11 <= uVar13) {
        uVar5 = 0;
        if (uVar11 != 0) {
          uVar5 = uVar13 / uVar11;
        }
        uVar13 = uVar13 - uVar5 * uVar11;
      }
      if (uVar13 != uVar14) {
        return;
      }
    }
    plVar15 = (long *)*plVar15;
    if (plVar15 == (long *)0x0) {
      return;
    }
  } while( true );
LAB_016a9654:
  *(char *)(plVar17 + 3) = (char)*(undefined4 *)((long)puVar2 + (ulong)*puVar2 + 4);
  goto LAB_016a9658;
LAB_016a93b0:
  local_48 = (undefined1 *)plVar15[3];
  local_40 = plVar15[4];
  local_38 = (int *)plVar15[5];
  if (local_48 == (undefined1 *)0xc0ea47549ab5f3d9) {
    return;
  }
  if (local_48 == &DAT_cbf29ce484222645) {
    return;
  }
  if (((*PTR_DAT_04379558 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_04379558), iVar6 != 0))
  {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  lVar10 = *(long *)PTR_DAT_04379560;
  *(long *)PTR_DAT_04379568 = lVar10;
  plVar15 = *(long **)(lVar10 + 0x290);
  if (plVar15 != (long *)0x0) {
    lVar10 = plVar15[0xb];
    if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar10 + 0x10) == 0) {
      uVar7 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
      *(undefined8 *)(lVar10 + 0x10) = uVar7;
    }
    piVar1 = (int *)(lVar10 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  puVar12 = (undefined1 *)plVar15[0xe];
  uVar11 = 0;
  if (puVar12 != (undefined1 *)0x0) {
    uVar11 = (ulong)local_48 / (ulong)puVar12;
  }
  if (puVar12 != (undefined1 *)0x0) {
    uVar13 = (long)puVar12 - ((ulong)puVar12 >> 1 & 0x5555555555555555);
    uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
    uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar13 < 2) {
      puVar16 = (undefined1 *)((ulong)(puVar12 + -1) & (ulong)local_48);
    }
    else {
      puVar16 = local_48;
      if (puVar12 <= local_48) {
        puVar16 = local_48 + -(uVar11 * (long)puVar12);
      }
    }
    plVar17 = *(long **)(plVar15[0xd] + (long)puVar16 * 8);
    if ((plVar17 != (long *)0x0) && (plVar17 = (long *)*plVar17, plVar17 != (long *)0x0)) {
      if (uVar13 < 2) {
        do {
          if ((undefined1 *)plVar17[1] == local_48) {
            if ((undefined1 *)plVar17[2] == local_48) break;
          }
          else if ((undefined1 *)((ulong)plVar17[1] & (ulong)(puVar12 + -1)) != puVar16) break;
          plVar17 = (long *)*plVar17;
        } while (plVar17 != (long *)0x0);
      }
      else {
        do {
          puVar18 = (undefined1 *)plVar17[1];
          if (puVar18 == local_48) {
            if ((undefined1 *)plVar17[2] == local_48) break;
          }
          else {
            if (puVar12 <= puVar18) {
              uVar13 = 0;
              if (puVar12 != (undefined1 *)0x0) {
                uVar13 = (ulong)puVar18 / (ulong)puVar12;
              }
              puVar18 = puVar18 + -(uVar13 * (long)puVar12);
            }
            if (puVar18 != puVar16) break;
          }
          plVar17 = (long *)*plVar17;
        } while (plVar17 != (long *)0x0);
      }
    }
  }
  if (puVar12 != (undefined1 *)0x0) {
    uVar13 = (long)puVar12 - ((ulong)puVar12 >> 1 & 0x5555555555555555);
    puVar2 = (uint *)((long)local_38 + (ulong)*(ushort *)((long)local_38 + (0x14 - (long)*local_38))
                     );
    uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
    uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar13 < 2) {
      puVar16 = (undefined1 *)((ulong)(puVar12 + -1) & (ulong)local_48);
    }
    else {
      puVar16 = local_48;
      if (puVar12 <= local_48) {
        puVar16 = local_48 + -(uVar11 * (long)puVar12);
      }
    }
    plVar17 = *(long **)(plVar15[0xd] + (long)puVar16 * 8);
    if ((plVar17 != (long *)0x0) && (plVar17 = (long *)*plVar17, plVar17 != (long *)0x0)) {
      if (uVar13 < 2) {
        do {
          if ((undefined1 *)plVar17[1] == local_48) {
            if ((undefined1 *)plVar17[2] == local_48) goto LAB_016a9654;
          }
          else if ((undefined1 *)((ulong)plVar17[1] & (ulong)(puVar12 + -1)) != puVar16) break;
          plVar17 = (long *)*plVar17;
        } while (plVar17 != (long *)0x0);
      }
      else {
        do {
          puVar18 = (undefined1 *)plVar17[1];
          if (puVar18 == local_48) {
            if ((undefined1 *)plVar17[2] == local_48) goto LAB_016a9654;
          }
          else {
            if (puVar12 <= puVar18) {
              uVar11 = 0;
              if (puVar12 != (undefined1 *)0x0) {
                uVar11 = (ulong)puVar18 / (ulong)puVar12;
              }
              puVar18 = puVar18 + -(uVar11 * (long)puVar12);
            }
            if (puVar18 != puVar16) break;
          }
          plVar17 = (long *)*plVar17;
        } while (plVar17 != (long *)0x0);
      }
    }
  }
LAB_016a9658:
  uVar11 = FUN_016a83a0(&local_48);
  if ((uVar11 & 0xff) != 0) {
    puVar8 = (undefined4 *)FUN_010f8318(param_1 + 0x138,&local_48);
    *puVar8 = (int)(uVar11 >> 0x20);
  }
  if (plVar15 != (long *)0x0) {
    lVar10 = plVar15[0xb];
    piVar1 = (int *)(lVar10 + 0xc);
    do {
      iVar6 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 + -1 == 0) {
      *(undefined8 *)(lVar10 + 0x18) = 0;
      (**(code **)(*plVar15 + 0x20))(plVar15);
    }
  }
  return;
}


