/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010e630c; name: FUN_010e630c
 */


uint FUN_010e630c(void)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  uint uVar9;
  ulong uVar10;
  long *plVar11;
  ulong uVar12;
  ulong uVar13;
  long *plVar14;
  uint uVar15;
  long *plVar16;
  
  if (((*PTR_DAT_04379558 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04379558), iVar5 != 0))
  {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  lVar7 = *(long *)PTR_DAT_04379560;
  *(long *)PTR_DAT_04379568 = lVar7;
  plVar16 = *(long **)(lVar7 + 0x228);
  if (plVar16 != (long *)0x0) {
    lVar7 = plVar16[0xb];
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
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar11 = (long *)plVar16[0x37];
  uVar8 = plVar11[1];
  if (uVar8 != 0) {
    uVar12 = uVar8 >> 1;
    uVar10 = uVar8 - (uVar12 & 0x5555555555555555);
    uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333);
    uVar10 = (uVar10 + (uVar10 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar10 < 2) {
      uVar13 = uVar8 - 1 & 0x957027cef224ca8e;
    }
    else if (uVar8 < 0x957027cef224ca8f) {
      uVar13 = 0;
      if (uVar8 != 0) {
        uVar13 = 0x957027cef224ca8e / uVar8;
      }
      uVar13 = 0x957027cef224ca8e - uVar13 * uVar8;
    }
    else {
      uVar13 = 0x957027cef224ca8e;
    }
    plVar14 = *(long **)(*plVar11 + uVar13 * 8);
    if ((plVar14 == (long *)0x0) || (plVar14 = (long *)*plVar14, plVar14 == (long *)0x0)) {
      uVar9 = 0;
    }
    else {
      if (uVar10 < 2) {
        do {
          if (plVar14[1] == 0x957027cef224ca8e) {
            if (plVar14[2] == -0x6a8fd8310ddb3572) goto LAB_010e64a8;
          }
          else if ((plVar14[1] & uVar8 - 1) != uVar13) goto LAB_010e643c;
          plVar14 = (long *)*plVar14;
          uVar9 = 0;
        } while (plVar14 != (long *)0x0);
        goto LAB_010e64ac;
      }
      do {
        uVar10 = plVar14[1];
        if (uVar10 == 0x957027cef224ca8e) {
          if (plVar14[2] == -0x6a8fd8310ddb3572) goto LAB_010e64a8;
        }
        else {
          if (uVar8 <= uVar10) {
            uVar4 = 0;
            if (uVar8 != 0) {
              uVar4 = uVar10 / uVar8;
            }
            uVar10 = uVar10 - uVar4 * uVar8;
          }
          if (uVar10 != uVar13) break;
        }
        plVar14 = (long *)*plVar14;
      } while (plVar14 != (long *)0x0);
LAB_010e643c:
      uVar9 = 0;
      if (uVar8 == 0) goto LAB_010e66c4;
    }
    goto LAB_010e64b0;
  }
  uVar9 = 0;
  if (plVar16 == (long *)0x0) {
    return 0;
  }
  goto LAB_010e66cc;
LAB_010e64a8:
  uVar9 = (uint)*(byte *)(plVar14 + 3);
LAB_010e64ac:
  if (uVar8 != 0) {
LAB_010e64b0:
    uVar10 = uVar8 - (uVar12 & 0x5555555555555555);
    uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333);
    uVar10 = (uVar10 + (uVar10 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar10 < 2) {
      uVar13 = uVar8 - 1 & 0xe6ed570e06924515;
    }
    else if (uVar8 < 0xe6ed570e06924516) {
      uVar13 = 0;
      if (uVar8 != 0) {
        uVar13 = 0xe6ed570e06924515 / uVar8;
      }
      uVar13 = 0xe6ed570e06924515 - uVar13 * uVar8;
    }
    else {
      uVar13 = 0xe6ed570e06924515;
    }
    plVar14 = *(long **)(*plVar11 + uVar13 * 8);
    if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
      if (uVar10 < 2) {
        do {
          if (plVar14[1] == 0xe6ed570e06924515) {
            if (plVar14[2] == -0x1912a8f1f96dbaeb) goto LAB_010e65b4;
          }
          else if ((plVar14[1] & uVar8 - 1) != uVar13) goto joined_r0x010e65bc;
          plVar14 = (long *)*plVar14;
          uVar15 = 0;
        } while (plVar14 != (long *)0x0);
        goto LAB_010e65b8;
      }
      do {
        uVar10 = plVar14[1];
        if (uVar10 == 0xe6ed570e06924515) {
          if (plVar14[2] == -0x1912a8f1f96dbaeb) goto LAB_010e65b4;
        }
        else {
          if (uVar8 <= uVar10) {
            uVar4 = 0;
            if (uVar8 != 0) {
              uVar4 = uVar10 / uVar8;
            }
            uVar10 = uVar10 - uVar4 * uVar8;
          }
          if (uVar10 != uVar13) break;
        }
        plVar14 = (long *)*plVar14;
      } while (plVar14 != (long *)0x0);
      goto joined_r0x010e65bc;
    }
    goto LAB_010e65c0;
  }
  goto LAB_010e66c4;
LAB_010e65b4:
  uVar15 = (uint)*(byte *)(plVar14 + 3);
LAB_010e65b8:
  uVar9 = uVar15 + uVar9;
joined_r0x010e65bc:
  if (uVar8 == 0) goto LAB_010e66c4;
LAB_010e65c0:
  uVar10 = uVar8 - (uVar12 & 0x5555555555555555);
  uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333);
  uVar10 = (uVar10 + (uVar10 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
  if (uVar10 < 2) {
    uVar12 = uVar8 - 1 & 0xcc69d385f67c6dc8;
  }
  else if (uVar8 < 0xcc69d385f67c6dc9) {
    uVar12 = 0;
    if (uVar8 != 0) {
      uVar12 = 0xcc69d385f67c6dc8 / uVar8;
    }
    uVar12 = 0xcc69d385f67c6dc8 - uVar12 * uVar8;
  }
  else {
    uVar12 = 0xcc69d385f67c6dc8;
  }
  plVar11 = *(long **)(*plVar11 + uVar12 * 8);
  if ((plVar11 != (long *)0x0) && (plVar11 = (long *)*plVar11, plVar11 != (long *)0x0)) {
    if (uVar10 < 2) {
      do {
        if (plVar11[1] == 0xcc69d385f67c6dc8) {
          if (plVar11[2] == -0x33962c7a09839238) goto LAB_010e66c0;
        }
        else if ((plVar11[1] & uVar8 - 1) != uVar12) break;
        plVar11 = (long *)*plVar11;
      } while (plVar11 != (long *)0x0);
    }
    else {
      do {
        uVar10 = plVar11[1];
        if (uVar10 == 0xcc69d385f67c6dc8) {
          if (plVar11[2] == -0x33962c7a09839238) goto LAB_010e66c0;
        }
        else {
          if (uVar8 <= uVar10) {
            uVar13 = 0;
            if (uVar8 != 0) {
              uVar13 = uVar10 / uVar8;
            }
            uVar10 = uVar10 - uVar13 * uVar8;
          }
          if (uVar10 != uVar12) break;
        }
        plVar11 = (long *)*plVar11;
      } while (plVar11 != (long *)0x0);
    }
  }
  goto joined_r0x010e66c8;
LAB_010e66c0:
  uVar8 = (ulong)*(byte *)(plVar11 + 3);
LAB_010e66c4:
  uVar9 = uVar9 + (int)uVar8;
joined_r0x010e66c8:
  if (plVar16 != (long *)0x0) {
LAB_010e66cc:
    lVar7 = plVar16[0xb];
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
      (**(code **)(*plVar16 + 0x20))(plVar16);
    }
  }
  return uVar9;
}


