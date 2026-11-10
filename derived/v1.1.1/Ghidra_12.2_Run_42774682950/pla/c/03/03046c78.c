/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03046c78; name: FUN_03046c78
 */


void FUN_03046c78(int param_1,uint param_2,byte *param_3,long param_4)

{
  uint uVar1;
  uint uVar2;
  byte *pbVar3;
  int iVar4;
  byte bVar5;
  byte bVar6;
  uint uVar7;
  undefined *puVar8;
  uint uVar9;
  ulong uVar10;
  uint uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  uint *puVar15;
  int iVar16;
  long lVar17;
  ulong uVar18;
  int iVar19;
  undefined4 *puVar20;
  undefined8 local_70;
  long local_68;
  undefined8 local_60;
  undefined4 local_58;
  
  uVar1 = param_1 + 1;
  local_58 = 0;
  iVar4 = param_1;
  if (param_1 < 0) {
    iVar4 = param_1 + 1;
  }
  local_68 = 0;
  local_60 = -0x8000000000000000;
  FUN_02ff1f1c(&local_68,0,uVar1 * param_1,0);
  puVar8 = PTR_PTR_0434a080;
  local_70 = -0x8000000000000000;
  if (param_1 < 0) {
    puVar20 = (undefined4 *)0x0;
    local_70._0_4_ = 0;
    if (param_1 < 0) {
LAB_03046cf0:
      uVar11 = (uint)local_70;
      if ((int)(uint)local_70 <= (int)uVar1) goto LAB_03046d00;
    }
  }
  else {
    if (0x3ffffffe < param_1) {
      FUN_032bd0a8(uVar1);
    }
    uVar11 = uVar1;
    if ((int)uVar1 < 1) {
      uVar11 = 0;
    }
    puVar20 = (undefined4 *)FUN_032bd1d4(puVar8,uVar11,4,0,0,(long)&local_70 + 4);
    if (param_1 < (int)(uint)local_70) goto LAB_03046cf0;
  }
  local_70 = CONCAT44(local_70._4_4_,uVar1);
  uVar11 = uVar1;
LAB_03046d00:
  if ((0 < (int)uVar11) && (*puVar20 = 0, uVar11 != 1)) {
    lVar12 = (long)(int)uVar11;
    if (lVar12 < 3) {
      lVar12 = 2;
    }
    memset(puVar20 + 1,0,lVar12 * 4 - 4);
  }
  lVar12 = local_70;
  if (0 < (int)param_2) {
    iVar4 = iVar4 >> 1;
    uVar13 = (ulong)param_2;
    if (param_1 < 0) {
      do {
        bVar5 = *param_3;
        bVar6 = param_3[1];
        uVar13 = uVar13 - 1;
        *(undefined2 *)(param_4 + (long)(puVar20[-1] - iVar4) * 2) = *(undefined2 *)param_3;
        puVar20[-1] = puVar20[-1] + 1;
        uVar1 = (int)((uint)bVar5 - param_1) >> 5;
        uVar14 = -(ulong)(uVar1 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar1 << 2;
        *(uint *)(local_68 + uVar14) =
             *(uint *)(local_68 + uVar14) | 1 << (ulong)((uint)bVar5 - param_1 & 0x1f);
        uVar1 = (int)((uint)bVar6 - param_1) >> 5;
        uVar14 = -(ulong)(uVar1 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar1 << 2;
        param_3 = param_3 + 2;
        *(uint *)(local_68 + uVar14) =
             *(uint *)(local_68 + uVar14) | 1 << (ulong)((uint)bVar6 - param_1 & 0x1f);
      } while (uVar13 != 0);
    }
    else {
      uVar14 = 0;
      do {
        pbVar3 = param_3 + uVar14 * 2;
        iVar19 = 0;
        iVar16 = 0;
        uVar18 = 0;
        uVar10 = 0xffffffff;
        do {
          if ((int)puVar20[uVar18] < iVar4) {
            uVar11 = iVar19 + (uint)*pbVar3;
            uVar7 = 1 << (ulong)(uVar11 & 0x1f);
            if ((uVar7 & *(uint *)(local_68 + (long)((int)uVar11 >> 5) * 4)) == 0) {
              uVar2 = iVar19 + (uint)pbVar3[1];
              uVar9 = 1 << (ulong)(uVar2 & 0x1f);
              if ((*(uint *)(local_68 + (long)((int)uVar2 >> 5) * 4) & uVar9) == 0) {
                *(undefined2 *)(param_4 + (long)(puVar20[uVar18] - iVar16) * 2) =
                     *(undefined2 *)pbVar3;
                puVar20[uVar18 & 0xffffffff] = puVar20[uVar18 & 0xffffffff] + 1;
                lVar17 = ((long)((ulong)uVar11 << 0x20) >> 0x25) * 4;
                *(uint *)(local_68 + lVar17) = *(uint *)(local_68 + lVar17) | uVar7;
                lVar17 = (long)((ulong)uVar2 << 0x20) >> 0x25;
                goto LAB_03046dbc;
              }
            }
            uVar10 = uVar18 & 0xffffffff;
          }
          uVar18 = uVar18 + 1;
          iVar16 = iVar16 - iVar4;
          iVar19 = iVar19 + param_1;
        } while (uVar1 != uVar18);
        iVar19 = (int)uVar10 * param_1;
        uVar11 = iVar19 + (uint)*pbVar3;
        uVar7 = iVar19 + (uint)pbVar3[1];
        uVar18 = -(uVar10 >> 0x1f) & 0xfffffffc00000000 | uVar10 << 2;
        uVar9 = 1 << (ulong)(uVar7 & 0x1f);
        *(undefined2 *)
         (param_4 + (long)(*(int *)((long)puVar20 + uVar18) + (int)uVar10 * iVar4) * 2) =
             *(undefined2 *)pbVar3;
        *(int *)((long)puVar20 + uVar18) = *(int *)((long)puVar20 + uVar18) + 1;
        uVar2 = (int)uVar11 >> 5;
        uVar18 = -(ulong)(uVar2 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar2 << 2;
        *(uint *)(local_68 + uVar18) = *(uint *)(local_68 + uVar18) | 1 << (ulong)(uVar11 & 0x1f);
        lVar17 = (long)((int)uVar7 >> 5);
LAB_03046dbc:
        puVar15 = (uint *)(local_68 + lVar17 * 4);
        uVar14 = uVar14 + 1;
        *puVar15 = *puVar15 | uVar9;
      } while (uVar14 != uVar13);
    }
  }
  uVar1 = local_70._4_4_;
  local_70 = (ulong)local_70._4_4_ << 0x20;
  if ((-1 < lVar12) && (puVar20 != (undefined4 *)0x0)) {
    (**(code **)(*(long *)puVar8 + 0x18))(puVar8,puVar20,uVar1 << 2);
  }
  lVar12 = local_60;
  uVar1 = local_60._4_4_;
  local_60 = (ulong)local_60._4_4_ << 0x20;
  if ((-1 < lVar12) && (local_68 != 0)) {
    (**(code **)(*(long *)puVar8 + 0x18))(puVar8,local_68,uVar1 << 2);
  }
  return;
}


