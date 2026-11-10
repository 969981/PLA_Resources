/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ef1d88; name: FUN_02ef1d88
 */


void FUN_02ef1d88(long param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  long *plVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  
  if (*(int *)(param_1 + 0x38) != 0) {
    plVar8 = (long *)**(undefined8 **)(param_1 + 0x30);
    if (plVar8 == (long *)0x0) {
      uVar10 = 0;
      do {
        if (*(int *)(param_1 + 0x38) - 1 == uVar10) {
          return;
        }
        uVar10 = uVar10 + 1;
        plVar8 = (long *)(*(undefined8 **)(param_1 + 0x30))[uVar10 & 0xffffffff];
      } while (plVar8 == (long *)0x0);
    }
    else {
      uVar10 = 0;
    }
    if (param_2 == 0) {
      plVar11 = (long *)0x0;
      do {
        if (plVar8[1] == -2) {
          if ((long *)*plVar8 == (long *)0x0) {
            uVar6 = (int)uVar10 + 1;
            if (*(uint *)(param_1 + 0x38) <= uVar6) {
              return;
            }
            uVar3 = (ulong)uVar6;
            while (plVar12 = *(long **)(*(long *)(param_1 + 0x30) + uVar3 * 8),
                  plVar12 == (long *)0x0) {
              uVar3 = uVar3 + 1;
              if (*(uint *)(param_1 + 0x38) == (uint)uVar3) {
                return;
              }
            }
            plVar11 = (long *)0x0;
          }
          else {
            uVar3 = uVar10 & 0xffffffff;
            plVar12 = (long *)*plVar8;
            plVar11 = plVar8;
          }
        }
        else {
          puVar9 = (undefined8 *)plVar8[2];
          *(undefined1 *)((long)puVar9 + 0x54) = 0;
          iVar5 = *(int *)(puVar9 + 10);
          *(int *)(puVar9 + 10) = iVar5 + -1;
          if (iVar5 + -1 == 0) {
            (**(code **)*puVar9)(puVar9);
            (*DAT_0442d150)(4,puVar9);
          }
          plVar4 = (long *)*plVar8;
          uVar3 = uVar10 & 0xffffffff;
          plVar12 = plVar4;
          plVar13 = plVar11;
          if (plVar4 == (long *)0x0) {
            uVar2 = *(uint *)(param_1 + 0x38);
            uVar6 = (int)uVar10 + 1;
            uVar3 = (ulong)uVar6;
            if (uVar6 < uVar2) {
              do {
                plVar12 = *(long **)(*(long *)(param_1 + 0x30) + uVar3 * 8);
                if (plVar12 != (long *)0x0) {
                  plVar13 = (long *)0x0;
                  goto joined_r0x02ef2048;
                }
                uVar6 = (int)uVar3 + 1;
                uVar3 = (ulong)uVar6;
              } while (uVar2 != uVar6);
              uVar3 = (ulong)uVar2;
              plVar13 = (long *)0x0;
            }
            plVar12 = (long *)0x0;
          }
joined_r0x02ef2048:
          if (plVar11 == (long *)0x0) {
            plVar11 = (long *)(*(long *)(param_1 + 0x30) + (uVar10 & 0xffffffff) * 8);
          }
          *plVar11 = (long)plVar4;
          (*DAT_0442d150)(0,plVar8);
          *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + -1;
          plVar11 = plVar13;
        }
        plVar8 = plVar12;
        uVar10 = uVar3 & 0xffffffff;
      } while (plVar8 != (long *)0x0);
    }
    else {
      plVar11 = (long *)0x0;
      do {
        uVar3 = plVar8[1];
        if (uVar3 == 0xfffffffffffffffe) {
LAB_02ef1e00:
          if ((long *)*plVar8 == (long *)0x0) {
            uVar6 = (int)uVar10 + 1;
            if (*(uint *)(param_1 + 0x38) <= uVar6) {
              return;
            }
            uVar3 = (ulong)uVar6;
            while (plVar12 = *(long **)(*(long *)(param_1 + 0x30) + uVar3 * 8),
                  plVar12 == (long *)0x0) {
              uVar3 = uVar3 + 1;
              if (*(uint *)(param_1 + 0x38) == (uint)uVar3) {
                return;
              }
            }
            plVar11 = (long *)0x0;
          }
          else {
            uVar3 = uVar10 & 0xffffffff;
            plVar12 = (long *)*plVar8;
            plVar11 = plVar8;
          }
        }
        else {
          puVar9 = (undefined8 *)plVar8[2];
          uVar6 = *(uint *)(param_2 + 0x10);
          if (uVar6 != 0) {
            iVar5 = 0;
            do {
              iVar1 = iVar5 + (uVar6 >> 1);
              uVar7 = *(ulong *)(*(long *)(param_2 + 8) + (long)iVar1 * 8);
              if (uVar7 == uVar3) {
                if (*(long *)(param_2 + 8) + (long)iVar1 * 8 != 0) goto LAB_02ef1e00;
                break;
              }
              if (uVar7 < uVar3) {
                iVar5 = iVar1 + 1;
              }
              uVar6 = uVar6 - (uVar7 < uVar3) >> 1;
            } while (uVar6 != 0);
          }
          iVar5 = *(int *)(puVar9 + 10);
          *(undefined1 *)((long)puVar9 + 0x54) = 0;
          *(int *)(puVar9 + 10) = iVar5 + -1;
          if (iVar5 + -1 == 0) {
            (**(code **)*puVar9)(puVar9);
            (*DAT_0442d150)(4,puVar9);
          }
          plVar4 = (long *)*plVar8;
          uVar3 = uVar10 & 0xffffffff;
          plVar12 = plVar4;
          plVar13 = plVar11;
          if (plVar4 == (long *)0x0) {
            uVar2 = *(uint *)(param_1 + 0x38);
            uVar6 = (int)uVar10 + 1;
            uVar3 = (ulong)uVar6;
            if (uVar6 < uVar2) {
              do {
                plVar12 = *(long **)(*(long *)(param_1 + 0x30) + uVar3 * 8);
                if (plVar12 != (long *)0x0) {
                  plVar13 = (long *)0x0;
                  goto joined_r0x02ef1ed0;
                }
                uVar6 = (int)uVar3 + 1;
                uVar3 = (ulong)uVar6;
              } while (uVar2 != uVar6);
              uVar3 = (ulong)uVar2;
              plVar13 = (long *)0x0;
            }
            plVar12 = (long *)0x0;
          }
joined_r0x02ef1ed0:
          if (plVar11 == (long *)0x0) {
            plVar11 = (long *)(*(long *)(param_1 + 0x30) + (uVar10 & 0xffffffff) * 8);
          }
          *plVar11 = (long)plVar4;
          (*DAT_0442d150)(0,plVar8);
          *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + -1;
          plVar11 = plVar13;
        }
        plVar8 = plVar12;
        uVar10 = uVar3 & 0xffffffff;
      } while (plVar8 != (long *)0x0);
    }
  }
  return;
}


