/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a1ce24; name: FUN_01a1ce24
 */


void FUN_01a1ce24(long param_1,byte param_2)

{
  long *plVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  undefined8 uVar10;
  undefined1 *puVar11;
  float *pfVar12;
  undefined4 uVar13;
  ulong uVar14;
  undefined1 *puVar15;
  long lVar16;
  long *plVar17;
  undefined1 *puVar18;
  ulong uVar19;
  ulong uVar20;
  long *plVar21;
  float fVar22;
  float fVar23;
  float local_64;
  float local_48;
  float local_44;
  
  *(byte *)(param_1 + 0xefb0) = param_2 & 1;
  puVar6 = PTR_DAT_04379660;
  if (((*PTR_DAT_04379660 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04379660), iVar9 != 0))
  {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  puVar8 = PTR_DAT_04379670;
  puVar7 = PTR_DAT_04379668;
  lVar16 = *(long *)PTR_DAT_04379668;
  *(long *)PTR_DAT_04379670 = lVar16;
  puVar11 = *(undefined1 **)(lVar16 + 0x60);
  fVar23 = 0.0;
  if (puVar11 != (undefined1 *)0x0) {
    uVar14 = (long)puVar11 - ((ulong)puVar11 >> 1 & 0x5555555555555555);
    uVar14 = (uVar14 & 0x3333333333333333) + (uVar14 >> 2 & 0x3333333333333333);
    uVar14 = (uVar14 + (uVar14 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar14 < 2) {
      puVar15 = (undefined1 *)((ulong)(puVar11 + -1) & 0x8013c350d279d9f9);
    }
    else {
      puVar15 = &DAT_8013c350d279d9f9;
      if (puVar11 < (undefined1 *)0x8013c350d279d9fa) {
        uVar19 = 0;
        if (puVar11 != (undefined1 *)0x0) {
          uVar19 = 0x8013c350d279d9f9 / (ulong)puVar11;
        }
        puVar15 = &DAT_8013c350d279d9f9 + -(uVar19 * (long)puVar11);
      }
    }
    plVar17 = *(long **)(*(long *)(lVar16 + 0x58) + (long)puVar15 * 8);
    if ((plVar17 != (long *)0x0) && (plVar17 = (long *)*plVar17, plVar17 != (long *)0x0)) {
      if (uVar14 < 2) {
        do {
          if ((undefined1 *)plVar17[1] == &DAT_8013c350d279d9f9) {
            if ((undefined1 *)plVar17[2] == &DAT_8013c350d279d9f9) goto LAB_01a1cf20;
          }
          else if ((undefined1 *)((ulong)plVar17[1] & (ulong)(puVar11 + -1)) != puVar15) break;
          plVar17 = (long *)*plVar17;
        } while (plVar17 != (long *)0x0);
      }
      else {
        do {
          puVar18 = (undefined1 *)plVar17[1];
          if (puVar18 == &DAT_8013c350d279d9f9) {
            if ((undefined1 *)plVar17[2] == &DAT_8013c350d279d9f9) goto LAB_01a1cf20;
          }
          else {
            if (puVar11 <= puVar18) {
              uVar14 = 0;
              if (puVar11 != (undefined1 *)0x0) {
                uVar14 = (ulong)puVar18 / (ulong)puVar11;
              }
              puVar18 = puVar18 + -(uVar14 * (long)puVar11);
            }
            if (puVar18 != puVar15) break;
          }
          plVar17 = (long *)*plVar17;
        } while (plVar17 != (long *)0x0);
      }
    }
  }
LAB_01a1d07c:
  bVar2 = *puVar6;
joined_r0x01a1d354:
  if (((bVar2 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04379660), iVar9 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar16 = *(long *)puVar7;
  *(long *)puVar8 = lVar16;
  puVar11 = *(undefined1 **)(lVar16 + 0x60);
  fVar22 = 0.0;
  if (puVar11 != (undefined1 *)0x0) {
    uVar14 = (long)puVar11 - ((ulong)puVar11 >> 1 & 0x5555555555555555);
    uVar14 = (uVar14 & 0x3333333333333333) + (uVar14 >> 2 & 0x3333333333333333);
    uVar14 = (uVar14 + (uVar14 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar14 < 2) {
      puVar15 = (undefined1 *)((ulong)(puVar11 + -1) & 0x8013c350d279d9f9);
    }
    else {
      puVar15 = &DAT_8013c350d279d9f9;
      if (puVar11 < (undefined1 *)0x8013c350d279d9fa) {
        uVar19 = 0;
        if (puVar11 != (undefined1 *)0x0) {
          uVar19 = 0x8013c350d279d9f9 / (ulong)puVar11;
        }
        puVar15 = &DAT_8013c350d279d9f9 + -(uVar19 * (long)puVar11);
      }
    }
    plVar17 = *(long **)(*(long *)(lVar16 + 0x58) + (long)puVar15 * 8);
    if ((plVar17 != (long *)0x0) && (plVar17 = (long *)*plVar17, plVar17 != (long *)0x0)) {
      if (uVar14 < 2) {
        do {
          if ((undefined1 *)plVar17[1] == &DAT_8013c350d279d9f9) {
            if ((undefined1 *)plVar17[2] == &DAT_8013c350d279d9f9) goto LAB_01a1d118;
          }
          else if ((undefined1 *)((ulong)plVar17[1] & (ulong)(puVar11 + -1)) != puVar15) break;
          plVar17 = (long *)*plVar17;
        } while (plVar17 != (long *)0x0);
      }
      else {
        do {
          puVar18 = (undefined1 *)plVar17[1];
          if (puVar18 == &DAT_8013c350d279d9f9) {
            if ((undefined1 *)plVar17[2] == &DAT_8013c350d279d9f9) goto LAB_01a1d118;
          }
          else {
            if (puVar11 <= puVar18) {
              uVar14 = 0;
              if (puVar11 != (undefined1 *)0x0) {
                uVar14 = (ulong)puVar18 / (ulong)puVar11;
              }
              puVar18 = puVar18 + -(uVar14 * (long)puVar11);
            }
            if (puVar18 != puVar15) break;
          }
          plVar17 = (long *)*plVar17;
        } while (plVar17 != (long *)0x0);
      }
    }
  }
  goto LAB_01a1d274;
LAB_01a1cf20:
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
    uVar14 = plVar17[0x21];
    fVar23 = 0.0;
    if (uVar14 != 0) {
      uVar19 = uVar14 - (uVar14 >> 1 & 0x5555555555555555);
      uVar19 = (uVar19 & 0x3333333333333333) + (uVar19 >> 2 & 0x3333333333333333);
      uVar19 = (uVar19 + (uVar19 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar19 < 2) {
        uVar20 = uVar14 - 1 & 0x4723da7c1791669a;
      }
      else if (uVar14 < 0x4723da7c1791669b) {
        uVar20 = 0;
        if (uVar14 != 0) {
          uVar20 = 0x4723da7c1791669a / uVar14;
        }
        uVar20 = 0x4723da7c1791669a - uVar20 * uVar14;
      }
      else {
        uVar20 = 0x4723da7c1791669a;
      }
      plVar21 = *(long **)(plVar17[0x20] + uVar20 * 8);
      if ((plVar21 != (long *)0x0) && (plVar21 = (long *)*plVar21, plVar21 != (long *)0x0)) {
        if (uVar19 < 2) {
          do {
            if (plVar21[1] == 0x4723da7c1791669a) {
              if (plVar21[2] == 0x4723da7c1791669a) goto LAB_01a1d064;
            }
            else if ((plVar21[1] & uVar14 - 1) != uVar20) break;
            plVar21 = (long *)*plVar21;
          } while (plVar21 != (long *)0x0);
        }
        else {
          do {
            uVar19 = plVar21[1];
            if (uVar19 == 0x4723da7c1791669a) {
              if (plVar21[2] == 0x4723da7c1791669a) goto LAB_01a1d064;
            }
            else {
              if (uVar14 <= uVar19) {
                uVar5 = 0;
                if (uVar14 != 0) {
                  uVar5 = uVar19 / uVar14;
                }
                uVar19 = uVar19 - uVar5 * uVar14;
              }
              if (uVar19 != uVar20) break;
            }
            plVar21 = (long *)*plVar21;
          } while (plVar21 != (long *)0x0);
        }
      }
    }
    goto LAB_01a1d068;
  }
  goto LAB_01a1d07c;
LAB_01a1d064:
  fVar23 = *(float *)(plVar21 + 6);
LAB_01a1d068:
  do {
    iVar9 = (int)*plVar1 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = iVar9;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar9 != 0) goto LAB_01a1d07c;
  (**(code **)(*plVar17 + 0x10))();
  bVar2 = *puVar6;
  goto joined_r0x01a1d354;
LAB_01a1d118:
  plVar17 = (long *)plVar17[3];
  if (plVar17 == (long *)0x0) goto LAB_01a1d274;
  plVar1 = plVar17 + 10;
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = (int)*plVar1 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  uVar14 = plVar17[0x21];
  fVar22 = 0.0;
  if (uVar14 != 0) {
    uVar19 = uVar14 - (uVar14 >> 1 & 0x5555555555555555);
    uVar19 = (uVar19 & 0x3333333333333333) + (uVar19 >> 2 & 0x3333333333333333);
    uVar19 = (uVar19 + (uVar19 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar19 < 2) {
      uVar20 = uVar14 - 1 & 0xa01c590ba0492ddc;
    }
    else if (uVar14 < 0xa01c590ba0492ddd) {
      uVar20 = 0;
      if (uVar14 != 0) {
        uVar20 = 0xa01c590ba0492ddc / uVar14;
      }
      uVar20 = 0xa01c590ba0492ddc - uVar20 * uVar14;
    }
    else {
      uVar20 = 0xa01c590ba0492ddc;
    }
    plVar21 = *(long **)(plVar17[0x20] + uVar20 * 8);
    if ((plVar21 != (long *)0x0) && (plVar21 = (long *)*plVar21, plVar21 != (long *)0x0)) {
      if (uVar19 < 2) {
        do {
          if (plVar21[1] == 0xa01c590ba0492ddc) {
            if (plVar21[2] == -0x5fe3a6f45fb6d224) goto LAB_01a1d25c;
          }
          else if ((plVar21[1] & uVar14 - 1) != uVar20) break;
          plVar21 = (long *)*plVar21;
        } while (plVar21 != (long *)0x0);
      }
      else {
        do {
          uVar19 = plVar21[1];
          if (uVar19 == 0xa01c590ba0492ddc) {
            if (plVar21[2] == -0x5fe3a6f45fb6d224) goto LAB_01a1d25c;
          }
          else {
            if (uVar14 <= uVar19) {
              uVar5 = 0;
              if (uVar14 != 0) {
                uVar5 = uVar19 / uVar14;
              }
              uVar19 = uVar19 - uVar5 * uVar14;
            }
            if (uVar19 != uVar20) break;
          }
          plVar21 = (long *)*plVar21;
        } while (plVar21 != (long *)0x0);
      }
    }
  }
  goto LAB_01a1d260;
LAB_01a1d25c:
  fVar22 = *(float *)(plVar21 + 6);
LAB_01a1d260:
  do {
    iVar9 = (int)*plVar1 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = iVar9;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar9 == 0) {
    (**(code **)(*plVar17 + 0x10))();
  }
LAB_01a1d274:
  local_48 = 10.0;
  local_64 = 120.0;
  pfVar12 = &local_64;
  if (fVar22 <= 120.0) {
    pfVar12 = &local_44;
  }
  local_44 = fVar22;
  if (fVar22 < 10.0) {
    pfVar12 = &local_48;
  }
  fVar22 = fVar23 + fVar23;
  uVar13 = 0x10;
  if ((param_2 & 1) != 0) {
    uVar13 = 0x11;
    fVar22 = fVar23;
  }
  local_44 = *pfVar12;
  if (*(byte *)(param_1 + 0xefb0) == 0) {
    uVar10 = 0;
    fVar23 = 0.0;
  }
  else {
    uVar10 = 6;
    fVar23 = (*(float *)PTR_FloatPi_04372cf0 / *(float *)PTR_FloatDegree180_04372ce0) * local_44;
  }
  FUN_01a184a0(fVar23,param_1,uVar10,4,(int)(fVar22 / 0.033333335),uVar13,1,0xc);
  return;
}


