/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d5a3b0; name: FUN_00d5a3b0
 */


void FUN_00d5a3b0(long param_1,ulong param_2)

{
  long *plVar1;
  long *plVar2;
  ushort uVar3;
  uint uVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  uint uVar11;
  uint uVar12;
  long lVar13;
  undefined8 uVar14;
  float fVar15;
  long local_a0 [3];
  long *local_88;
  
  if (*(char *)(param_1 + 0x6ef) != '\0') {
    uVar4 = (uint)*(byte *)(param_1 + 0x6ee);
    uVar11 = 0;
    do {
      if (uVar4 != 0) {
        if ((param_2 & 1) == 0) {
          uVar12 = 0;
          do {
            FUN_00d5c364(local_a0,uVar12 + uVar4 * uVar11);
            if (*(long *)(param_1 + 0x2c8) != 0) {
              FUN_0283b430(*(long *)(param_1 + 0x2c8),local_a0);
            }
            if (local_88 != (long *)0x0) {
              (**(code **)(*local_88 + 0x20))();
            }
            FUN_00d5c20c(local_a0,uVar12 + uVar11 * *(byte *)(param_1 + 0x6ee));
            if (*(long *)(param_1 + 0x2c8) != 0) {
              FUN_0283b430(*(long *)(param_1 + 0x2c8),local_a0);
              if (*(long *)(param_1 + 0x2c8) != 0) {
                FUN_0283b1e8(*(long *)(param_1 + 0x2c8),local_a0);
              }
            }
            uVar14 = FUN_00d2e5c8(param_1 + 0x180,local_a0);
            plVar6 = local_88;
            lVar9 = local_a0[0];
            lVar13 = *(long *)(param_1 + 0x2c8);
            if (lVar13 != 0) {
              plVar10 = *(long **)(lVar13 + 0x1a0);
              lVar8 = *(long *)(lVar13 + 0x1a8);
              if (local_88 != (long *)0x0) {
                (**(code **)(*local_88 + 0x18))(local_88);
              }
              plVar2 = plVar10;
              if ((lVar8 != 0) && (*plVar10 != lVar9)) {
                plVar5 = plVar10 + lVar8 * 6;
                lVar8 = lVar8 * 0x30;
                do {
                  lVar8 = lVar8 + -0x30;
                  plVar2 = plVar5;
                  if (lVar8 == 0) break;
                  plVar1 = plVar10 + 6;
                  plVar10 = plVar10 + 6;
                  plVar2 = plVar10;
                } while (*plVar1 != lVar9);
              }
              if (plVar6 != (long *)0x0) {
                (**(code **)(*plVar6 + 0x20))(plVar6);
              }
              plVar6 = (long *)(*(long *)(lVar13 + 0x1a0) + *(long *)(lVar13 + 0x1a8) * 0x30);
              if (plVar2 == plVar6) {
                plVar10 = (long *)0x0;
                if (plVar2 != plVar6) goto LAB_00d5a520;
LAB_00d5a58c:
                if (*(long *)(param_1 + 0x2c8) == 0) goto LAB_00d5a5ac;
                FUN_0283b1e8(*(long *)(param_1 + 0x2c8),local_a0);
              }
              else {
                plVar10 = plVar2 + 4;
                if (plVar2 == plVar6) goto LAB_00d5a58c;
LAB_00d5a520:
                uVar7 = (ulong)*(uint *)(plVar10 + 1);
                if (((*(uint *)(*plVar10 + 0x278) <= *(uint *)(plVar10 + 1)) ||
                    (lVar9 = *(long *)(*plVar10 + 600), *(char *)(lVar9 + uVar7 * 0x48 + 8) == '\0')
                    ) || (*(char *)(lVar9 + uVar7 * 0x48 + 0xb) == '\0')) goto LAB_00d5a58c;
                plVar6 = (long *)(lVar9 + uVar7 * 0x48 + 0x10);
                lVar13 = *plVar6;
                if ((lVar13 != 0) && (*(char *)(lVar9 + uVar7 * 0x48 + 9) == '\0')) {
                  fVar15 = *(float *)(lVar13 + 0x20);
                  uVar3 = FUN_00227728();
                  uVar7 = FUN_00227744(*plVar6);
                  if (((float)uVar3 <= fVar15) && ((uVar7 & 1) == 0)) goto LAB_00d5a58c;
                }
              }
              FUN_0283b748(uVar14,*(undefined8 *)(param_1 + 0x2c8),local_a0);
            }
LAB_00d5a5ac:
            if (local_88 != (long *)0x0) {
              (**(code **)(*local_88 + 0x20))();
            }
            uVar4 = (uint)*(byte *)(param_1 + 0x6ee);
            uVar12 = uVar12 + 1;
          } while (uVar12 < uVar4);
        }
        else {
          FUN_00d5c364(local_a0,uVar11 * uVar4);
          if (*(long *)(param_1 + 0x2c8) != 0) {
            FUN_0283b430(*(long *)(param_1 + 0x2c8),local_a0);
          }
          if (local_88 != (long *)0x0) {
            (**(code **)(*local_88 + 0x20))();
          }
          FUN_00d5c20c(local_a0,uVar11 * *(byte *)(param_1 + 0x6ee));
          if (*(long *)(param_1 + 0x2c8) != 0) {
            FUN_0283b430(*(long *)(param_1 + 0x2c8),local_a0);
            if (*(long *)(param_1 + 0x2c8) != 0) {
              FUN_0283b1e8(*(long *)(param_1 + 0x2c8),local_a0);
            }
          }
          if (local_88 != (long *)0x0) {
            (**(code **)(*local_88 + 0x20))();
          }
          uVar4 = (uint)*(byte *)(param_1 + 0x6ee);
          if (1 < uVar4) {
            uVar12 = 1;
            do {
              FUN_00d5c364(local_a0,uVar12 + uVar11 * uVar4);
              if (*(long *)(param_1 + 0x2c8) != 0) {
                FUN_0283b430(*(long *)(param_1 + 0x2c8),local_a0);
              }
              if (local_88 != (long *)0x0) {
                (**(code **)(*local_88 + 0x20))();
              }
              FUN_00d5c20c(local_a0,uVar12 + uVar11 * *(byte *)(param_1 + 0x6ee));
              if (*(long *)(param_1 + 0x2c8) != 0) {
                FUN_0283b430(*(long *)(param_1 + 0x2c8),local_a0);
                if (*(long *)(param_1 + 0x2c8) != 0) {
                  FUN_0283b1e8(*(long *)(param_1 + 0x2c8),local_a0);
                }
              }
              if (local_88 != (long *)0x0) {
                (**(code **)(*local_88 + 0x20))();
              }
              uVar4 = (uint)*(byte *)(param_1 + 0x6ee);
              uVar12 = uVar12 + 1;
            } while (uVar12 < uVar4);
          }
        }
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 < *(byte *)(param_1 + 0x6ef));
  }
  return;
}


