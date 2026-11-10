/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01c601f8; name: FUN_01c601f8
 */


void FUN_01c601f8(long param_1,int param_2,ulong param_3)

{
  long *plVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  int iVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  undefined4 uVar14;
  long *local_38;
  
  if (((*PTR_DAT_04379660 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_04379660), iVar6 != 0))
  {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar11 = *(long *)PTR_DAT_04379668;
  *(long *)PTR_DAT_04379670 = lVar11;
  uVar8 = *(ulong *)(lVar11 + 0x60);
  uVar14 = 0;
  if (uVar8 != 0) {
    uVar9 = uVar8 - (uVar8 >> 1 & 0x5555555555555555);
    uVar9 = (uVar9 & 0x3333333333333333) + (uVar9 >> 2 & 0x3333333333333333);
    uVar9 = (uVar9 + (uVar9 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar9 < 2) {
      uVar10 = uVar8 - 1 & 0xe61d0118e24b8e78;
    }
    else if (uVar8 < 0xe61d0118e24b8e79) {
      uVar10 = 0;
      if (uVar8 != 0) {
        uVar10 = 0xe61d0118e24b8e78 / uVar8;
      }
      uVar10 = 0xe61d0118e24b8e78 - uVar10 * uVar8;
    }
    else {
      uVar10 = 0xe61d0118e24b8e78;
    }
    plVar12 = *(long **)(*(long *)(lVar11 + 0x58) + uVar10 * 8);
    if ((plVar12 != (long *)0x0) && (plVar12 = (long *)*plVar12, plVar12 != (long *)0x0)) {
      if (uVar9 < 2) {
        do {
          if (plVar12[1] == 0xe61d0118e24b8e78) {
            if (plVar12[2] == -0x19e2fee71db47188) goto LAB_01c602dc;
          }
          else if ((plVar12[1] & uVar8 - 1) != uVar10) break;
          plVar12 = (long *)*plVar12;
        } while (plVar12 != (long *)0x0);
      }
      else {
        do {
          uVar9 = plVar12[1];
          if (uVar9 == 0xe61d0118e24b8e78) {
            if (plVar12[2] == -0x19e2fee71db47188) goto LAB_01c602dc;
          }
          else {
            if (uVar8 <= uVar9) {
              uVar5 = 0;
              if (uVar8 != 0) {
                uVar5 = uVar9 / uVar8;
              }
              uVar9 = uVar9 - uVar5 * uVar8;
            }
            if (uVar9 != uVar10) break;
          }
          plVar12 = (long *)*plVar12;
        } while (plVar12 != (long *)0x0);
      }
    }
  }
LAB_01c60438:
  lVar11 = *(long *)(param_1 + 0x380);
joined_r0x01c6046c:
  if (lVar11 == 0) {
    return;
  }
  FUN_0192af0c(&local_38);
  if (local_38 == (long *)0x0) {
    return;
  }
  if ((param_3 & 1) == 0) {
    FUN_01f1f340(uVar14,local_38,2);
  }
  else {
    if (param_2 == 3) {
      uVar7 = 7;
    }
    else {
      if (param_2 != 2) goto LAB_01c60498;
      uVar7 = 0x10;
    }
    FUN_01f1f0b4(uVar14,local_38,2,uVar7);
  }
  if (local_38 == (long *)0x0) {
    return;
  }
LAB_01c60498:
  lVar11 = local_38[0xb];
  piVar2 = (int *)(lVar11 + 0xc);
  do {
    iVar6 = *piVar2;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
    if (bVar4) {
      *piVar2 = iVar6 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar6 + -1 == 0) {
    *(undefined8 *)(lVar11 + 0x18) = 0;
    (**(code **)(*local_38 + 0x20))();
  }
  return;
LAB_01c602dc:
  plVar12 = (long *)plVar12[3];
  if (plVar12 != (long *)0x0) {
    plVar1 = plVar12 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    uVar8 = plVar12[0x21];
    uVar14 = 0;
    if (uVar8 != 0) {
      uVar9 = uVar8 - (uVar8 >> 1 & 0x5555555555555555);
      uVar9 = (uVar9 & 0x3333333333333333) + (uVar9 >> 2 & 0x3333333333333333);
      uVar9 = (uVar9 + (uVar9 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar9 < 2) {
        uVar10 = uVar8 - 1 & 0x6011a72fc69fd126;
      }
      else if (uVar8 < 0x6011a72fc69fd127) {
        uVar10 = 0;
        if (uVar8 != 0) {
          uVar10 = 0x6011a72fc69fd126 / uVar8;
        }
        uVar10 = 0x6011a72fc69fd126 - uVar10 * uVar8;
      }
      else {
        uVar10 = 0x6011a72fc69fd126;
      }
      plVar13 = *(long **)(plVar12[0x20] + uVar10 * 8);
      if ((plVar13 != (long *)0x0) && (plVar13 = (long *)*plVar13, plVar13 != (long *)0x0)) {
        if (uVar9 < 2) {
          do {
            if (plVar13[1] == 0x6011a72fc69fd126) {
              if (plVar13[2] == 0x6011a72fc69fd126) goto LAB_01c60420;
            }
            else if ((plVar13[1] & uVar8 - 1) != uVar10) break;
            plVar13 = (long *)*plVar13;
          } while (plVar13 != (long *)0x0);
        }
        else {
          do {
            uVar9 = plVar13[1];
            if (uVar9 == 0x6011a72fc69fd126) {
              if (plVar13[2] == 0x6011a72fc69fd126) goto LAB_01c60420;
            }
            else {
              if (uVar8 <= uVar9) {
                uVar5 = 0;
                if (uVar8 != 0) {
                  uVar5 = uVar9 / uVar8;
                }
                uVar9 = uVar9 - uVar5 * uVar8;
              }
              if (uVar9 != uVar10) break;
            }
            plVar13 = (long *)*plVar13;
          } while (plVar13 != (long *)0x0);
        }
      }
    }
    goto LAB_01c60424;
  }
  goto LAB_01c60438;
LAB_01c60420:
  uVar14 = (undefined4)plVar13[6];
LAB_01c60424:
  do {
    iVar6 = (int)*plVar1 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = iVar6;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar6 != 0) goto LAB_01c60438;
  (**(code **)(*plVar12 + 0x10))();
  lVar11 = *(long *)(param_1 + 0x380);
  goto joined_r0x01c6046c;
}


