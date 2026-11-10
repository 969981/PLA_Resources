/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031ba730; name: FUN_031ba730
 */


void FUN_031ba730(undefined8 param_1,undefined8 *param_2,long param_3,undefined8 param_4,
                 ulong param_5,undefined8 *param_6,int param_7,undefined8 param_8,undefined8 param_9
                 )

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  long lVar8;
  long lVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  long lVar12;
  uint uVar13;
  long lVar14;
  ulong uVar15;
  uint uVar16;
  uint uVar17;
  ulong uVar18;
  float fVar19;
  ulong local_118;
  uint local_110 [2];
  uint local_108 [2];
  undefined8 local_100;
  undefined8 uStack_f8;
  float local_f0;
  undefined4 uStack_ec;
  undefined8 uStack_e8;
  undefined4 *local_d8;
  undefined8 uStack_d0;
  uint local_c8 [2];
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  ulong uStack_a8;
  undefined4 *local_98;
  undefined4 *puStack_90;
  uint local_88 [2];
  long local_80;
  
  lVar14 = tpidr_el0;
  if (*(long *)(lVar14 + 0x38d490) == 0) {
    lVar8 = FUN_0333d16c(0,1);
    *(long *)(lVar14 + 0x38d490) = lVar8;
    lVar14 = *(long *)(lVar8 + 0x10);
  }
  else {
    lVar14 = *(long *)(*(long *)(lVar14 + 0x38d490) + 0x10);
  }
  if (lVar14 != 0) {
    FUN_032d5af0(lVar14,"TtcacheMeshData",0xf);
  }
  uVar1 = *(uint *)(param_2[6] + 8);
  iVar4 = *(int *)(param_2 + 3);
  if (iVar4 < (int)uVar1) {
    lVar8 = param_2[2];
    lVar12 = (long)(int)uVar1 << 7;
    *(uint *)(param_2 + 3) = uVar1;
    do {
      lVar12 = lVar12 + -0x80;
      lVar9 = lVar8 + (long)iVar4 * 0x80;
      *(undefined8 *)(lVar9 + 8) = 0xffffffffffffffff;
      lVar8 = lVar8 + 0x80;
      *(undefined4 *)(lVar9 + 0x10) = 4;
      *(undefined8 *)(lVar9 + 0x1c) = 0xffffffffffffffff;
      *(undefined4 *)(lVar9 + 0x24) = 4;
    } while ((long)iVar4 * 0x80 != lVar12);
  }
  else if ((int)uVar1 < iVar4) {
    *(uint *)(param_2 + 3) = uVar1;
  }
  local_80 = lVar14;
  if (param_7 == 0) {
    uVar11 = *param_6;
    param_2[1] = param_6[1];
    *param_2 = uVar11;
  }
  else {
    local_88[0] = (uint)param_5 & 0x3fffff;
    FUN_031934ec(*(undefined8 *)(*(long *)(param_3 + 0x38) + (param_5 >> 0x16 & 0x3ff) * 0xf0),
                 local_88,param_2);
  }
  if (0 < (int)uVar1) {
    uVar15 = 0;
    lVar8 = 0x70;
    local_118 = param_5;
    do {
      uVar2 = *(uint *)(*(long *)param_2[6] + uVar15 * 4);
      lVar12 = *(long *)(*(long *)(param_3 + 0x38) + (ulong)(uVar2 >> 0x16) * 0xf0);
      local_c8[0] = uVar2 & 0x3fffff;
      local_98 = (undefined4 *)0x0;
      puStack_90 = (undefined4 *)0x0;
      puVar6 = (undefined4 *)FUN_031b9d98(lVar12,local_c8,&local_b0,&local_c0,&local_98);
      lVar12 = *(long *)(lVar12 + 0x20);
      bVar3 = *(byte *)(puVar6 + 4);
      uVar16 = puVar6[3];
      uVar18 = (ulong)uVar16;
      if ((bVar3 >> 6 & 1) == 0) {
        if (uVar16 != 0xffffffff) {
          uVar18 = (ulong)(uVar16 & 0x3fffff | *(int *)(lVar12 + 0x17c) << 0x16);
        }
        uVar16 = puVar6[2];
        if (uVar16 != 0xffffffff) {
          uVar16 = uVar16 & 0x3fffff | *(int *)(lVar12 + 0x17c) << 0x16;
        }
        if ((bVar3 >> 4 & 1) != 0) goto LAB_031ba97c;
LAB_031ba938:
        uVar17 = (uint)local_118 & 0x3fffff;
        iVar4 = *(int *)(lVar12 + 0x50);
        uVar13 = uVar17 - *(int *)(lVar12 + 0x20);
        if ((int)uVar17 < *(int *)(lVar12 + 0x20)) {
          if (*(int *)(lVar12 + 0x98) == 0) {
            uVar13 = uVar17;
LAB_031ba968:
            lVar9 = *(long *)(lVar12 + 0x120) + (long)(int)(uVar13 * iVar4) * 4;
            lVar12 = *(long *)(lVar12 + 0xb0);
            goto LAB_031ba9a4;
          }
          uVar13 = *(uint *)(*(long *)(lVar12 + 0x90) + (ulong)uVar17 * 4);
          if (uVar13 != 0xffffffff) goto LAB_031ba968;
          lVar9 = *(long *)(lVar12 + 0x48) + (long)(int)(iVar4 * uVar17) * 4;
          lVar12 = *(long *)(lVar12 + 0x18) + (ulong)uVar17 * 0x10;
        }
        else {
          lVar9 = *(long *)(lVar12 + 0x140) + (long)(int)(iVar4 * uVar13) * 4;
          lVar12 = *(long *)(lVar12 + 0xd0);
LAB_031ba9a4:
          lVar12 = lVar12 + (long)(int)uVar13 * 0x10;
        }
        FUN_033299e0(0x44c76fcc);
        FUN_03161978(param_1,param_4,local_118 & 0xffffffff,lVar12,lVar9,lVar9 + (long)iVar4 * 4,
                     uVar2,puVar6,param_9,local_98,puStack_90,&local_d8,&local_f0);
        if (local_d8._0_4_ == 0.0) {
          local_d8._0_4_ = -1.0;
        }
        if (local_f0 == 0.0) {
          local_f0 = -1.0;
        }
        uStack_a8 = CONCAT44(local_d8._0_4_,(int)uStack_a8);
        fVar19 = local_f0;
      }
      else {
        uVar16 = puVar6[2];
        if ((bVar3 >> 4 & 1) == 0) goto LAB_031ba938;
LAB_031ba97c:
        fVar19 = 0.0;
        uStack_a8 = uStack_a8 & 0xffffffff;
      }
      uStack_b8 = CONCAT44(fVar19,(int)uStack_b8);
      local_108[0] = uVar16 & 0x3fffff;
      local_d8 = (undefined4 *)0x0;
      uStack_d0 = 0;
      puVar7 = (undefined4 *)
               FUN_031b9d98(*(undefined8 *)
                             (*(long *)(param_3 + 0x38) + (ulong)(uVar16 >> 0x16) * 0xf0),local_108,
                            &local_f0,&local_100,&local_d8);
      lVar9 = param_2[2];
      lVar12 = lVar9 + lVar8;
      *(undefined4 *)(lVar12 + -0x70) = *puVar6;
      *(undefined4 *)(lVar12 + -0x6c) = puVar6[1];
      uVar11 = *(undefined8 *)(puVar6 + 2);
      *(undefined2 *)(lVar12 + -0x60) = *(undefined2 *)(puVar6 + 4);
      *(undefined8 *)(lVar12 + -0x68) = uVar11;
      *(undefined2 *)(lVar12 + -0x5e) = *(undefined2 *)((long)puVar6 + 0x12);
      *(ulong *)(lVar12 + -0x38) = uStack_a8;
      *(undefined8 *)(lVar12 + -0x40) = local_b0;
      *(undefined8 *)(lVar12 + -0x28) = uStack_b8;
      *(undefined8 *)(lVar12 + -0x30) = local_c0;
      *(undefined4 *)(lVar12 + -0x5c) = *puVar7;
      *(undefined4 *)(lVar12 + -0x58) = puVar7[1];
      uVar11 = *(undefined8 *)(puVar7 + 2);
      *(undefined2 *)(lVar12 + -0x4c) = *(undefined2 *)(puVar7 + 4);
      *(undefined8 *)(lVar12 + -0x54) = uVar11;
      *(undefined2 *)(lVar12 + -0x4a) = *(undefined2 *)((long)puVar7 + 0x12);
      *(undefined8 *)(lVar12 + -0x18) = uStack_e8;
      *(ulong *)(lVar12 + -0x20) = CONCAT44(uStack_ec,local_f0);
      uVar17 = (uint)uVar18;
      *(uint *)(lVar12 + -0x68) = uVar16;
      *(uint *)(lVar12 + -100) = uVar17;
      *(uint *)(lVar12 + -0x54) = uVar2;
      *(uint *)(lVar12 + -0x50) = (uint)local_118;
      *(undefined8 *)(lVar12 + -8) = uStack_f8;
      *(undefined8 *)(lVar12 + -0x10) = local_100;
      if (((*(byte *)(puVar6 + 4) >> 4 & 1) == 0) || (local_98 == puStack_90)) {
        uVar10 = 0;
        *(undefined4 *)(lVar12 + -0x48) = 0;
      }
      else {
        *(undefined4 *)(lVar12 + -0x48) = *local_98;
        uVar10 = *local_d8;
      }
      *(undefined4 *)(lVar12 + -0x44) = uVar10;
      if (param_7 == 0) {
        uVar11 = *param_6;
        puVar5 = (undefined8 *)(lVar9 + lVar8);
        puVar5[1] = param_6[1];
        *puVar5 = uVar11;
      }
      else {
        local_110[0] = uVar17 & 0x3fffff;
        FUN_031934ec(*(undefined8 *)(*(long *)(param_3 + 0x38) + (ulong)(uVar17 >> 0x16) * 0xf0),
                     local_110);
      }
      uVar15 = uVar15 + 1;
      lVar8 = lVar8 + 0x80;
      local_118 = uVar18;
    } while (uVar1 != uVar15);
  }
  if (lVar14 != 0) {
    FUN_032d5b34(lVar14,&DAT_0390f40e);
  }
  return;
}


