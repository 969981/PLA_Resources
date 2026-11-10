/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02667088; name: FUN_02667088
 */


undefined4 FUN_02667088(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  int iVar6;
  undefined1 *puVar7;
  ulong uVar8;
  undefined1 *puVar9;
  long lVar10;
  long *plVar11;
  ulong uVar12;
  ulong uVar13;
  undefined1 *puVar14;
  long *plVar15;
  undefined4 uVar16;
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
  puVar7 = *(undefined1 **)(lVar10 + 0x60);
  if (puVar7 != (undefined1 *)0x0) {
    uVar8 = (long)puVar7 - ((ulong)puVar7 >> 1 & 0x5555555555555555);
    uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
    uVar8 = (uVar8 + (uVar8 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar8 < 2) {
      puVar9 = (undefined1 *)((ulong)(puVar7 + -1) & 0xa47c00866f39edf3);
    }
    else if (&DAT_a47c00866f39edf3 < puVar7) {
      puVar9 = &DAT_a47c00866f39edf3;
    }
    else {
      uVar12 = 0;
      if (puVar7 != (undefined1 *)0x0) {
        uVar12 = 0xa47c00866f39edf3 / (ulong)puVar7;
      }
      puVar9 = &DAT_a47c00866f39edf3 + -(uVar12 * (long)puVar7);
    }
    plVar11 = *(long **)(*(long *)(lVar10 + 0x58) + (long)puVar9 * 8);
    if ((plVar11 != (long *)0x0) && (plVar11 = (long *)*plVar11, plVar11 != (long *)0x0)) {
      if (uVar8 < 2) {
        do {
          if ((undefined1 *)plVar11[1] == &DAT_a47c00866f39edf3) {
            if ((undefined1 *)plVar11[2] == &DAT_a47c00866f39edf3) goto LAB_02667170;
          }
          else if ((undefined1 *)((ulong)plVar11[1] & (ulong)(puVar7 + -1)) != puVar9) break;
          plVar11 = (long *)*plVar11;
        } while (plVar11 != (long *)0x0);
      }
      else {
        do {
          puVar14 = (undefined1 *)plVar11[1];
          if (puVar14 == &DAT_a47c00866f39edf3) {
            if ((undefined1 *)plVar11[2] == &DAT_a47c00866f39edf3) goto LAB_02667170;
          }
          else {
            if (puVar7 <= puVar14) {
              uVar8 = 0;
              if (puVar7 != (undefined1 *)0x0) {
                uVar8 = (ulong)puVar14 / (ulong)puVar7;
              }
              puVar14 = puVar14 + -(uVar8 * (long)puVar7);
            }
            if (puVar14 != puVar9) break;
          }
          plVar11 = (long *)*plVar11;
        } while (plVar11 != (long *)0x0);
      }
    }
  }
LAB_0266726c:
  local_14 = 0;
LAB_026672f4:
  if (lStack_50 - local_58 == 0) {
    uVar16 = 1;
  }
  else {
    lVar10 = FUN_026685b0((lStack_50 - local_58 >> 2) + -1);
    uVar16 = *(undefined4 *)(local_58 + lVar10 * 4);
  }
  FUN_0266907c(&local_58);
  return uVar16;
LAB_02667170:
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
    uVar8 = plVar11[0x14];
    if (uVar8 == 0) {
      iVar6 = 0;
    }
    else {
      uVar12 = uVar8 - (uVar8 >> 1 & 0x5555555555555555);
      uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
      uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar12 < 2) {
        uVar13 = uVar8 - 1 & 0x979aa79510596ac8;
      }
      else if (uVar8 < 0x979aa79510596ac9) {
        uVar13 = 0;
        if (uVar8 != 0) {
          uVar13 = 0x979aa79510596ac8 / uVar8;
        }
        uVar13 = 0x979aa79510596ac8 - uVar13 * uVar8;
      }
      else {
        uVar13 = 0x979aa79510596ac8;
      }
      plVar15 = *(long **)(plVar11[0x13] + uVar13 * 8);
      if (plVar15 == (long *)0x0) {
        iVar6 = 0;
      }
      else {
        plVar15 = (long *)*plVar15;
        if (plVar15 == (long *)0x0) {
          iVar6 = 0;
        }
        else if (uVar12 < 2) {
          do {
            if (plVar15[1] == 0x979aa79510596ac8) {
              if (plVar15[2] == -0x6865586aefa69538) goto LAB_026672bc;
            }
            else if ((plVar15[1] & uVar8 - 1) != uVar13) {
              iVar6 = 0;
              break;
            }
            plVar15 = (long *)*plVar15;
            iVar6 = 0;
          } while (plVar15 != (long *)0x0);
        }
        else {
          do {
            uVar12 = plVar15[1];
            if (uVar12 == 0x979aa79510596ac8) {
              if (plVar15[2] == -0x6865586aefa69538) goto LAB_026672bc;
            }
            else {
              if (uVar8 <= uVar12) {
                uVar5 = 0;
                if (uVar8 != 0) {
                  uVar5 = uVar12 / uVar8;
                }
                uVar12 = uVar12 - uVar5 * uVar8;
              }
              if (uVar12 != uVar13) {
                iVar6 = 0;
                goto LAB_026672c0;
              }
            }
            plVar15 = (long *)*plVar15;
          } while (plVar15 != (long *)0x0);
          iVar6 = 0;
        }
      }
    }
    goto LAB_026672c0;
  }
  goto LAB_0266726c;
LAB_026672bc:
  iVar6 = (int)plVar15[6];
LAB_026672c0:
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
      FUN_02668bf0(&local_58,&local_14);
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  goto LAB_026672f4;
}


