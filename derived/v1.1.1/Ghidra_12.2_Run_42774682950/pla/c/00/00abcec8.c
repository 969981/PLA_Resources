/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00abcec8; name: FUN_00abcec8
 */


void FUN_00abcec8(long param_1)

{
  long *plVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  ulong uVar13;
  undefined1 *puVar14;
  uint uVar15;
  undefined1 *puVar16;
  long lVar17;
  long *plVar18;
  long lVar19;
  undefined1 *puVar20;
  ulong uVar21;
  ulong uVar22;
  long *plVar23;
  uint uVar24;
  ulong local_58;
  
  nn::crypto::GenerateCryptographicallyRandomBytes(&local_58,8);
  puVar7 = PTR_DAT_04379660;
  if (((*PTR_DAT_04379660 & 1) == 0) &&
     (iVar11 = __cxa_guard_acquire(PTR_DAT_04379660), iVar11 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  puVar9 = PTR_DAT_04379670;
  puVar8 = PTR_DAT_04379668;
  lVar17 = *(long *)PTR_DAT_04379668;
  *(long *)PTR_DAT_04379670 = lVar17;
  puVar16 = *(undefined1 **)(lVar17 + 0x60);
  if (puVar16 != (undefined1 *)0x0) {
    uVar13 = (long)puVar16 - ((ulong)puVar16 >> 1 & 0x5555555555555555);
    uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
    uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar13 < 2) {
      puVar14 = (undefined1 *)((ulong)(puVar16 + -1) & 0x8013c350d279d9f9);
    }
    else {
      puVar14 = &DAT_8013c350d279d9f9;
      if (puVar16 < (undefined1 *)0x8013c350d279d9fa) {
        uVar21 = 0;
        if (puVar16 != (undefined1 *)0x0) {
          uVar21 = 0x8013c350d279d9f9 / (ulong)puVar16;
        }
        puVar14 = &DAT_8013c350d279d9f9 + -(uVar21 * (long)puVar16);
      }
    }
    plVar18 = *(long **)(*(long *)(lVar17 + 0x58) + (long)puVar14 * 8);
    if ((plVar18 == (long *)0x0) || (plVar18 = (long *)*plVar18, plVar18 == (long *)0x0))
    goto LAB_00abd0b4;
    if (1 < uVar13) {
      do {
        puVar20 = (undefined1 *)plVar18[1];
        if (puVar20 == &DAT_8013c350d279d9f9) {
          if ((undefined1 *)plVar18[2] == &DAT_8013c350d279d9f9) goto LAB_00abcfb8;
        }
        else {
          if (puVar16 <= puVar20) {
            uVar13 = 0;
            if (puVar16 != (undefined1 *)0x0) {
              uVar13 = (ulong)puVar20 / (ulong)puVar16;
            }
            puVar20 = puVar20 + -(uVar13 * (long)puVar16);
          }
          if (puVar20 != puVar14) break;
        }
        plVar18 = (long *)*plVar18;
      } while (plVar18 != (long *)0x0);
      goto LAB_00abd0b4;
    }
    do {
      if ((undefined1 *)plVar18[1] == &DAT_8013c350d279d9f9) {
        if ((undefined1 *)plVar18[2] == &DAT_8013c350d279d9f9) goto LAB_00abcfb8;
      }
      else if ((undefined1 *)((ulong)plVar18[1] & (ulong)(puVar16 + -1)) != puVar14)
      goto LAB_00abd0b4;
      plVar18 = (long *)*plVar18;
      iVar11 = 0;
    } while (plVar18 != (long *)0x0);
    goto LAB_00abd124;
  }
LAB_00abd0b4:
  iVar11 = 0;
  bVar2 = *puVar7;
  goto joined_r0x00abd5d4;
LAB_00abcfb8:
  plVar18 = (long *)plVar18[3];
  if (plVar18 == (long *)0x0) goto LAB_00abd0b4;
  plVar1 = plVar18 + 10;
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = (int)*plVar1 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  uVar13 = plVar18[0x14];
  if (uVar13 == 0) {
    iVar11 = 0;
  }
  else {
    uVar21 = uVar13 - (uVar13 >> 1 & 0x5555555555555555);
    uVar21 = (uVar21 & 0x3333333333333333) + (uVar21 >> 2 & 0x3333333333333333);
    uVar21 = (uVar21 + (uVar21 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar21 < 2) {
      uVar22 = uVar13 - 1 & 0xe54050fe788f2088;
    }
    else if (uVar13 < 0xe54050fe788f2089) {
      uVar22 = 0;
      if (uVar13 != 0) {
        uVar22 = 0xe54050fe788f2088 / uVar13;
      }
      uVar22 = 0xe54050fe788f2088 - uVar22 * uVar13;
    }
    else {
      uVar22 = 0xe54050fe788f2088;
    }
    plVar23 = *(long **)(plVar18[0x13] + uVar22 * 8);
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
          if (plVar23[1] == 0xe54050fe788f2088) {
            if (plVar23[2] == -0x1abfaf018770df78) goto LAB_00abd10c;
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
          if (uVar21 == 0xe54050fe788f2088) {
            if (plVar23[2] == -0x1abfaf018770df78) goto LAB_00abd10c;
          }
          else {
            if (uVar13 <= uVar21) {
              uVar6 = 0;
              if (uVar13 != 0) {
                uVar6 = uVar21 / uVar13;
              }
              uVar21 = uVar21 - uVar6 * uVar13;
            }
            if (uVar21 != uVar22) {
              iVar11 = 0;
              goto LAB_00abd110;
            }
          }
          plVar23 = (long *)*plVar23;
        } while (plVar23 != (long *)0x0);
        iVar11 = 0;
      }
    }
  }
  goto LAB_00abd110;
LAB_00abd1cc:
  plVar18 = (long *)plVar18[3];
  if (plVar18 != (long *)0x0) {
    plVar1 = plVar18 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    uVar13 = plVar18[0x14];
    if (uVar13 == 0) {
      iVar10 = 0;
    }
    else {
      uVar21 = uVar13 - (uVar13 >> 1 & 0x5555555555555555);
      uVar21 = (uVar21 & 0x3333333333333333) + (uVar21 >> 2 & 0x3333333333333333);
      uVar21 = (uVar21 + (uVar21 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar21 < 2) {
        uVar22 = uVar13 - 1 & 0xb434c0ab1f33d6d2;
      }
      else {
        uVar22 = 0xb434c0ab1f33d6d2;
        if (uVar13 < 0xb434c0ab1f33d6d3) {
          uVar22 = 0;
          if (uVar13 != 0) {
            uVar22 = 0xb434c0ab1f33d6d2 / uVar13;
          }
          uVar22 = 0xb434c0ab1f33d6d2 - uVar22 * uVar13;
        }
      }
      plVar23 = *(long **)(plVar18[0x13] + uVar22 * 8);
      if (plVar23 == (long *)0x0) {
        iVar10 = 0;
      }
      else {
        plVar23 = (long *)*plVar23;
        if (plVar23 == (long *)0x0) {
          iVar10 = 0;
        }
        else if (uVar21 < 2) {
          do {
            if (plVar23[1] == 0xb434c0ab1f33d6d2) {
              if (plVar23[2] == -0x4bcb3f54e0cc292e) goto LAB_00abd30c;
            }
            else if ((plVar23[1] & uVar13 - 1) != uVar22) {
              iVar10 = 0;
              break;
            }
            plVar23 = (long *)*plVar23;
            iVar10 = 0;
          } while (plVar23 != (long *)0x0);
        }
        else {
          do {
            uVar21 = plVar23[1];
            if (uVar21 == 0xb434c0ab1f33d6d2) {
              if (plVar23[2] == -0x4bcb3f54e0cc292e) goto LAB_00abd30c;
            }
            else {
              if (uVar13 <= uVar21) {
                uVar6 = 0;
                if (uVar13 != 0) {
                  uVar6 = uVar21 / uVar13;
                }
                uVar21 = uVar21 - uVar6 * uVar13;
              }
              if (uVar21 != uVar22) {
                iVar10 = 0;
                goto LAB_00abd310;
              }
            }
            plVar23 = (long *)*plVar23;
          } while (plVar23 != (long *)0x0);
          iVar10 = 0;
        }
      }
    }
    goto LAB_00abd310;
  }
  goto LAB_00abd2bc;
LAB_00abd30c:
  iVar10 = (int)plVar23[6];
LAB_00abd310:
  do {
    iVar5 = (int)*plVar1 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = iVar5;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar5 == 0) {
    (**(code **)(*plVar18 + 0x10))();
  }
  goto LAB_00abd324;
LAB_00abd448:
  plVar18 = (long *)plVar18[3];
  if (plVar18 != (long *)0x0) {
    plVar1 = plVar18 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    uVar13 = plVar18[0x14];
    if (uVar13 == 0) {
      iVar11 = 0;
    }
    else {
      uVar21 = uVar13 - (uVar13 >> 1 & 0x5555555555555555);
      uVar21 = (uVar21 & 0x3333333333333333) + (uVar21 >> 2 & 0x3333333333333333);
      uVar21 = (uVar21 + (uVar21 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar21 < 2) {
        uVar22 = uVar13 - 1 & 0xb434c0ab1f33d6d2;
      }
      else {
        uVar22 = 0xb434c0ab1f33d6d2;
        if (uVar13 < 0xb434c0ab1f33d6d3) {
          uVar22 = 0;
          if (uVar13 != 0) {
            uVar22 = 0xb434c0ab1f33d6d2 / uVar13;
          }
          uVar22 = 0xb434c0ab1f33d6d2 - uVar22 * uVar13;
        }
      }
      plVar23 = *(long **)(plVar18[0x13] + uVar22 * 8);
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
            if (plVar23[1] == 0xb434c0ab1f33d6d2) {
              if (plVar23[2] == -0x4bcb3f54e0cc292e) goto LAB_00abd588;
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
            if (uVar21 == 0xb434c0ab1f33d6d2) {
              if (plVar23[2] == -0x4bcb3f54e0cc292e) goto LAB_00abd588;
            }
            else {
              if (uVar13 <= uVar21) {
                uVar6 = 0;
                if (uVar13 != 0) {
                  uVar6 = uVar21 / uVar13;
                }
                uVar21 = uVar21 - uVar6 * uVar13;
              }
              if (uVar21 != uVar22) {
                iVar11 = 0;
                goto LAB_00abd58c;
              }
            }
            plVar23 = (long *)*plVar23;
          } while (plVar23 != (long *)0x0);
          iVar11 = 0;
        }
      }
    }
    goto LAB_00abd58c;
  }
  goto LAB_00abd538;
LAB_00abd588:
  iVar11 = (int)plVar23[6];
LAB_00abd58c:
  do {
    iVar10 = (int)*plVar1 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = iVar10;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar10 == 0) {
    (**(code **)(*plVar18 + 0x10))();
  }
  goto LAB_00abd5a0;
LAB_00abd10c:
  iVar11 = (int)plVar23[6];
LAB_00abd110:
  do {
    iVar10 = (int)*plVar1 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = iVar10;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar10 == 0) {
    (**(code **)(*plVar18 + 0x10))();
    bVar2 = *puVar7;
  }
  else {
LAB_00abd124:
    bVar2 = *puVar7;
  }
joined_r0x00abd5d4:
  if (((bVar2 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04379660), iVar10 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar17 = *(long *)puVar8;
  *(long *)puVar9 = lVar17;
  puVar16 = *(undefined1 **)(lVar17 + 0x60);
  if (puVar16 == (undefined1 *)0x0) {
LAB_00abd2bc:
    iVar10 = 0;
  }
  else {
    uVar13 = (long)puVar16 - ((ulong)puVar16 >> 1 & 0x5555555555555555);
    uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
    uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar13 < 2) {
      puVar14 = (undefined1 *)((ulong)(puVar16 + -1) & 0x8013c350d279d9f9);
    }
    else {
      puVar14 = &DAT_8013c350d279d9f9;
      if (puVar16 < (undefined1 *)0x8013c350d279d9fa) {
        uVar21 = 0;
        if (puVar16 != (undefined1 *)0x0) {
          uVar21 = 0x8013c350d279d9f9 / (ulong)puVar16;
        }
        puVar14 = &DAT_8013c350d279d9f9 + -(uVar21 * (long)puVar16);
      }
    }
    plVar18 = *(long **)(*(long *)(lVar17 + 0x58) + (long)puVar14 * 8);
    if ((plVar18 == (long *)0x0) || (plVar18 = (long *)*plVar18, plVar18 == (long *)0x0))
    goto LAB_00abd2bc;
    if (1 < uVar13) {
      do {
        puVar20 = (undefined1 *)plVar18[1];
        if (puVar20 == &DAT_8013c350d279d9f9) {
          if ((undefined1 *)plVar18[2] == &DAT_8013c350d279d9f9) goto LAB_00abd1cc;
        }
        else {
          if (puVar16 <= puVar20) {
            uVar13 = 0;
            if (puVar16 != (undefined1 *)0x0) {
              uVar13 = (ulong)puVar20 / (ulong)puVar16;
            }
            puVar20 = puVar20 + -(uVar13 * (long)puVar16);
          }
          if (puVar20 != puVar14) break;
        }
        plVar18 = (long *)*plVar18;
      } while (plVar18 != (long *)0x0);
      goto LAB_00abd2bc;
    }
    do {
      if ((undefined1 *)plVar18[1] == &DAT_8013c350d279d9f9) {
        if ((undefined1 *)plVar18[2] == &DAT_8013c350d279d9f9) goto LAB_00abd1cc;
      }
      else if ((undefined1 *)((ulong)plVar18[1] & (ulong)(puVar16 + -1)) != puVar14)
      goto LAB_00abd2bc;
      plVar18 = (long *)*plVar18;
      iVar10 = 0;
    } while (plVar18 != (long *)0x0);
  }
LAB_00abd324:
  uVar24 = iVar11 - iVar10;
  if ((int)uVar24 < 1) {
    uVar12 = 0;
    if ((int)uVar24 < 1) goto LAB_00abd658;
LAB_00abd33c:
    lVar19 = LZCOUNT(uVar12 + 1);
    lVar17 = 0x1f;
    if ((0x7fffffffU >> (ulong)((uint)lVar19 & 0x1f) & uVar12 + 1) != 0) {
      lVar17 = 0x20;
    }
    uVar21 = lVar17 - lVar19;
    uVar13 = uVar21 >> 6;
    if ((uVar21 & 0x3f) != 0) {
      uVar13 = uVar13 + 1;
    }
    if (uVar21 < uVar13) {
      uVar15 = 0;
    }
    else {
      uVar22 = 0;
      if (uVar13 != 0) {
        uVar22 = uVar21 / uVar13;
      }
      uVar15 = (uint)(0xffffffffffffffff >> (-uVar22 & 0x3f));
    }
    uVar13 = 0x82a2b175229d6a5b;
    do {
      uVar21 = local_58 ^ uVar13;
      iVar11 = (int)uVar13;
      uVar13 = uVar21 >> 0x1b | uVar21 << 0x25;
      uVar24 = (int)local_58 + iVar11 & uVar15;
      local_58 = uVar21 ^ (local_58 >> 0x28 | local_58 << 0x18) ^ uVar21 << 0x10;
    } while (uVar12 < uVar24);
    bVar2 = *puVar7;
  }
  else {
    uVar12 = uVar24;
    if (0 < (int)uVar24) goto LAB_00abd33c;
LAB_00abd658:
    uVar24 = 0;
    bVar2 = *puVar7;
  }
  if (((bVar2 & 1) == 0) && (iVar11 = __cxa_guard_acquire(PTR_DAT_04379660), iVar11 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar17 = *(long *)puVar8;
  *(long *)puVar9 = lVar17;
  puVar16 = *(undefined1 **)(lVar17 + 0x60);
  if (puVar16 != (undefined1 *)0x0) {
    uVar13 = (long)puVar16 - ((ulong)puVar16 >> 1 & 0x5555555555555555);
    uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
    uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar13 < 2) {
      puVar14 = (undefined1 *)((ulong)(puVar16 + -1) & 0x8013c350d279d9f9);
    }
    else {
      puVar14 = &DAT_8013c350d279d9f9;
      if (puVar16 < (undefined1 *)0x8013c350d279d9fa) {
        uVar21 = 0;
        if (puVar16 != (undefined1 *)0x0) {
          uVar21 = 0x8013c350d279d9f9 / (ulong)puVar16;
        }
        puVar14 = &DAT_8013c350d279d9f9 + -(uVar21 * (long)puVar16);
      }
    }
    plVar18 = *(long **)(*(long *)(lVar17 + 0x58) + (long)puVar14 * 8);
    if ((plVar18 != (long *)0x0) && (plVar18 = (long *)*plVar18, plVar18 != (long *)0x0)) {
      if (uVar13 < 2) {
        do {
          if ((undefined1 *)plVar18[1] == &DAT_8013c350d279d9f9) {
            if ((undefined1 *)plVar18[2] == &DAT_8013c350d279d9f9) goto LAB_00abd448;
          }
          else if ((undefined1 *)((ulong)plVar18[1] & (ulong)(puVar16 + -1)) != puVar14)
          goto LAB_00abd538;
          plVar18 = (long *)*plVar18;
          iVar11 = 0;
        } while (plVar18 != (long *)0x0);
        goto LAB_00abd5a0;
      }
      do {
        puVar20 = (undefined1 *)plVar18[1];
        if (puVar20 == &DAT_8013c350d279d9f9) {
          if ((undefined1 *)plVar18[2] == &DAT_8013c350d279d9f9) goto LAB_00abd448;
        }
        else {
          if (puVar16 <= puVar20) {
            uVar13 = 0;
            if (puVar16 != (undefined1 *)0x0) {
              uVar13 = (ulong)puVar20 / (ulong)puVar16;
            }
            puVar20 = puVar20 + -(uVar13 * (long)puVar16);
          }
          if (puVar20 != puVar14) break;
        }
        plVar18 = (long *)*plVar18;
      } while (plVar18 != (long *)0x0);
    }
  }
LAB_00abd538:
  iVar11 = 0;
LAB_00abd5a0:
  *(uint *)(param_1 + 0x20c) = iVar11 + uVar24;
  return;
}


