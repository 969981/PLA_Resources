/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d5ad24; name: FUN_00d5ad24
 */


void FUN_00d5ad24(long param_1,ulong param_2)

{
  long *plVar1;
  long *plVar2;
  ushort uVar3;
  uint uVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  long *plVar10;
  uint uVar11;
  long lVar12;
  long *plVar13;
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
          uVar9 = 0;
          do {
            FUN_00d5c20c(local_a0,uVar9 + uVar4 * uVar11);
            if (*(long *)(param_1 + 0x2c8) != 0) {
              FUN_0283b430(*(long *)(param_1 + 0x2c8),local_a0);
            }
            if (local_88 != (long *)0x0) {
              (**(code **)(*local_88 + 0x20))();
            }
            FUN_00d5c364(local_a0,uVar9 + uVar11 * *(byte *)(param_1 + 0x6ee));
            if (*(long *)(param_1 + 0x2c8) != 0) {
              FUN_0283b430(*(long *)(param_1 + 0x2c8),local_a0);
              if (*(long *)(param_1 + 0x2c8) != 0) {
                FUN_0283b1e8(*(long *)(param_1 + 0x2c8),local_a0);
              }
            }
            uVar14 = FUN_00d2e5c8(param_1 + 0x180,local_a0);
            plVar10 = local_88;
            lVar8 = local_a0[0];
            lVar12 = *(long *)(param_1 + 0x2c8);
            if (lVar12 != 0) {
              plVar13 = *(long **)(lVar12 + 0x1a0);
              lVar7 = *(long *)(lVar12 + 0x1a8);
              if (local_88 != (long *)0x0) {
                (**(code **)(*local_88 + 0x18))(local_88);
              }
              plVar2 = plVar13;
              if ((lVar7 != 0) && (*plVar13 != lVar8)) {
                plVar5 = plVar13 + lVar7 * 6;
                lVar7 = lVar7 * 0x30;
                do {
                  lVar7 = lVar7 + -0x30;
                  plVar2 = plVar5;
                  if (lVar7 == 0) break;
                  plVar1 = plVar13 + 6;
                  plVar13 = plVar13 + 6;
                  plVar2 = plVar13;
                } while (*plVar1 != lVar8);
              }
              if (plVar10 != (long *)0x0) {
                (**(code **)(*plVar10 + 0x20))(plVar10);
              }
              if (plVar2 == (long *)(*(long *)(lVar12 + 0x1a0) + *(long *)(lVar12 + 0x1a8) * 0x30))
              {
LAB_00d5b018:
                if (*(long *)(param_1 + 0x2c8) == 0) goto LAB_00d5b038;
                FUN_0283b1e8(*(long *)(param_1 + 0x2c8),local_a0);
              }
              else {
                uVar6 = (ulong)*(uint *)(plVar2 + 5);
                if (((*(uint *)(plVar2[4] + 0x278) <= *(uint *)(plVar2 + 5)) ||
                    (lVar8 = *(long *)(plVar2[4] + 600), *(char *)(lVar8 + uVar6 * 0x48 + 8) == '\0'
                    )) || (*(char *)(lVar8 + uVar6 * 0x48 + 0xb) == '\0')) goto LAB_00d5b018;
                plVar10 = (long *)(lVar8 + uVar6 * 0x48 + 0x10);
                lVar12 = *plVar10;
                if ((lVar12 != 0) && (*(char *)(lVar8 + uVar6 * 0x48 + 9) == '\0')) {
                  fVar15 = *(float *)(lVar12 + 0x20);
                  uVar3 = FUN_00227728();
                  uVar6 = FUN_00227744(*plVar10);
                  if (((float)uVar3 <= fVar15) && ((uVar6 & 1) == 0)) goto LAB_00d5b018;
                }
              }
              FUN_0283b748(uVar14,*(undefined8 *)(param_1 + 0x2c8),local_a0);
            }
LAB_00d5b038:
            if (local_88 != (long *)0x0) {
              (**(code **)(*local_88 + 0x20))();
            }
            uVar4 = (uint)*(byte *)(param_1 + 0x6ee);
            uVar9 = uVar9 + 1;
          } while (uVar9 < uVar4);
        }
        else {
          FUN_00d5c20c(local_a0,uVar11 * uVar4);
          if (*(long *)(param_1 + 0x2c8) != 0) {
            FUN_0283b430(*(long *)(param_1 + 0x2c8),local_a0);
          }
          if (local_88 != (long *)0x0) {
            (**(code **)(*local_88 + 0x20))();
          }
          FUN_00d5c364(local_a0,uVar11 * *(byte *)(param_1 + 0x6ee));
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
            uVar9 = 1;
            do {
              FUN_00d5c20c(local_a0,uVar9 + uVar11 * uVar4);
              if (*(long *)(param_1 + 0x2c8) != 0) {
                FUN_0283b430(*(long *)(param_1 + 0x2c8),local_a0);
              }
              if (local_88 != (long *)0x0) {
                (**(code **)(*local_88 + 0x20))();
              }
              FUN_00d5c364(local_a0,uVar9 + uVar11 * *(byte *)(param_1 + 0x6ee));
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
              uVar9 = uVar9 + 1;
            } while (uVar9 < uVar4);
          }
        }
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 < *(byte *)(param_1 + 0x6ef));
  }
  return;
}


