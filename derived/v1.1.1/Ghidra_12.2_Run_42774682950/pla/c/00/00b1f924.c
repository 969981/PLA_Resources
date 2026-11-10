/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00b1f924; name: FUN_00b1f924
 */


undefined8 FUN_00b1f924(long param_1,int param_2,ulong *param_3,long *param_4)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  
  uVar8 = *(ulong *)(param_1 + 0xa0);
  if (uVar8 == 0) {
    return 0;
  }
  uVar3 = *param_3;
  uVar7 = *(ulong *)(&DAT_0388a340 + (long)param_2 * 8);
  uVar5 = uVar8 - (uVar8 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar5 = (uVar5 + (uVar5 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
  if (uVar5 < 2) {
    uVar9 = uVar8 - 1 & uVar7;
  }
  else if (uVar7 < uVar8) {
    uVar9 = uVar7;
  }
  else {
    uVar9 = 0;
    if (uVar8 != 0) {
      uVar9 = uVar7 / uVar8;
    }
    uVar9 = uVar7 - uVar9 * uVar8;
  }
  plVar6 = *(long **)(*(long *)(param_1 + 0x98) + uVar9 * 8);
  if (plVar6 == (long *)0x0) {
    return 0;
  }
  plVar6 = (long *)*plVar6;
  if (plVar6 == (long *)0x0) {
    return 0;
  }
  if (uVar5 < 2) {
    do {
      if (plVar6[1] == uVar7) {
        if (plVar6[2] == uVar7) goto LAB_00b1f9cc;
      }
      else if ((plVar6[1] & uVar8 - 1) != uVar9) {
        return 0;
      }
      plVar6 = (long *)*plVar6;
      if (plVar6 == (long *)0x0) {
        return 0;
      }
    } while( true );
  }
  do {
    uVar5 = plVar6[1];
    if (uVar5 == uVar7) {
      if (plVar6[2] == uVar7) break;
    }
    else {
      if (uVar8 <= uVar5) {
        uVar1 = 0;
        if (uVar8 != 0) {
          uVar1 = uVar5 / uVar8;
        }
        uVar5 = uVar5 - uVar1 * uVar8;
      }
      if (uVar5 != uVar9) {
        return 0;
      }
    }
    plVar6 = (long *)*plVar6;
    if (plVar6 == (long *)0x0) {
      return 0;
    }
  } while( true );
LAB_00b1f9cc:
  uVar8 = plVar6[4];
  if (uVar8 != 0) {
    uVar5 = uVar8 - (uVar8 >> 1 & 0x5555555555555555);
    uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
    uVar5 = (uVar5 + (uVar5 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar5 < 2) {
      uVar7 = uVar8 - 1 & uVar3;
    }
    else if (uVar3 < uVar8) {
      uVar7 = uVar3;
    }
    else {
      uVar7 = 0;
      if (uVar8 != 0) {
        uVar7 = uVar3 / uVar8;
      }
      uVar7 = uVar3 - uVar7 * uVar8;
    }
    plVar6 = *(long **)(plVar6[3] + uVar7 * 8);
    if ((plVar6 != (long *)0x0) && (plVar6 = (long *)*plVar6, plVar6 != (long *)0x0)) {
      if (uVar5 < 2) {
        do {
          if (plVar6[1] == uVar3) {
            if (plVar6[2] == uVar3) goto LAB_00b1fb34;
          }
          else if ((plVar6[1] & uVar8 - 1) != uVar7) {
            return 0;
          }
          plVar6 = (long *)*plVar6;
          if (plVar6 == (long *)0x0) {
            return 0;
          }
        } while( true );
      }
      do {
        uVar5 = plVar6[1];
        if (uVar5 == uVar3) {
          if (plVar6[2] == uVar3) {
LAB_00b1fb34:
            plVar4 = (long *)plVar6[3];
            if (plVar4 != (long *)0x0) {
              (**(code **)(*plVar4 + 0x18))(plVar4);
            }
            plVar2 = (long *)*param_4;
            *param_4 = (long)plVar4;
            if (plVar2 != (long *)0x0) {
              (**(code **)(*plVar2 + 0x20))();
            }
            plVar4 = (long *)plVar6[4];
            if (plVar4 != (long *)0x0) {
              (**(code **)(*plVar4 + 0x18))(plVar4);
            }
            plVar2 = (long *)param_4[1];
            param_4[1] = (long)plVar4;
            if (plVar2 != (long *)0x0) {
              (**(code **)(*plVar2 + 0x20))();
            }
            *(int *)(param_4 + 2) = (int)plVar6[5];
            return 1;
          }
        }
        else {
          if (uVar8 <= uVar5) {
            uVar9 = 0;
            if (uVar8 != 0) {
              uVar9 = uVar5 / uVar8;
            }
            uVar5 = uVar5 - uVar9 * uVar8;
          }
          if (uVar5 != uVar7) {
            return 0;
          }
        }
        plVar6 = (long *)*plVar6;
        if (plVar6 == (long *)0x0) {
          return 0;
        }
      } while( true );
    }
  }
  return 0;
}


