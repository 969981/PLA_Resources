/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01f822c4; name: FUN_01f822c4
 */


void FUN_01f822c4(long param_1)

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
  ulong uVar10;
  ulong *puVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  long *plVar15;
  long *plVar16;
  float fVar17;
  float fVar18;
  
  puVar6 = PTR_DAT_04379660;
  if (((*PTR_DAT_04379660 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04379660), iVar9 != 0))
  {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  puVar8 = PTR_DAT_04379670;
  puVar7 = PTR_DAT_04379668;
  lVar14 = *(long *)PTR_DAT_04379668;
  *(long *)PTR_DAT_04379670 = lVar14;
  uVar10 = *(ulong *)(lVar14 + 0x60);
  fVar17 = 0.0;
  if (uVar10 != 0) {
    uVar12 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
    uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
    uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar12 < 2) {
      uVar13 = uVar10 - 1 & 0xa3844e428bab2015;
    }
    else {
      uVar13 = 0xa3844e428bab2015;
      if (uVar10 < 0xa3844e428bab2016) {
        uVar13 = 0;
        if (uVar10 != 0) {
          uVar13 = 0xa3844e428bab2015 / uVar10;
        }
        uVar13 = 0xa3844e428bab2015 - uVar13 * uVar10;
      }
    }
    plVar15 = *(long **)(*(long *)(lVar14 + 0x58) + uVar13 * 8);
    if ((plVar15 != (long *)0x0) && (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0)) {
      if (uVar12 < 2) {
        do {
          if (plVar15[1] == 0xa3844e428bab2015) {
            if (plVar15[2] == -0x5c7bb1bd7454dfeb) goto LAB_01f823a4;
          }
          else if ((plVar15[1] & uVar10 - 1) != uVar13) break;
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
      else {
        do {
          uVar12 = plVar15[1];
          if (uVar12 == 0xa3844e428bab2015) {
            if (plVar15[2] == -0x5c7bb1bd7454dfeb) goto LAB_01f823a4;
          }
          else {
            if (uVar10 <= uVar12) {
              uVar5 = 0;
              if (uVar10 != 0) {
                uVar5 = uVar12 / uVar10;
              }
              uVar12 = uVar12 - uVar5 * uVar10;
            }
            if (uVar12 != uVar13) break;
          }
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
    }
  }
LAB_01f82500:
  bVar2 = *puVar6;
joined_r0x01f8278c:
  if (((bVar2 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04379660), iVar9 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar14 = *(long *)puVar7;
  *(long *)puVar8 = lVar14;
  uVar10 = *(ulong *)(lVar14 + 0x60);
  fVar18 = 0.0;
  if (uVar10 != 0) {
    uVar12 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
    uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
    uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar12 < 2) {
      uVar13 = uVar10 - 1 & 0xa3844e428bab2015;
    }
    else {
      uVar13 = 0xa3844e428bab2015;
      if (uVar10 < 0xa3844e428bab2016) {
        uVar13 = 0;
        if (uVar10 != 0) {
          uVar13 = 0xa3844e428bab2015 / uVar10;
        }
        uVar13 = 0xa3844e428bab2015 - uVar13 * uVar10;
      }
    }
    plVar15 = *(long **)(*(long *)(lVar14 + 0x58) + uVar13 * 8);
    if ((plVar15 != (long *)0x0) && (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0)) {
      if (uVar12 < 2) {
        do {
          if (plVar15[1] == 0xa3844e428bab2015) {
            if (plVar15[2] == -0x5c7bb1bd7454dfeb) goto LAB_01f8259c;
          }
          else if ((plVar15[1] & uVar10 - 1) != uVar13) break;
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
      else {
        do {
          uVar12 = plVar15[1];
          if (uVar12 == 0xa3844e428bab2015) {
            if (plVar15[2] == -0x5c7bb1bd7454dfeb) goto LAB_01f8259c;
          }
          else {
            if (uVar10 <= uVar12) {
              uVar5 = 0;
              if (uVar10 != 0) {
                uVar5 = uVar12 / uVar10;
              }
              uVar12 = uVar12 - uVar5 * uVar10;
            }
            if (uVar12 != uVar13) break;
          }
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
    }
  }
  goto LAB_01f826f8;
LAB_01f823a4:
  plVar15 = (long *)plVar15[3];
  if (plVar15 != (long *)0x0) {
    plVar1 = plVar15 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    uVar10 = plVar15[0x21];
    fVar17 = 0.0;
    if (uVar10 != 0) {
      uVar12 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
      uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
      uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar12 < 2) {
        uVar13 = uVar10 - 1 & 0x1edb5c797f926514;
      }
      else if (uVar10 < 0x1edb5c797f926515) {
        uVar13 = 0;
        if (uVar10 != 0) {
          uVar13 = 0x1edb5c797f926514 / uVar10;
        }
        uVar13 = 0x1edb5c797f926514 - uVar13 * uVar10;
      }
      else {
        uVar13 = 0x1edb5c797f926514;
      }
      plVar16 = *(long **)(plVar15[0x20] + uVar13 * 8);
      if ((plVar16 != (long *)0x0) && (plVar16 = (long *)*plVar16, plVar16 != (long *)0x0)) {
        if (uVar12 < 2) {
          do {
            if (plVar16[1] == 0x1edb5c797f926514) {
              if (plVar16[2] == 0x1edb5c797f926514) goto LAB_01f824e8;
            }
            else if ((plVar16[1] & uVar10 - 1) != uVar13) break;
            plVar16 = (long *)*plVar16;
          } while (plVar16 != (long *)0x0);
        }
        else {
          do {
            uVar12 = plVar16[1];
            if (uVar12 == 0x1edb5c797f926514) {
              if (plVar16[2] == 0x1edb5c797f926514) goto LAB_01f824e8;
            }
            else {
              if (uVar10 <= uVar12) {
                uVar5 = 0;
                if (uVar10 != 0) {
                  uVar5 = uVar12 / uVar10;
                }
                uVar12 = uVar12 - uVar5 * uVar10;
              }
              if (uVar12 != uVar13) break;
            }
            plVar16 = (long *)*plVar16;
          } while (plVar16 != (long *)0x0);
        }
      }
    }
    goto LAB_01f824ec;
  }
  goto LAB_01f82500;
LAB_01f824e8:
  fVar17 = *(float *)(plVar16 + 6);
LAB_01f824ec:
  do {
    iVar9 = (int)*plVar1 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = iVar9;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar9 != 0) goto LAB_01f82500;
  (**(code **)(*plVar15 + 0x10))();
  bVar2 = *puVar6;
  goto joined_r0x01f8278c;
LAB_01f8259c:
  plVar15 = (long *)plVar15[3];
  if (plVar15 == (long *)0x0) goto LAB_01f826f8;
  plVar1 = plVar15 + 10;
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = (int)*plVar1 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  uVar10 = plVar15[0x21];
  fVar18 = 0.0;
  if (uVar10 != 0) {
    uVar12 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
    uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
    uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar12 < 2) {
      uVar13 = uVar10 - 1 & 0xe8a581a78f159afb;
    }
    else if (uVar10 < 0xe8a581a78f159afc) {
      uVar13 = 0;
      if (uVar10 != 0) {
        uVar13 = 0xe8a581a78f159afb / uVar10;
      }
      uVar13 = 0xe8a581a78f159afb - uVar13 * uVar10;
    }
    else {
      uVar13 = 0xe8a581a78f159afb;
    }
    plVar16 = *(long **)(plVar15[0x20] + uVar13 * 8);
    if ((plVar16 != (long *)0x0) && (plVar16 = (long *)*plVar16, plVar16 != (long *)0x0)) {
      if (uVar12 < 2) {
        do {
          if (plVar16[1] == 0xe8a581a78f159afb) {
            if (plVar16[2] == -0x175a7e5870ea6505) goto LAB_01f826e0;
          }
          else if ((plVar16[1] & uVar10 - 1) != uVar13) break;
          plVar16 = (long *)*plVar16;
        } while (plVar16 != (long *)0x0);
      }
      else {
        do {
          uVar12 = plVar16[1];
          if (uVar12 == 0xe8a581a78f159afb) {
            if (plVar16[2] == -0x175a7e5870ea6505) goto LAB_01f826e0;
          }
          else {
            if (uVar10 <= uVar12) {
              uVar5 = 0;
              if (uVar10 != 0) {
                uVar5 = uVar12 / uVar10;
              }
              uVar12 = uVar12 - uVar5 * uVar10;
            }
            if (uVar12 != uVar13) break;
          }
          plVar16 = (long *)*plVar16;
        } while (plVar16 != (long *)0x0);
      }
    }
  }
  goto LAB_01f826e4;
LAB_01f826e0:
  fVar18 = *(float *)(plVar16 + 6);
LAB_01f826e4:
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
    (**(code **)(*plVar15 + 0x10))();
  }
LAB_01f826f8:
  if (((*PTR_DAT_04379678 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04379678), iVar9 != 0))
  {
    FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379678);
  }
  lVar14 = *(long *)PTR_DAT_04379680;
  *(long *)PTR_DAT_04379688 = lVar14;
  puVar11 = *(ulong **)(lVar14 + 0xd8);
  uVar10 = *puVar11;
  uVar12 = puVar11[1];
  uVar13 = uVar12 ^ uVar10;
  *puVar11 = uVar13 ^ (uVar10 >> 0x28 | uVar10 << 0x18) ^ uVar13 << 0x10;
  puVar11[1] = uVar13 >> 0x1b | uVar13 << 0x25;
  *(float *)(param_1 + 0x324) = fVar17 + fVar18 * (float)(uVar12 + uVar10) * 5.421011e-20 + 0.0;
  return;
}


