/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0305af68; name: FUN_0305af68
 */


void FUN_0305af68(long *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  void *__dest;
  int iVar5;
  ulong uVar6;
  uint uVar7;
  long lVar8;
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
  
  puVar4 = PTR_PTR_0434a090;
  puVar13 = (uint *)(param_1 + 1);
  uVar1 = *puVar13;
  if ((int)param_2 < 9) {
    param_2 = 8;
  }
  iVar14 = *(int *)((long)param_1 + 0xc);
  if (iVar14 < 0) {
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
      if (*puVar13 != 0) goto LAB_0305b230;
    }
    else if (uVar1 != 0) {
LAB_0305b230:
      __dest = (void *)(**(code **)(*(long *)puVar4 + 0x10))(puVar4,local_78[0],local_78);
      if (__dest == (void *)0x0) {
        iVar14 = *(int *)((long)param_1 + 0xc);
      }
      else {
        uVar6 = local_78[0] >> 2;
        if (0x3ffffffe < uVar6) {
          uVar6 = 0x3fffffff;
        }
        memcpy(__dest,(void *)*param_1,local_78[0]);
        *param_1 = (long)__dest;
        iVar14 = (int)uVar6;
        *(int *)((long)param_1 + 0xc) = iVar14;
      }
      goto LAB_0305afe8;
    }
    iVar14 = 0;
    *(undefined4 *)((long)param_1 + 0xc) = 0;
    *param_1 = 0;
  }
LAB_0305afe8:
  lVar11 = *param_1;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined4 *)((long)param_1 + 0xc) = 0;
  if ((int)param_2 < 1) {
    if (param_2 == 0) goto LAB_0305b014;
  }
  else {
    lVar8 = FUN_032bd1d4(puVar4,param_2,4,*param_1,0,(long)param_1 + 0xc);
    *param_1 = lVar8;
    if (*(uint *)(param_1 + 1) == param_2) goto LAB_0305b014;
  }
  *puVar13 = param_2;
LAB_0305b014:
  uVar9 = (ulong)param_2;
  uVar6 = uVar9 & 3;
  if (uVar9 - 1 < 3) {
    lVar8 = 0;
  }
  else {
    lVar8 = 0;
    do {
      lVar12 = lVar8 * 4;
      lVar8 = lVar8 + 4;
      *(undefined4 *)(*param_1 + lVar12) = 0xffffffff;
      *(undefined4 *)(*param_1 + lVar12 + 4) = 0xffffffff;
      *(undefined4 *)(*param_1 + lVar12 + 8) = 0xffffffff;
      *(undefined4 *)(*param_1 + lVar12 + 0xc) = 0xffffffff;
    } while (uVar9 - uVar6 != lVar8);
  }
  if ((param_2 & 3) != 0) {
    lVar8 = lVar8 << 2;
    do {
      *(undefined4 *)(*param_1 + lVar8) = 0xffffffff;
      uVar6 = uVar6 - 1;
      lVar8 = lVar8 + 4;
    } while (uVar6 != 0);
  }
  *(undefined4 *)(param_1 + 2) = 0;
  if (0 < (int)uVar1) {
    uVar6 = 0;
    do {
      iVar2 = *(int *)(lVar11 + uVar6 * 4);
      if (iVar2 != -1) {
        iVar5 = (int)param_1[1];
        if (iVar5 <= (int)param_1[2] * 2) {
          FUN_0305af68(param_1,iVar5 << 1);
          iVar5 = (int)param_1[1];
        }
        uVar7 = (iVar2 * -0x61c8864f & 0xff00ff00U) >> 8 | (iVar2 * -0x61c8864f & 0xff00ffU) << 8;
        uVar7 = iVar5 - 1U & (uVar7 >> 0x10 | uVar7 << 0x10);
        lVar8 = *param_1;
        piVar10 = (int *)(lVar8 + (long)(int)uVar7 * 4);
        if (*piVar10 == -1) {
          iVar5 = 1;
        }
        else if (*piVar10 == iVar2) {
          iVar5 = 0;
        }
        else {
          do {
            uVar7 = uVar7 + 1 & iVar5 - 1U;
            iVar3 = *(int *)(lVar8 + (long)(int)uVar7 * 4);
            if (iVar3 == -1) {
              iVar5 = 1;
              goto LAB_0305b1d0;
            }
          } while (iVar3 != iVar2);
          iVar5 = 0;
LAB_0305b1d0:
          piVar10 = (int *)(lVar8 + (long)(int)uVar7 * 4);
        }
        *(int *)(param_1 + 2) = (int)param_1[2] + iVar5;
        *piVar10 = iVar2;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 != uVar1);
  }
  if ((-1 < iVar14) && (lVar11 != 0)) {
    (**(code **)(*(long *)puVar4 + 0x18))(puVar4,lVar11,iVar14 << 2);
  }
  return;
}


