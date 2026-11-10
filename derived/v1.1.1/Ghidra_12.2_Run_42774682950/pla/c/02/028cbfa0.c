/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028cbfa0; name: FUN_028cbfa0
 */


void FUN_028cbfa0(long *param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  ulong unaff_x26;
  ulong uVar11;
  ulong uVar12;
  
  lVar2 = *(long *)(param_2 + 0x10);
  lVar4 = *(long *)(param_2 + 0x18);
  lVar3 = *(long *)(param_2 + 0x20);
  lVar5 = *(long *)(param_2 + 0x28);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = lVar3;
  param_1[5] = lVar5;
  param_1[2] = lVar2;
  param_1[3] = lVar4;
  lVar2 = *(long *)(param_2 + 0x38);
  lVar3 = *(long *)(param_2 + 0x48);
  lVar4 = *(long *)(param_2 + 0x50);
  param_1[8] = *(long *)(param_2 + 0x40);
  param_1[9] = lVar3;
  param_1[10] = lVar4;
  param_1[0xb] = 0;
  param_1[6] = 0;
  param_1[7] = lVar2;
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0x60);
  FUN_028ca9dc(param_1,*(undefined8 *)(param_2 + 8));
  plVar10 = *(long **)(param_2 + 0x30);
  if (plVar10 != (long *)0x0) {
    plVar1 = param_1 + 7;
    do {
      uVar12 = plVar10[2];
      uVar11 = param_1[1];
      if (uVar11 == 0) {
LAB_028cc1a4:
        plVar9 = (long *)(**(code **)(*(long *)*plVar1 + 0x10))((long *)*plVar1,0x58,8);
        if (plVar9 == (long *)0x0) {
          (**(code **)(*(long *)*plVar1 + 0xb8))();
        }
        FUN_028cc29c(plVar1,plVar9 + 2,plVar10 + 2);
        *plVar9 = 0;
        plVar9[1] = uVar12;
        if ((uVar11 == 0) || (*(float *)(param_1 + 0xc) * (float)uVar11 < (float)(param_1[0xb] + 1))
           ) {
          uVar11 = (ulong)(uVar11 < 3 || (uVar11 & uVar11 - 1) != 0) | uVar11 << 1;
          uVar8 = (ulong)((float)(param_1[0xb] + 1) / *(float *)(param_1 + 0xc));
          if (uVar8 <= uVar11) {
            uVar8 = uVar11;
          }
          FUN_028ca9dc(param_1,uVar8);
          uVar11 = param_1[1];
          if ((uVar11 & uVar11 - 1) == 0) {
            unaff_x26 = uVar11 - 1 & uVar12;
          }
          else if (uVar12 < uVar11) {
            unaff_x26 = uVar12;
          }
          else {
            uVar8 = 0;
            if (uVar11 != 0) {
              uVar8 = uVar12 / uVar11;
            }
            unaff_x26 = uVar12 - uVar8 * uVar11;
          }
        }
        plVar7 = *(long **)(*param_1 + unaff_x26 * 8);
        if (plVar7 == (long *)0x0) {
          *plVar9 = param_1[6];
          param_1[6] = (long)plVar9;
          *(long **)(*param_1 + unaff_x26 * 8) = param_1 + 6;
          if (*plVar9 != 0) {
            uVar12 = *(ulong *)(*plVar9 + 8);
            if ((uVar11 & uVar11 - 1) == 0) {
              uVar12 = uVar12 & uVar11 - 1;
            }
            else if (uVar11 <= uVar12) {
              uVar8 = 0;
              if (uVar11 != 0) {
                uVar8 = uVar12 / uVar11;
              }
              uVar12 = uVar12 - uVar8 * uVar11;
            }
            plVar7 = (long *)(*param_1 + uVar12 * 8);
            goto LAB_028cc064;
          }
        }
        else {
          *plVar9 = *plVar7;
LAB_028cc064:
          *plVar7 = (long)plVar9;
        }
        param_1[0xb] = param_1[0xb] + 1;
      }
      else {
        uVar8 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
        uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
        uVar8 = (uVar8 + (uVar8 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (uVar8 < 2) {
          unaff_x26 = uVar11 - 1 & uVar12;
        }
        else {
          unaff_x26 = uVar12;
          if (uVar11 <= uVar12) {
            uVar6 = 0;
            if (uVar11 != 0) {
              uVar6 = uVar12 / uVar11;
            }
            unaff_x26 = uVar12 - uVar6 * uVar11;
          }
        }
        plVar9 = *(long **)(*param_1 + unaff_x26 * 8);
        if (plVar9 == (long *)0x0) goto LAB_028cc1a4;
        if (uVar8 < 2) {
          do {
            plVar9 = (long *)*plVar9;
            if ((plVar9 == (long *)0x0) ||
               (plVar9[1] != uVar12 && (plVar9[1] & uVar11 - 1) != unaff_x26)) goto LAB_028cc1a4;
          } while (plVar9[2] != uVar12);
        }
        else {
          do {
            plVar9 = (long *)*plVar9;
            if (plVar9 == (long *)0x0) goto LAB_028cc1a4;
            uVar8 = plVar9[1];
            if (uVar8 != uVar12) {
              if (uVar11 <= uVar8) {
                uVar6 = 0;
                if (uVar11 != 0) {
                  uVar6 = uVar8 / uVar11;
                }
                uVar8 = uVar8 - uVar6 * uVar11;
              }
              if (uVar8 != unaff_x26) goto LAB_028cc1a4;
            }
          } while (plVar9[2] != uVar12);
        }
      }
      plVar10 = (long *)*plVar10;
    } while (plVar10 != (long *)0x0);
  }
  return;
}


