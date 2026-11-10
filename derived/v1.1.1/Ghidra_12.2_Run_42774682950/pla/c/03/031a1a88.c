/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031a1a88; name: FUN_031a1a88
 */


void FUN_031a1a88(long param_1,int param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined4 **ppuVar4;
  int *piVar5;
  long lVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined4 *local_50;
  long local_48;
  
  ppuVar4 = &local_50;
  if ((-1 < param_2) && (param_2 <= *(int *)(param_1 + 0x70) + -2)) {
    plVar3 = (long *)(*(long *)(param_1 + 0x68) + (long)param_2 * 8);
    lVar1 = *plVar3;
    lVar2 = plVar3[1];
    piVar5 = *(int **)(lVar1 + 0x30);
    if ((piVar5 != (int *)0x0) && (*piVar5 != -1)) {
      if (*(long *)(piVar5 + 6) == lVar2) {
        return;
      }
      FUN_031a1c90(param_1 + 0x50);
      **(undefined4 **)(lVar1 + 0x30) = 0xffffffff;
    }
    piVar5 = *(int **)(lVar1 + 0x28);
    if (((piVar5 != *(int **)(lVar2 + 0x28)) || (*piVar5 != 3)) ||
       (*(long *)(param_1 + 0x18) + (long)piVar5[1] * 0x38 != lVar1)) {
      local_48 = *(long *)(lVar1 + 0x30);
      if (local_48 == 0) {
LAB_031a1ae4:
        local_48 = 0;
        fVar8 = *(float *)(lVar1 + 0x18);
        fVar10 = fVar8 - *(float *)(lVar2 + 0x18);
        if (fVar10 <= 0.0) {
          return;
        }
        fVar9 = *(float *)(lVar1 + 0xc);
        fVar10 = ((*(float *)(lVar2 + 0xc) - fVar9) -
                 *(float *)(lVar2 + 0x18) * (*(float *)(lVar2 + 8) - *(float *)(lVar1 + 8))) /
                 fVar10;
        fVar11 = *(float *)(lVar1 + 8) + fVar10;
        if (*(float *)(lVar1 + 0x10) <= fVar11) {
          return;
        }
        if (*(float *)(lVar2 + 0x10) <= fVar11) {
          return;
        }
        lVar7 = tpidr_el0;
        lVar6 = *(long *)(lVar7 + 0x38d490);
        if (lVar6 == 0) {
          lVar6 = FUN_0333d16c(0,1);
          *(long *)(lVar7 + 0x38d490) = lVar6;
        }
        plVar3 = *(long **)(*(long *)(lVar6 + 8) + 0x58);
        local_50 = (undefined4 *)(**(code **)(*plVar3 + 0x10))(plVar3,0x28,0);
        local_50[1] = fVar11;
        local_50[2] = fVar9 + fVar8 * fVar10;
        *local_50 = 0xffffffff;
        *(long *)(local_50 + 4) = lVar1;
        *(long *)(local_50 + 6) = lVar2;
        *(undefined8 *)(local_50 + 8) = *(undefined8 *)(lVar1 + 0x30);
        *(undefined4 **)(lVar1 + 0x30) = local_50;
      }
      else {
        if (*(long *)(local_48 + 0x18) != lVar2) {
          lVar7 = local_48;
          do {
            lVar6 = lVar7;
            lVar7 = *(long *)(lVar6 + 0x20);
            if (lVar7 == 0) goto LAB_031a1ae4;
          } while (*(long *)(lVar7 + 0x18) != lVar2);
          *(undefined8 *)(lVar6 + 0x20) = *(undefined8 *)(lVar7 + 0x20);
          *(long *)(lVar7 + 0x20) = local_48;
          *(long *)(lVar1 + 0x30) = lVar7;
          local_48 = lVar7;
        }
        ppuVar4 = (undefined4 **)&local_48;
      }
      FUN_031a1e1c(param_1 + 0x50,ppuVar4);
    }
  }
  return;
}


