/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 016aa78c; name: FUN_016aa78c
 */


undefined8 FUN_016aa78c(long param_1,ulong *param_2)

{
  uint uVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  undefined1 *puVar6;
  int iVar7;
  undefined8 uVar8;
  uint *puVar9;
  ulong uVar10;
  long lVar11;
  undefined1 *puVar12;
  ulong uVar13;
  undefined1 *puVar14;
  ulong uVar15;
  ulong uVar16;
  long *plVar17;
  long *plVar18;
  undefined1 *puVar19;
  undefined1 *local_118;
  long local_110;
  int *local_108;
  char local_100 [16];
  undefined1 auStack_f0 [160];
  
  uVar13 = *(ulong *)(param_1 + 0xa0);
  if (uVar13 != 0) {
    uVar15 = uVar13 - (uVar13 >> 1 & 0x5555555555555555);
    uVar15 = (uVar15 & 0x3333333333333333) + (uVar15 >> 2 & 0x3333333333333333);
    uVar10 = *param_2;
    uVar15 = (uVar15 + (uVar15 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar15 < 2) {
      uVar16 = uVar13 - 1 & uVar10;
    }
    else if (uVar10 < uVar13) {
      uVar16 = uVar10;
    }
    else {
      uVar16 = 0;
      if (uVar13 != 0) {
        uVar16 = uVar10 / uVar13;
      }
      uVar16 = uVar10 - uVar16 * uVar13;
    }
    plVar18 = *(long **)(*(long *)(param_1 + 0x98) + uVar16 * 8);
    if ((plVar18 != (long *)0x0) && (plVar18 = (long *)*plVar18, plVar18 != (long *)0x0)) {
      if (uVar15 < 2) {
        do {
          if (plVar18[1] == uVar10) {
            if (plVar18[2] == uVar10) goto LAB_016aa8c4;
          }
          else if ((plVar18[1] & uVar13 - 1) != uVar16) {
            return 0;
          }
          plVar18 = (long *)*plVar18;
        } while (plVar18 != (long *)0x0);
      }
      else {
        do {
          uVar15 = plVar18[1];
          if (uVar15 == uVar10) {
            if (plVar18[2] == uVar10) goto LAB_016aa8c4;
          }
          else {
            if (uVar13 <= uVar15) {
              uVar5 = 0;
              if (uVar13 != 0) {
                uVar5 = uVar15 / uVar13;
              }
              uVar15 = uVar15 - uVar5 * uVar13;
            }
            if (uVar15 != uVar16) {
              return 0;
            }
          }
          plVar18 = (long *)*plVar18;
        } while (plVar18 != (long *)0x0);
      }
    }
  }
  return 0;
LAB_016aabf8:
  *(char *)(plVar17 + 3) = (char)iVar7;
  goto LAB_016aabfc;
LAB_016aa8c4:
  local_118 = (undefined1 *)plVar18[3];
  local_110 = plVar18[4];
  local_108 = (int *)plVar18[5];
  if (local_118 == (undefined1 *)0xc0ea47549ab5f3d9) {
    return 0;
  }
  if (local_118 == &DAT_cbf29ce484222645) {
    return 0;
  }
  uVar13 = FUN_016a864c(param_1,param_2,0);
  if ((uVar13 & 1) == 0) {
    return 0;
  }
  if (((*PTR_DAT_04379558 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04379558), iVar7 != 0))
  {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  lVar11 = *(long *)PTR_DAT_04379560;
  *(long *)PTR_DAT_04379568 = lVar11;
  plVar18 = *(long **)(lVar11 + 0x290);
  if (plVar18 != (long *)0x0) {
    lVar11 = plVar18[0xb];
    if (*(undefined8 **)(lVar11 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar11 + 0x10) == 0) {
      uVar8 = (**(code **)**(undefined8 **)(lVar11 + 0x18))();
      *(undefined8 *)(lVar11 + 0x10) = uVar8;
    }
    piVar2 = (int *)(lVar11 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = *piVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  piVar2 = local_108;
  puVar6 = local_118;
  puVar12 = (undefined1 *)plVar18[0xe];
  if (puVar12 != (undefined1 *)0x0) {
    uVar13 = (long)puVar12 - ((ulong)puVar12 >> 1 & 0x5555555555555555);
    uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
    uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar13 < 2) {
      puVar14 = (undefined1 *)((ulong)(puVar12 + -1) & (ulong)local_118);
    }
    else {
      puVar14 = local_118;
      if (puVar12 <= local_118) {
        uVar15 = 0;
        if (puVar12 != (undefined1 *)0x0) {
          uVar15 = (ulong)local_118 / (ulong)puVar12;
        }
        puVar14 = local_118 + -(uVar15 * (long)puVar12);
      }
    }
    plVar17 = *(long **)(plVar18[0xd] + (long)puVar14 * 8);
    if ((plVar17 != (long *)0x0) && (plVar17 = (long *)*plVar17, plVar17 != (long *)0x0)) {
      if (uVar13 < 2) {
        do {
          if ((undefined1 *)plVar17[1] == local_118) {
            if ((undefined1 *)plVar17[2] == local_118) break;
          }
          else if ((undefined1 *)((ulong)plVar17[1] & (ulong)(puVar12 + -1)) != puVar14) break;
          plVar17 = (long *)*plVar17;
        } while (plVar17 != (long *)0x0);
      }
      else {
        do {
          puVar19 = (undefined1 *)plVar17[1];
          if (puVar19 == local_118) {
            if ((undefined1 *)plVar17[2] == local_118) break;
          }
          else {
            if (puVar12 <= puVar19) {
              uVar13 = 0;
              if (puVar12 != (undefined1 *)0x0) {
                uVar13 = (ulong)puVar19 / (ulong)puVar12;
              }
              puVar19 = puVar19 + -(uVar13 * (long)puVar12);
            }
            if (puVar19 != puVar14) break;
          }
          plVar17 = (long *)*plVar17;
        } while (plVar17 != (long *)0x0);
      }
    }
  }
  if ((*(ushort *)((long)local_108 - (long)*local_108) < 0x15) ||
     (uVar13 = (ulong)((ushort *)((long)local_108 - (long)*local_108))[10], uVar13 == 0)) {
    lVar11 = 0;
  }
  else {
    puVar9 = (uint *)((long)local_108 + uVar13);
    lVar11 = (long)puVar9 + (ulong)*puVar9;
  }
  uVar13 = FUN_016a83a0(&local_118);
  if ((uVar13 & 0xff) == 0) {
    uVar8 = 0;
    goto joined_r0x016aac48;
  }
  puVar9 = (uint *)((long)piVar2 + (ulong)*(ushort *)((long)piVar2 + (0x12 - (long)*piVar2)));
  uVar13 = uVar13 >> 0x20;
  do {
    uVar1 = (int)uVar13 + 1;
    uVar13 = (ulong)uVar1;
    iVar7 = *(int *)(lVar11 + 4 + uVar13 * 4);
    if (*(uint *)((long)puVar9 + (ulong)*puVar9) <= uVar1) break;
  } while (iVar7 == 0);
  puVar12 = (undefined1 *)plVar18[0xe];
  if (puVar12 != (undefined1 *)0x0) {
    uVar13 = (long)puVar12 - ((ulong)puVar12 >> 1 & 0x5555555555555555);
    uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
    uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar13 < 2) {
      puVar14 = (undefined1 *)((ulong)(puVar12 + -1) & (ulong)puVar6);
    }
    else {
      puVar14 = puVar6;
      if (puVar12 <= puVar6) {
        uVar15 = 0;
        if (puVar12 != (undefined1 *)0x0) {
          uVar15 = (ulong)puVar6 / (ulong)puVar12;
        }
        puVar14 = puVar6 + -(uVar15 * (long)puVar12);
      }
    }
    plVar17 = *(long **)(plVar18[0xd] + (long)puVar14 * 8);
    if ((plVar17 != (long *)0x0) && (plVar17 = (long *)*plVar17, plVar17 != (long *)0x0)) {
      if (uVar13 < 2) {
        do {
          if ((undefined1 *)plVar17[1] == puVar6) {
            if ((undefined1 *)plVar17[2] == puVar6) goto LAB_016aabf8;
          }
          else if ((undefined1 *)((ulong)plVar17[1] & (ulong)(puVar12 + -1)) != puVar14) break;
          plVar17 = (long *)*plVar17;
        } while (plVar17 != (long *)0x0);
      }
      else {
        do {
          puVar19 = (undefined1 *)plVar17[1];
          if (puVar19 == puVar6) {
            if ((undefined1 *)plVar17[2] == puVar6) goto LAB_016aabf8;
          }
          else {
            if (puVar12 <= puVar19) {
              uVar13 = 0;
              if (puVar12 != (undefined1 *)0x0) {
                uVar13 = (ulong)puVar19 / (ulong)puVar12;
              }
              puVar19 = puVar19 + -(uVar13 * (long)puVar12);
            }
            if (puVar19 != puVar14) break;
          }
          plVar17 = (long *)*plVar17;
        } while (plVar17 != (long *)0x0);
      }
    }
  }
LAB_016aabfc:
  puVar9 = (uint *)FUN_010f8318(param_1 + 0x138,&local_118);
  *puVar9 = uVar1;
  FUN_016aa5a8(param_1,param_2);
  FUN_016aa648(local_100,param_1);
  if (local_100[0] != '\0') {
    memcpy((void *)(param_1 + 0x200),auStack_f0,0x98);
    local_100[0] = '\0';
  }
  uVar8 = 1;
joined_r0x016aac48:
  if (plVar18 != (long *)0x0) {
    lVar11 = plVar18[0xb];
    piVar2 = (int *)(lVar11 + 0xc);
    do {
      iVar7 = *piVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = iVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar7 + -1 == 0) {
      *(undefined8 *)(lVar11 + 0x18) = 0;
      (**(code **)(*plVar18 + 0x20))(plVar18);
    }
  }
  return uVar8;
}


