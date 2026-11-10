/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00234ec0; name: FUN_00234ec0
 */


void FUN_00234ec0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 ulong param_5)

{
  uint uVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  char cVar8;
  long lVar9;
  char cVar10;
  
  if (*(long *)(param_1 + 0x18) == 0) {
    return;
  }
  FUN_00235260();
  FUN_0022d610(param_3,param_1);
  for (lVar9 = *(long *)(param_1 + 0x50); lVar9 != param_1 + 0x48; lVar9 = *(long *)(lVar9 + 8)) {
    FUN_00234ec0(*(undefined8 *)(lVar9 + 0x10),param_2,param_3,param_4,0);
  }
  piVar7 = *(int **)(param_1 + 0x58);
  if ((piVar7 != (int *)0x0) && (*(long **)(piVar7 + 2) != (long *)0x0)) {
    uVar1 = piVar7[1] + *piVar7;
    if (0 < (int)uVar1) {
      plVar3 = (long *)**(long **)(piVar7 + 2);
      lVar9 = 0;
      lVar5 = plVar3[3];
      if ((param_5 & 1) == 0) {
        cVar10 = (char)lVar5;
        while ((**(code **)(*plVar3 + 0x28))(plVar3,param_2,param_3,param_4),
              (ulong)uVar1 - 1 != lVar9) {
          lVar5 = lVar9 * 8;
          lVar9 = lVar9 + 1;
          plVar3 = *(long **)(*(long *)(*(long *)(param_1 + 0x58) + 8) + lVar5 + 8);
          cVar8 = (char)plVar3[3];
          bVar2 = cVar10 != cVar8;
          cVar10 = cVar8;
          if (bVar2) {
            FUN_008780e0(param_4,0x80);
            FUN_00878108(param_4,0x20);
            plVar3 = *(long **)(*(long *)(*(long *)(param_1 + 0x58) + 8) + lVar9 * 8);
          }
        }
      }
      else {
        lVar4 = (**(code **)(*plVar3 + 0x30))();
        cVar10 = (char)lVar5;
        while( true ) {
          if (((lVar4 == 0) || (lVar5 = FUN_00244240(), lVar5 == 0)) ||
             (uVar6 = FUN_00248874(), cVar8 = cVar10, (uVar6 & 1) == 0)) {
            plVar3 = *(long **)(*(long *)(*(long *)(param_1 + 0x58) + 8) + lVar9 * 8);
            cVar8 = (char)plVar3[3];
            if (cVar10 != cVar8) {
              FUN_008780e0(param_4,0x80);
              FUN_00878108(param_4,0x20);
              plVar3 = *(long **)(*(long *)(*(long *)(param_1 + 0x58) + 8) + lVar9 * 8);
            }
            (**(code **)(*plVar3 + 0x28))(plVar3,param_2,param_3,param_4);
          }
          if ((ulong)uVar1 - 1 == lVar9) break;
          lVar5 = lVar9 * 8;
          lVar9 = lVar9 + 1;
          lVar4 = (**(code **)(**(long **)(*(long *)(*(long *)(param_1 + 0x58) + 8) + lVar5 + 8) +
                              0x30))();
          cVar10 = cVar8;
        }
      }
    }
    FUN_008780e0(param_4,0x80);
    FUN_00878108(param_4,0x20);
  }
  FUN_0022d628(param_3);
  return;
}


