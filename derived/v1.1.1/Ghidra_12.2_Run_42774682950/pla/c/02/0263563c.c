/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0263563c; name: FUN_0263563c
 */


undefined4 FUN_0263563c(undefined4 param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  bool bVar5;
  int iVar6;
  undefined1 *puVar7;
  ulong uVar8;
  undefined1 *puVar9;
  long lVar10;
  long *plVar11;
  ulong uVar12;
  ulong uVar13;
  undefined1 *puVar14;
  long *plVar15;
  undefined4 uVar16;
  
  switch(param_1) {
  case 0:
    goto switchD_02635668_caseD_0;
  case 1:
    if (((*PTR_DAT_04379660 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(PTR_DAT_04379660), iVar6 != 0)) {
      FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379660);
    }
    lVar10 = *(long *)PTR_DAT_04379668;
    *(long *)PTR_DAT_04379670 = lVar10;
    puVar7 = *(undefined1 **)(lVar10 + 0x60);
    if (puVar7 == (undefined1 *)0x0) {
      return 0;
    }
    uVar8 = (long)puVar7 - ((ulong)puVar7 >> 1 & 0x5555555555555555);
    uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
    uVar8 = (uVar8 + (uVar8 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar8 < 2) {
      puVar9 = (undefined1 *)((ulong)(puVar7 + -1) & 0x7f1d939d8653868);
    }
    else if (&DAT_7f1d939d8653868 < puVar7) {
      puVar9 = &DAT_7f1d939d8653868;
    }
    else {
      uVar12 = 0;
      if (puVar7 != (undefined1 *)0x0) {
        uVar12 = 0x7f1d939d8653868 / (ulong)puVar7;
      }
      puVar9 = &DAT_7f1d939d8653868 + -(uVar12 * (long)puVar7);
    }
    plVar11 = *(long **)(*(long *)(lVar10 + 0x58) + (long)puVar9 * 8);
    if (plVar11 == (long *)0x0) {
      return 0;
    }
    plVar11 = (long *)*plVar11;
    if (plVar11 == (long *)0x0) {
      return 0;
    }
    if (uVar8 < 2) {
      do {
        if ((undefined1 *)plVar11[1] == &DAT_7f1d939d8653868) {
          if ((undefined1 *)plVar11[2] == &DAT_7f1d939d8653868) goto LAB_02635a88;
        }
        else if ((undefined1 *)((ulong)plVar11[1] & (ulong)(puVar7 + -1)) != puVar9) {
          return 0;
        }
        plVar11 = (long *)*plVar11;
        if (plVar11 == (long *)0x0) {
          return 0;
        }
      } while( true );
    }
    do {
      puVar14 = (undefined1 *)plVar11[1];
      if (puVar14 == &DAT_7f1d939d8653868) {
        if ((undefined1 *)plVar11[2] == &DAT_7f1d939d8653868) goto LAB_02635a88;
      }
      else {
        if (puVar7 <= puVar14) {
          uVar8 = 0;
          if (puVar7 != (undefined1 *)0x0) {
            uVar8 = (ulong)puVar14 / (ulong)puVar7;
          }
          puVar14 = puVar14 + -(uVar8 * (long)puVar7);
        }
        if (puVar14 != puVar9) {
          return 0;
        }
      }
      plVar11 = (long *)*plVar11;
      if (plVar11 == (long *)0x0) {
        return 0;
      }
    } while( true );
  case 2:
    if (((*PTR_DAT_04379660 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(PTR_DAT_04379660), iVar6 != 0)) {
      FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379660);
    }
    lVar10 = *(long *)PTR_DAT_04379668;
    *(long *)PTR_DAT_04379670 = lVar10;
    puVar7 = *(undefined1 **)(lVar10 + 0x60);
    if (puVar7 == (undefined1 *)0x0) {
      return 0;
    }
    uVar8 = (long)puVar7 - ((ulong)puVar7 >> 1 & 0x5555555555555555);
    uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
    uVar8 = (uVar8 + (uVar8 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar8 < 2) {
      puVar9 = (undefined1 *)((ulong)(puVar7 + -1) & 0x7f1d939d8653868);
    }
    else if (&DAT_7f1d939d8653868 < puVar7) {
      puVar9 = &DAT_7f1d939d8653868;
    }
    else {
      uVar12 = 0;
      if (puVar7 != (undefined1 *)0x0) {
        uVar12 = 0x7f1d939d8653868 / (ulong)puVar7;
      }
      puVar9 = &DAT_7f1d939d8653868 + -(uVar12 * (long)puVar7);
    }
    plVar11 = *(long **)(*(long *)(lVar10 + 0x58) + (long)puVar9 * 8);
    if (plVar11 == (long *)0x0) {
      return 0;
    }
    plVar11 = (long *)*plVar11;
    if (plVar11 == (long *)0x0) {
      return 0;
    }
    if (uVar8 < 2) {
      do {
        if ((undefined1 *)plVar11[1] == &DAT_7f1d939d8653868) {
          if ((undefined1 *)plVar11[2] == &DAT_7f1d939d8653868) goto LAB_02635c24;
        }
        else if ((undefined1 *)((ulong)plVar11[1] & (ulong)(puVar7 + -1)) != puVar9) {
          return 0;
        }
        plVar11 = (long *)*plVar11;
        if (plVar11 == (long *)0x0) {
          return 0;
        }
      } while( true );
    }
    do {
      puVar14 = (undefined1 *)plVar11[1];
      if (puVar14 == &DAT_7f1d939d8653868) {
        if ((undefined1 *)plVar11[2] == &DAT_7f1d939d8653868) goto LAB_02635c24;
      }
      else {
        if (puVar7 <= puVar14) {
          uVar8 = 0;
          if (puVar7 != (undefined1 *)0x0) {
            uVar8 = (ulong)puVar14 / (ulong)puVar7;
          }
          puVar14 = puVar14 + -(uVar8 * (long)puVar7);
        }
        if (puVar14 != puVar9) {
          return 0;
        }
      }
      plVar11 = (long *)*plVar11;
      if (plVar11 == (long *)0x0) {
        return 0;
      }
    } while( true );
  case 3:
    if (((*PTR_DAT_04379660 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(PTR_DAT_04379660), iVar6 != 0)) {
      FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379660);
    }
    lVar10 = *(long *)PTR_DAT_04379668;
    *(long *)PTR_DAT_04379670 = lVar10;
    puVar7 = *(undefined1 **)(lVar10 + 0x60);
    if (puVar7 == (undefined1 *)0x0) {
      return 0;
    }
    uVar8 = (long)puVar7 - ((ulong)puVar7 >> 1 & 0x5555555555555555);
    uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
    uVar8 = (uVar8 + (uVar8 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar8 < 2) {
      puVar9 = (undefined1 *)((ulong)(puVar7 + -1) & 0x7f1d939d8653868);
    }
    else if (&DAT_7f1d939d8653868 < puVar7) {
      puVar9 = &DAT_7f1d939d8653868;
    }
    else {
      uVar12 = 0;
      if (puVar7 != (undefined1 *)0x0) {
        uVar12 = 0x7f1d939d8653868 / (ulong)puVar7;
      }
      puVar9 = &DAT_7f1d939d8653868 + -(uVar12 * (long)puVar7);
    }
    plVar11 = *(long **)(*(long *)(lVar10 + 0x58) + (long)puVar9 * 8);
    if (plVar11 == (long *)0x0) {
      return 0;
    }
    plVar11 = (long *)*plVar11;
    if (plVar11 == (long *)0x0) {
      return 0;
    }
    if (uVar8 < 2) {
      do {
        if ((undefined1 *)plVar11[1] == &DAT_7f1d939d8653868) {
          if ((undefined1 *)plVar11[2] == &DAT_7f1d939d8653868) goto LAB_0263572c;
        }
        else if ((undefined1 *)((ulong)plVar11[1] & (ulong)(puVar7 + -1)) != puVar9) {
          return 0;
        }
        plVar11 = (long *)*plVar11;
        if (plVar11 == (long *)0x0) {
          return 0;
        }
      } while( true );
    }
    do {
      puVar14 = (undefined1 *)plVar11[1];
      if (puVar14 == &DAT_7f1d939d8653868) {
        if ((undefined1 *)plVar11[2] == &DAT_7f1d939d8653868) goto LAB_0263572c;
      }
      else {
        if (puVar7 <= puVar14) {
          uVar8 = 0;
          if (puVar7 != (undefined1 *)0x0) {
            uVar8 = (ulong)puVar14 / (ulong)puVar7;
          }
          puVar14 = puVar14 + -(uVar8 * (long)puVar7);
        }
        if (puVar14 != puVar9) {
          return 0;
        }
      }
      plVar11 = (long *)*plVar11;
      if (plVar11 == (long *)0x0) {
        return 0;
      }
    } while( true );
  case 4:
    if (((*PTR_DAT_04379660 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(PTR_DAT_04379660), iVar6 != 0)) {
      FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379660);
    }
    lVar10 = *(long *)PTR_DAT_04379668;
    *(long *)PTR_DAT_04379670 = lVar10;
    puVar7 = *(undefined1 **)(lVar10 + 0x60);
    if (puVar7 == (undefined1 *)0x0) {
      return 0;
    }
    uVar8 = (long)puVar7 - ((ulong)puVar7 >> 1 & 0x5555555555555555);
    uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
    uVar8 = (uVar8 + (uVar8 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar8 < 2) {
      puVar9 = (undefined1 *)((ulong)(puVar7 + -1) & 0x7f1d939d8653868);
    }
    else if (&DAT_7f1d939d8653868 < puVar7) {
      puVar9 = &DAT_7f1d939d8653868;
    }
    else {
      uVar12 = 0;
      if (puVar7 != (undefined1 *)0x0) {
        uVar12 = 0x7f1d939d8653868 / (ulong)puVar7;
      }
      puVar9 = &DAT_7f1d939d8653868 + -(uVar12 * (long)puVar7);
    }
    plVar11 = *(long **)(*(long *)(lVar10 + 0x58) + (long)puVar9 * 8);
    if (plVar11 == (long *)0x0) {
      return 0;
    }
    plVar11 = (long *)*plVar11;
    if (plVar11 == (long *)0x0) {
      return 0;
    }
    if (uVar8 < 2) {
      do {
        if ((undefined1 *)plVar11[1] == &DAT_7f1d939d8653868) {
          if ((undefined1 *)plVar11[2] == &DAT_7f1d939d8653868) goto LAB_02635dc0;
        }
        else if ((undefined1 *)((ulong)plVar11[1] & (ulong)(puVar7 + -1)) != puVar9) {
          return 0;
        }
        plVar11 = (long *)*plVar11;
        if (plVar11 == (long *)0x0) {
          return 0;
        }
      } while( true );
    }
    do {
      puVar14 = (undefined1 *)plVar11[1];
      if (puVar14 == &DAT_7f1d939d8653868) {
        if ((undefined1 *)plVar11[2] == &DAT_7f1d939d8653868) break;
      }
      else {
        if (puVar7 <= puVar14) {
          uVar8 = 0;
          if (puVar7 != (undefined1 *)0x0) {
            uVar8 = (ulong)puVar14 / (ulong)puVar7;
          }
          puVar14 = puVar14 + -(uVar8 * (long)puVar7);
        }
        if (puVar14 != puVar9) {
          return 0;
        }
      }
      plVar11 = (long *)*plVar11;
      if (plVar11 == (long *)0x0) {
        return 0;
      }
    } while( true );
  default:
    return 0x3f800000;
  }
LAB_02635dc0:
  plVar11 = (long *)plVar11[3];
  if (plVar11 == (long *)0x0) {
    return 0;
  }
  plVar1 = plVar11 + 10;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(int *)plVar1 = (int)*plVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  uVar8 = plVar11[0x21];
  uVar16 = 0;
  if (uVar8 != 0) {
    uVar12 = uVar8 - (uVar8 >> 1 & 0x5555555555555555);
    uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
    uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar12 < 2) {
      uVar13 = uVar8 - 1 & 0x3813a34dd7250db1;
    }
    else if (uVar8 < 0x3813a34dd7250db2) {
      uVar13 = 0;
      if (uVar8 != 0) {
        uVar13 = 0x3813a34dd7250db1 / uVar8;
      }
      uVar13 = 0x3813a34dd7250db1 - uVar13 * uVar8;
    }
    else {
      uVar13 = 0x3813a34dd7250db1;
    }
    plVar15 = *(long **)(plVar11[0x20] + uVar13 * 8);
    if ((plVar15 != (long *)0x0) && (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0)) {
      if (uVar12 < 2) {
        do {
          if (plVar15[1] == 0x3813a34dd7250db1) {
            if (plVar15[2] == 0x3813a34dd7250db1) goto LAB_02636100;
          }
          else if ((plVar15[1] & uVar8 - 1) != uVar13) break;
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
      else {
        do {
          uVar12 = plVar15[1];
          if (uVar12 == 0x3813a34dd7250db1) {
            if (plVar15[2] == 0x3813a34dd7250db1) goto LAB_02636100;
          }
          else {
            if (uVar8 <= uVar12) {
              uVar4 = 0;
              if (uVar8 != 0) {
                uVar4 = uVar12 / uVar8;
              }
              uVar12 = uVar12 - uVar4 * uVar8;
            }
            if (uVar12 != uVar13) break;
          }
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
    }
  }
LAB_02636104:
  do {
    iVar6 = (int)*plVar1 + -1;
    bVar5 = iVar6 == 0;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(int *)plVar1 = iVar6;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  goto LAB_02635ef4;
LAB_02636100:
  uVar16 = (undefined4)plVar15[6];
  goto LAB_02636104;
LAB_0263572c:
  plVar11 = (long *)plVar11[3];
  if (plVar11 == (long *)0x0) {
    return 0;
  }
  plVar1 = plVar11 + 10;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(int *)plVar1 = (int)*plVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  uVar8 = plVar11[0x21];
  uVar16 = 0;
  if (uVar8 != 0) {
    uVar12 = uVar8 - (uVar8 >> 1 & 0x5555555555555555);
    uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
    uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar12 < 2) {
      uVar13 = uVar8 - 1 & 0xd0061df702e7d616;
    }
    else if (uVar8 < 0xd0061df702e7d617) {
      uVar13 = 0;
      if (uVar8 != 0) {
        uVar13 = 0xd0061df702e7d616 / uVar8;
      }
      uVar13 = 0xd0061df702e7d616 - uVar13 * uVar8;
    }
    else {
      uVar13 = 0xd0061df702e7d616;
    }
    plVar15 = *(long **)(plVar11[0x20] + uVar13 * 8);
    if ((plVar15 != (long *)0x0) && (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0)) {
      if (uVar12 < 2) {
        do {
          if (plVar15[1] == 0xd0061df702e7d616) {
            if (plVar15[2] == -0x2ff9e208fd1829ea) goto LAB_02635ee0;
          }
          else if ((plVar15[1] & uVar8 - 1) != uVar13) break;
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
      else {
        do {
          uVar12 = plVar15[1];
          if (uVar12 == 0xd0061df702e7d616) {
            if (plVar15[2] == -0x2ff9e208fd1829ea) goto LAB_02635ee0;
          }
          else {
            if (uVar8 <= uVar12) {
              uVar4 = 0;
              if (uVar8 != 0) {
                uVar4 = uVar12 / uVar8;
              }
              uVar12 = uVar12 - uVar4 * uVar8;
            }
            if (uVar12 != uVar13) break;
          }
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
    }
  }
LAB_02635ee4:
  do {
    iVar6 = (int)*plVar1 + -1;
    bVar5 = iVar6 == 0;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(int *)plVar1 = iVar6;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  goto LAB_02635ef4;
LAB_02635ee0:
  uVar16 = (undefined4)plVar15[6];
  goto LAB_02635ee4;
LAB_02635c24:
  plVar11 = (long *)plVar11[3];
  if (plVar11 == (long *)0x0) {
    return 0;
  }
  plVar1 = plVar11 + 10;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(int *)plVar1 = (int)*plVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  uVar8 = plVar11[0x21];
  uVar16 = 0;
  if (uVar8 != 0) {
    uVar12 = uVar8 - (uVar8 >> 1 & 0x5555555555555555);
    uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
    uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar12 < 2) {
      uVar13 = uVar8 - 1 & 0x77d7369dc66af58b;
    }
    else if (uVar8 < 0x77d7369dc66af58c) {
      uVar13 = 0;
      if (uVar8 != 0) {
        uVar13 = 0x77d7369dc66af58b / uVar8;
      }
      uVar13 = 0x77d7369dc66af58b - uVar13 * uVar8;
    }
    else {
      uVar13 = 0x77d7369dc66af58b;
    }
    plVar15 = *(long **)(plVar11[0x20] + uVar13 * 8);
    if ((plVar15 != (long *)0x0) && (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0)) {
      if (uVar12 < 2) {
        do {
          if (plVar15[1] == 0x77d7369dc66af58b) {
            if (plVar15[2] == 0x77d7369dc66af58b) goto LAB_026360a4;
          }
          else if ((plVar15[1] & uVar8 - 1) != uVar13) break;
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
      else {
        do {
          uVar12 = plVar15[1];
          if (uVar12 == 0x77d7369dc66af58b) {
            if (plVar15[2] == 0x77d7369dc66af58b) goto LAB_026360a4;
          }
          else {
            if (uVar8 <= uVar12) {
              uVar4 = 0;
              if (uVar8 != 0) {
                uVar4 = uVar12 / uVar8;
              }
              uVar12 = uVar12 - uVar4 * uVar8;
            }
            if (uVar12 != uVar13) break;
          }
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
    }
  }
LAB_026360a8:
  do {
    iVar6 = (int)*plVar1 + -1;
    bVar5 = iVar6 == 0;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(int *)plVar1 = iVar6;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  goto LAB_02635ef4;
LAB_026360a4:
  uVar16 = (undefined4)plVar15[6];
  goto LAB_026360a8;
LAB_02635a88:
  plVar11 = (long *)plVar11[3];
  if (plVar11 == (long *)0x0) {
    return 0;
  }
  plVar1 = plVar11 + 10;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(int *)plVar1 = (int)*plVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  uVar8 = plVar11[0x21];
  uVar16 = 0;
  if (uVar8 != 0) {
    uVar12 = uVar8 - (uVar8 >> 1 & 0x5555555555555555);
    uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
    uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar12 < 2) {
      uVar13 = uVar8 - 1 & 0x7473023f70cf2b24;
    }
    else if (uVar8 < 0x7473023f70cf2b25) {
      uVar13 = 0;
      if (uVar8 != 0) {
        uVar13 = 0x7473023f70cf2b24 / uVar8;
      }
      uVar13 = 0x7473023f70cf2b24 - uVar13 * uVar8;
    }
    else {
      uVar13 = 0x7473023f70cf2b24;
    }
    plVar15 = *(long **)(plVar11[0x20] + uVar13 * 8);
    if ((plVar15 != (long *)0x0) && (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0)) {
      if (uVar12 < 2) {
        do {
          if (plVar15[1] == 0x7473023f70cf2b24) {
            if (plVar15[2] == 0x7473023f70cf2b24) goto LAB_02636048;
          }
          else if ((plVar15[1] & uVar8 - 1) != uVar13) break;
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
      else {
        do {
          uVar12 = plVar15[1];
          if (uVar12 == 0x7473023f70cf2b24) {
            if (plVar15[2] == 0x7473023f70cf2b24) goto LAB_02636048;
          }
          else {
            if (uVar8 <= uVar12) {
              uVar4 = 0;
              if (uVar8 != 0) {
                uVar4 = uVar12 / uVar8;
              }
              uVar12 = uVar12 - uVar4 * uVar8;
            }
            if (uVar12 != uVar13) break;
          }
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
    }
  }
LAB_0263604c:
  do {
    iVar6 = (int)*plVar1 + -1;
    bVar5 = iVar6 == 0;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(int *)plVar1 = iVar6;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_02635ef4:
  if (!bVar5) {
    return uVar16;
  }
  goto LAB_02635f88;
LAB_02636048:
  uVar16 = (undefined4)plVar15[6];
  goto LAB_0263604c;
switchD_02635668_caseD_0:
  if (((*PTR_DAT_04379660 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_04379660), iVar6 != 0))
  {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar10 = *(long *)PTR_DAT_04379668;
  *(long *)PTR_DAT_04379670 = lVar10;
  puVar7 = *(undefined1 **)(lVar10 + 0x60);
  if (puVar7 == (undefined1 *)0x0) {
    return 0;
  }
  uVar8 = (long)puVar7 - ((ulong)puVar7 >> 1 & 0x5555555555555555);
  uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
  uVar8 = (uVar8 + (uVar8 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
  if (uVar8 < 2) {
    puVar9 = (undefined1 *)((ulong)(puVar7 + -1) & 0x7f1d939d8653868);
  }
  else if (&DAT_7f1d939d8653868 < puVar7) {
    puVar9 = &DAT_7f1d939d8653868;
  }
  else {
    uVar12 = 0;
    if (puVar7 != (undefined1 *)0x0) {
      uVar12 = 0x7f1d939d8653868 / (ulong)puVar7;
    }
    puVar9 = &DAT_7f1d939d8653868 + -(uVar12 * (long)puVar7);
  }
  plVar11 = *(long **)(*(long *)(lVar10 + 0x58) + (long)puVar9 * 8);
  if (plVar11 == (long *)0x0) {
    return 0;
  }
  plVar11 = (long *)*plVar11;
  if (plVar11 == (long *)0x0) {
    return 0;
  }
  if (uVar8 < 2) {
    do {
      if ((undefined1 *)plVar11[1] == &DAT_7f1d939d8653868) {
        if ((undefined1 *)plVar11[2] == &DAT_7f1d939d8653868) goto LAB_026358c8;
      }
      else if ((undefined1 *)((ulong)plVar11[1] & (ulong)(puVar7 + -1)) != puVar9) {
        return 0;
      }
      plVar11 = (long *)*plVar11;
      if (plVar11 == (long *)0x0) {
        return 0;
      }
    } while( true );
  }
  do {
    puVar14 = (undefined1 *)plVar11[1];
    if (puVar14 == &DAT_7f1d939d8653868) {
      if ((undefined1 *)plVar11[2] == &DAT_7f1d939d8653868) goto LAB_026358c8;
    }
    else {
      if (puVar7 <= puVar14) {
        uVar8 = 0;
        if (puVar7 != (undefined1 *)0x0) {
          uVar8 = (ulong)puVar14 / (ulong)puVar7;
        }
        puVar14 = puVar14 + -(uVar8 * (long)puVar7);
      }
      if (puVar14 != puVar9) {
        return 0;
      }
    }
    plVar11 = (long *)*plVar11;
    if (plVar11 == (long *)0x0) {
      return 0;
    }
  } while( true );
LAB_02635f70:
  uVar16 = (undefined4)plVar15[6];
  goto LAB_02635f74;
LAB_026358c8:
  plVar11 = (long *)plVar11[3];
  if (plVar11 == (long *)0x0) {
    return 0;
  }
  plVar1 = plVar11 + 10;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(int *)plVar1 = (int)*plVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  uVar8 = plVar11[0x21];
  uVar16 = 0;
  if (uVar8 != 0) {
    uVar12 = uVar8 - (uVar8 >> 1 & 0x5555555555555555);
    uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
    uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar12 < 2) {
      uVar13 = uVar8 - 1 & 0xe4bb19060ee94b2;
    }
    else if (uVar8 < 0xe4bb19060ee94b3) {
      uVar13 = 0;
      if (uVar8 != 0) {
        uVar13 = 0xe4bb19060ee94b2 / uVar8;
      }
      uVar13 = 0xe4bb19060ee94b2 - uVar13 * uVar8;
    }
    else {
      uVar13 = 0xe4bb19060ee94b2;
    }
    plVar15 = *(long **)(plVar11[0x20] + uVar13 * 8);
    if ((plVar15 != (long *)0x0) && (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0)) {
      if (uVar12 < 2) {
        do {
          if (plVar15[1] == 0xe4bb19060ee94b2) {
            if (plVar15[2] == 0xe4bb19060ee94b2) goto LAB_02635f70;
          }
          else if ((plVar15[1] & uVar8 - 1) != uVar13) break;
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
      else {
        do {
          uVar12 = plVar15[1];
          if (uVar12 == 0xe4bb19060ee94b2) {
            if (plVar15[2] == 0xe4bb19060ee94b2) goto LAB_02635f70;
          }
          else {
            if (uVar8 <= uVar12) {
              uVar4 = 0;
              if (uVar8 != 0) {
                uVar4 = uVar12 / uVar8;
              }
              uVar12 = uVar12 - uVar4 * uVar8;
            }
            if (uVar12 != uVar13) break;
          }
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
    }
  }
LAB_02635f74:
  do {
    iVar6 = (int)*plVar1 + -1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(int *)plVar1 = iVar6;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar6 == 0) {
LAB_02635f88:
    (**(code **)(*plVar11 + 0x10))();
  }
  return uVar16;
}


