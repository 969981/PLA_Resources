/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03278a68; name: FUN_03278a68
 */


void FUN_03278a68(long *param_1,long *param_2)

{
  int *piVar1;
  int *piVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  int iVar6;
  int *piVar7;
  long lVar8;
  long lVar9;
  ulong local_68;
  
  FUN_032bcf10(param_2,0x30,&local_68);
  if ((int)param_2[1] == 0) {
    *(undefined4 *)((long)param_2 + 0xc) = 0;
    *param_2 = 0;
  }
  else {
    lVar5 = (**(code **)(*param_1 + 0x10))(param_1,local_68,&local_68);
    puVar4 = PTR_PTR_0434a080;
    if (lVar5 != 0) {
      iVar6 = (int)(local_68 / 0x30);
      if (0x3ffffffe < iVar6) {
        iVar6 = 0x3fffffff;
      }
      if (0 < (int)param_2[1]) {
        lVar8 = 0;
        lVar9 = 0x2c;
        do {
          piVar1 = (int *)(*param_2 + lVar9);
          piVar2 = (int *)(lVar5 + lVar9);
          piVar2[-0xb] = piVar1[-0xb];
          *(undefined8 *)(piVar2 + -9) = *(undefined8 *)(piVar1 + -9);
          piVar2[-7] = 0;
          piVar2[-6] = 0;
          piVar2[-5] = 0;
          piVar2[-4] = -0x80000000;
          piVar7 = piVar1 + -7;
          if (piVar1[-4] < 0) {
            FUN_03278c8c(puVar4,piVar7);
          }
          *(undefined8 *)(piVar2 + -7) = *(undefined8 *)(piVar1 + -7);
          piVar2[-5] = piVar1[-5];
          piVar2[-4] = piVar1[-4];
          piVar7[0] = 0;
          piVar7[1] = 0;
          piVar1[-5] = 0;
          piVar1[-4] = 0;
          piVar2[-3] = 0;
          piVar2[-2] = 0;
          piVar2[-1] = 0;
          piVar2[0] = -0x80000000;
          piVar7 = piVar1 + -3;
          if (*piVar1 < 0) {
            FUN_03278d40(puVar4,piVar7);
          }
          *(undefined8 *)(piVar2 + -3) = *(undefined8 *)(piVar1 + -3);
          piVar2[-1] = piVar1[-1];
          *piVar2 = *piVar1;
          piVar7[0] = 0;
          piVar7[1] = 0;
          piVar1[-1] = 0;
          piVar1[0] = 0;
          lVar8 = lVar8 + 1;
          lVar9 = lVar9 + 0x30;
        } while (lVar8 < (int)param_2[1]);
        if (0 < (int)param_2[1]) {
          lVar9 = 0;
          lVar8 = 0;
          do {
            lVar3 = *param_2 + lVar9;
            *(undefined4 *)(lVar3 + 0x28) = 0;
            if ((-1 < (int)*(uint *)(lVar3 + 0x2c)) && (*(long *)(lVar3 + 0x20) != 0)) {
              (**(code **)(*(long *)puVar4 + 0x18))
                        (puVar4,*(long *)(lVar3 + 0x20),
                         ((ulong)*(uint *)(lVar3 + 0x2c) & 0x3fffffff) << 4);
            }
            *(undefined8 *)(lVar3 + 0x20) = 0;
            *(undefined4 *)(lVar3 + 0x2c) = 0x80000000;
            *(undefined4 *)(lVar3 + 0x18) = 0;
            if ((-1 < (int)*(uint *)(lVar3 + 0x1c)) && (*(long *)(lVar3 + 0x10) != 0)) {
              (**(code **)(*(long *)puVar4 + 0x18))
                        (puVar4,*(long *)(lVar3 + 0x10),
                         ((ulong)*(uint *)(lVar3 + 0x1c) & 0x3fffffff) << 3);
            }
            *(undefined8 *)(lVar3 + 0x10) = 0;
            lVar8 = lVar8 + 1;
            lVar9 = lVar9 + 0x30;
            *(undefined4 *)(lVar3 + 0x1c) = 0x80000000;
          } while (lVar8 < (int)param_2[1]);
        }
      }
      *param_2 = lVar5;
      *(int *)((long)param_2 + 0xc) = iVar6;
    }
  }
  return;
}


