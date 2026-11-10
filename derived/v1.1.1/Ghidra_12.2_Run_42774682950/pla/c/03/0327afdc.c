/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0327afdc; name: FUN_0327afdc
 */


void FUN_0327afdc(long *param_1,long *param_2)

{
  int *piVar1;
  int *piVar2;
  long lVar3;
  int iVar4;
  undefined *puVar5;
  long lVar6;
  void *__dest;
  int iVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  int *piVar12;
  long lVar13;
  ulong local_a8;
  ulong local_98;
  ulong local_90;
  undefined4 local_84;
  undefined8 local_80;
  undefined *local_78;
  int *piStack_70;
  undefined4 *local_68;
  
  FUN_032bcf10(param_2,0x50,&local_98);
  if ((int)param_2[1] == 0) {
    *(undefined4 *)((long)param_2 + 0xc) = 0;
    *param_2 = 0;
  }
  else {
    lVar6 = (**(code **)(*param_1 + 0x10))(param_1,local_98,&local_98);
    puVar5 = PTR_PTR_0434a080;
    if (lVar6 != 0) {
      iVar7 = (int)(local_98 / 0x50);
      if (0x3ffffffe < iVar7) {
        iVar7 = 0x3fffffff;
      }
      if (0 < (int)param_2[1]) {
        lVar13 = 0;
        lVar11 = 0x4c;
        do {
          piVar1 = (int *)(*param_2 + lVar11);
          uVar8 = *(undefined8 *)(piVar1 + -0x11);
          uVar9 = *(undefined8 *)(piVar1 + -0xf);
          uVar10 = *(undefined8 *)(piVar1 + -0xd);
          piVar2 = (int *)(lVar6 + lVar11);
          *(undefined8 *)(piVar2 + -0xb) = *(undefined8 *)(piVar1 + -0xb);
          *(undefined8 *)(piVar2 + -0xd) = uVar10;
          *(undefined8 *)(piVar2 + -0xf) = uVar9;
          *(undefined8 *)(piVar2 + -0x11) = uVar8;
          *(undefined8 *)(piVar2 + -0x13) = *(undefined8 *)(piVar1 + -0x13);
          piVar2[-9] = 0;
          piVar2[-8] = 0;
          piVar2[-7] = 0;
          piVar2[-6] = -0x80000000;
          if (piVar1[-6] < 0) {
            local_84 = 4;
            iVar4 = piVar1[-7];
            local_90 = (long)iVar4 << 2;
            if (iVar4 < 0) {
              local_78 = &DAT_0411b3a0;
              local_80 = 2;
              local_68 = &local_84;
              piStack_70 = piVar1 + -7;
              FUN_03320b50(0x77a36e5f,
                           "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                           ,0x27,"Array size overflow {}*{}",&local_80);
              iVar4 = piVar1[-7];
            }
            if (iVar4 == 0) {
              piVar1[-6] = 0;
              piVar1[-9] = 0;
              piVar1[-8] = 0;
            }
            else {
              __dest = (void *)(**(code **)(*(long *)puVar5 + 0x10))(puVar5,local_90,&local_90);
              if (__dest != (void *)0x0) {
                local_a8 = local_90 >> 2;
                if (0x3ffffffe < local_a8) {
                  local_a8 = 0x3fffffff;
                }
                memcpy(__dest,*(void **)(piVar1 + -9),local_90);
                *(void **)(piVar1 + -9) = __dest;
                piVar1[-6] = (int)local_a8;
              }
            }
          }
          *(undefined8 *)(piVar2 + -9) = *(undefined8 *)(piVar1 + -9);
          piVar2[-7] = piVar1[-7];
          piVar2[-6] = piVar1[-6];
          piVar1[-9] = 0;
          piVar1[-8] = 0;
          piVar1[-7] = 0;
          piVar1[-6] = 0;
          piVar2[-5] = piVar1[-5];
          piVar2[-3] = 0;
          piVar2[-2] = 0;
          piVar2[-1] = 0;
          piVar2[0] = -0x80000000;
          piVar12 = piVar1 + -3;
          if (*piVar1 < 0) {
            FUN_0327b2f8(puVar5,piVar12);
          }
          *(undefined8 *)(piVar2 + -3) = *(undefined8 *)(piVar1 + -3);
          piVar2[-1] = piVar1[-1];
          *piVar2 = *piVar1;
          piVar12[0] = 0;
          piVar12[1] = 0;
          piVar1[-1] = 0;
          piVar1[0] = 0;
          lVar13 = lVar13 + 1;
          lVar11 = lVar11 + 0x50;
        } while (lVar13 < (int)param_2[1]);
        if (0 < (int)param_2[1]) {
          lVar11 = 0;
          lVar13 = 0;
          do {
            lVar3 = *param_2 + lVar11;
            *(undefined4 *)(lVar3 + 0x48) = 0;
            if ((-1 < (int)*(uint *)(lVar3 + 0x4c)) && (*(long *)(lVar3 + 0x40) != 0)) {
              (**(code **)(*(long *)puVar5 + 0x18))
                        (puVar5,*(long *)(lVar3 + 0x40),
                         ((ulong)*(uint *)(lVar3 + 0x4c) & 0x3fffffff) * 0xc4);
            }
            *(undefined8 *)(lVar3 + 0x40) = 0;
            *(undefined4 *)(lVar3 + 0x4c) = 0x80000000;
            *(undefined4 *)(lVar3 + 0x30) = 0;
            if ((-1 < *(int *)(lVar3 + 0x34)) && (*(long *)(lVar3 + 0x28) != 0)) {
              (**(code **)(*(long *)puVar5 + 0x18))
                        (puVar5,*(long *)(lVar3 + 0x28),*(int *)(lVar3 + 0x34) << 2);
            }
            *(undefined8 *)(lVar3 + 0x28) = 0;
            lVar13 = lVar13 + 1;
            lVar11 = lVar11 + 0x50;
            *(undefined4 *)(lVar3 + 0x34) = 0x80000000;
          } while (lVar13 < (int)param_2[1]);
        }
      }
      *param_2 = lVar6;
      *(int *)((long)param_2 + 0xc) = iVar7;
    }
  }
  return;
}


