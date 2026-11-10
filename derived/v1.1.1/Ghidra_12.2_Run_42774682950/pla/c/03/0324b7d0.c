/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0324b7d0; name: FUN_0324b7d0
 */


void FUN_0324b7d0(long *param_1,long *param_2)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  void *__dest;
  long *plVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  ulong local_60;
  undefined4 local_54;
  undefined8 local_50;
  undefined *puStack_48;
  long *local_40;
  undefined4 *puStack_38;
  
  puVar3 = PTR_PTR_0434a080;
  if (param_1 != param_2) {
    *(undefined4 *)(param_1 + 1) = 0;
    if ((-1 < (int)*(uint *)((long)param_1 + 0xc)) && (*param_1 != 0)) {
      (**(code **)(*(long *)puVar3 + 0x18))
                (puVar3,*param_1,((ulong)*(uint *)((long)param_1 + 0xc) & 0x3fffffff) << 3);
    }
    *param_1 = 0;
    param_1[1] = -0x8000000000000000;
    if (*(int *)((long)param_2 + 0xc) < 0) {
      local_54 = 8;
      plVar4 = param_2 + 1;
      iVar1 = (int)*plVar4;
      local_60 = (long)iVar1 << 3;
      if (iVar1 < 0) {
        local_50 = 2;
        puStack_48 = &DAT_0411b3a0;
        puStack_38 = &local_54;
        local_40 = plVar4;
        FUN_03320b50(0x77a36e5f,
                     "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                     ,0x27,"Array size overflow {}*{}",&local_50);
        iVar1 = (int)*plVar4;
      }
      if (iVar1 == 0) {
        *(undefined4 *)((long)param_2 + 0xc) = 0;
        *param_2 = 0;
      }
      else {
        __dest = (void *)(**(code **)(*(long *)puVar3 + 0x10))(puVar3,local_60,&local_60);
        if (__dest != (void *)0x0) {
          uVar7 = local_60 >> 3;
          if (0x3ffffffe < uVar7) {
            uVar7 = 0x3fffffff;
          }
          memcpy(__dest,(void *)*param_2,local_60);
          *param_2 = (long)__dest;
          *(int *)((long)param_2 + 0xc) = (int)uVar7;
        }
      }
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
      lVar6 = param_1[2];
      uVar2 = *(int *)(*param_1 + lVar5 * 8) * -0x61c8864f;
      uVar2 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
      uVar2 = uVar2 >> 0x10 | uVar2 << 0x10;
      uVar7 = (ulong)(*(uint *)(param_1 + 3) & uVar2);
      piVar8 = (int *)(lVar6 + uVar7 * 8 + 4);
      iVar1 = *piVar8;
      while (-1 < iVar1) {
        uVar7 = ((long)(uVar7 << 3) >> 3) + 1U & (long)(int)*(uint *)(param_1 + 3);
        piVar8 = (int *)(lVar6 + uVar7 * 8 + 4);
        iVar1 = *piVar8;
      }
      *(uint *)(lVar6 + uVar7 * 8) = uVar2;
      *piVar8 = (int)lVar5;
      lVar5 = lVar5 + 1;
    } while (lVar5 < (int)param_1[1]);
  }
  return;
}


