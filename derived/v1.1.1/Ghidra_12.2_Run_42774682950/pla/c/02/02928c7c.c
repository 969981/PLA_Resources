/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02928c7c; name: FUN_02928c7c
 */


void FUN_02928c7c(long param_1,ulong *param_2,undefined8 param_3,ulong param_4)

{
  long *plVar1;
  long *plVar2;
  int iVar3;
  ulong uVar4;
  float fVar5;
  bool bVar6;
  ulong uVar7;
  char cVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  long lVar13;
  undefined4 local_78;
  float local_74;
  float fStack_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x3b0));
  uVar9 = *(ulong *)(param_1 + 0x70);
  if (uVar9 != 0) {
    uVar10 = uVar9 - (uVar9 >> 1 & 0x5555555555555555);
    uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333);
    uVar7 = *param_2;
    uVar10 = (uVar10 + (uVar10 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar10 < 2) {
      uVar11 = uVar9 - 1 & uVar7;
    }
    else {
      uVar11 = uVar7;
      if (uVar9 <= uVar7) {
        uVar11 = 0;
        if (uVar9 != 0) {
          uVar11 = uVar7 / uVar9;
        }
        uVar11 = uVar7 - uVar11 * uVar9;
      }
    }
    plVar12 = *(long **)(*(long *)(param_1 + 0x68) + uVar11 * 8);
    if ((plVar12 != (long *)0x0) && (plVar12 = (long *)*plVar12, plVar12 != (long *)0x0)) {
      if (uVar10 < 2) {
        do {
          if (plVar12[1] == uVar7) {
            if (plVar12[2] == uVar7) goto LAB_02928dac;
          }
          else if ((plVar12[1] & uVar9 - 1) != uVar11) break;
          plVar12 = (long *)*plVar12;
        } while (plVar12 != (long *)0x0);
      }
      else {
        do {
          uVar10 = plVar12[1];
          if (uVar10 == uVar7) {
            if (plVar12[2] == uVar7) goto LAB_02928dac;
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
          plVar12 = (long *)*plVar12;
        } while (plVar12 != (long *)0x0);
      }
    }
  }
  goto LAB_02928ec8;
LAB_02928dac:
  plVar1 = plVar12 + 3;
  for (plVar2 = *(long **)(param_1 + 0xd0);
      (plVar2 != *(long **)(param_1 + 0xd8) && (lVar13 = *plVar2, *(int *)(lVar13 + 0x20) < 1));
      plVar2 = plVar2 + 1) {
    if ((*(char *)(lVar13 + 0x25) != '\0') && (*(char *)(lVar13 + 0x26) == '\0')) goto LAB_02928df4;
  }
  lVar13 = 0;
LAB_02928df4:
  if ((*(char *)((long)plVar12 + 0x3e) == '\0') || ((int)plVar12[8] != 3)) {
    bVar6 = false;
  }
  else {
    bVar6 = *(int *)((long)plVar12 + 0xac) == 0;
  }
  FUN_0292f77c(&local_78,param_1 + 0x108,plVar1,lVar13,param_3);
  if (*(char *)((long)plVar12 + 0x2a) == '\0') {
    cVar8 = (char)plVar12[0x18];
    iVar3 = (int)plVar12[0x14];
  }
  else {
    cVar8 = '\x01';
    iVar3 = (int)plVar12[0x14];
  }
  if (iVar3 != 0) {
    if (cVar8 == '\0' && (char)plVar12[5] == '\0') {
      FUN_0292db1c(local_74,local_6c,plVar12 + 10,local_64);
    }
    else {
      FUN_0292d3a4();
    }
  }
  if ((param_4 & 1) == 0) {
    *(undefined4 *)(plVar12 + 8) = 0;
    *(undefined2 *)((long)plVar12 + 0x3d) = 0;
    if ((char)plVar12[5] != '\0') {
      FUN_0292cc6c(plVar1);
    }
    if (*(long **)(param_1 + 0x58) == plVar1) {
      if ((lVar13 == 0) || (0 < *(int *)(param_1 + 0x60))) {
        *(undefined8 *)(param_1 + 0x58) = 0;
      }
      else {
        fVar5 = fStack_70 + local_74;
        if (!bVar6) {
          fVar5 = fStack_70;
        }
        uVar9 = FUN_0292ce60(local_78,fVar5,lVar13,local_68);
        if ((uVar9 & 1) == 0) {
          do {
            plVar12 = *(long **)(param_1 + 0xd0);
            while( true ) {
              if ((plVar12 == *(long **)(param_1 + 0xd8)) ||
                 (lVar13 = *plVar12, 0 < *(int *)(lVar13 + 0x20))) goto LAB_02928ec8;
              if ((*(char *)(lVar13 + 0x25) != '\0') && (*(char *)(lVar13 + 0x26) == '\0')) break;
              plVar12 = plVar12 + 1;
            }
            uVar9 = FUN_0292ce60(local_78,fVar5,lVar13,local_68);
          } while ((uVar9 & 1) == 0);
          *(long *)(param_1 + 0x58) = lVar13;
        }
        else {
          *(long *)(param_1 + 0x58) = lVar13;
        }
      }
    }
  }
  else {
    *(undefined4 *)(plVar12 + 8) = 4;
  }
LAB_02928ec8:
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x3b0));
  return;
}


