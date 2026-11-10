/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03199d54; name: FUN_03199d54
 */


undefined8 FUN_03199d54(long *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  long lVar5;
  void *__dest;
  uint uVar6;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  int *piVar10;
  long lVar11;
  long lVar12;
  uint *puVar13;
  int iVar14;
  ulong local_78 [2];
  undefined *puStack_68;
  uint *local_60;
  undefined4 *puStack_58;
  undefined4 local_44;
  
  puVar4 = PTR_PTR_0434a080;
  puVar13 = (uint *)(param_1 + 1);
  uVar1 = *puVar13;
  if ((int)param_2 < 9) {
    param_2 = 8;
  }
  iVar14 = *(int *)((long)param_1 + 0xc);
  if (-1 < iVar14) goto LAB_03199dd4;
  local_44 = 4;
  local_78[0] = (long)(int)uVar1 << 2;
  if ((int)uVar1 < 0) {
    local_78[1] = 2;
    puStack_68 = &DAT_0411b3a0;
    puStack_58 = &local_44;
    local_60 = puVar13;
    FUN_03320b50(0x77a36e5f,
                 "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                 ,0x27,"Array size overflow {}*{}",local_78 + 1);
    if (*puVar13 != 0) goto LAB_0319a014;
  }
  else if (uVar1 != 0) {
LAB_0319a014:
    __dest = (void *)(**(code **)(*(long *)puVar4 + 0x10))(puVar4,local_78[0],local_78);
    if (__dest == (void *)0x0) {
      iVar14 = *(int *)((long)param_1 + 0xc);
    }
    else {
      uVar8 = local_78[0] >> 2;
      if (0x3ffffffe < uVar8) {
        uVar8 = 0x3fffffff;
      }
      memcpy(__dest,(void *)*param_1,local_78[0]);
      *param_1 = (long)__dest;
      iVar14 = (int)uVar8;
      *(int *)((long)param_1 + 0xc) = iVar14;
    }
    goto LAB_03199dd4;
  }
  iVar14 = 0;
  *(undefined4 *)((long)param_1 + 0xc) = 0;
  *param_1 = 0;
LAB_03199dd4:
  lVar11 = *param_1;
  *param_1 = 0;
  uVar6 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined4 *)((long)param_1 + 0xc) = 0;
  if (0 < (int)param_2) {
    lVar5 = FUN_032bd1d4(puVar4,param_2,4,*param_1,0,(long)param_1 + 0xc);
    uVar6 = *(uint *)(param_1 + 1);
    *param_1 = lVar5;
  }
  if (uVar6 != param_2) {
    *puVar13 = param_2;
  }
  uVar9 = (ulong)param_2;
  uVar8 = uVar9 & 3;
  if (uVar9 - 1 < 3) {
    lVar5 = 0;
  }
  else {
    lVar5 = 0;
    do {
      lVar12 = lVar5 * 4;
      lVar5 = lVar5 + 4;
      *(undefined4 *)(*param_1 + lVar12) = 0xffffffff;
      *(undefined4 *)(*param_1 + lVar12 + 4) = 0xffffffff;
      *(undefined4 *)(*param_1 + lVar12 + 8) = 0xffffffff;
      *(undefined4 *)(*param_1 + lVar12 + 0xc) = 0xffffffff;
    } while (uVar9 - uVar8 != lVar5);
  }
  if ((param_2 & 3) != 0) {
    lVar5 = lVar5 << 2;
    do {
      *(undefined4 *)(*param_1 + lVar5) = 0xffffffff;
      uVar8 = uVar8 - 1;
      lVar5 = lVar5 + 4;
    } while (uVar8 != 0);
  }
  *(undefined4 *)(param_1 + 2) = 0;
  if (0 < (int)uVar1) {
    uVar8 = 0;
    do {
      iVar2 = *(int *)(lVar11 + uVar8 * 4);
      if (iVar2 != -1) {
        iVar7 = (int)param_1[1];
        if (iVar7 <= (int)param_1[2] * 2) {
          FUN_03199d54(param_1,iVar7 << 1);
          iVar7 = (int)param_1[1];
        }
        uVar6 = (iVar2 * -0x61c8864f & 0xff00ff00U) >> 8 | (iVar2 * -0x61c8864f & 0xff00ffU) << 8;
        uVar6 = iVar7 - 1U & (uVar6 >> 0x10 | uVar6 << 0x10);
        lVar5 = *param_1;
        piVar10 = (int *)(lVar5 + (long)(int)uVar6 * 4);
        if (*piVar10 == -1) {
          iVar7 = 1;
        }
        else if (*piVar10 == iVar2) {
          iVar7 = 0;
        }
        else {
          do {
            uVar6 = uVar6 + 1 & iVar7 - 1U;
            iVar3 = *(int *)(lVar5 + (long)(int)uVar6 * 4);
            if (iVar3 == -1) {
              iVar7 = 1;
              goto LAB_03199fa0;
            }
          } while (iVar3 != iVar2);
          iVar7 = 0;
LAB_03199fa0:
          piVar10 = (int *)(lVar5 + (long)(int)uVar6 * 4);
        }
        *(int *)(param_1 + 2) = (int)param_1[2] + iVar7;
        *piVar10 = iVar2;
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 != uVar1);
  }
  if ((-1 < iVar14) && (lVar11 != 0)) {
    (**(code **)(*(long *)puVar4 + 0x18))(puVar4,lVar11,iVar14 << 2);
  }
  return 0;
}


