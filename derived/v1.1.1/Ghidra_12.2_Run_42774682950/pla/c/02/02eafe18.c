/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02eafe18; name: FUN_02eafe18
 */


void FUN_02eafe18(long param_1,ushort param_2,float *param_3,uint *param_4)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  uint uVar5;
  long *plVar6;
  long lVar7;
  undefined4 *puVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  
  lVar7 = *(long *)(param_1 + 0x10);
  if ((lVar7 != 0) && (*(int *)(lVar7 + 0x58) != 0)) {
    puVar8 = *(undefined4 **)(lVar7 + 0x50);
    uVar1 = (int)param_1 + (uint)param_2;
    do {
      if (*(ushort *)((long)puVar8 + 6) == param_2) {
        *param_4 = (uint)*(byte *)((long)puVar8 + 5);
        uVar9 = *(uint *)(DAT_0440a160 + 0x20);
        fVar10 = 0.0;
        if (uVar9 != 0) {
          uVar5 = 0;
          if (uVar9 != 0) {
            uVar5 = uVar1 / uVar9;
          }
          fVar10 = 0.0;
          plVar6 = *(long **)(*(long *)(DAT_0440a160 + 0x18) + (ulong)(uVar1 - uVar5 * uVar9) * 8);
          if (plVar6 != (long *)0x0) {
            do {
              if ((*plVar6 == param_1) && (*(uint *)(plVar6 + 1) == (uint)param_2)) {
                if (*(int *)((long)plVar6 + 0x4c) == 3) {
                  fVar10 = (float)FUN_02eb1180(DAT_0440a160,plVar6,param_1 + 0x18);
                }
                else {
                  fVar10 = (float)FUN_02eb1334(DAT_0440a160,plVar6,param_1 + 0x18);
                }
                goto LAB_02eaff14;
              }
              plVar6 = (long *)plVar6[2];
            } while (plVar6 != (long *)0x0);
            fVar10 = 0.0;
          }
        }
LAB_02eaff14:
        uVar5 = *(uint *)(param_1 + 0x50);
        uVar9 = *(uint *)(param_1 + 0x54);
        uVar4 = *puVar8;
        if (uVar9 <= uVar5) {
          iVar2 = uVar9 + (uVar9 >> 1);
          if (uVar9 == 0) {
            iVar2 = 1;
          }
          uVar9 = iVar2 + uVar9;
          lVar7 = (*DAT_0442d148)(0,*(undefined8 *)(param_1 + 0x48),(ulong)uVar9 << 4);
          if (lVar7 == 0) goto LAB_02eafe78;
          *(long *)(param_1 + 0x48) = lVar7;
          *(uint *)(param_1 + 0x54) = uVar9;
        }
        if (uVar5 < uVar9) {
          uVar9 = *(uint *)(param_1 + 0x50);
          *(uint *)(param_1 + 0x50) = uVar9 + 1;
          puVar3 = (undefined4 *)(*(long *)(param_1 + 0x48) + (ulong)uVar9 * 0x10);
          if (puVar3 != (undefined4 *)0x0) {
            lVar7 = *(long *)(param_1 + 0x48) + (ulong)uVar9 * 0x10;
            *puVar3 = 1;
            *(undefined4 *)(lVar7 + 4) = uVar4;
            *(ushort *)(lVar7 + 8) = param_2;
            *(float *)(lVar7 + 0xc) = fVar10;
            fVar11 = *param_3 * fVar10;
            if (*param_4 != 3) {
              fVar11 = *param_3 + fVar10;
            }
            *param_3 = fVar11;
          }
        }
      }
LAB_02eafe78:
      puVar8 = puVar8 + 10;
    } while (puVar8 != (undefined4 *)
                       (*(long *)(*(long *)(param_1 + 0x10) + 0x50) +
                       (ulong)*(uint *)(*(long *)(param_1 + 0x10) + 0x58) * 0x28));
  }
  return;
}


