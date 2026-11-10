/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ea6cc8; name: FUN_02ea6cc8
 */


void FUN_02ea6cc8(float param_1,undefined4 param_2,undefined4 param_3,long param_4,long *param_5,
                 long param_6)

{
  int iVar1;
  long *plVar2;
  undefined8 *puVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  float fVar10;
  
  if (*(int *)(param_4 + 0x20) != 0) {
    plVar8 = *(long **)(param_4 + 0x18);
    do {
      fVar10 = *(float *)(plVar8 + 2) * param_1;
      if (DAT_042ac988 < fVar10) {
        if (*plVar8 == -1) {
          if (*(int *)(param_6 + 0x10) != 0) {
            puVar9 = *(undefined8 **)(param_6 + 8);
            do {
              uVar4 = *(uint *)(param_5 + 1);
              uVar5 = *(uint *)((long)param_5 + 0xc);
              if (uVar4 < uVar5) {
joined_r0x02ea6e54:
                if (uVar4 < uVar5) {
                  uVar5 = *(uint *)(param_5 + 1);
                  lVar7 = *param_5;
                  *(uint *)(param_5 + 1) = uVar5 + 1;
                  puVar3 = (undefined8 *)(lVar7 + (ulong)uVar5 * 0x20);
                  if (puVar3 != (undefined8 *)0x0) {
                    *puVar3 = *puVar9;
                    lVar6 = plVar8[1];
                    lVar7 = lVar7 + (ulong)uVar5 * 0x20;
                    *(float *)(lVar7 + 0xc) = fVar10;
                    *(int *)(lVar7 + 8) = (int)lVar6;
                    *(undefined4 *)(lVar7 + 0x14) = param_2;
                    *(undefined4 *)(lVar7 + 0x18) = param_3;
                    *(undefined4 *)(lVar7 + 0x10) = 1;
                  }
                }
              }
              else {
                iVar1 = uVar5 + (uVar5 >> 1);
                if (uVar5 == 0) {
                  iVar1 = 1;
                }
                uVar5 = iVar1 + uVar5;
                lVar7 = FUN_02f59e50(0,*param_5,(ulong)uVar5 << 5);
                if (lVar7 != 0) {
                  *param_5 = lVar7;
                  *(uint *)((long)param_5 + 0xc) = uVar5;
                  goto joined_r0x02ea6e54;
                }
              }
              puVar9 = puVar9 + 1;
            } while (puVar9 != (undefined8 *)
                               (*(long *)(param_6 + 8) + (ulong)*(uint *)(param_6 + 0x10) * 8));
          }
        }
        else {
          uVar4 = *(uint *)(param_5 + 1);
          uVar5 = *(uint *)((long)param_5 + 0xc);
          if (uVar5 <= uVar4) {
            iVar1 = uVar5 + (uVar5 >> 1);
            if (uVar5 == 0) {
              iVar1 = 1;
            }
            uVar5 = iVar1 + uVar5;
            lVar7 = FUN_02f59e50(0,*param_5,(ulong)uVar5 << 5);
            if (lVar7 == 0) goto LAB_02ea6d20;
            *param_5 = lVar7;
            *(uint *)((long)param_5 + 0xc) = uVar5;
          }
          if (uVar4 < uVar5) {
            uVar5 = *(uint *)(param_5 + 1);
            lVar7 = *param_5;
            *(uint *)(param_5 + 1) = uVar5 + 1;
            plVar2 = (long *)(lVar7 + (ulong)uVar5 * 0x20);
            if (plVar2 != (long *)0x0) {
              *plVar2 = *plVar8;
              lVar6 = plVar8[1];
              lVar7 = lVar7 + (ulong)uVar5 * 0x20;
              *(float *)(lVar7 + 0xc) = fVar10;
              *(int *)(lVar7 + 8) = (int)lVar6;
              *(undefined4 *)(lVar7 + 0x14) = param_2;
              *(undefined4 *)(lVar7 + 0x18) = param_3;
              *(undefined4 *)(lVar7 + 0x10) = 1;
            }
          }
        }
      }
LAB_02ea6d20:
      plVar8 = plVar8 + 3;
    } while (plVar8 != (long *)(*(long *)(param_4 + 0x18) + (ulong)*(uint *)(param_4 + 0x20) * 0x18)
            );
  }
  return;
}


