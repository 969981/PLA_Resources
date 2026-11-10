/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01cc37bc; name: FUN_01cc37bc
 */


void FUN_01cc37bc(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  ulong unaff_x25;
  ulong uVar8;
  
  if (param_1 != param_2) {
    lVar2 = tpidr_el0;
    do {
      plVar4 = DAT_043f1798;
      uVar8 = DAT_043d33e0;
      uVar7 = *param_1;
      if (DAT_043d33e0 == 0) {
LAB_01cc38e4:
        plVar6 = *(long **)(lVar2 + 0x20);
        if (*(long **)(lVar2 + 0x20) == (long *)0x0) {
          *(long **)(lVar2 + 0x20) = DAT_043f1798;
          plVar6 = plVar4;
        }
        plVar4 = (long *)(**(code **)(*plVar6 + 0x10))(plVar6,0x20,8);
        uVar5 = param_1[1];
        plVar4[2] = *param_1;
        plVar4[3] = uVar5;
        *plVar4 = 0;
        plVar4[1] = uVar7;
        if ((uVar8 == 0) || (DAT_043d33f8 * (float)uVar8 < (float)(DAT_043d33f0 + 1))) {
          uVar8 = (ulong)(uVar8 < 3 || (uVar8 & uVar8 - 1) != 0) | uVar8 << 1;
          uVar5 = (ulong)((float)(DAT_043d33f0 + 1) / DAT_043d33f8);
          if (uVar5 <= uVar8) {
            uVar5 = uVar8;
          }
          FUN_01cc3a74(uVar5);
          uVar8 = DAT_043d33e0;
          if ((DAT_043d33e0 & DAT_043d33e0 - 1) == 0) {
            unaff_x25 = DAT_043d33e0 - 1 & uVar7;
          }
          else if (uVar7 < DAT_043d33e0) {
            unaff_x25 = uVar7;
          }
          else {
            uVar5 = 0;
            if (DAT_043d33e0 != 0) {
              uVar5 = uVar7 / DAT_043d33e0;
            }
            unaff_x25 = uVar7 - uVar5 * DAT_043d33e0;
          }
        }
        lVar3 = DAT_043d33d8;
        plVar6 = *(long **)(DAT_043d33d8 + unaff_x25 * 8);
        if (plVar6 == (long *)0x0) {
          *plVar4 = (long)DAT_043d33e8;
          DAT_043d33e8 = plVar4;
          *(long ***)(lVar3 + unaff_x25 * 8) = &DAT_043d33e8;
          if (*plVar4 != 0) {
            uVar7 = *(ulong *)(*plVar4 + 8);
            if ((uVar8 & uVar8 - 1) == 0) {
              uVar7 = uVar7 & uVar8 - 1;
            }
            else if (uVar8 <= uVar7) {
              uVar5 = 0;
              if (uVar8 != 0) {
                uVar5 = uVar7 / uVar8;
              }
              uVar7 = uVar7 - uVar5 * uVar8;
            }
            plVar6 = (long *)(DAT_043d33d8 + uVar7 * 8);
            goto LAB_01cc39bc;
          }
        }
        else {
          *plVar4 = *plVar6;
LAB_01cc39bc:
          *plVar6 = (long)plVar4;
        }
        DAT_043d33f0 = DAT_043d33f0 + 1;
      }
      else {
        uVar5 = DAT_043d33e0 - (DAT_043d33e0 >> 1 & 0x5555555555555555);
        uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
        uVar5 = (uVar5 + (uVar5 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (uVar5 < 2) {
          unaff_x25 = DAT_043d33e0 - 1 & uVar7;
        }
        else {
          unaff_x25 = uVar7;
          if (DAT_043d33e0 <= uVar7) {
            uVar1 = 0;
            if (DAT_043d33e0 != 0) {
              uVar1 = uVar7 / DAT_043d33e0;
            }
            unaff_x25 = uVar7 - uVar1 * DAT_043d33e0;
          }
        }
        plVar6 = *(long **)(DAT_043d33d8 + unaff_x25 * 8);
        if (plVar6 == (long *)0x0) goto LAB_01cc38e4;
        if (uVar5 < 2) {
          do {
            plVar6 = (long *)*plVar6;
            if ((plVar6 == (long *)0x0) ||
               (plVar6[1] != uVar7 && (plVar6[1] & DAT_043d33e0 - 1) != unaff_x25))
            goto LAB_01cc38e4;
          } while (plVar6[2] != uVar7);
        }
        else {
          do {
            plVar6 = (long *)*plVar6;
            if (plVar6 == (long *)0x0) goto LAB_01cc38e4;
            uVar5 = plVar6[1];
            if (uVar5 != uVar7) {
              if (DAT_043d33e0 <= uVar5) {
                uVar1 = 0;
                if (DAT_043d33e0 != 0) {
                  uVar1 = uVar5 / DAT_043d33e0;
                }
                uVar5 = uVar5 - uVar1 * DAT_043d33e0;
              }
              if (uVar5 != unaff_x25) goto LAB_01cc38e4;
            }
          } while (plVar6[2] != uVar7);
        }
      }
      param_1 = param_1 + 2;
    } while (param_1 != param_2);
  }
  return;
}


