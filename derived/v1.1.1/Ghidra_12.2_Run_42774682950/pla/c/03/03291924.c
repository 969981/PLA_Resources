/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03291924; name: FUN_03291924
 */


void FUN_03291924(undefined8 param_1,long param_2,char param_3,long *param_4,long *param_5,
                 void **param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9)

{
  void **ppvVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  bool bVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  void *pvVar10;
  void *pvVar11;
  uint uVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  undefined8 *puVar16;
  undefined4 uVar17;
  int iVar18;
  ulong uVar19;
  uint *puVar20;
  uint uVar21;
  long lVar22;
  long local_90;
  undefined8 local_88;
  void *local_80;
  undefined8 local_78;
  
  puVar5 = PTR_PTR_0434a080;
  uVar21 = *(uint *)(param_2 + 0x20);
  uVar4 = *(uint *)(param_2 + 0x30);
  uVar19 = (ulong)uVar4;
  puVar20 = (uint *)((long)param_4 + 0xc);
  uVar12 = *puVar20;
  ppvVar1 = (void **)(param_2 + 0x18);
  if ((int)(uVar12 & 0x3fffffff) < (int)uVar21) {
    lVar13 = *param_4;
    lVar22 = param_4[1];
    if (0x3fffffff < (int)uVar21) {
      FUN_032bd0a8(uVar21);
      uVar12 = *puVar20;
    }
    uVar12 = (uVar12 & 0x3fffffff) << 1;
    if (0x3ffffffe < uVar12) {
      uVar12 = 0x3fffffff;
    }
    uVar3 = uVar21;
    if ((int)uVar21 <= (int)uVar12) {
      uVar3 = uVar12;
    }
    lVar22 = FUN_032bd1d4(puVar5,uVar3,4,lVar13,(int)lVar22,puVar20);
    *param_4 = lVar22;
  }
  if (*(uint *)(param_4 + 1) != uVar21) {
    *(uint *)(param_4 + 1) = uVar21;
  }
  FUN_03291f70(param_1,ppvVar1,param_6,param_4,param_7,param_8,param_9);
  if (param_3 == '\0') {
    if (ppvVar1 != param_6) {
      pvVar11 = *param_6;
      iVar18 = *(int *)(param_6 + 1);
      pvVar10 = *(void **)(param_2 + 0x18);
      if ((int)(*(uint *)(param_2 + 0x24) & 0x3fffffff) < iVar18) {
        pvVar10 = (void *)FUN_032bd1d4(puVar5,iVar18,0x10,pvVar10,*(undefined4 *)(param_2 + 0x20));
        *(void **)(param_2 + 0x18) = pvVar10;
      }
      memcpy(pvVar10,pvVar11,(long)iVar18 << 4);
      *(int *)(param_2 + 0x20) = iVar18;
    }
    goto joined_r0x03291a98;
  }
  local_80 = (void *)0x0;
  local_78 = 0x8000000000000000;
  uVar21 = *(uint *)(param_6 + 1);
  if (0 < (int)uVar21) {
    if (0x3fffffff < (int)uVar21) {
      FUN_032bd0a8(uVar21);
    }
    local_80 = (void *)FUN_032bd1d4(puVar5,uVar21,0x10,0,0,(long)&local_78 + 4);
    uVar21 = *(uint *)(param_6 + 1);
  }
  local_90 = 0;
  local_88 = -0x8000000000000000;
  if ((int)uVar21 < 1) {
    local_88._0_4_ = 0;
    bVar6 = false;
    uVar12 = uVar21;
    if ((int)uVar21 < 1) goto LAB_03291b50;
LAB_03291a18:
    lVar22 = (long)(int)(uint)local_88;
    uVar12 = ~(uint)local_88;
    local_88 = CONCAT44(local_88._4_4_,uVar21);
    memset((void *)(local_90 + lVar22 * 4),0xff,(ulong)(uVar21 + uVar12) * 4 + 4);
  }
  else {
    if ((int)uVar21 < 0x40000000) {
      uVar12 = 0;
    }
    else {
      FUN_032bd0a8(uVar21);
      uVar12 = local_88._4_4_;
    }
    uVar12 = (uVar12 & 0x3fffffff) << 1;
    if (0x3ffffffe < uVar12) {
      uVar12 = 0x3fffffff;
    }
    uVar3 = uVar21;
    if ((int)uVar21 <= (int)uVar12) {
      uVar3 = uVar12;
    }
    local_90 = FUN_032bd1d4(puVar5,uVar3,4,0,0,(long)&local_88 + 4);
    bVar6 = SBORROW4(uVar21,(uint)local_88);
    uVar12 = uVar21 - (uint)local_88;
    if ((int)(uint)local_88 < (int)uVar21) goto LAB_03291a18;
LAB_03291b50:
    if ((int)uVar12 < 0 != bVar6) {
      local_88 = CONCAT44(local_88._4_4_,uVar21);
    }
  }
  if (0 < (int)param_4[1]) {
    lVar22 = 0;
    do {
      uVar15 = local_78;
      pvVar10 = local_80;
      lVar13 = *param_4;
      lVar14 = (long)*(int *)(lVar13 + lVar22 * 4);
      iVar18 = *(int *)(local_90 + lVar14 * 4);
      if (iVar18 == -1) {
        iVar18 = (int)local_78;
        *(int *)(local_90 + lVar14 * 4) = (int)local_78;
        puVar16 = (undefined8 *)((long)*param_6 + lVar14 * 0x10);
        uVar21 = (int)local_78 + 1;
        if ((int)(local_78._4_4_ & 0x3fffffff) <= (int)local_78) {
          if (0x3ffffffe < (int)local_78) {
            FUN_032bd0a8(uVar21);
          }
          uVar12 = (local_78._4_4_ & 0x3fffffff) << 1;
          if (0x3ffffffe < uVar12) {
            uVar12 = 0x3fffffff;
          }
          uVar3 = uVar21;
          if ((int)uVar21 <= (int)uVar12) {
            uVar3 = uVar12;
          }
          local_80 = (void *)FUN_032bd1d4(puVar5,uVar3,0x10,pvVar10,uVar15 & 0xffffffff,
                                          (long)&local_78 + 4);
        }
        puVar9 = (undefined8 *)((long)local_80 + (long)(int)local_78 * 0x10);
        puVar9[1] = puVar16[1];
        *puVar9 = *puVar16;
        local_78 = CONCAT44(local_78._4_4_,uVar21);
        lVar13 = *param_4;
      }
      *(int *)(lVar13 + lVar22 * 4) = iVar18;
      lVar22 = lVar22 + 1;
    } while (lVar22 < (int)param_4[1]);
  }
  pvVar10 = local_80;
  if (&local_80 != ppvVar1) {
    iVar18 = (int)local_78;
    lVar22 = (long)(int)local_78;
    pvVar11 = *(void **)(param_2 + 0x18);
    if ((int)(*(uint *)(param_2 + 0x24) & 0x3fffffff) < (int)local_78) {
      pvVar11 = (void *)FUN_032bd1d4(puVar5,local_78 & 0xffffffff,0x10,pvVar11,
                                     *(undefined4 *)(param_2 + 0x20));
      *(void **)(param_2 + 0x18) = pvVar11;
    }
    memcpy(pvVar11,pvVar10,lVar22 << 4);
    *(int *)(param_2 + 0x20) = iVar18;
  }
  lVar22 = local_88;
  uVar21 = local_88._4_4_;
  local_88 = (ulong)local_88._4_4_ << 0x20;
  if ((-1 < lVar22) && (local_90 != 0)) {
    FUN_032cf244(puVar5,local_90,4,uVar21 & 0x3fffffff);
  }
  uVar15 = local_78;
  uVar21 = local_78._4_4_;
  local_78 = (ulong)local_78._4_4_ << 0x20;
  if ((-1 < (long)uVar15) && (local_80 != (void *)0x0)) {
    FUN_032cf244(puVar5,local_80,0x10,uVar21 & 0x3fffffff);
  }
joined_r0x03291a98:
  if (0 < (int)uVar4) {
    lVar22 = 0;
    uVar15 = uVar19;
    do {
      piVar2 = (int *)(*(long *)(param_2 + 0x28) + lVar22);
      *piVar2 = *(int *)(*param_4 + (long)*piVar2 * 4);
      uVar15 = uVar15 - 1;
      piVar2[1] = *(int *)(*param_4 + (long)piVar2[1] * 4);
      lVar22 = lVar22 + 0x10;
      piVar2[2] = *(int *)(*param_4 + (long)piVar2[2] * 4);
    } while (uVar15 != 0);
  }
  puVar20 = (uint *)((long)param_5 + 0xc);
  uVar21 = *puVar20;
  if ((int)(uVar21 & 0x3fffffff) < (int)uVar4) {
    lVar13 = *param_5;
    lVar22 = param_5[1];
    if (0x3fffffff < (int)uVar4) {
      FUN_032bd0a8(uVar19);
      uVar21 = *puVar20;
    }
    uVar21 = (uVar21 & 0x3fffffff) << 1;
    uVar15 = (ulong)uVar21;
    if (0x3ffffffe < uVar21) {
      uVar15 = 0x3fffffff;
    }
    uVar8 = uVar19;
    if ((int)uVar4 <= (int)uVar15) {
      uVar8 = uVar15;
    }
    lVar22 = FUN_032bd1d4(puVar5,uVar8,4,lVar13,(int)lVar22,puVar20);
    *param_5 = lVar22;
  }
  if (*(uint *)(param_5 + 1) != uVar4) {
    *(uint *)(param_5 + 1) = uVar4;
  }
  puVar9 = *(undefined8 **)(param_2 + 0x28);
  puVar16 = puVar9;
  if (0 < (int)uVar4) {
    lVar22 = 0;
    uVar15 = 0;
    do {
      piVar2 = (int *)((long)puVar9 + lVar22);
      if ((*piVar2 == piVar2[1]) || (*piVar2 == piVar2[2] || piVar2[1] == piVar2[2])) {
        uVar17 = 0xffffffff;
      }
      else {
        uVar7 = *(undefined8 *)(piVar2 + 2);
        uVar17 = (undefined4)((ulong)((long)puVar16 - (long)puVar9) >> 4);
        *puVar16 = *(undefined8 *)piVar2;
        puVar16[1] = uVar7;
        puVar16 = puVar16 + 2;
      }
      *(undefined4 *)(*param_5 + uVar15 * 4) = uVar17;
      puVar9 = *(undefined8 **)(param_2 + 0x28);
      uVar15 = uVar15 + 1;
      lVar22 = lVar22 + 0x10;
    } while (uVar19 != uVar15);
  }
  uVar19 = (ulong)((long)puVar16 - (long)puVar9) >> 4;
  iVar18 = (int)uVar19;
  if ((int)(*(uint *)(param_2 + 0x34) & 0x3fffffff) < iVar18) {
    uVar7 = FUN_02fada68(puVar5,uVar19 & 0xffffffff,puVar9,*(undefined4 *)(param_2 + 0x30));
    *(undefined8 *)(param_2 + 0x28) = uVar7;
  }
  if (*(int *)(param_2 + 0x30) != iVar18) {
    *(int *)(param_2 + 0x30) = iVar18;
  }
  return;
}


