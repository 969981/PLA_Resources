/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00cd6814; name: FUN_00cd6814
 */


undefined4 FUN_00cd6814(void)

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
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  undefined4 uVar16;
  
  puVar6 = PTR_DAT_04379660;
  if (((*PTR_DAT_04379660 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04379660), iVar9 != 0))
  {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  puVar8 = PTR_DAT_04379670;
  puVar7 = PTR_DAT_04379668;
  lVar13 = *(long *)PTR_DAT_04379668;
  *(long *)PTR_DAT_04379670 = lVar13;
  uVar10 = *(ulong *)(lVar13 + 0x60);
  uVar16 = 0;
  if (uVar10 != 0) {
    uVar11 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
    uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
    uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar11 < 2) {
      uVar12 = uVar10 - 1 & 0x1073f2d92331daf9;
    }
    else {
      uVar12 = 0x1073f2d92331daf9;
      if (uVar10 < 0x1073f2d92331dafa) {
        uVar12 = 0;
        if (uVar10 != 0) {
          uVar12 = 0x1073f2d92331daf9 / uVar10;
        }
        uVar12 = 0x1073f2d92331daf9 - uVar12 * uVar10;
      }
    }
    plVar14 = *(long **)(*(long *)(lVar13 + 0x58) + uVar12 * 8);
    if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
      if (uVar11 < 2) {
        do {
          if (plVar14[1] == 0x1073f2d92331daf9) {
            if (plVar14[2] == 0x1073f2d92331daf9) goto LAB_00cd68ec;
          }
          else if ((plVar14[1] & uVar10 - 1) != uVar12) break;
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
      else {
        do {
          uVar11 = plVar14[1];
          if (uVar11 == 0x1073f2d92331daf9) {
            if (plVar14[2] == 0x1073f2d92331daf9) goto LAB_00cd68ec;
          }
          else {
            if (uVar10 <= uVar11) {
              uVar5 = 0;
              if (uVar10 != 0) {
                uVar5 = uVar11 / uVar10;
              }
              uVar11 = uVar11 - uVar5 * uVar10;
            }
            if (uVar11 != uVar12) break;
          }
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
    }
  }
LAB_00cd6a48:
  bVar2 = *puVar6;
joined_r0x00cd6c6c:
  if (((bVar2 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04379660), iVar9 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar13 = *(long *)puVar7;
  *(long *)puVar8 = lVar13;
  uVar10 = *(ulong *)(lVar13 + 0x60);
  if (uVar10 != 0) {
    uVar11 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
    uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
    uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar11 < 2) {
      uVar12 = uVar10 - 1 & 0x1073f2d92331daf9;
    }
    else {
      uVar12 = 0x1073f2d92331daf9;
      if (uVar10 < 0x1073f2d92331dafa) {
        uVar12 = 0;
        if (uVar10 != 0) {
          uVar12 = 0x1073f2d92331daf9 / uVar10;
        }
        uVar12 = 0x1073f2d92331daf9 - uVar12 * uVar10;
      }
    }
    plVar14 = *(long **)(*(long *)(lVar13 + 0x58) + uVar12 * 8);
    if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
      if (uVar11 < 2) {
        do {
          if (plVar14[1] == 0x1073f2d92331daf9) {
            if (plVar14[2] == 0x1073f2d92331daf9) goto LAB_00cd6ae4;
          }
          else if ((plVar14[1] & uVar10 - 1) != uVar12) {
            return uVar16;
          }
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
      else {
        do {
          uVar11 = plVar14[1];
          if (uVar11 == 0x1073f2d92331daf9) {
            if (plVar14[2] == 0x1073f2d92331daf9) goto LAB_00cd6ae4;
          }
          else {
            if (uVar10 <= uVar11) {
              uVar5 = 0;
              if (uVar10 != 0) {
                uVar5 = uVar11 / uVar10;
              }
              uVar11 = uVar11 - uVar5 * uVar10;
            }
            if (uVar11 != uVar12) {
              return uVar16;
            }
          }
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
    }
  }
  return uVar16;
LAB_00cd68ec:
  plVar14 = (long *)plVar14[3];
  if (plVar14 != (long *)0x0) {
    plVar1 = plVar14 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    uVar10 = plVar14[0x21];
    uVar16 = 0;
    if (uVar10 != 0) {
      uVar11 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
      uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
      uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar11 < 2) {
        uVar12 = uVar10 - 1 & 0x20ba259e3f50087;
      }
      else if (uVar10 < 0x20ba259e3f50088) {
        uVar12 = 0;
        if (uVar10 != 0) {
          uVar12 = 0x20ba259e3f50087 / uVar10;
        }
        uVar12 = 0x20ba259e3f50087 - uVar12 * uVar10;
      }
      else {
        uVar12 = 0x20ba259e3f50087;
      }
      plVar15 = *(long **)(plVar14[0x20] + uVar12 * 8);
      if ((plVar15 != (long *)0x0) && (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0)) {
        if (uVar11 < 2) {
          do {
            if (plVar15[1] == 0x20ba259e3f50087) {
              if (plVar15[2] == 0x20ba259e3f50087) goto LAB_00cd6a30;
            }
            else if ((plVar15[1] & uVar10 - 1) != uVar12) break;
            plVar15 = (long *)*plVar15;
          } while (plVar15 != (long *)0x0);
        }
        else {
          do {
            uVar11 = plVar15[1];
            if (uVar11 == 0x20ba259e3f50087) {
              if (plVar15[2] == 0x20ba259e3f50087) goto LAB_00cd6a30;
            }
            else {
              if (uVar10 <= uVar11) {
                uVar5 = 0;
                if (uVar10 != 0) {
                  uVar5 = uVar11 / uVar10;
                }
                uVar11 = uVar11 - uVar5 * uVar10;
              }
              if (uVar11 != uVar12) break;
            }
            plVar15 = (long *)*plVar15;
          } while (plVar15 != (long *)0x0);
        }
      }
    }
    goto LAB_00cd6a34;
  }
  goto LAB_00cd6a48;
LAB_00cd6a30:
  uVar16 = (undefined4)plVar15[6];
LAB_00cd6a34:
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
    (**(code **)(*plVar14 + 0x10))();
    bVar2 = *puVar6;
    goto joined_r0x00cd6c6c;
  }
  goto LAB_00cd6a48;
LAB_00cd6ae4:
  plVar14 = (long *)plVar14[3];
  if (plVar14 == (long *)0x0) {
    return uVar16;
  }
  plVar1 = plVar14 + 10;
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = (int)*plVar1 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  uVar10 = plVar14[0x21];
  if (uVar10 != 0) {
    uVar11 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
    uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
    uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar11 < 2) {
      uVar12 = uVar10 - 1 & 0x1d887ce75549261f;
    }
    else if (uVar10 < 0x1d887ce755492620) {
      uVar12 = 0;
      if (uVar10 != 0) {
        uVar12 = 0x1d887ce75549261f / uVar10;
      }
      uVar12 = 0x1d887ce75549261f - uVar12 * uVar10;
    }
    else {
      uVar12 = 0x1d887ce75549261f;
    }
    plVar15 = *(long **)(plVar14[0x20] + uVar12 * 8);
    if ((plVar15 != (long *)0x0) && (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0)) {
      if (uVar11 < 2) {
        do {
          if (plVar15[1] == 0x1d887ce75549261f) {
            if (plVar15[2] == 0x1d887ce75549261f) break;
          }
          else if ((plVar15[1] & uVar10 - 1) != uVar12) break;
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
      else {
        do {
          uVar11 = plVar15[1];
          if (uVar11 == 0x1d887ce75549261f) {
            if (plVar15[2] == 0x1d887ce75549261f) break;
          }
          else {
            if (uVar10 <= uVar11) {
              uVar5 = 0;
              if (uVar10 != 0) {
                uVar5 = uVar11 / uVar10;
              }
              uVar11 = uVar11 - uVar5 * uVar10;
            }
            if (uVar11 != uVar12) break;
          }
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
    }
  }
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
    (**(code **)(*plVar14 + 0x10))();
    return uVar16;
  }
  return uVar16;
}


