/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01cc3a74; name: FUN_01cc3a74
 */


void FUN_01cc3a74(ulong param_1)

{
  bool bVar1;
  ulong uVar2;
  void *pvVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  long *plVar13;
  
  if (param_1 - 1 == 0) {
    param_1 = 2;
  }
  else if ((param_1 & param_1 - 1) != 0) {
    param_1 = std::__next_prime(param_1);
  }
  uVar6 = DAT_043d33e0;
  if (param_1 <= DAT_043d33e0) {
    if (param_1 < DAT_043d33e0) {
      uVar4 = (ulong)((float)DAT_043d33f0 / DAT_043d33f8);
      if ((DAT_043d33e0 < 3) ||
         (uVar8 = DAT_043d33e0 - (DAT_043d33e0 >> 1 & 0x5555555555555555),
         uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333),
         1 < (uVar8 + (uVar8 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) {
        uVar4 = std::__next_prime(uVar4);
      }
      else if (1 < uVar4) {
        uVar4 = 1L << ((ulong)(uint)-(int)LZCOUNT(uVar4 - 1) & 0x3f);
      }
      if (uVar4 <= param_1) {
        uVar4 = param_1;
      }
      if (uVar4 < uVar6) goto LAB_01cc3ab4;
    }
    return;
  }
  uVar4 = param_1;
LAB_01cc3ab4:
  pvVar3 = DAT_043d33d8;
  if (uVar4 == 0) {
    DAT_043d33d8 = (void *)0x0;
    if (pvVar3 != (void *)0x0) {
      operator_delete(pvVar3);
    }
    DAT_043d33e0 = 0;
  }
  else {
    lVar5 = FUN_01cc3ddc();
    pvVar3 = DAT_043d33d8;
    bVar1 = DAT_043d33d8 != (void *)0x0;
    DAT_043d33d8 = (void *)lVar5;
    if (bVar1) {
      operator_delete(pvVar3);
    }
    uVar8 = uVar4 - 1;
    uVar6 = uVar4 & 3;
    DAT_043d33e0 = uVar4;
    if (uVar8 < 3) {
      lVar5 = 0;
    }
    else {
      lVar5 = 0;
      do {
        lVar12 = lVar5 * 8;
        lVar5 = lVar5 + 4;
        *(undefined8 *)((long)DAT_043d33d8 + lVar12) = 0;
        *(undefined8 *)((long)DAT_043d33d8 + lVar12 + 8) = 0;
        *(undefined8 *)((long)DAT_043d33d8 + lVar12 + 0x10) = 0;
        *(undefined8 *)((long)DAT_043d33d8 + lVar12 + 0x18) = 0;
      } while (uVar4 - uVar6 != lVar5);
    }
    if (uVar6 != 0) {
      lVar5 = lVar5 << 3;
      do {
        *(undefined8 *)((long)DAT_043d33d8 + lVar5) = 0;
        uVar6 = uVar6 - 1;
        lVar5 = lVar5 + 8;
      } while (uVar6 != 0);
    }
    plVar7 = DAT_043d33e8;
    if (DAT_043d33e8 != (long *)0x0) {
      uVar6 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
      uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
      uVar9 = DAT_043d33e8[1];
      uVar6 = (uVar6 + (uVar6 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar6 < 2) {
        uVar9 = uVar9 & uVar8;
      }
      else if (uVar4 <= uVar9) {
        uVar2 = 0;
        if (uVar4 != 0) {
          uVar2 = uVar9 / uVar4;
        }
        uVar9 = uVar9 - uVar2 * uVar4;
      }
      *(long ***)((long)DAT_043d33d8 + uVar9 * 8) = &DAT_043d33e8;
      plVar10 = (long *)*plVar7;
      if (plVar10 != (long *)0x0) {
        if (uVar6 < 2) {
          do {
            uVar6 = plVar10[1] & uVar8;
            if (uVar6 != uVar9) {
              plVar11 = plVar10;
              if (*(long *)((long)DAT_043d33d8 + uVar6 * 8) == 0) {
                *(long **)((long)DAT_043d33d8 + uVar6 * 8) = plVar7;
                uVar9 = uVar6;
              }
              else {
                do {
                  plVar13 = plVar11;
                  plVar11 = (long *)*plVar13;
                  if (plVar11 == (long *)0x0) break;
                } while (plVar10[2] == plVar11[2]);
                *plVar7 = (long)plVar11;
                *plVar13 = **(long **)((long)DAT_043d33d8 + uVar6 * 8);
                **(undefined8 **)((long)DAT_043d33d8 + uVar6 * 8) = plVar10;
                plVar10 = plVar7;
              }
            }
            plVar11 = (long *)*plVar10;
            plVar7 = plVar10;
            plVar10 = plVar11;
          } while (plVar11 != (long *)0x0);
        }
        else {
          do {
            uVar6 = plVar10[1];
            if (uVar4 <= uVar6) {
              uVar8 = 0;
              if (uVar4 != 0) {
                uVar8 = uVar6 / uVar4;
              }
              uVar6 = uVar6 - uVar8 * uVar4;
            }
            if (uVar6 != uVar9) {
              if (*(long *)((long)DAT_043d33d8 + uVar6 * 8) == 0) {
                *(long **)((long)DAT_043d33d8 + uVar6 * 8) = plVar7;
                uVar9 = uVar6;
              }
              else {
                plVar11 = plVar10;
                do {
                  plVar13 = plVar11;
                  plVar11 = (long *)*plVar13;
                  if (plVar11 == (long *)0x0) break;
                } while (plVar10[2] == plVar11[2]);
                *plVar7 = (long)plVar11;
                *plVar13 = **(long **)((long)DAT_043d33d8 + uVar6 * 8);
                **(undefined8 **)((long)DAT_043d33d8 + uVar6 * 8) = plVar10;
                plVar10 = plVar7;
              }
            }
            plVar11 = (long *)*plVar10;
            plVar7 = plVar10;
            plVar10 = plVar11;
          } while (plVar11 != (long *)0x0);
        }
      }
    }
  }
  return;
}


