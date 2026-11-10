/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0324ca78; name: FUN_0324ca78
 */


void FUN_0324ca78(long *param_1,long *param_2)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined8 local_80;
  undefined *local_78;
  undefined4 *local_70;
  undefined4 *local_68;
  
  puVar3 = PTR_PTR_0434a080;
  if (param_1 != param_2) {
    if ((int)param_1[1] != 0) {
      lVar11 = *param_1;
      lVar10 = lVar11 + (long)(int)param_1[1] * 0x30;
      lVar5 = tpidr_el0;
      lVar9 = *(long *)(lVar10 + -0x10);
      if (lVar9 != 0) goto LAB_0324caf8;
      do {
        iVar1 = *(int *)(lVar10 + -0x18);
        lVar9 = lVar10;
        while( true ) {
          if (iVar1 != 0) {
            lVar6 = *(long *)(lVar9 + -0x20);
            lVar10 = (long)iVar1 * 0x68;
            do {
              FUN_031cd728(lVar6 + -0x60 + lVar10);
              lVar10 = lVar10 + -0x68;
            } while (lVar10 != 0);
          }
          lVar10 = lVar9 + -0x30;
          *(undefined4 *)(lVar9 + -0x18) = 0;
          if ((-1 < (int)*(uint *)(lVar9 + -0x14)) && (*(long *)(lVar9 + -0x20) != 0)) {
            (**(code **)(*(long *)puVar3 + 0x18))
                      (puVar3,*(long *)(lVar9 + -0x20),
                       ((ulong)*(uint *)(lVar9 + -0x14) & 0x3fffffff) * 0x68);
          }
          *(undefined8 *)(lVar9 + -0x20) = 0;
          *(undefined4 *)(lVar9 + -0x14) = 0x80000000;
          if (lVar10 == lVar11) goto LAB_0324cbc4;
          lVar9 = *(long *)(lVar9 + -0x40);
          if (lVar9 == 0) break;
LAB_0324caf8:
          if (*(int *)(lVar9 + 4) == -2) break;
          uVar7 = (long)*(int *)(lVar10 + -8) + 1;
          lVar6 = *(long *)(lVar5 + 0x38d490);
          if (lVar6 == 0) {
            lVar6 = FUN_0333d16c(0,1);
            *(long *)(lVar5 + 0x38d490) = lVar6;
          }
          plVar4 = *(long **)(*(long *)(lVar6 + 8) + 0x58);
          local_88 = (undefined4)uVar7;
          uStack_84 = 8;
          if ((uVar7 & 0x1ffffffff0000000) != 0) {
            local_78 = &DAT_0411b3a0;
            local_80 = 2;
            local_68 = &local_88;
            local_70 = &uStack_84;
            FUN_03320b50(0x39ec3d88,
                         "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Memory/Allocator/hkMemoryAllocator.cpp"
                         ,0x61,"Memory allocation request overflow {}*{}",&local_80);
          }
          (**(code **)(*plVar4 + 0x18))
                    (plVar4,lVar9,-(uVar7 >> 0x1c & 1) & 0xffffffff00000000 | uVar7 * 8 & 0xfffffff8
                    );
          *(undefined **)(lVar10 + -0x10) = &DAT_03aad864;
          *(undefined4 *)(lVar10 + -8) = 0;
          iVar1 = *(int *)(lVar10 + -0x18);
          lVar9 = lVar10;
        }
      } while( true );
    }
LAB_0324cbc4:
    *(undefined4 *)(param_1 + 1) = 0;
    if ((-1 < (int)*(uint *)((long)param_1 + 0xc)) && (*param_1 != 0)) {
      (**(code **)(*(long *)puVar3 + 0x18))
                (puVar3,*param_1,((ulong)*(uint *)((long)param_1 + 0xc) & 0x3fffffff) * 0x30);
    }
    *param_1 = 0;
    param_1[1] = -0x8000000000000000;
    if (*(int *)((long)param_2 + 0xc) < 0) {
      FUN_0324cd9c(puVar3,param_2);
    }
    *param_1 = *param_2;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((long)param_1 + 0xc) = *(undefined4 *)((long)param_2 + 0xc);
    *param_2 = 0;
    param_2[1] = 0;
  }
  FUN_032c21f8(param_1 + 2);
  iVar1 = (int)param_1[1];
  if ((int)param_1[3] * 2 < iVar1 * 3) {
    FUN_032c2334(param_1 + 2);
    iVar1 = (int)param_1[1];
  }
  if (0 < iVar1) {
    lVar5 = 0;
    do {
      lVar10 = param_1[2];
      uVar2 = *(int *)(*param_1 + lVar5 * 0x30) * -0x61c8864f;
      uVar2 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
      uVar2 = uVar2 >> 0x10 | uVar2 << 0x10;
      uVar7 = (ulong)(*(uint *)(param_1 + 3) & uVar2);
      piVar8 = (int *)(lVar10 + uVar7 * 8 + 4);
      iVar1 = *piVar8;
      while (-1 < iVar1) {
        uVar7 = ((long)(uVar7 << 3) >> 3) + 1U & (long)(int)*(uint *)(param_1 + 3);
        piVar8 = (int *)(lVar10 + uVar7 * 8 + 4);
        iVar1 = *piVar8;
      }
      *(uint *)(lVar10 + uVar7 * 8) = uVar2;
      *piVar8 = (int)lVar5;
      lVar5 = lVar5 + 1;
    } while (lVar5 < (int)param_1[1]);
  }
  return;
}


