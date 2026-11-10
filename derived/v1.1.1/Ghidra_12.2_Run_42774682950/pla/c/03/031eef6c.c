/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031eef6c; name: FUN_031eef6c
 */


undefined8 FUN_031eef6c(long *param_1,long *param_2)

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
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long *plVar12;
  ulong uVar13;
  ulong local_70;
  ulong local_68;
  undefined8 local_60;
  undefined *puStack_58;
  long *local_50;
  ulong *puStack_48;
  undefined4 local_34;
  
  local_68 = CONCAT44(local_68._4_4_,0x40);
  plVar12 = param_2 + 1;
  iVar7 = (int)*plVar12;
  local_70 = (long)iVar7 << 6;
  if (iVar7 < 0) {
    local_60 = 2;
    puStack_58 = &DAT_0411b3a0;
    puStack_48 = &local_68;
    local_50 = plVar12;
    FUN_03320b50(0x77a36e5f,
                 "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                 ,0x27,"Array size overflow {}*{}",&local_60);
    iVar7 = (int)*plVar12;
  }
  if (iVar7 == 0) {
    uVar8 = 0;
    *(undefined4 *)((long)param_2 + 0xc) = 0;
    *param_2 = 0;
  }
  else {
    lVar6 = (**(code **)(*param_1 + 0x10))(param_1,local_70,&local_70);
    puVar5 = PTR_PTR_0434a080;
    if (lVar6 == 0) {
      uVar8 = 0x80040200;
    }
    else {
      iVar7 = (int)(local_70 >> 6);
      if (0x3ffffffe < iVar7) {
        iVar7 = 0x3fffffff;
      }
      if (0 < (int)*plVar12) {
        lVar9 = 0;
        lVar10 = 0x3c;
        do {
          piVar1 = (int *)(*param_2 + lVar10);
          piVar2 = (int *)(lVar6 + lVar10);
          *(undefined8 *)(piVar2 + -0xd) = *(undefined8 *)(piVar1 + -0xd);
          *(undefined8 *)(piVar2 + -0xf) = *(undefined8 *)(piVar1 + -0xf);
          uVar8 = *(undefined8 *)(piVar1 + -9);
          *(undefined8 *)(piVar2 + -5) = *(undefined8 *)(piVar1 + -5);
          uVar11 = *(undefined8 *)(piVar1 + -0xb);
          *(undefined8 *)(piVar2 + -7) = *(undefined8 *)(piVar1 + -7);
          *(undefined8 *)(piVar2 + -9) = uVar8;
          *(undefined8 *)(piVar2 + -0xb) = uVar11;
          piVar2[-3] = 0;
          piVar2[-2] = 0;
          piVar2[-1] = 0;
          piVar2[0] = -0x80000000;
          if (*piVar1 < 0) {
            local_34 = 4;
            iVar4 = (int)*(long *)(piVar1 + -1);
            local_68 = (long)iVar4 << 2;
            if (iVar4 < 0) {
              local_60 = 2;
              puStack_58 = &DAT_0411b3a0;
              local_50 = (long *)(piVar1 + -1);
              puStack_48 = (ulong *)&local_34;
              FUN_03320b50(0x77a36e5f,
                           "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                           ,0x27,"Array size overflow {}*{}",&local_60);
              iVar4 = piVar1[-1];
            }
            if (iVar4 == 0) {
              *piVar1 = 0;
              piVar1[-3] = 0;
              piVar1[-2] = 0;
            }
            else {
              __dest = (void *)(**(code **)(*(long *)puVar5 + 0x10))(puVar5,local_68,&local_68);
              if (__dest != (void *)0x0) {
                uVar13 = local_68 >> 2;
                if (0x3ffffffe < uVar13) {
                  uVar13 = 0x3fffffff;
                }
                memcpy(__dest,*(void **)(piVar1 + -3),local_68);
                *(void **)(piVar1 + -3) = __dest;
                *piVar1 = (int)uVar13;
              }
            }
          }
          *(undefined8 *)(piVar2 + -3) = *(undefined8 *)(piVar1 + -3);
          piVar2[-1] = piVar1[-1];
          *piVar2 = *piVar1;
          piVar1[-3] = 0;
          piVar1[-2] = 0;
          piVar1[-1] = 0;
          piVar1[0] = 0;
          lVar9 = lVar9 + 1;
          lVar10 = lVar10 + 0x40;
        } while (lVar9 < (int)*plVar12);
        if (0 < (int)*plVar12) {
          lVar10 = 0;
          lVar9 = 0;
          do {
            lVar3 = *param_2 + lVar10;
            *(undefined4 *)(lVar3 + 0x38) = 0;
            if ((-1 < *(int *)(lVar3 + 0x3c)) && (*(long *)(lVar3 + 0x30) != 0)) {
              (**(code **)(*(long *)puVar5 + 0x18))
                        (puVar5,*(long *)(lVar3 + 0x30),*(int *)(lVar3 + 0x3c) << 2);
            }
            *(undefined8 *)(lVar3 + 0x30) = 0;
            lVar9 = lVar9 + 1;
            lVar10 = lVar10 + 0x40;
            *(undefined4 *)(lVar3 + 0x3c) = 0x80000000;
          } while (lVar9 < (int)*plVar12);
        }
      }
      uVar8 = 0;
      *param_2 = lVar6;
      *(int *)((long)param_2 + 0xc) = iVar7;
    }
  }
  return uVar8;
}


