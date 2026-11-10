/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 026ae808; name: FUN_026ae808
 */


undefined4 FUN_026ae808(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  undefined4 uVar13;
  long local_58;
  long lStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 local_14;
  
  uStack_40 = *(undefined8 *)(*param_1 + 8);
  local_28 = 0;
  local_48 = 0;
  local_58 = 0;
  lStack_50 = 0;
  local_38 = 0x3fffffffffffffff;
  uStack_30 = 0;
  if (((*PTR_DAT_04379660 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_04379660), iVar6 != 0))
  {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar10 = *(long *)PTR_DAT_04379668;
  *(long *)PTR_DAT_04379670 = lVar10;
  uVar7 = *(ulong *)(lVar10 + 0x60);
  if (uVar7 != 0) {
    uVar8 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
    uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
    uVar8 = (uVar8 + (uVar8 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar8 < 2) {
      uVar9 = uVar7 - 1 & 0x51158b6ddb1ee2da;
    }
    else if (uVar7 < 0x51158b6ddb1ee2db) {
      uVar9 = 0;
      if (uVar7 != 0) {
        uVar9 = 0x51158b6ddb1ee2da / uVar7;
      }
      uVar9 = 0x51158b6ddb1ee2da - uVar9 * uVar7;
    }
    else {
      uVar9 = 0x51158b6ddb1ee2da;
    }
    plVar11 = *(long **)(*(long *)(lVar10 + 0x58) + uVar9 * 8);
    if ((plVar11 != (long *)0x0) && (plVar11 = (long *)*plVar11, plVar11 != (long *)0x0)) {
      if (uVar8 < 2) {
        do {
          if (plVar11[1] == 0x51158b6ddb1ee2da) {
            if (plVar11[2] == 0x51158b6ddb1ee2da) goto LAB_026ae8f0;
          }
          else if ((plVar11[1] & uVar7 - 1) != uVar9) break;
          plVar11 = (long *)*plVar11;
        } while (plVar11 != (long *)0x0);
      }
      else {
        do {
          uVar8 = plVar11[1];
          if (uVar8 == 0x51158b6ddb1ee2da) {
            if (plVar11[2] == 0x51158b6ddb1ee2da) goto LAB_026ae8f0;
          }
          else {
            if (uVar7 <= uVar8) {
              uVar5 = 0;
              if (uVar7 != 0) {
                uVar5 = uVar8 / uVar7;
              }
              uVar8 = uVar8 - uVar5 * uVar7;
            }
            if (uVar8 != uVar9) break;
          }
          plVar11 = (long *)*plVar11;
        } while (plVar11 != (long *)0x0);
      }
    }
  }
LAB_026ae9ec:
  local_14 = 0;
LAB_026aea74:
  if (lStack_50 - local_58 == 0) {
    uVar13 = 1;
  }
  else {
    lVar10 = FUN_026b10e0((lStack_50 - local_58 >> 2) + -1);
    uVar13 = *(undefined4 *)(local_58 + lVar10 * 4);
  }
  FUN_026b1bb4(&local_58);
  return uVar13;
LAB_026ae8f0:
  plVar11 = (long *)plVar11[3];
  if (plVar11 != (long *)0x0) {
    plVar1 = plVar11 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    uVar7 = plVar11[0x14];
    if (uVar7 == 0) {
      iVar6 = 0;
    }
    else {
      uVar8 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
      uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
      uVar8 = (uVar8 + (uVar8 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar8 < 2) {
        uVar9 = uVar7 - 1 & 0x979aa79510596ac8;
      }
      else if (uVar7 < 0x979aa79510596ac9) {
        uVar9 = 0;
        if (uVar7 != 0) {
          uVar9 = 0x979aa79510596ac8 / uVar7;
        }
        uVar9 = 0x979aa79510596ac8 - uVar9 * uVar7;
      }
      else {
        uVar9 = 0x979aa79510596ac8;
      }
      plVar12 = *(long **)(plVar11[0x13] + uVar9 * 8);
      if (plVar12 == (long *)0x0) {
        iVar6 = 0;
      }
      else {
        plVar12 = (long *)*plVar12;
        if (plVar12 == (long *)0x0) {
          iVar6 = 0;
        }
        else if (uVar8 < 2) {
          do {
            if (plVar12[1] == 0x979aa79510596ac8) {
              if (plVar12[2] == -0x6865586aefa69538) goto LAB_026aea3c;
            }
            else if ((plVar12[1] & uVar7 - 1) != uVar9) {
              iVar6 = 0;
              break;
            }
            plVar12 = (long *)*plVar12;
            iVar6 = 0;
          } while (plVar12 != (long *)0x0);
        }
        else {
          do {
            uVar8 = plVar12[1];
            if (uVar8 == 0x979aa79510596ac8) {
              if (plVar12[2] == -0x6865586aefa69538) goto LAB_026aea3c;
            }
            else {
              if (uVar7 <= uVar8) {
                uVar5 = 0;
                if (uVar7 != 0) {
                  uVar5 = uVar8 / uVar7;
                }
                uVar8 = uVar8 - uVar5 * uVar7;
              }
              if (uVar8 != uVar9) {
                iVar6 = 0;
                goto LAB_026aea40;
              }
            }
            plVar12 = (long *)*plVar12;
          } while (plVar12 != (long *)0x0);
          iVar6 = 0;
        }
      }
    }
    goto LAB_026aea40;
  }
  goto LAB_026ae9ec;
LAB_026aea3c:
  iVar6 = (int)plVar12[6];
LAB_026aea40:
  do {
    iVar4 = (int)*plVar1 + -1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(int *)plVar1 = iVar4;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar4 == 0) {
    (**(code **)(*plVar11 + 0x10))();
  }
  local_14 = 0;
  if (0 < iVar6) {
    do {
      FUN_026b1728(&local_58,&local_14);
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  goto LAB_026aea74;
}


