/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 016aacfc; name: FUN_016aacfc
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_016aacfc(long param_1,ulong *param_2)

{
  uint uVar1;
  char cVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  bool bVar7;
  int iVar8;
  undefined8 uVar9;
  undefined4 *puVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  undefined1 *puVar14;
  ulong uVar15;
  ulong uVar16;
  undefined1 *puVar17;
  long *plVar18;
  long *plVar19;
  undefined1 *puVar20;
  int *piVar21;
  undefined **ppuVar22;
  undefined **ppuVar23;
  long *plVar24;
  undefined **ppuVar25;
  ulong local_148;
  undefined1 local_140;
  undefined1 *local_138;
  long local_130;
  int *local_128;
  undefined **local_120 [2];
  undefined1 auStack_110 [176];
  
  puVar4 = PTR_DAT_04379558;
  uVar13 = *(ulong *)(param_1 + 0xa0);
  if (uVar13 == 0) {
    return;
  }
  uVar15 = uVar13 - (uVar13 >> 1 & 0x5555555555555555);
  uVar15 = (uVar15 & 0x3333333333333333) + (uVar15 >> 2 & 0x3333333333333333);
  uVar11 = *param_2;
  uVar15 = (uVar15 + (uVar15 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
  if (uVar15 < 2) {
    uVar16 = uVar13 - 1 & uVar11;
  }
  else if (uVar11 < uVar13) {
    uVar16 = uVar11;
  }
  else {
    uVar16 = 0;
    if (uVar13 != 0) {
      uVar16 = uVar11 / uVar13;
    }
    uVar16 = uVar11 - uVar16 * uVar13;
  }
  plVar18 = *(long **)(*(long *)(param_1 + 0x98) + uVar16 * 8);
  if (plVar18 == (long *)0x0) {
    return;
  }
  plVar18 = (long *)*plVar18;
  if (plVar18 == (long *)0x0) {
    return;
  }
  if (uVar15 < 2) {
    do {
      if (plVar18[1] == uVar11) {
        if (plVar18[2] == uVar11) goto LAB_016aae34;
      }
      else if ((plVar18[1] & uVar13 - 1) != uVar16) {
        return;
      }
      plVar18 = (long *)*plVar18;
      if (plVar18 == (long *)0x0) {
        return;
      }
    } while( true );
  }
  do {
    uVar15 = plVar18[1];
    if (uVar15 == uVar11) {
      if (plVar18[2] == uVar11) goto LAB_016aae34;
    }
    else {
      if (uVar13 <= uVar15) {
        uVar3 = 0;
        if (uVar13 != 0) {
          uVar3 = uVar15 / uVar13;
        }
        uVar15 = uVar15 - uVar3 * uVar13;
      }
      if (uVar15 != uVar16) {
        return;
      }
    }
    plVar18 = (long *)*plVar18;
    if (plVar18 == (long *)0x0) {
      return;
    }
  } while( true );
LAB_016aafd0:
  *(undefined1 *)(plVar19 + 3) = 0xff;
  goto LAB_016aafd8;
LAB_016ab208:
  if ((1 < *(byte *)(plVar24 + 3)) && (*(byte *)(plVar24 + 3) != 0xff)) {
    FUN_016a7c28(param_1,local_120);
    goto LAB_016ab234;
  }
LAB_016ab0c4:
  plVar19 = (long *)*plVar19;
  if (plVar19 == (long *)0x0) goto LAB_016ab234;
  goto LAB_016ab0cc;
LAB_016aae34:
  local_138 = (undefined1 *)plVar18[3];
  local_130 = plVar18[4];
  local_128 = (int *)plVar18[5];
  if (local_138 == (undefined1 *)0xc0ea47549ab5f3d9) {
    return;
  }
  if (local_138 == &DAT_cbf29ce484222645) {
    return;
  }
  if (((*PTR_DAT_04379558 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04379558), iVar8 != 0))
  {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  puVar6 = PTR_DAT_04379568;
  puVar5 = PTR_DAT_04379560;
  lVar12 = *(long *)PTR_DAT_04379560;
  *(long *)PTR_DAT_04379568 = lVar12;
  plVar18 = *(long **)(lVar12 + 0x290);
  if (plVar18 != (long *)0x0) {
    lVar12 = plVar18[0xb];
    if (*(undefined8 **)(lVar12 + 0x18) == (undefined8 *)0x0) goto LAB_016ab41c;
    if (*(long *)(lVar12 + 0x10) == 0) {
      uVar9 = (**(code **)**(undefined8 **)(lVar12 + 0x18))();
      *(undefined8 *)(lVar12 + 0x10) = uVar9;
    }
    piVar21 = (int *)(lVar12 + 0xc);
    do {
      cVar2 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar21,0x10);
      if (bVar7) {
        *piVar21 = *piVar21 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  puVar14 = (undefined1 *)plVar18[0xe];
  if (puVar14 != (undefined1 *)0x0) {
    uVar13 = (long)puVar14 - ((ulong)puVar14 >> 1 & 0x5555555555555555);
    uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
    uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar13 < 2) {
      puVar17 = (undefined1 *)((ulong)(puVar14 + -1) & (ulong)local_138);
    }
    else if (local_138 < puVar14) {
      puVar17 = local_138;
    }
    else {
      uVar15 = 0;
      if (puVar14 != (undefined1 *)0x0) {
        uVar15 = (ulong)local_138 / (ulong)puVar14;
      }
      puVar17 = local_138 + -(uVar15 * (long)puVar14);
    }
    plVar19 = *(long **)(plVar18[0xd] + (long)puVar17 * 8);
    if ((plVar19 != (long *)0x0) && (plVar19 = (long *)*plVar19, plVar19 != (long *)0x0)) {
      if (uVar13 < 2) {
        do {
          if ((undefined1 *)plVar19[1] == local_138) {
            if ((undefined1 *)plVar19[2] == local_138) goto LAB_016aafd0;
          }
          else if ((undefined1 *)((ulong)plVar19[1] & (ulong)(puVar14 + -1)) != puVar17) break;
          plVar19 = (long *)*plVar19;
        } while (plVar19 != (long *)0x0);
      }
      else {
        do {
          puVar20 = (undefined1 *)plVar19[1];
          if (puVar20 == local_138) {
            if ((undefined1 *)plVar19[2] == local_138) goto LAB_016aafd0;
          }
          else {
            if (puVar14 <= puVar20) {
              uVar13 = 0;
              if (puVar14 != (undefined1 *)0x0) {
                uVar13 = (ulong)puVar20 / (ulong)puVar14;
              }
              puVar20 = puVar20 + -(uVar13 * (long)puVar14);
            }
            if (puVar20 != puVar17) break;
          }
          plVar19 = (long *)*plVar19;
        } while (plVar19 != (long *)0x0);
      }
    }
  }
LAB_016aafd8:
  uVar13 = FUN_016a83a0(&local_138);
  if ((uVar13 & 0xff) != 0) {
    puVar10 = (undefined4 *)FUN_010f8318(param_1 + 0x138,&local_138);
    *puVar10 = (int)(uVar13 >> 0x20);
  }
  if (((*puVar4 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04379558), iVar8 != 0)) {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  lVar12 = *(long *)puVar5;
  *(long *)puVar6 = lVar12;
  plVar19 = *(long **)(lVar12 + 0x290);
  if (plVar19 == (long *)0x0) {
    uVar13 = _DAT_000000d0;
  }
  else {
    lVar12 = plVar19[0xb];
    if (*(undefined8 **)(lVar12 + 0x18) == (undefined8 *)0x0) {
LAB_016ab41c:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar12 + 0x10) == 0) {
      uVar9 = (**(code **)**(undefined8 **)(lVar12 + 0x18))();
      *(undefined8 *)(lVar12 + 0x10) = uVar9;
    }
    piVar21 = (int *)(lVar12 + 0xc);
    do {
      cVar2 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar21,0x10);
      if (bVar7) {
        *piVar21 = *piVar21 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    lVar12 = plVar19[0xb];
    piVar21 = (int *)(lVar12 + 0xc);
    uVar13 = plVar19[0x1a];
    do {
      iVar8 = *piVar21;
      cVar2 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar21,0x10);
      if (bVar7) {
        *piVar21 = iVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar8 + -1 == 0) {
      *(undefined8 *)(lVar12 + 0x18) = 0;
      (**(code **)(*plVar19 + 0x20))(plVar19);
    }
  }
  if (uVar13 == *param_2) {
    FUN_016a7c28(param_1,&DAT_03a7c4a8);
  }
  if ((*(ushort *)((long)local_128 - (long)*local_128) < 0xb) ||
     (uVar13 = (ulong)((ushort *)((long)local_128 - (long)*local_128))[5], uVar13 == 0)) {
    puVar14 = (undefined1 *)0x0;
    plVar19 = *(long **)(param_1 + 200);
  }
  else {
    puVar14 = *(undefined1 **)((long)local_128 + uVar13);
    if (puVar14 == &DAT_cbf29ce484222645) goto LAB_016ab234;
    plVar19 = *(long **)(param_1 + 200);
  }
  if (plVar19 != (long *)0x0) {
LAB_016ab0cc:
    local_120[0] = (undefined **)plVar19[3];
    piVar21 = (int *)plVar19[5];
    if (local_120[0] != (undefined **)0xc0ea47549ab5f3d9 &&
        local_120[0] != (undefined **)&DAT_cbf29ce484222645) {
      if ((*(ushort *)((long)piVar21 - (long)*piVar21) < 0xb) ||
         (uVar13 = (ulong)((ushort *)((long)piVar21 - (long)*piVar21))[5], uVar13 == 0)) {
        if (puVar14 == (undefined1 *)0x0) goto LAB_016ab10c;
      }
      else if (*(undefined1 **)((long)piVar21 + uVar13) == puVar14) {
LAB_016ab10c:
        ppuVar22 = (undefined **)plVar18[0xe];
        if (ppuVar22 != (undefined **)0x0) {
          uVar13 = (long)ppuVar22 - ((ulong)ppuVar22 >> 1 & 0x5555555555555555);
          uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
          uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
          if (uVar13 < 2) {
            ppuVar23 = (undefined **)((ulong)((long)ppuVar22 + -1) & (ulong)local_120[0]);
          }
          else if (local_120[0] < ppuVar22) {
            ppuVar23 = local_120[0];
          }
          else {
            uVar15 = 0;
            if (ppuVar22 != (undefined **)0x0) {
              uVar15 = (ulong)local_120[0] / (ulong)ppuVar22;
            }
            ppuVar23 = (undefined **)((long)local_120[0] - uVar15 * (long)ppuVar22);
          }
          plVar24 = *(long **)(plVar18[0xd] + (long)ppuVar23 * 8);
          if ((plVar24 != (long *)0x0) && (plVar24 = (long *)*plVar24, plVar24 != (long *)0x0)) {
            if (uVar13 < 2) {
              do {
                if ((undefined **)plVar24[1] == local_120[0]) {
                  if ((undefined **)plVar24[2] == local_120[0]) goto LAB_016ab208;
                }
                else if ((undefined **)((ulong)plVar24[1] & (ulong)((long)ppuVar22 + -1)) !=
                         ppuVar23) break;
                plVar24 = (long *)*plVar24;
              } while (plVar24 != (long *)0x0);
            }
            else {
              do {
                ppuVar25 = (undefined **)plVar24[1];
                if (ppuVar25 == local_120[0]) {
                  if ((undefined **)plVar24[2] == local_120[0]) goto LAB_016ab208;
                }
                else {
                  if (ppuVar22 <= ppuVar25) {
                    uVar13 = 0;
                    if (ppuVar22 != (undefined **)0x0) {
                      uVar13 = (ulong)ppuVar25 / (ulong)ppuVar22;
                    }
                    ppuVar25 = (undefined **)((long)ppuVar25 - uVar13 * (long)ppuVar22);
                  }
                  if (ppuVar25 != ppuVar23) break;
                }
                plVar24 = (long *)*plVar24;
              } while (plVar24 != (long *)0x0);
            }
          }
        }
      }
    }
    goto LAB_016ab0c4;
  }
LAB_016ab234:
  FUN_016aa5a8(param_1,param_2);
  FUN_016aa648(local_120,param_1);
  if ((char)local_120[0] != '\0') {
    memcpy((void *)(param_1 + 0x200),auStack_110,0x98);
    local_120[0] = (undefined **)((ulong)local_120[0] & 0xffffffffffffff00);
  }
  if ((*(ushort *)((long)local_128 - (long)*local_128) < 5) ||
     (uVar13 = (ulong)((ushort *)((long)local_128 - (long)*local_128))[2], uVar13 == 0)) {
    bVar7 = false;
  }
  else {
    bVar7 = *(long *)((long)local_128 + uVar13) == -0x1b2f856691a10a18;
  }
  FUN_00daa374(local_120,*(undefined8 *)(param_1 + 8));
  local_120[0] = &PTR_LAB_041eda58;
  uVar1 = (uint)local_130;
  if (!bVar7) {
    uVar1 = (uint)local_130 + 10000;
  }
  local_148 = (ulong)uVar1;
  local_140 = 0;
  FUN_00dab008(local_120,&local_148);
  (*(code *)local_120[0][2])(local_120);
  thunk_FUN_00daf734(local_120);
  if (plVar18 != (long *)0x0) {
    lVar12 = plVar18[0xb];
    piVar21 = (int *)(lVar12 + 0xc);
    do {
      iVar8 = *piVar21;
      cVar2 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar21,0x10);
      if (bVar7) {
        *piVar21 = iVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar8 + -1 == 0) {
      *(undefined8 *)(lVar12 + 0x18) = 0;
      (**(code **)(*plVar18 + 0x20))(plVar18);
    }
  }
  return;
}


