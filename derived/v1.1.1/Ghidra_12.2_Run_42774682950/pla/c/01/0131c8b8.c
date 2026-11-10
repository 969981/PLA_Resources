/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0131c8b8; name: FUN_0131c8b8
 */


undefined4 FUN_0131c8b8(int param_1,int param_2,undefined4 *param_3,uint param_4)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  bool bVar5;
  byte bVar6;
  int iVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  long *plVar17;
  byte *pbVar18;
  long *plVar19;
  long *plVar20;
  undefined4 uVar21;
  long *plVar22;
  long lVar23;
  int iVar24;
  int local_74 [5];
  
  local_74[0] = 0;
  local_74[1] = 0;
  local_74[2] = 0;
  local_74[3] = 0;
  local_74[4] = 0;
  if ((param_1 != param_2) && (((param_4 ^ 1) & 1) == 0)) {
    uVar21 = 0;
LAB_0131d02c:
    *param_3 = uVar21;
    return uVar21;
  }
  switch(param_1) {
  case 0:
    uVar12 = FUN_0131c25c();
    bVar5 = param_2 == 6;
    if ((uVar12 & 1) == 0) {
      bVar5 = param_2 == 5;
    }
    if ((param_2 != 0) && (!bVar5)) goto switchD_0131c920_default;
    local_74[0] = 1;
    local_74[1] = 2;
    if ((param_4 & 1) == 0) {
      lVar23 = 2;
      iVar24 = 1;
    }
    else {
      lVar23 = 3;
      local_74[2] = 3;
      iVar24 = 1;
    }
    break;
  case 1:
    uVar12 = FUN_0131c25c();
    bVar5 = param_2 == 6;
    if ((uVar12 & 1) == 0) {
      bVar5 = param_2 == 5;
    }
    if ((param_2 != 1) && (!bVar5)) goto switchD_0131c920_default;
    local_74[0] = 4;
    local_74[1] = 5;
    if ((param_4 & 1) == 0) {
      lVar23 = 2;
      iVar24 = 4;
    }
    else {
      local_74[2] = 6;
      local_74[3] = 7;
      iVar24 = 4;
      lVar23 = 4;
    }
    break;
  case 2:
    uVar12 = FUN_0131c25c();
    bVar5 = param_2 == 6;
    if ((uVar12 & 1) == 0) {
      bVar5 = param_2 == 5;
    }
    if ((param_2 != 2) && (!bVar5)) goto switchD_0131c920_default;
    local_74[0] = 8;
    local_74[1] = 9;
    if ((param_4 & 1) == 0) {
      lVar23 = 2;
      iVar24 = 8;
    }
    else {
      local_74[2] = 10;
      lVar23 = 3;
      iVar24 = 8;
    }
    break;
  case 3:
    uVar12 = FUN_0131c25c();
    bVar5 = param_2 == 6;
    if ((uVar12 & 1) == 0) {
      bVar5 = param_2 == 5;
    }
    if ((param_2 != 3) && (!bVar5)) goto switchD_0131c920_default;
    local_74[0] = 0xb;
    local_74[1] = 0xc;
    local_74[2] = 0xd;
    if ((param_4 & 1) == 0) {
      lVar23 = 3;
      iVar24 = 0xb;
    }
    else {
      local_74[3] = 0xe;
      lVar23 = 4;
      iVar24 = 0xb;
    }
    break;
  case 4:
    uVar12 = FUN_0131c25c();
    bVar5 = param_2 == 6;
    if ((uVar12 & 1) == 0) {
      bVar5 = param_2 == 5;
    }
    if ((param_2 != 4) && (!bVar5)) goto switchD_0131c920_default;
    local_74[0] = 0xf;
    local_74[1] = 0x10;
    if ((param_4 & 1) == 0) {
      lVar23 = 2;
      iVar24 = 0xf;
    }
    else {
      local_74[2] = 0x11;
      local_74[3] = 0x12;
      lVar23 = 4;
      iVar24 = 0xf;
    }
    break;
  case 5:
    uVar12 = FUN_0131c25c();
    iVar24 = 0;
    lVar23 = 0;
    if ((param_2 == 5) && ((uVar12 & 1) == 0)) {
      local_74[0] = 0x14;
      local_74[1] = 0x15;
      lVar23 = 5;
      local_74[4] = 0x18;
      local_74[2] = 0x16;
      local_74[3] = 0x17;
      iVar24 = 0x14;
    }
    break;
  case 6:
    if (param_2 != 5) goto switchD_0131c920_default;
    iVar24 = 0x19;
    lVar23 = 1;
    local_74[0] = 0x19;
    break;
  default:
switchD_0131c920_default:
    iVar24 = 0;
    lVar23 = 0;
  }
  if (((*PTR_DAT_04379558 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04379558), iVar7 != 0))
  {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  plVar20 = (long *)PTR_DAT_04379568;
  plVar19 = (long *)PTR_DAT_04379560;
  pbVar18 = PTR_DAT_04379558;
  lVar9 = *(long *)PTR_DAT_04379560;
  *(long *)PTR_DAT_04379568 = lVar9;
  plVar22 = *(long **)(lVar9 + 0x228);
  if (plVar22 == (long *)0x0) {
    bVar5 = false;
    goto joined_r0x0131d060;
  }
  lVar9 = plVar22[0xb];
  if (*(undefined8 **)(lVar9 + 0x18) == (undefined8 *)0x0) {
LAB_0131d0bc:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  if (*(long *)(lVar9 + 0x10) == 0) {
    uVar8 = (**(code **)**(undefined8 **)(lVar9 + 0x18))();
    plVar20 = (long *)PTR_DAT_04379568;
    plVar19 = (long *)PTR_DAT_04379560;
    pbVar18 = PTR_DAT_04379558;
    *(undefined8 *)(lVar9 + 0x10) = uVar8;
  }
  piVar1 = (int *)(lVar9 + 0xc);
  do {
    cVar2 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar5) {
      *piVar1 = *piVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  uVar12 = ((long *)plVar22[0x37])[1];
  if (uVar12 != 0) {
    uVar13 = uVar12 - (uVar12 >> 1 & 0x5555555555555555);
    uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
    uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar13 < 2) {
      uVar14 = uVar12 - 1 & 0xf87d552ffe98f73f;
    }
    else if (uVar12 < 0xf87d552ffe98f740) {
      uVar14 = 0;
      if (uVar12 != 0) {
        uVar14 = 0xf87d552ffe98f73f / uVar12;
      }
      uVar14 = 0xf87d552ffe98f73f - uVar14 * uVar12;
    }
    else {
      uVar14 = 0xf87d552ffe98f73f;
    }
    plVar17 = *(long **)(*(long *)plVar22[0x37] + uVar14 * 8);
    if ((plVar17 != (long *)0x0) && (plVar17 = (long *)*plVar17, plVar17 != (long *)0x0)) {
      if (uVar13 < 2) {
        do {
          pbVar18 = PTR_DAT_04379558;
          plVar19 = (long *)PTR_DAT_04379560;
          plVar20 = (long *)PTR_DAT_04379568;
          if (plVar17[1] == 0xf87d552ffe98f73f) {
            if (plVar17[2] == -0x782aad0016708c1) goto LAB_0131cd08;
          }
          else if ((plVar17[1] & uVar12 - 1) != uVar14) {
            bVar5 = false;
            break;
          }
          plVar17 = (long *)*plVar17;
          bVar5 = false;
        } while (plVar17 != (long *)0x0);
        goto LAB_0131cd14;
      }
      do {
        uVar13 = plVar17[1];
        if (uVar13 == 0xf87d552ffe98f73f) {
          if (plVar17[2] == -0x782aad0016708c1) goto LAB_0131cd08;
        }
        else {
          if (uVar12 <= uVar13) {
            uVar15 = 0;
            if (uVar12 != 0) {
              uVar15 = uVar13 / uVar12;
            }
            uVar13 = uVar13 - uVar15 * uVar12;
          }
          if (uVar13 != uVar14) break;
        }
        plVar17 = (long *)*plVar17;
      } while (plVar17 != (long *)0x0);
    }
  }
  bVar5 = false;
LAB_0131cd14:
  lVar9 = plVar22[0xb];
  piVar1 = (int *)(lVar9 + 0xc);
  do {
    iVar7 = *piVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar3) {
      *piVar1 = iVar7 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar7 + -1 == 0) {
    *(undefined8 *)(lVar9 + 0x18) = 0;
    (**(code **)(*plVar22 + 0x20))(plVar22);
    pbVar18 = PTR_DAT_04379558;
    plVar19 = (long *)PTR_DAT_04379560;
    plVar20 = (long *)PTR_DAT_04379568;
  }
joined_r0x0131d060:
  uVar21 = 0;
  if (((int)lVar23 != 0) && (uVar21 = 0, bVar5 || ((param_4 ^ 1) & 1) != 0)) {
    lVar9 = 0;
    uVar12 = 0;
    uVar13 = uVar12;
    if ((*pbVar18 & 1) != 0) goto LAB_0131cdc8;
LAB_0131cd64:
    iVar7 = __cxa_guard_acquire(pbVar18);
    pbVar18 = PTR_DAT_04379558;
    plVar19 = (long *)PTR_DAT_04379560;
    plVar20 = (long *)PTR_DAT_04379568;
    uVar13 = uVar12;
    if (iVar7 != 0) {
      FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379558);
      pbVar18 = PTR_DAT_04379558;
      plVar19 = (long *)PTR_DAT_04379560;
      plVar20 = (long *)PTR_DAT_04379568;
    }
LAB_0131cdc8:
    lVar10 = *plVar19;
    *plVar20 = lVar10;
    plVar22 = *(long **)(lVar10 + 0x228);
    uVar12 = uVar13;
    if (plVar22 == (long *)0x0) goto LAB_0131cf78;
    lVar10 = plVar22[0xb];
    if (*(undefined8 **)(lVar10 + 0x18) != (undefined8 *)0x0) {
      if (*(long *)(lVar10 + 0x10) == 0) {
        uVar8 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
        plVar20 = (long *)PTR_DAT_04379568;
        plVar19 = (long *)PTR_DAT_04379560;
        pbVar18 = PTR_DAT_04379558;
        *(undefined8 *)(lVar10 + 0x10) = uVar8;
      }
      piVar1 = (int *)(lVar10 + 0xc);
      do {
        cVar2 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar24 == 0x13) {
        bVar6 = FUN_0131c25c();
        bVar6 = bVar6 ^ 1;
        pbVar18 = PTR_DAT_04379558;
        plVar19 = (long *)PTR_DAT_04379560;
        plVar20 = (long *)PTR_DAT_04379568;
      }
      else {
        if (*(&PTR_DAT_04204df8)[(long)iVar24 * 3] != '\0') {
          uVar14 = ((long *)plVar22[0x37])[1];
          if (uVar14 != 0) {
            uVar15 = uVar14 - (uVar14 >> 1 & 0x5555555555555555);
            uVar15 = (uVar15 & 0x3333333333333333) + (uVar15 >> 2 & 0x3333333333333333);
            uVar11 = *(ulong *)(&DAT_04204df0 + (long)iVar24 * 0x18);
            uVar15 = (uVar15 + (uVar15 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
            if (uVar15 < 2) {
              uVar16 = uVar14 - 1 & uVar11;
            }
            else if (uVar11 < uVar14) {
              uVar16 = uVar11;
            }
            else {
              uVar16 = 0;
              if (uVar14 != 0) {
                uVar16 = uVar11 / uVar14;
              }
              uVar16 = uVar11 - uVar16 * uVar14;
            }
            plVar17 = *(long **)(*(long *)plVar22[0x37] + uVar16 * 8);
            if ((plVar17 != (long *)0x0) && (plVar17 = (long *)*plVar17, plVar17 != (long *)0x0)) {
              if (uVar15 < 2) {
                do {
                  if (plVar17[1] == uVar11) {
                    if (plVar17[2] == uVar11) goto LAB_0131cf3c;
                  }
                  else if ((plVar17[1] & uVar14 - 1) != uVar16) goto LAB_0131ceec;
                  plVar17 = (long *)*plVar17;
                  bVar6 = 0;
                } while (plVar17 != (long *)0x0);
                goto LAB_0131cf48;
              }
              do {
                uVar15 = plVar17[1];
                if (uVar15 == uVar11) {
                  if (plVar17[2] == uVar11) goto LAB_0131cf3c;
                }
                else {
                  if (uVar14 <= uVar15) {
                    uVar4 = 0;
                    if (uVar14 != 0) {
                      uVar4 = uVar15 / uVar14;
                    }
                    uVar15 = uVar15 - uVar4 * uVar14;
                  }
                  if (uVar15 != uVar16) break;
                }
                plVar17 = (long *)*plVar17;
              } while (plVar17 != (long *)0x0);
            }
          }
        }
LAB_0131ceec:
        bVar6 = 0;
      }
      goto LAB_0131cf48;
    }
    goto LAB_0131d0bc;
  }
  goto LAB_0131d02c;
LAB_0131cd08:
  bVar5 = (char)plVar17[3] != '\0';
  goto LAB_0131cd14;
LAB_0131cf3c:
  bVar6 = (char)plVar17[3] != '\0';
LAB_0131cf48:
  lVar10 = plVar22[0xb];
  piVar1 = (int *)(lVar10 + 0xc);
  do {
    iVar7 = *piVar1;
    cVar2 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar5) {
      *piVar1 = iVar7 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar7 + -1 == 0) {
    *(undefined8 *)(lVar10 + 0x18) = 0;
    (**(code **)(*plVar22 + 0x20))(plVar22);
    pbVar18 = PTR_DAT_04379558;
    plVar19 = (long *)PTR_DAT_04379560;
    plVar20 = (long *)PTR_DAT_04379568;
  }
  if ((bVar6 & 1) != 0) {
    uVar12 = (ulong)((int)uVar13 + 1);
    param_3[uVar13 + 1] = iVar24;
  }
LAB_0131cf78:
  uVar21 = (undefined4)uVar12;
  lVar9 = lVar9 + 1;
  if (lVar9 == lVar23) goto LAB_0131d02c;
  iVar24 = local_74[lVar9];
  uVar13 = uVar12;
  if ((*pbVar18 & 1) == 0) goto LAB_0131cd64;
  goto LAB_0131cdc8;
}


