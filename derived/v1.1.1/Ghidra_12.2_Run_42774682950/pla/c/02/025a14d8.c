/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 025a14d8; name: FUN_025a14d8
 */


void FUN_025a14d8(long param_1,uint param_2)

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
      uVar9 = uVar7 - 1 & 0xe61d0118e24b8e78;
    }
    else if (uVar7 < 0xe61d0118e24b8e79) {
      uVar9 = 0;
      if (uVar7 != 0) {
        uVar9 = 0xe61d0118e24b8e78 / uVar7;
      }
      uVar9 = 0xe61d0118e24b8e78 - uVar9 * uVar7;
    }
    else {
      uVar9 = 0xe61d0118e24b8e78;
    }
    plVar11 = *(long **)(*(long *)(lVar10 + 0x58) + uVar9 * 8);
    if ((plVar11 != (long *)0x0) && (plVar11 = (long *)*plVar11, plVar11 != (long *)0x0)) {
      if (uVar8 < 2) {
        do {
          if (plVar11[1] == 0xe61d0118e24b8e78) {
            if (plVar11[2] == -0x19e2fee71db47188) goto LAB_025a15ac;
          }
          else if ((plVar11[1] & uVar7 - 1) != uVar9) goto LAB_025a16a8;
          plVar11 = (long *)*plVar11;
          iVar6 = 0;
        } while (plVar11 != (long *)0x0);
        goto LAB_025a1718;
      }
      do {
        uVar8 = plVar11[1];
        if (uVar8 == 0xe61d0118e24b8e78) {
          if (plVar11[2] == -0x19e2fee71db47188) goto LAB_025a15ac;
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
LAB_025a16a8:
  iVar6 = 0;
LAB_025a1718:
  *(int *)(param_1 + 0x74) = iVar6;
  *(int *)(param_1 + 0x78) = iVar6;
  if (*(undefined1 **)(param_1 + 0x80) != &DAT_cbf29ce484222645) {
    FUN_025a670c(param_1,*(undefined1 **)(param_1 + 0x80),param_2 & 1);
  }
  *(undefined4 *)(param_1 + 0x70) = 2;
  return;
LAB_025a15ac:
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
        uVar9 = uVar7 - 1 & 0x45464cf274b5cdcb;
      }
      else if (uVar7 < 0x45464cf274b5cdcc) {
        uVar9 = 0;
        if (uVar7 != 0) {
          uVar9 = 0x45464cf274b5cdcb / uVar7;
        }
        uVar9 = 0x45464cf274b5cdcb - uVar9 * uVar7;
      }
      else {
        uVar9 = 0x45464cf274b5cdcb;
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
            if (plVar12[1] == 0x45464cf274b5cdcb) {
              if (plVar12[2] == 0x45464cf274b5cdcb) goto LAB_025a16f8;
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
            if (uVar8 == 0x45464cf274b5cdcb) {
              if (plVar12[2] == 0x45464cf274b5cdcb) goto LAB_025a16f8;
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
                goto LAB_025a1704;
              }
            }
            plVar12 = (long *)*plVar12;
          } while (plVar12 != (long *)0x0);
          iVar6 = 0;
        }
      }
    }
    goto LAB_025a1704;
  }
  goto LAB_025a16a8;
LAB_025a16f8:
  iVar6 = (int)plVar12[6] * 0x708;
LAB_025a1704:
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
  goto LAB_025a1718;
}


