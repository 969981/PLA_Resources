/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008b8218; name: FUN_008b8218
 */


void FUN_008b8218(long param_1)

{
  long *plVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  int iVar11;
  int iVar12;
  ulong uVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  long lVar16;
  long *plVar17;
  long lVar18;
  uint uVar19;
  undefined1 *puVar20;
  ulong uVar21;
  ulong uVar22;
  long *plVar23;
  uint uVar24;
  
  puVar8 = PTR_DAT_04379660;
  if (((*PTR_DAT_04379660 & 1) == 0) &&
     (iVar12 = __cxa_guard_acquire(PTR_DAT_04379660), iVar12 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  puVar10 = PTR_DAT_04379670;
  puVar9 = PTR_DAT_04379668;
  lVar16 = *(long *)PTR_DAT_04379668;
  *(long *)PTR_DAT_04379670 = lVar16;
  puVar15 = *(undefined1 **)(lVar16 + 0x60);
  if (puVar15 != (undefined1 *)0x0) {
    uVar13 = (long)puVar15 - ((ulong)puVar15 >> 1 & 0x5555555555555555);
    uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
    uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar13 < 2) {
      puVar14 = (undefined1 *)((ulong)(puVar15 + -1) & 0x8013c350d279d9f9);
    }
    else {
      puVar14 = &DAT_8013c350d279d9f9;
      if (puVar15 < (undefined1 *)0x8013c350d279d9fa) {
        uVar21 = 0;
        if (puVar15 != (undefined1 *)0x0) {
          uVar21 = 0x8013c350d279d9f9 / (ulong)puVar15;
        }
        puVar14 = &DAT_8013c350d279d9f9 + -(uVar21 * (long)puVar15);
      }
    }
    plVar17 = *(long **)(*(long *)(lVar16 + 0x58) + (long)puVar14 * 8);
    if ((plVar17 == (long *)0x0) || (plVar17 = (long *)*plVar17, plVar17 == (long *)0x0))
    goto LAB_008b83ec;
    if (1 < uVar13) {
      do {
        puVar20 = (undefined1 *)plVar17[1];
        if (puVar20 == &DAT_8013c350d279d9f9) {
          if ((undefined1 *)plVar17[2] == &DAT_8013c350d279d9f9) goto LAB_008b82f0;
        }
        else {
          if (puVar15 <= puVar20) {
            uVar13 = 0;
            if (puVar15 != (undefined1 *)0x0) {
              uVar13 = (ulong)puVar20 / (ulong)puVar15;
            }
            puVar20 = puVar20 + -(uVar13 * (long)puVar15);
          }
          if (puVar20 != puVar14) break;
        }
        plVar17 = (long *)*plVar17;
      } while (plVar17 != (long *)0x0);
      goto LAB_008b83ec;
    }
    do {
      if ((undefined1 *)plVar17[1] == &DAT_8013c350d279d9f9) {
        if ((undefined1 *)plVar17[2] == &DAT_8013c350d279d9f9) goto LAB_008b82f0;
      }
      else if ((undefined1 *)((ulong)plVar17[1] & (ulong)(puVar15 + -1)) != puVar14)
      goto LAB_008b83ec;
      plVar17 = (long *)*plVar17;
      iVar12 = 0;
    } while (plVar17 != (long *)0x0);
    goto LAB_008b845c;
  }
LAB_008b83ec:
  iVar12 = 0;
  bVar2 = *puVar8;
  goto joined_r0x008b8710;
LAB_008b82f0:
  plVar17 = (long *)plVar17[3];
  if (plVar17 == (long *)0x0) goto LAB_008b83ec;
  plVar1 = plVar17 + 10;
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = (int)*plVar1 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  uVar13 = plVar17[0x14];
  if (uVar13 == 0) {
    iVar12 = 0;
  }
  else {
    uVar21 = uVar13 - (uVar13 >> 1 & 0x5555555555555555);
    uVar21 = (uVar21 & 0x3333333333333333) + (uVar21 >> 2 & 0x3333333333333333);
    uVar21 = (uVar21 + (uVar21 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar21 < 2) {
      uVar22 = uVar13 - 1 & 0x30ba24140c1ccc82;
    }
    else if (uVar13 < 0x30ba24140c1ccc83) {
      uVar22 = 0;
      if (uVar13 != 0) {
        uVar22 = 0x30ba24140c1ccc82 / uVar13;
      }
      uVar22 = 0x30ba24140c1ccc82 - uVar22 * uVar13;
    }
    else {
      uVar22 = 0x30ba24140c1ccc82;
    }
    plVar23 = *(long **)(plVar17[0x13] + uVar22 * 8);
    if (plVar23 == (long *)0x0) {
      iVar12 = 0;
    }
    else {
      plVar23 = (long *)*plVar23;
      if (plVar23 == (long *)0x0) {
        iVar12 = 0;
      }
      else if (uVar21 < 2) {
        do {
          if (plVar23[1] == 0x30ba24140c1ccc82) {
            if (plVar23[2] == 0x30ba24140c1ccc82) goto LAB_008b8444;
          }
          else if ((plVar23[1] & uVar13 - 1) != uVar22) {
            iVar12 = 0;
            break;
          }
          plVar23 = (long *)*plVar23;
          iVar12 = 0;
        } while (plVar23 != (long *)0x0);
      }
      else {
        do {
          uVar21 = plVar23[1];
          if (uVar21 == 0x30ba24140c1ccc82) {
            if (plVar23[2] == 0x30ba24140c1ccc82) goto LAB_008b8444;
          }
          else {
            if (uVar13 <= uVar21) {
              uVar7 = 0;
              if (uVar13 != 0) {
                uVar7 = uVar21 / uVar13;
              }
              uVar21 = uVar21 - uVar7 * uVar13;
            }
            if (uVar21 != uVar22) {
              iVar12 = 0;
              goto LAB_008b8448;
            }
          }
          plVar23 = (long *)*plVar23;
        } while (plVar23 != (long *)0x0);
        iVar12 = 0;
      }
    }
  }
  goto LAB_008b8448;
LAB_008b84f4:
  plVar17 = (long *)plVar17[3];
  if (plVar17 != (long *)0x0) {
    plVar1 = plVar17 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    uVar13 = plVar17[0x14];
    if (uVar13 == 0) {
      iVar11 = 0;
    }
    else {
      uVar21 = uVar13 - (uVar13 >> 1 & 0x5555555555555555);
      uVar21 = (uVar21 & 0x3333333333333333) + (uVar21 >> 2 & 0x3333333333333333);
      uVar21 = (uVar21 + (uVar21 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar21 < 2) {
        uVar22 = uVar13 - 1 & 0x309f0e140c05df68;
      }
      else if (uVar13 < 0x309f0e140c05df69) {
        uVar22 = 0;
        if (uVar13 != 0) {
          uVar22 = 0x309f0e140c05df68 / uVar13;
        }
        uVar22 = 0x309f0e140c05df68 - uVar22 * uVar13;
      }
      else {
        uVar22 = 0x309f0e140c05df68;
      }
      plVar23 = *(long **)(plVar17[0x13] + uVar22 * 8);
      if (plVar23 == (long *)0x0) {
        iVar11 = 0;
      }
      else {
        plVar23 = (long *)*plVar23;
        if (plVar23 == (long *)0x0) {
          iVar11 = 0;
        }
        else if (uVar21 < 2) {
          do {
            if (plVar23[1] == 0x309f0e140c05df68) {
              if (plVar23[2] == 0x309f0e140c05df68) goto LAB_008b8640;
            }
            else if ((plVar23[1] & uVar13 - 1) != uVar22) {
              iVar11 = 0;
              break;
            }
            plVar23 = (long *)*plVar23;
            iVar11 = 0;
          } while (plVar23 != (long *)0x0);
        }
        else {
          do {
            uVar21 = plVar23[1];
            if (uVar21 == 0x309f0e140c05df68) {
              if (plVar23[2] == 0x309f0e140c05df68) goto LAB_008b8640;
            }
            else {
              if (uVar13 <= uVar21) {
                uVar7 = 0;
                if (uVar13 != 0) {
                  uVar7 = uVar21 / uVar13;
                }
                uVar21 = uVar21 - uVar7 * uVar13;
              }
              if (uVar21 != uVar22) {
                iVar11 = 0;
                goto LAB_008b8644;
              }
            }
            plVar23 = (long *)*plVar23;
          } while (plVar23 != (long *)0x0);
          iVar11 = 0;
        }
      }
    }
    goto LAB_008b8644;
  }
  goto LAB_008b85f0;
LAB_008b8640:
  iVar11 = (int)plVar23[6];
LAB_008b8644:
  do {
    iVar6 = (int)*plVar1 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = iVar6;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar6 == 0) {
    (**(code **)(*plVar17 + 0x10))();
  }
  goto LAB_008b8658;
LAB_008b8444:
  iVar12 = (int)plVar23[6];
LAB_008b8448:
  do {
    iVar11 = (int)*plVar1 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = iVar11;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar11 == 0) {
    (**(code **)(*plVar17 + 0x10))();
    bVar2 = *puVar8;
  }
  else {
LAB_008b845c:
    bVar2 = *puVar8;
  }
joined_r0x008b8710:
  if (((bVar2 & 1) == 0) && (iVar11 = __cxa_guard_acquire(PTR_DAT_04379660), iVar11 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar16 = *(long *)puVar9;
  *(long *)puVar10 = lVar16;
  puVar15 = *(undefined1 **)(lVar16 + 0x60);
  if (puVar15 != (undefined1 *)0x0) {
    uVar13 = (long)puVar15 - ((ulong)puVar15 >> 1 & 0x5555555555555555);
    uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
    uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar13 < 2) {
      puVar14 = (undefined1 *)((ulong)(puVar15 + -1) & 0x8013c350d279d9f9);
    }
    else {
      puVar14 = &DAT_8013c350d279d9f9;
      if (puVar15 < (undefined1 *)0x8013c350d279d9fa) {
        uVar21 = 0;
        if (puVar15 != (undefined1 *)0x0) {
          uVar21 = 0x8013c350d279d9f9 / (ulong)puVar15;
        }
        puVar14 = &DAT_8013c350d279d9f9 + -(uVar21 * (long)puVar15);
      }
    }
    plVar17 = *(long **)(*(long *)(lVar16 + 0x58) + (long)puVar14 * 8);
    if ((plVar17 != (long *)0x0) && (plVar17 = (long *)*plVar17, plVar17 != (long *)0x0)) {
      if (uVar13 < 2) {
        do {
          if ((undefined1 *)plVar17[1] == &DAT_8013c350d279d9f9) {
            if ((undefined1 *)plVar17[2] == &DAT_8013c350d279d9f9) goto LAB_008b84f4;
          }
          else if ((undefined1 *)((ulong)plVar17[1] & (ulong)(puVar15 + -1)) != puVar14)
          goto LAB_008b85f0;
          plVar17 = (long *)*plVar17;
          iVar11 = 0;
        } while (plVar17 != (long *)0x0);
        goto LAB_008b8658;
      }
      do {
        puVar20 = (undefined1 *)plVar17[1];
        if (puVar20 == &DAT_8013c350d279d9f9) {
          if ((undefined1 *)plVar17[2] == &DAT_8013c350d279d9f9) goto LAB_008b84f4;
        }
        else {
          if (puVar15 <= puVar20) {
            uVar13 = 0;
            if (puVar15 != (undefined1 *)0x0) {
              uVar13 = (ulong)puVar20 / (ulong)puVar15;
            }
            puVar20 = puVar20 + -(uVar13 * (long)puVar15);
          }
          if (puVar20 != puVar14) break;
        }
        plVar17 = (long *)*plVar17;
      } while (plVar17 != (long *)0x0);
    }
  }
LAB_008b85f0:
  iVar11 = 0;
LAB_008b8658:
  iVar6 = iVar11;
  if (iVar12 <= iVar11) {
    iVar6 = iVar12;
    iVar12 = iVar11;
  }
  uVar5 = iVar12 - iVar6;
  if (uVar5 < 2) {
    uVar24 = 0;
  }
  else {
    lVar16 = 0x1f;
    if ((0x7fffffffU >> (ulong)((uint)LZCOUNT(uVar5) & 0x1f) & uVar5) != 0) {
      lVar16 = 0x20;
    }
    lVar18 = *(long *)(**(long **)(param_1 + 0x70) + 0xc0);
    uVar21 = lVar16 - LZCOUNT(uVar5);
    uVar13 = uVar21 >> 6;
    if ((uVar21 & 0x3f) != 0) {
      uVar13 = uVar13 + 1;
    }
    if (uVar21 < uVar13) {
      uVar19 = 0;
    }
    else {
      uVar22 = 0;
      if (uVar13 != 0) {
        uVar22 = uVar21 / uVar13;
      }
      uVar19 = (uint)(0xffffffffffffffff >> (-uVar22 & 0x3f));
    }
    uVar13 = *(ulong *)(lVar18 + 0x70);
    uVar21 = *(ulong *)(lVar18 + 0x78);
    do {
      uVar22 = uVar13 ^ uVar21;
      iVar12 = (int)uVar21;
      uVar21 = uVar22 >> 0x1b | uVar22 << 0x25;
      uVar24 = (int)uVar13 + iVar12 & uVar19;
      uVar13 = uVar22 ^ (uVar13 >> 0x28 | uVar13 << 0x18) ^ uVar22 << 0x10;
    } while (uVar5 <= uVar24);
    *(ulong *)(lVar18 + 0x70) = uVar13;
    *(ulong *)(lVar18 + 0x78) = uVar21;
  }
  *(uint *)(param_1 + 0x8c) = uVar24 + iVar6;
  return;
}


