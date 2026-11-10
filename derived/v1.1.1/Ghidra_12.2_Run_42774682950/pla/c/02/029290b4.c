/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029290b4; name: FUN_029290b4
 */


void FUN_029290b4(long param_1,ulong *param_2)

{
  int iVar1;
  ulong *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  long *plVar11;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x3b0));
  uVar7 = *(ulong *)(param_1 + 0x70);
  if (uVar7 != 0) {
    uVar8 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
    uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
    uVar5 = *param_2;
    uVar8 = (uVar8 + (uVar8 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar8 < 2) {
      uVar9 = uVar7 - 1 & uVar5;
    }
    else {
      uVar9 = uVar5;
      if (uVar7 <= uVar5) {
        uVar9 = 0;
        if (uVar7 != 0) {
          uVar9 = uVar5 / uVar7;
        }
        uVar9 = uVar5 - uVar9 * uVar7;
      }
    }
    plVar10 = *(long **)(*(long *)(param_1 + 0x68) + uVar9 * 8);
    if ((plVar10 != (long *)0x0) && (plVar10 = (long *)*plVar10, plVar10 != (long *)0x0)) {
      if (uVar8 < 2) {
        do {
          if (plVar10[1] == uVar5) {
            if (plVar10[2] == uVar5) goto LAB_029291cc;
          }
          else if ((plVar10[1] & uVar7 - 1) != uVar9) break;
          plVar10 = (long *)*plVar10;
        } while (plVar10 != (long *)0x0);
      }
      else {
        do {
          uVar8 = plVar10[1];
          if (uVar8 == uVar5) {
            if (plVar10[2] == uVar5) goto LAB_029291cc;
          }
          else {
            if (uVar7 <= uVar8) {
              uVar4 = 0;
              if (uVar7 != 0) {
                uVar4 = uVar8 / uVar7;
              }
              uVar8 = uVar8 - uVar4 * uVar7;
            }
            if (uVar8 != uVar9) break;
          }
          plVar10 = (long *)*plVar10;
        } while (plVar10 != (long *)0x0);
      }
    }
  }
  goto LAB_029291f8;
LAB_029291cc:
  iVar1 = 0;
  if (0 < (int)plVar10[7]) {
    iVar1 = (int)plVar10[7] + -1;
  }
  *(int *)(plVar10 + 7) = iVar1;
  if (((iVar1 < 1) && (*(long *)(param_1 + 0x58) == 0)) && (*(int *)(param_1 + 0x60) < 1)) {
    puVar3 = *(undefined8 **)(param_1 + 0xd0);
    while ((puVar3 != *(undefined8 **)(param_1 + 0xd8) &&
           (plVar10 = (long *)*puVar3, (int)plVar10[4] < 1))) {
      if ((*(char *)((long)plVar10 + 0x25) != '\0') && (*(char *)((long)plVar10 + 0x26) == '\0')) {
        puVar2 = (ulong *)PTR_DAT_04379c88;
        if (*plVar10 != 0) {
          puVar2 = (ulong *)(*plVar10 + 0x58);
        }
        uVar7 = *(ulong *)(param_1 + 0x130);
        if (uVar7 == 0) goto LAB_02929350;
        uVar8 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
        uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
        uVar5 = *puVar2;
        uVar8 = (uVar8 + (uVar8 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (uVar8 < 2) {
          uVar9 = uVar7 - 1 & uVar5;
        }
        else {
          uVar9 = uVar5;
          if (uVar7 <= uVar5) {
            uVar9 = 0;
            if (uVar7 != 0) {
              uVar9 = uVar5 / uVar7;
            }
            uVar9 = uVar5 - uVar9 * uVar7;
          }
        }
        plVar11 = *(long **)(*(long *)(param_1 + 0x128) + uVar9 * 8);
        if ((plVar11 == (long *)0x0) || (plVar11 = (long *)*plVar11, plVar11 == (long *)0x0))
        goto LAB_02929350;
        if (1 < uVar8) goto LAB_029292fc;
        goto LAB_02929338;
      }
      puVar3 = puVar3 + 1;
    }
  }
  goto LAB_029291f8;
LAB_029292fc:
  do {
    uVar8 = plVar11[1];
    if (uVar8 == uVar5) {
      if (plVar11[2] == uVar5) goto LAB_0292937c;
    }
    else {
      if (uVar7 <= uVar8) {
        uVar4 = 0;
        if (uVar7 != 0) {
          uVar4 = uVar8 / uVar7;
        }
        uVar8 = uVar8 - uVar4 * uVar7;
      }
      if (uVar8 != uVar9) break;
    }
    plVar11 = (long *)*plVar11;
  } while (plVar11 != (long *)0x0);
  goto LAB_02929350;
LAB_0292937c:
  plVar6 = plVar11 + 3;
  plVar11 = plVar11 + 5;
  goto LAB_02929358;
  while (plVar11 = (long *)*plVar11, plVar11 != (long *)0x0) {
LAB_02929338:
    if (plVar11[1] == uVar5) {
      if (plVar11[2] == uVar5) goto LAB_0292937c;
    }
    else if ((plVar11[1] & uVar7 - 1) != uVar9) break;
  }
LAB_02929350:
  plVar6 = (long *)(param_1 + 0x110);
  plVar11 = (long *)(param_1 + 0x120);
LAB_02929358:
  uVar7 = FUN_0292ce60((int)*plVar6,0,plVar10,(int)*plVar11);
  if ((uVar7 & 1) == 0) {
    plVar10 = (long *)0x0;
  }
  *(long **)(param_1 + 0x58) = plVar10;
LAB_029291f8:
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x3b0));
  return;
}


