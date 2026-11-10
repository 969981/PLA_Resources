/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 026b8cc0; name: FUN_026b8cc0
 */


undefined8 FUN_026b8cc0(void)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  ulong uVar12;
  long *plVar13;
  char cVar14;
  
  if (((*PTR_DAT_04379558 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04379558), iVar5 != 0))
  {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  lVar7 = *(long *)PTR_DAT_04379560;
  *(long *)PTR_DAT_04379568 = lVar7;
  plVar13 = *(long **)(lVar7 + 0x228);
  if (plVar13 != (long *)0x0) {
    lVar7 = plVar13[0xb];
    if (*(undefined8 **)(lVar7 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar7 + 0x10) == 0) {
      uVar6 = (**(code **)**(undefined8 **)(lVar7 + 0x18))();
      *(undefined8 *)(lVar7 + 0x10) = uVar6;
    }
    piVar1 = (int *)(lVar7 + 0xc);
    do {
      cVar14 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar14 = ExclusiveMonitorsStatus();
      }
    } while (cVar14 != '\0');
    uVar8 = ((long *)plVar13[0x37])[1];
    if (uVar8 != 0) {
      uVar9 = uVar8 - (uVar8 >> 1 & 0x5555555555555555);
      uVar9 = (uVar9 & 0x3333333333333333) + (uVar9 >> 2 & 0x3333333333333333);
      uVar9 = (uVar9 + (uVar9 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar9 < 2) {
        uVar10 = uVar8 - 1 & 0x83a947c347365fe8;
      }
      else if (uVar8 < 0x83a947c347365fe9) {
        uVar10 = 0;
        if (uVar8 != 0) {
          uVar10 = 0x83a947c347365fe8 / uVar8;
        }
        uVar10 = 0x83a947c347365fe8 - uVar10 * uVar8;
      }
      else {
        uVar10 = 0x83a947c347365fe8;
      }
      lVar7 = *(long *)plVar13[0x37];
      plVar11 = *(long **)(lVar7 + uVar10 * 8);
      if ((plVar11 != (long *)0x0) && (plVar11 = (long *)*plVar11, plVar11 != (long *)0x0)) {
        if (uVar9 < 2) {
          do {
            if (plVar11[1] == 0x83a947c347365fe8) {
              if (plVar11[2] == -0x7c56b83cb8c9a018) goto LAB_026b8e38;
            }
            else if ((plVar11[1] & uVar8 - 1) != uVar10) break;
            plVar11 = (long *)*plVar11;
          } while (plVar11 != (long *)0x0);
        }
        else {
          do {
            uVar12 = plVar11[1];
            if (uVar12 == 0x83a947c347365fe8) {
              if (plVar11[2] == -0x7c56b83cb8c9a018) goto LAB_026b8e38;
            }
            else {
              if (uVar8 <= uVar12) {
                uVar4 = 0;
                if (uVar8 != 0) {
                  uVar4 = uVar12 / uVar8;
                }
                uVar12 = uVar12 - uVar4 * uVar8;
              }
              if (uVar12 != uVar10) break;
            }
            plVar11 = (long *)*plVar11;
          } while (plVar11 != (long *)0x0);
        }
      }
      goto LAB_026b8e40;
    }
LAB_026b91a4:
    cVar14 = '\0';
    goto LAB_026b9144;
  }
  goto LAB_026b918c;
LAB_026b8e38:
  if ((char)plVar11[3] == '\0') {
LAB_026b8e40:
    if (uVar9 < 2) {
      uVar10 = uVar8 - 1 & 0x83a94dc347366a1a;
      plVar11 = *(long **)(lVar7 + uVar10 * 8);
    }
    else if (uVar8 < 0x83a94dc347366a1b) {
      uVar10 = 0;
      if (uVar8 != 0) {
        uVar10 = 0x83a94dc347366a1a / uVar8;
      }
      uVar10 = 0x83a94dc347366a1a - uVar10 * uVar8;
      plVar11 = *(long **)(lVar7 + uVar10 * 8);
    }
    else {
      uVar10 = 0x83a94dc347366a1a;
      plVar11 = *(long **)(lVar7 + 0x1d4a6e1a39b350d0);
    }
    if ((plVar11 != (long *)0x0) && (plVar11 = (long *)*plVar11, plVar11 != (long *)0x0)) {
      if (uVar9 < 2) {
        do {
          if (plVar11[1] == 0x83a94dc347366a1a) {
            if (plVar11[2] == -0x7c56b23cb8c995e6) goto LAB_026b8f0c;
          }
          else if ((plVar11[1] & uVar8 - 1) != uVar10) break;
          plVar11 = (long *)*plVar11;
        } while (plVar11 != (long *)0x0);
      }
      else {
        do {
          uVar12 = plVar11[1];
          if (uVar12 == 0x83a94dc347366a1a) {
            if (plVar11[2] == -0x7c56b23cb8c995e6) goto LAB_026b8f0c;
          }
          else {
            if (uVar8 <= uVar12) {
              uVar4 = 0;
              if (uVar8 != 0) {
                uVar4 = uVar12 / uVar8;
              }
              uVar12 = uVar12 - uVar4 * uVar8;
            }
            if (uVar12 != uVar10) break;
          }
          plVar11 = (long *)*plVar11;
        } while (plVar11 != (long *)0x0);
      }
    }
    goto LAB_026b8f14;
  }
  goto LAB_026b9140;
LAB_026b8f0c:
  if ((char)plVar11[3] == '\0') {
LAB_026b8f14:
    if (uVar9 < 2) {
      uVar10 = uVar8 - 1 & 0x83a94bc3473666b4;
      plVar11 = *(long **)(lVar7 + uVar10 * 8);
    }
    else if (uVar8 < 0x83a94bc3473666b5) {
      uVar10 = 0;
      if (uVar8 != 0) {
        uVar10 = 0x83a94bc3473666b4 / uVar8;
      }
      uVar10 = 0x83a94bc3473666b4 - uVar10 * uVar8;
      plVar11 = *(long **)(lVar7 + uVar10 * 8);
    }
    else {
      uVar10 = 0x83a94bc3473666b4;
      plVar11 = *(long **)(lVar7 + 0x1d4a5e1a39b335a0);
    }
    if ((plVar11 != (long *)0x0) && (plVar11 = (long *)*plVar11, plVar11 != (long *)0x0)) {
      if (uVar9 < 2) {
        do {
          if (plVar11[1] == 0x83a94bc3473666b4) {
            if (plVar11[2] == -0x7c56b43cb8c9994c) goto LAB_026b8fe0;
          }
          else if ((plVar11[1] & uVar8 - 1) != uVar10) break;
          plVar11 = (long *)*plVar11;
        } while (plVar11 != (long *)0x0);
      }
      else {
        do {
          uVar12 = plVar11[1];
          if (uVar12 == 0x83a94bc3473666b4) {
            if (plVar11[2] == -0x7c56b43cb8c9994c) goto LAB_026b8fe0;
          }
          else {
            if (uVar8 <= uVar12) {
              uVar4 = 0;
              if (uVar8 != 0) {
                uVar4 = uVar12 / uVar8;
              }
              uVar12 = uVar12 - uVar4 * uVar8;
            }
            if (uVar12 != uVar10) break;
          }
          plVar11 = (long *)*plVar11;
        } while (plVar11 != (long *)0x0);
      }
    }
    goto LAB_026b8fe8;
  }
  goto LAB_026b9140;
LAB_026b90b4:
  if ((char)plVar11[3] != '\0') goto LAB_026b9140;
LAB_026b90bc:
  if (uVar9 < 2) {
    uVar10 = uVar8 - 1 & 0x83a949c34736634e;
    plVar11 = *(long **)(lVar7 + uVar10 * 8);
  }
  else if (uVar8 < 0x83a949c34736634f) {
    uVar10 = 0;
    if (uVar8 != 0) {
      uVar10 = 0x83a949c34736634e / uVar8;
    }
    uVar10 = 0x83a949c34736634e - uVar10 * uVar8;
    plVar11 = *(long **)(lVar7 + uVar10 * 8);
  }
  else {
    uVar10 = 0x83a949c34736634e;
    plVar11 = *(long **)(lVar7 + 0x1d4a4e1a39b31a70);
  }
  if ((plVar11 == (long *)0x0) || (plVar11 = (long *)*plVar11, plVar11 == (long *)0x0))
  goto LAB_026b91a4;
  if (uVar9 < 2) {
    do {
      if (plVar11[1] == 0x83a949c34736634e) {
        if (plVar11[2] == -0x7c56b63cb8c99cb2) goto LAB_026b91e8;
      }
      else if ((plVar11[1] & uVar8 - 1) != uVar10) goto LAB_026b91a4;
      plVar11 = (long *)*plVar11;
      cVar14 = '\0';
    } while (plVar11 != (long *)0x0);
  }
  else {
    do {
      uVar9 = plVar11[1];
      if (uVar9 == 0x83a949c34736634e) {
        if (plVar11[2] == -0x7c56b63cb8c99cb2) goto LAB_026b91e8;
      }
      else {
        if (uVar8 <= uVar9) {
          uVar12 = 0;
          if (uVar8 != 0) {
            uVar12 = uVar9 / uVar8;
          }
          uVar9 = uVar9 - uVar12 * uVar8;
        }
        if (uVar9 != uVar10) goto LAB_026b91a4;
      }
      plVar11 = (long *)*plVar11;
      cVar14 = '\0';
    } while (plVar11 != (long *)0x0);
  }
  goto LAB_026b9144;
LAB_026b91e8:
  cVar14 = (char)plVar11[3];
  goto LAB_026b9144;
LAB_026b8fe0:
  if ((char)plVar11[3] == '\0') {
LAB_026b8fe8:
    if (uVar9 < 2) {
      uVar10 = uVar8 - 1 & 0x83a5c2c347334812;
      plVar11 = *(long **)(lVar7 + uVar10 * 8);
    }
    else if (uVar8 < 0x83a5c2c347334813) {
      uVar10 = 0;
      if (uVar8 != 0) {
        uVar10 = 0x83a5c2c347334812 / uVar8;
      }
      uVar10 = 0x83a5c2c347334812 - uVar10 * uVar8;
      plVar11 = *(long **)(lVar7 + uVar10 * 8);
    }
    else {
      uVar10 = 0x83a5c2c347334812;
      plVar11 = *(long **)(lVar7 + 0x1d2e161a399a4090);
    }
    if ((plVar11 != (long *)0x0) && (plVar11 = (long *)*plVar11, plVar11 != (long *)0x0)) {
      if (uVar9 < 2) {
        do {
          if (plVar11[1] == 0x83a5c2c347334812) {
            if (plVar11[2] == -0x7c5a3d3cb8ccb7ee) goto LAB_026b90b4;
          }
          else if ((plVar11[1] & uVar8 - 1) != uVar10) break;
          plVar11 = (long *)*plVar11;
        } while (plVar11 != (long *)0x0);
      }
      else {
        do {
          uVar12 = plVar11[1];
          if (uVar12 == 0x83a5c2c347334812) {
            if (plVar11[2] == -0x7c5a3d3cb8ccb7ee) goto LAB_026b90b4;
          }
          else {
            if (uVar8 <= uVar12) {
              uVar4 = 0;
              if (uVar8 != 0) {
                uVar4 = uVar12 / uVar8;
              }
              uVar12 = uVar12 - uVar4 * uVar8;
            }
            if (uVar12 != uVar10) break;
          }
          plVar11 = (long *)*plVar11;
        } while (plVar11 != (long *)0x0);
      }
    }
    goto LAB_026b90bc;
  }
LAB_026b9140:
  cVar14 = '\x01';
LAB_026b9144:
  lVar7 = plVar13[0xb];
  piVar1 = (int *)(lVar7 + 0xc);
  do {
    iVar5 = *piVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar3) {
      *piVar1 = iVar5 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar5 + -1 == 0) {
    *(undefined8 *)(lVar7 + 0x18) = 0;
    (**(code **)(*plVar13 + 0x20))(plVar13);
  }
  if (cVar14 == '\0') {
LAB_026b918c:
    uVar6 = 0;
  }
  else {
    uVar6 = 1;
  }
  return uVar6;
}


