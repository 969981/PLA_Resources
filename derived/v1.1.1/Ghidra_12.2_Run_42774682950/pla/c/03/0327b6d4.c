/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0327b6d4; name: FUN_0327b6d4
 */


void FUN_0327b6d4(long *param_1,long *param_2)

{
  int *piVar1;
  int *piVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int *piVar9;
  long lVar10;
  long lVar11;
  ulong local_68;
  
  FUN_032bcf10(param_2,0x70,&local_68);
  if ((int)param_2[1] == 0) {
    *(undefined4 *)((long)param_2 + 0xc) = 0;
    *param_2 = 0;
  }
  else {
    lVar5 = (**(code **)(*param_1 + 0x10))(param_1,local_68,&local_68);
    puVar4 = PTR_PTR_0434a080;
    if (lVar5 != 0) {
      iVar6 = (int)(local_68 / 0x70);
      if (0x3ffffffe < iVar6) {
        iVar6 = 0x3fffffff;
      }
      if (0 < (int)param_2[1]) {
        lVar10 = 0;
        lVar11 = 0x6c;
        do {
          piVar1 = (int *)(*param_2 + lVar11);
          piVar2 = (int *)(lVar5 + lVar11);
          uVar7 = *(undefined8 *)(piVar1 + -5);
          *(undefined8 *)(piVar2 + -9) = *(undefined8 *)(piVar1 + -9);
          uVar8 = *(undefined8 *)(piVar1 + -0xb);
          *(undefined8 *)(piVar2 + -7) = *(undefined8 *)(piVar1 + -7);
          *(undefined8 *)(piVar2 + -0xb) = uVar8;
          *(undefined8 *)(piVar2 + -5) = uVar7;
          uVar7 = *(undefined8 *)(piVar1 + -0xd);
          *(undefined8 *)(piVar2 + -0x11) = *(undefined8 *)(piVar1 + -0x11);
          *(undefined8 *)(piVar2 + -0xd) = uVar7;
          uVar7 = *(undefined8 *)(piVar1 + -0x15);
          *(undefined8 *)(piVar2 + -0x19) = *(undefined8 *)(piVar1 + -0x19);
          *(undefined8 *)(piVar2 + -0x15) = uVar7;
          uVar7 = *(undefined8 *)(piVar1 + -0x1b);
          *(undefined8 *)(piVar2 + -0x17) = *(undefined8 *)(piVar1 + -0x17);
          *(undefined8 *)(piVar2 + -0x1b) = uVar7;
          uVar7 = *(undefined8 *)(piVar1 + -0x13);
          *(undefined8 *)(piVar2 + -0xf) = *(undefined8 *)(piVar1 + -0xf);
          *(undefined8 *)(piVar2 + -0x13) = uVar7;
          piVar2[-3] = 0;
          piVar2[-2] = 0;
          piVar2[-1] = 0;
          piVar2[0] = -0x80000000;
          piVar9 = piVar1 + -3;
          if (*piVar1 < 0) {
            FUN_0327b8e4(puVar4,piVar9);
          }
          *(undefined8 *)(piVar2 + -3) = *(undefined8 *)(piVar1 + -3);
          piVar2[-1] = piVar1[-1];
          *piVar2 = *piVar1;
          piVar9[0] = 0;
          piVar9[1] = 0;
          piVar1[-1] = 0;
          piVar1[0] = 0;
          lVar10 = lVar10 + 1;
          lVar11 = lVar11 + 0x70;
        } while (lVar10 < (int)param_2[1]);
        if (0 < (int)param_2[1]) {
          lVar11 = 0;
          lVar10 = 0;
          do {
            lVar3 = *param_2 + lVar11;
            *(undefined4 *)(lVar3 + 0x68) = 0;
            if ((-1 < (int)*(uint *)(lVar3 + 0x6c)) && (*(long *)(lVar3 + 0x60) != 0)) {
              (**(code **)(*(long *)puVar4 + 0x18))
                        (puVar4,*(long *)(lVar3 + 0x60),
                         ((ulong)*(uint *)(lVar3 + 0x6c) & 0x3fffffff) * 0x108);
            }
            *(undefined8 *)(lVar3 + 0x60) = 0;
            lVar10 = lVar10 + 1;
            lVar11 = lVar11 + 0x70;
            *(undefined4 *)(lVar3 + 0x6c) = 0x80000000;
          } while (lVar10 < (int)param_2[1]);
        }
      }
      *param_2 = lVar5;
      *(int *)((long)param_2 + 0xc) = iVar6;
    }
  }
  return;
}


