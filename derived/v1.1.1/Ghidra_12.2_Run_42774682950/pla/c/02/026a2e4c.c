/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 026a2e4c; name: FUN_026a2e4c
 */


bool FUN_026a2e4c(float param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  float fVar15;
  float fVar16;
  
  puVar5 = PTR_DAT_04379660;
  if (*(char *)(param_2 + 0xc6e) == '\0') {
    return false;
  }
  if (*(char *)(param_2 + 0xc6f) != '\0') {
    return false;
  }
  if (*(char *)(param_2 + 0xc72) == '\0') {
    return false;
  }
  if (((*PTR_DAT_04379660 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04379660), iVar8 != 0))
  {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  puVar7 = PTR_DAT_04379670;
  puVar6 = PTR_DAT_04379668;
  lVar12 = *(long *)PTR_DAT_04379668;
  *(long *)PTR_DAT_04379670 = lVar12;
  uVar9 = *(ulong *)(lVar12 + 0x60);
  fVar16 = 0.0;
  if (uVar9 != 0) {
    uVar10 = uVar9 - (uVar9 >> 1 & 0x5555555555555555);
    uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333);
    uVar10 = (uVar10 + (uVar10 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar10 < 2) {
      uVar11 = uVar9 - 1 & 0xd37b7a2603d7ef69;
    }
    else {
      uVar11 = 0xd37b7a2603d7ef69;
      if (uVar9 < 0xd37b7a2603d7ef6a) {
        uVar11 = 0;
        if (uVar9 != 0) {
          uVar11 = 0xd37b7a2603d7ef69 / uVar9;
        }
        uVar11 = 0xd37b7a2603d7ef69 - uVar11 * uVar9;
      }
    }
    plVar13 = *(long **)(*(long *)(lVar12 + 0x58) + uVar11 * 8);
    if ((plVar13 != (long *)0x0) && (plVar13 = (long *)*plVar13, plVar13 != (long *)0x0)) {
      if (uVar10 < 2) {
        do {
          if (plVar13[1] == 0xd37b7a2603d7ef69) {
            if (plVar13[2] == -0x2c8485d9fc281097) goto LAB_026a2f70;
          }
          else if ((plVar13[1] & uVar9 - 1) != uVar11) break;
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
      else {
        do {
          uVar10 = plVar13[1];
          if (uVar10 == 0xd37b7a2603d7ef69) {
            if (plVar13[2] == -0x2c8485d9fc281097) goto LAB_026a2f70;
          }
          else {
            if (uVar9 <= uVar10) {
              uVar4 = 0;
              if (uVar9 != 0) {
                uVar4 = uVar10 / uVar9;
              }
              uVar10 = uVar10 - uVar4 * uVar9;
            }
            if (uVar10 != uVar11) break;
          }
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
    }
  }
joined_r0x026a3290:
  if (ABS(param_1) < fVar16) {
    return false;
  }
  fVar16 = -*(float *)(param_2 + 0x330);
  if (param_1 <= 0.0) {
    fVar16 = *(float *)(param_2 + 0x330);
  }
  if (((*puVar5 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04379660), iVar8 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar12 = *(long *)puVar6;
  *(long *)puVar7 = lVar12;
  uVar9 = *(ulong *)(lVar12 + 0x60);
  fVar15 = 0.0;
  if (uVar9 != 0) {
    uVar10 = uVar9 - (uVar9 >> 1 & 0x5555555555555555);
    uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333);
    uVar10 = (uVar10 + (uVar10 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar10 < 2) {
      uVar11 = uVar9 - 1 & 0xd37b7a2603d7ef69;
    }
    else {
      uVar11 = 0xd37b7a2603d7ef69;
      if (uVar9 < 0xd37b7a2603d7ef6a) {
        uVar11 = 0;
        if (uVar9 != 0) {
          uVar11 = 0xd37b7a2603d7ef69 / uVar9;
        }
        uVar11 = 0xd37b7a2603d7ef69 - uVar11 * uVar9;
      }
    }
    plVar13 = *(long **)(*(long *)(lVar12 + 0x58) + uVar11 * 8);
    if ((plVar13 != (long *)0x0) && (plVar13 = (long *)*plVar13, plVar13 != (long *)0x0)) {
      if (uVar10 < 2) {
        do {
          if (plVar13[1] == 0xd37b7a2603d7ef69) {
            if (plVar13[2] == -0x2c8485d9fc281097) goto LAB_026a3180;
          }
          else if ((plVar13[1] & uVar9 - 1) != uVar11) break;
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
      else {
        do {
          uVar10 = plVar13[1];
          if (uVar10 == 0xd37b7a2603d7ef69) {
            if (plVar13[2] == -0x2c8485d9fc281097) goto LAB_026a3180;
          }
          else {
            if (uVar9 <= uVar10) {
              uVar4 = 0;
              if (uVar9 != 0) {
                uVar4 = uVar10 / uVar9;
              }
              uVar10 = uVar10 - uVar4 * uVar9;
            }
            if (uVar10 != uVar11) break;
          }
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
    }
  }
LAB_026a32f4:
  return fVar15 <= fVar16;
LAB_026a2f70:
  plVar13 = (long *)plVar13[3];
  if (plVar13 != (long *)0x0) {
    plVar1 = plVar13 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    uVar9 = plVar13[0x21];
    fVar16 = 0.0;
    if (uVar9 != 0) {
      uVar10 = uVar9 - (uVar9 >> 1 & 0x5555555555555555);
      uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333);
      uVar10 = (uVar10 + (uVar10 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar10 < 2) {
        uVar11 = uVar9 - 1 & 0x7f318767b037f661;
      }
      else if (uVar9 < 0x7f318767b037f662) {
        uVar11 = 0;
        if (uVar9 != 0) {
          uVar11 = 0x7f318767b037f661 / uVar9;
        }
        uVar11 = 0x7f318767b037f661 - uVar11 * uVar9;
      }
      else {
        uVar11 = 0x7f318767b037f661;
      }
      plVar14 = *(long **)(plVar13[0x20] + uVar11 * 8);
      if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
        if (uVar10 < 2) {
          do {
            if (plVar14[1] == 0x7f318767b037f661) {
              if (plVar14[2] == 0x7f318767b037f661) goto LAB_026a30b4;
            }
            else if ((plVar14[1] & uVar9 - 1) != uVar11) break;
            plVar14 = (long *)*plVar14;
          } while (plVar14 != (long *)0x0);
        }
        else {
          do {
            uVar10 = plVar14[1];
            if (uVar10 == 0x7f318767b037f661) {
              if (plVar14[2] == 0x7f318767b037f661) goto LAB_026a30b4;
            }
            else {
              if (uVar9 <= uVar10) {
                uVar4 = 0;
                if (uVar9 != 0) {
                  uVar4 = uVar10 / uVar9;
                }
                uVar10 = uVar10 - uVar4 * uVar9;
              }
              if (uVar10 != uVar11) break;
            }
            plVar14 = (long *)*plVar14;
          } while (plVar14 != (long *)0x0);
        }
      }
    }
    goto LAB_026a30b8;
  }
  goto joined_r0x026a3290;
LAB_026a30b4:
  fVar16 = *(float *)(plVar14 + 6);
LAB_026a30b8:
  do {
    iVar8 = (int)*plVar1 + -1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(int *)plVar1 = iVar8;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar8 == 0) {
    (**(code **)(*plVar13 + 0x10))();
  }
  goto joined_r0x026a3290;
LAB_026a3180:
  plVar13 = (long *)plVar13[3];
  if (plVar13 == (long *)0x0) goto LAB_026a32f4;
  plVar1 = plVar13 + 10;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(int *)plVar1 = (int)*plVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  uVar9 = plVar13[0x21];
  fVar15 = 0.0;
  if (uVar9 != 0) {
    uVar10 = uVar9 - (uVar9 >> 1 & 0x5555555555555555);
    uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333);
    uVar10 = (uVar10 + (uVar10 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar10 < 2) {
      uVar11 = uVar9 - 1 & 0xd450fe1073d66929;
    }
    else if (uVar9 < 0xd450fe1073d6692a) {
      uVar11 = 0;
      if (uVar9 != 0) {
        uVar11 = 0xd450fe1073d66929 / uVar9;
      }
      uVar11 = 0xd450fe1073d66929 - uVar11 * uVar9;
    }
    else {
      uVar11 = 0xd450fe1073d66929;
    }
    plVar14 = *(long **)(plVar13[0x20] + uVar11 * 8);
    if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
      if (uVar10 < 2) {
        do {
          if (plVar14[1] == 0xd450fe1073d66929) {
            if (plVar14[2] == -0x2baf01ef8c2996d7) goto LAB_026a32dc;
          }
          else if ((plVar14[1] & uVar9 - 1) != uVar11) break;
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
      else {
        do {
          uVar10 = plVar14[1];
          if (uVar10 == 0xd450fe1073d66929) {
            if (plVar14[2] == -0x2baf01ef8c2996d7) goto LAB_026a32dc;
          }
          else {
            if (uVar9 <= uVar10) {
              uVar4 = 0;
              if (uVar9 != 0) {
                uVar4 = uVar10 / uVar9;
              }
              uVar10 = uVar10 - uVar4 * uVar9;
            }
            if (uVar10 != uVar11) break;
          }
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
    }
  }
  goto LAB_026a32e0;
LAB_026a32dc:
  fVar15 = *(float *)(plVar14 + 6);
LAB_026a32e0:
  do {
    iVar8 = (int)*plVar1 + -1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(int *)plVar1 = iVar8;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar8 == 0) {
    (**(code **)(*plVar13 + 0x10))();
  }
  goto LAB_026a32f4;
}


