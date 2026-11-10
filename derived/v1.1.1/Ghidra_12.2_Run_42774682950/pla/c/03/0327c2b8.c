/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0327c2b8; name: FUN_0327c2b8
 */


void FUN_0327c2b8(long *param_1,long *param_2)

{
  int *piVar1;
  int *piVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  int *piVar10;
  long lVar11;
  long lVar12;
  ulong local_68;
  
  FUN_032bcf10(param_2,0x40,&local_68);
  if ((int)param_2[1] == 0) {
    *(undefined4 *)((long)param_2 + 0xc) = 0;
    *param_2 = 0;
  }
  else {
    lVar5 = (**(code **)(*param_1 + 0x10))(param_1,local_68,&local_68);
    puVar4 = PTR_PTR_0434a080;
    if (lVar5 != 0) {
      iVar6 = (int)(local_68 >> 6);
      if (0x3ffffffe < iVar6) {
        iVar6 = 0x3fffffff;
      }
      if (0 < (int)param_2[1]) {
        lVar11 = 0;
        lVar12 = 0x3c;
        do {
          piVar1 = (int *)(*param_2 + lVar12);
          uVar7 = *(undefined8 *)(piVar1 + -0xf);
          piVar2 = (int *)(lVar5 + lVar12);
          *(undefined8 *)(piVar2 + -0xd) = *(undefined8 *)(piVar1 + -0xd);
          *(undefined8 *)(piVar2 + -0xf) = uVar7;
          uVar7 = *(undefined8 *)(piVar1 + -0xb);
          uVar8 = *(undefined8 *)(piVar1 + -9);
          uVar9 = *(undefined8 *)(piVar1 + -7);
          *(undefined8 *)(piVar2 + -5) = *(undefined8 *)(piVar1 + -5);
          *(undefined8 *)(piVar2 + -7) = uVar9;
          *(undefined8 *)(piVar2 + -9) = uVar8;
          *(undefined8 *)(piVar2 + -0xb) = uVar7;
          piVar2[-3] = 0;
          piVar2[-2] = 0;
          piVar2[-1] = 0;
          piVar2[0] = -0x80000000;
          piVar10 = piVar1 + -3;
          if (*piVar1 < 0) {
            FUN_0327c484(puVar4,piVar10);
          }
          *(undefined8 *)(piVar2 + -3) = *(undefined8 *)(piVar1 + -3);
          piVar2[-1] = piVar1[-1];
          *piVar2 = *piVar1;
          piVar10[0] = 0;
          piVar10[1] = 0;
          piVar1[-1] = 0;
          piVar1[0] = 0;
          lVar11 = lVar11 + 1;
          lVar12 = lVar12 + 0x40;
        } while (lVar11 < (int)param_2[1]);
        if (0 < (int)param_2[1]) {
          lVar12 = 0;
          lVar11 = 0;
          do {
            lVar3 = *param_2 + lVar12;
            *(undefined4 *)(lVar3 + 0x38) = 0;
            if ((-1 < (int)*(uint *)(lVar3 + 0x3c)) && (*(long *)(lVar3 + 0x30) != 0)) {
              (**(code **)(*(long *)puVar4 + 0x18))
                        (puVar4,*(long *)(lVar3 + 0x30),
                         ((ulong)*(uint *)(lVar3 + 0x3c) & 0x3fffffff) * 0xb8);
            }
            *(undefined8 *)(lVar3 + 0x30) = 0;
            lVar11 = lVar11 + 1;
            lVar12 = lVar12 + 0x40;
            *(undefined4 *)(lVar3 + 0x3c) = 0x80000000;
          } while (lVar11 < (int)param_2[1]);
        }
      }
      *param_2 = lVar5;
      *(int *)((long)param_2 + 0xc) = iVar6;
    }
  }
  return;
}


