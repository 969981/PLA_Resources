/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03014718; name: FUN_03014718
 */


void FUN_03014718(long *param_1,long *param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  long *plVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  
  if (param_2 != param_1) {
    uVar3 = *(uint *)(param_2 + 1);
    if (*(uint *)(param_1 + 1) < uVar3) {
      FUN_03013d54(param_1,0,uVar3,0x10);
    }
    piVar1 = (int *)((long)param_1 + 0x24);
    iVar2 = *(int *)((long)param_2 + 0x24);
    uVar6 = *piVar1 + 1;
    if (uVar6 <= iVar2 + 1U) {
      uVar6 = iVar2 + 1;
    }
    if (uVar3 <= uVar6) {
      uVar6 = uVar3;
    }
    FUN_030148e8(param_1,*param_2,*param_2 + (ulong)uVar6 * 0x50);
    if (uVar3 < *(uint *)(param_1 + 1)) {
      if ((*piVar1 != -1) && (uVar3 <= *(uint *)((long)param_1 + 0x24))) {
        lVar4 = tpidr_el0;
        uVar6 = uVar3;
        do {
          lVar7 = *param_1;
          if (0.0 <= *(float *)(lVar7 + (long)(int)uVar6 * 0x50 + 0x28)) {
            if (*(long *)(lVar7 + (long)(int)uVar6 * 0x50 + 8) != 0) {
              FUN_032d647c();
            }
            uVar8 = *(ulong *)(lVar7 + (long)(int)uVar6 * 0x50);
            if ((uVar8 & 1) != 0) {
              lVar7 = *(long *)(lVar4 + 0x38d490);
              if (lVar7 == 0) {
                lVar7 = FUN_0333d16c(0,1);
                *(long *)(lVar4 + 0x38d490) = lVar7;
              }
              plVar5 = *(long **)(*(long *)(lVar7 + 8) + 0x58);
              *(undefined8 *)(uVar8 - 0x11) = 0;
              (**(code **)(*plVar5 + 0x18))
                        (plVar5,(undefined8 *)(uVar8 - 0x11),(long)*(int *)(uVar8 - 9) + 0x10);
            }
          }
          uVar6 = uVar6 + 1;
        } while (uVar6 <= *(uint *)((long)param_1 + 0x24));
      }
      FUN_03013d54(param_1,0,uVar3,0x10);
    }
    *piVar1 = *(int *)((long)param_2 + 0x24);
    *(undefined4 *)((long)param_1 + 0x1c) = *(undefined4 *)((long)param_2 + 0x1c);
    *(int *)(param_1 + 4) = (int)param_2[4];
  }
  return;
}


