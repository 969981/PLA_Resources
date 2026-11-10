/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02928980; name: FUN_02928980
 */


void FUN_02928980(long param_1,ulong *param_2,undefined8 param_3,uint param_4)

{
  long *plVar1;
  ulong uVar2;
  float fVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  undefined4 local_68;
  float local_64;
  float fStack_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x3b0));
  uVar8 = *(ulong *)(param_1 + 0x70);
  if (uVar8 != 0) {
    uVar9 = uVar8 - (uVar8 >> 1 & 0x5555555555555555);
    uVar9 = (uVar9 & 0x3333333333333333) + (uVar9 >> 2 & 0x3333333333333333);
    uVar7 = *param_2;
    uVar9 = (uVar9 + (uVar9 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar9 < 2) {
      uVar10 = uVar8 - 1 & uVar7;
    }
    else {
      uVar10 = uVar7;
      if (uVar8 <= uVar7) {
        uVar10 = 0;
        if (uVar8 != 0) {
          uVar10 = uVar7 / uVar8;
        }
        uVar10 = uVar7 - uVar10 * uVar8;
      }
    }
    plVar11 = *(long **)(*(long *)(param_1 + 0x68) + uVar10 * 8);
    if ((plVar11 != (long *)0x0) && (plVar11 = (long *)*plVar11, plVar11 != (long *)0x0)) {
      if (uVar9 < 2) {
        do {
          if (plVar11[1] == uVar7) {
            if (plVar11[2] == uVar7) goto LAB_02928aac;
          }
          else if ((plVar11[1] & uVar8 - 1) != uVar10) break;
          plVar11 = (long *)*plVar11;
        } while (plVar11 != (long *)0x0);
      }
      else {
        do {
          uVar9 = plVar11[1];
          if (uVar9 == uVar7) {
            if (plVar11[2] == uVar7) goto LAB_02928aac;
          }
          else {
            if (uVar8 <= uVar9) {
              uVar2 = 0;
              if (uVar8 != 0) {
                uVar2 = uVar9 / uVar8;
              }
              uVar9 = uVar9 - uVar2 * uVar8;
            }
            if (uVar9 != uVar10) break;
          }
          plVar11 = (long *)*plVar11;
        } while (plVar11 != (long *)0x0);
      }
    }
  }
  goto LAB_02928c00;
LAB_02928aac:
  lVar6 = *(long *)(param_1 + 0x58);
  plVar1 = plVar11 + 3;
  if (((lVar6 == 0) || (*(char *)(lVar6 + 0x26) == '\0')) || (*(int *)(lVar6 + 0x28) != 3)) {
    bVar4 = false;
  }
  else {
    bVar4 = *(int *)(lVar6 + 0x94) == 0;
  }
  FUN_0292f77c(&local_68,param_1 + 0x108,lVar6,plVar1,param_3);
  plVar5 = *(long **)(param_1 + 0x58);
  if (plVar5 == (long *)0x0) {
    plVar5 = *(long **)(param_1 + 0xd0);
    do {
      if (plVar5 == *(long **)(param_1 + 0xd8)) {
        if (0 < (int)plVar11[4]) goto LAB_02928b9c;
        goto LAB_02928c24;
      }
      lVar6 = *plVar5;
      plVar5 = plVar5 + 1;
    } while (*(int *)(lVar6 + 0x20) < 1);
    if ((int)plVar11[4] <= *(int *)(lVar6 + 8)) {
LAB_02928c24:
      if (*(char *)((long)plVar11 + 0x3c) == '\0') goto LAB_02928c00;
      *(undefined1 *)((long)plVar11 + 0x3d) = 1;
      if (*(int *)((long)plVar11 + 0xac) == 5) {
        *(undefined4 *)((long)plVar11 + 0xac) = 0;
      }
joined_r0x02928c44:
      if ((param_4 & 1) == 0) {
        *(undefined4 *)(plVar11 + 8) = 0;
      }
      else {
        *(undefined4 *)(plVar11 + 8) = 1;
      }
      goto LAB_02928c00;
    }
  }
  else if (plVar5 != plVar1) {
    if ((int)plVar11[4] < (int)plVar5[1]) {
      if (*(char *)((long)plVar11 + 0x3c) == '\0') goto LAB_02928c00;
      *(undefined1 *)((long)plVar11 + 0x3d) = 1;
      if (*(int *)((long)plVar11 + 0xac) == 5) {
        *(undefined4 *)((long)plVar11 + 0xac) = 0;
      }
      goto joined_r0x02928c44;
    }
    FUN_0292cd68(local_64,local_5c,plVar5,local_54);
  }
LAB_02928b9c:
  if (*(int *)(param_1 + 0x60) < 1) {
    fVar3 = fStack_60 + local_64;
    if (!bVar4) {
      fVar3 = fStack_60;
    }
    uVar8 = FUN_0292cb0c(local_68,fVar3,plVar1,local_58,param_4 & 1);
    if ((uVar8 & 1) == 0) {
      lVar6 = *(long *)(param_1 + 0x58);
      if (((lVar6 != 0) && (*(char *)(lVar6 + 0x25) != '\0')) && (*(char *)(lVar6 + 0x26) == '\0'))
      {
        FUN_0292ce60(0,0,lVar6,4);
      }
      goto LAB_02928c00;
    }
  }
  else if (*(char *)((long)plVar11 + 0x3c) != '\0') {
    *(undefined1 *)((long)plVar11 + 0x3d) = 1;
    if (*(int *)((long)plVar11 + 0xac) == 5) {
      *(undefined4 *)((long)plVar11 + 0xac) = 0;
    }
    *(uint *)(plVar11 + 8) = param_4 & 1;
  }
  *(long **)(param_1 + 0x58) = plVar1;
LAB_02928c00:
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x3b0));
  return;
}


