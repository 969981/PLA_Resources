/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031d3728; name: FUN_031d3728
 */


void FUN_031d3728(long param_1,long param_2,long param_3,long param_4)

{
  int *piVar1;
  int *piVar2;
  ushort uVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  char cVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  int *piVar10;
  uint *puVar11;
  undefined8 in_x7;
  uint uVar12;
  uint uVar13;
  uint *puVar14;
  long *plVar15;
  uint uVar16;
  int iVar17;
  long lVar18;
  int iVar19;
  ulong uVar20;
  int iVar21;
  long *plVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  int *piVar26;
  uint *puVar27;
  uint local_160;
  undefined4 local_15c;
  uint local_158 [2];
  undefined2 local_150 [4];
  uint local_148 [2];
  undefined2 local_140 [4];
  uint local_138 [2];
  long local_130;
  undefined8 uStack_128;
  long local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  long local_f0;
  undefined8 local_e8;
  long local_e0;
  undefined8 local_d8;
  int local_d0;
  int local_cc;
  int local_c8;
  int local_c4;
  undefined2 local_c0 [4];
  int local_b8 [2];
  undefined2 local_b0 [4];
  int local_a8 [2];
  undefined2 local_a0 [4];
  int local_98 [2];
  undefined2 local_90 [4];
  int local_88 [2];
  uint local_80 [2];
  uint local_78 [2];
  uint local_70 [4];
  
  lVar23 = *(long *)(*(long *)(*(long *)(param_1 + 0x18) + 0x38) +
                    (long)*(int *)(param_1 + 0x20) * 0xf0);
  lVar24 = *(long *)(*(long *)(*(long *)(param_2 + 0x18) + 0x38) +
                    (long)*(int *)(param_2 + 0x20) * 0xf0);
  if (*(char *)(lVar23 + 0x30) == '\x01') {
    lVar7 = *(long *)(lVar23 + 0x20);
  }
  else {
    lVar7 = FUN_02898b44();
  }
  if (*(char *)(lVar24 + 0x30) == '\x01') {
    lVar8 = *(long *)(lVar24 + 0x20);
  }
  else {
    lVar8 = FUN_02898b44();
  }
  puVar5 = PTR_PTR_0434a090;
  lVar18 = *(long *)(param_3 + 0x20);
  if ((lVar18 != 0) && (*(int *)(lVar18 + 0x28) != 0)) {
    piVar26 = *(int **)(lVar18 + 0x20);
    piVar2 = piVar26 + (long)*(int *)(lVar18 + 0x28) * 4;
    do {
      lVar18 = FUN_03157e1c(param_1 + 0xd8,piVar26);
      if (lVar18 == 0) {
        uVar12 = 0;
        uVar16 = 0xffffffff;
      }
      else {
        uVar16 = *(uint *)(lVar18 + 4);
        uVar12 = ((int)lVar18 - (int)*(undefined8 *)(param_1 + 0xe8)) * 0x20000000;
      }
      piVar1 = piVar26 + 2;
      lVar18 = FUN_03157e1c(param_2 + 0xd8,piVar1);
      if (lVar18 == 0) {
        uVar13 = 0xffffffff;
        if (-1 < (int)(uVar16 | uVar12)) goto LAB_031d3880;
LAB_031d38ac:
        if (-1 < (int)uVar13) {
          lVar18 = param_1 + 0xb8;
          piVar10 = piVar26;
LAB_031d38b8:
          FUN_031cdd40(lVar18,piVar10);
          goto LAB_031d38bc;
        }
      }
      else {
        uVar13 = *(uint *)(lVar18 + 4) |
                 ((int)lVar18 - (int)*(undefined8 *)(param_2 + 0xe8)) * 0x20000000;
        if ((int)(uVar16 | uVar12) < 0) goto LAB_031d38ac;
LAB_031d3880:
        if ((int)uVar13 < 0) {
          lVar18 = param_2 + 0xb8;
          piVar10 = piVar1;
          goto LAB_031d38b8;
        }
LAB_031d38bc:
        local_130 = 0;
        uStack_128 = -0x8000000000000000;
        local_120 = 0;
        uStack_118 = -0x8000000000000000;
        local_f0 = CONCAT44(local_f0._4_4_,*piVar26);
        cVar6 = FUN_0318fe6c(*(undefined8 *)(lVar23 + 0x20),&local_f0,&local_160,local_70);
        if (cVar6 != '\0') {
          for (uVar16 = local_160; uVar16 != local_70[0]; uVar16 = uVar16 + 1) {
            local_f0 = CONCAT44(local_f0._4_4_,uVar16);
            FUN_0318ac98(lVar23,&local_f0);
          }
        }
        local_f0 = CONCAT44(local_f0._4_4_,*piVar1);
        cVar6 = FUN_0318fe6c(*(undefined8 *)(lVar24 + 0x20),&local_f0,&local_160,local_70);
        if (cVar6 != '\0') {
          for (uVar16 = local_160; uVar16 != local_70[0]; uVar16 = uVar16 + 1) {
            local_f0 = CONCAT44(local_f0._4_4_,uVar16);
            FUN_0318ac98(lVar24,&local_f0);
          }
        }
        local_88[0] = *piVar26;
        iVar17 = local_88[0] - *(int *)(lVar7 + 0x20);
        if (local_88[0] < *(int *)(lVar7 + 0x20)) {
          lVar18 = *(long *)(lVar7 + 0x18);
          iVar17 = local_88[0];
          if (*(int *)(lVar7 + 0x98) != 0) {
            iVar17 = *(int *)(*(long *)(lVar7 + 0x90) + (long)local_88[0] * 4);
          }
          plVar15 = (long *)(lVar7 + 0xb0);
          if (iVar17 != -1) goto LAB_031d39a8;
          iVar17 = local_88[0];
        }
        else {
          plVar15 = (long *)(lVar7 + 0xd0);
LAB_031d39a8:
          lVar18 = *plVar15;
        }
        piVar10 = (int *)(lVar18 + (long)iVar17 * 0x10);
        uVar3 = *(ushort *)(piVar10 + 2);
        uVar16 = piVar26[1] - *piVar10;
        if ((uint)(int)(short)uVar3 <= uVar16) {
          uVar16 = (uint)uVar3 + (piVar26[1] - *(int *)(lVar18 + (long)iVar17 * 0x10 + 4));
        }
        iVar17 = *piVar1;
        if (iVar17 < *(int *)(lVar8 + 0x20)) {
          lVar18 = *(long *)(lVar8 + 0x18);
          iVar19 = iVar17;
          if (*(int *)(lVar8 + 0x98) != 0) {
            iVar19 = *(int *)(*(long *)(lVar8 + 0x90) + (long)iVar17 * 4);
          }
          plVar15 = (long *)(lVar8 + 0xb0);
          if (iVar19 != -1) goto LAB_031d3a24;
        }
        else {
          plVar15 = (long *)(lVar8 + 0xd0);
          iVar19 = iVar17 - *(int *)(lVar8 + 0x20);
LAB_031d3a24:
          iVar17 = iVar19;
          lVar18 = *plVar15;
        }
        piVar1 = (int *)(lVar18 + (long)iVar17 * 0x10);
        uVar3 = *(ushort *)(piVar1 + 2);
        uVar12 = piVar26[3] - *piVar1;
        if ((uint)(int)(short)uVar3 <= uVar12) {
          uVar12 = (uint)uVar3 + (piVar26[3] - *(int *)(lVar18 + (long)iVar17 * 0x10 + 4));
        }
        local_90[0] = (short)uVar16;
        FUN_031d3080(param_1,lVar23,local_88,local_90);
        local_98[0] = piVar26[2];
        local_a0[0] = (short)uVar12;
        FUN_031d3080(param_2,lVar24,local_98,local_a0);
        local_a8[0] = *piVar26;
        local_b0[0] = (short)uVar16;
        FUN_031d31fc(lVar23,local_a8,local_b0,&local_130,1);
        local_b8[0] = piVar26[2];
        local_c0[0] = (short)uVar12;
        FUN_031d31fc(lVar24,local_b8,local_c0,&local_120,1);
        local_c8 = *piVar26;
        local_c4 = piVar26[1];
        local_d0 = piVar26[2];
        local_cc = piVar26[3];
        FUN_031d4074(*(undefined8 *)(param_1 + 0x18),lVar23,lVar24,&local_c8,&local_d0,local_130,
                     local_130 + (long)(int)uStack_128 * 8,in_x7,local_120,
                     local_120 + (long)(int)uStack_118 * 8,param_4);
        FUN_033299e0(0x40a15479);
        lVar18 = uStack_118;
        uVar16 = uStack_118._4_4_;
        uStack_118 = (ulong)uStack_118._4_4_ << 0x20;
        if ((-1 < lVar18) && (local_120 != 0)) {
          FUN_032cf244(puVar5,local_120,8,uVar16 & 0x3fffffff);
        }
        lVar18 = uStack_128;
        uStack_118 = CONCAT44(0x80000000,(int)uStack_118);
        uVar16 = uStack_128._4_4_;
        local_120 = 0;
        uStack_128 = (ulong)uStack_128._4_4_ << 0x20;
        if ((-1 < lVar18) && (local_130 != 0)) {
          FUN_032cf244(puVar5,local_130,8,uVar16 & 0x3fffffff);
        }
      }
      piVar26 = piVar26 + 4;
    } while (piVar26 != piVar2);
  }
  puVar5 = PTR_PTR_0434a090;
  if (*(int *)(param_3 + 0x30) != 0) {
    puVar27 = *(uint **)(param_3 + 0x28);
    puVar14 = puVar27 + (long)*(int *)(param_3 + 0x30) * 3;
    do {
      lVar18 = FUN_03157e1c(param_1 + 0xd8,puVar27);
      if (lVar18 == 0) {
        uVar12 = 0;
        uVar16 = 0xffffffff;
      }
      else {
        uVar16 = *(uint *)(lVar18 + 4);
        uVar12 = ((int)lVar18 - (int)*(undefined8 *)(param_1 + 0xe8)) * 0x20000000;
      }
      lVar18 = FUN_03157e1c(param_2 + 0xd8,puVar27 + 1);
      if (lVar18 == 0) {
        uVar13 = 0xffffffff;
        if (-1 < (int)(uVar16 | uVar12)) goto LAB_031d3c78;
LAB_031d3ca4:
        if (-1 < (int)uVar13) {
          lVar18 = param_1 + 0xb8;
          puVar11 = puVar27;
LAB_031d3cb0:
          FUN_031cdd40(lVar18,puVar11);
          goto LAB_031d3cb4;
        }
      }
      else {
        uVar13 = *(uint *)(lVar18 + 4) |
                 ((int)lVar18 - (int)*(undefined8 *)(param_2 + 0xe8)) * 0x20000000;
        if ((int)(uVar16 | uVar12) < 0) goto LAB_031d3ca4;
LAB_031d3c78:
        if ((int)uVar13 < 0) {
          lVar18 = param_2 + 0xb8;
          puVar11 = puVar27 + 1;
          goto LAB_031d3cb0;
        }
LAB_031d3cb4:
        local_f0 = 0;
        local_e8 = -0x8000000000000000;
        local_e0 = 0;
        local_d8 = -0x8000000000000000;
        local_160 = *puVar27;
        cVar6 = FUN_0318fe6c(*(undefined8 *)(lVar23 + 0x20),&local_160,local_70,local_78);
        if (cVar6 != '\0') {
          for (uVar16 = local_70[0]; uVar16 != local_78[0]; uVar16 = uVar16 + 1) {
            local_80[0] = uVar16;
            FUN_0318ac98(lVar23,local_80);
          }
        }
        local_138[0] = *puVar27;
        local_140[0] = (undefined2)puVar27[2];
        FUN_031d3080(param_1,lVar23,local_138,local_140);
        local_148[0] = *puVar27;
        local_150[0] = (undefined2)puVar27[2];
        FUN_031d31fc(lVar23,local_148,local_150,&local_f0,1);
        local_158[0] = *puVar27;
        lVar25 = (long)(int)local_158[0];
        lVar18 = *(long *)(*(long *)(lVar23 + 0x20) + 0x18);
        lVar9 = FUN_031920dc((long *)(lVar7 + 0x188),local_158);
        if (lVar9 == 0) {
          uVar12 = 0;
          uVar16 = 0xffffffff;
        }
        else {
          uVar16 = *(uint *)(lVar9 + 4);
          uVar12 = ((int)lVar9 - (int)*(undefined8 *)(lVar7 + 0x198)) * 0x20000000;
        }
        lVar18 = lVar18 + lVar25 * 0x10;
        uVar20 = (ulong)(((uint)(ushort)puVar27[2] - (uint)*(ushort *)(lVar18 + 8)) -
                        (uint)*(ushort *)(lVar18 + 10)) & 0xffff;
        lVar9 = *(long *)(*(long *)(lVar7 + 0x188) + (long)(int)(uVar16 | uVar12) * 0x38 + 8);
        iVar19 = *(int *)(lVar9 + uVar20 * 0x14);
        lVar18 = *(long *)(lVar23 + 0x20);
        iVar17 = *(int *)(lVar18 + 0x40);
        plVar15 = (long *)(lVar18 + 0x38);
        if (iVar19 < iVar17) {
          iVar21 = 0;
          plVar22 = plVar15;
        }
        else {
          plVar22 = (long *)(lVar18 + 0xf0);
          iVar21 = iVar17;
        }
        plVar22 = (long *)(*plVar22 + (long)(iVar19 - iVar21) * 0x10);
        uStack_128 = plVar22[1];
        local_130 = *plVar22;
        iVar19 = *(int *)(lVar9 + uVar20 * 0x14 + 4);
        if (iVar19 < iVar17) {
          iVar17 = 0;
        }
        else {
          plVar15 = (long *)(lVar18 + 0xf0);
        }
        plVar15 = (long *)(*plVar15 + (long)(iVar19 - iVar17) * 0x10);
        uStack_118 = plVar15[1];
        local_120 = *plVar15;
        local_160 = puVar27[1];
        cVar6 = FUN_0318fe6c(*(undefined8 *)(lVar24 + 0x20),&local_160,local_70,local_78);
        if (cVar6 != '\0') {
          for (uVar16 = local_70[0]; uVar16 != local_78[0]; uVar16 = uVar16 + 1) {
            local_80[0] = uVar16;
            FUN_0318ac98(lVar24,local_80);
          }
        }
        local_138[0] = puVar27[1];
        local_140[0] = *(undefined2 *)((long)puVar27 + 10);
        FUN_031d3080(param_2,lVar24,local_138,local_140);
        local_148[0] = puVar27[1];
        local_150[0] = *(undefined2 *)((long)puVar27 + 10);
        FUN_031d31fc(lVar24,local_148,local_150,&local_e0,1);
        local_158[0] = puVar27[1];
        lVar25 = (long)(int)local_158[0];
        lVar18 = *(long *)(*(long *)(lVar24 + 0x20) + 0x18);
        lVar9 = FUN_031920dc((long *)(lVar8 + 0x188),local_158);
        if (lVar9 == 0) {
          uVar12 = 0;
          uVar16 = 0xffffffff;
        }
        else {
          uVar16 = *(uint *)(lVar9 + 4);
          uVar12 = ((int)lVar9 - (int)*(undefined8 *)(lVar8 + 0x198)) * 0x20000000;
        }
        lVar18 = lVar18 + lVar25 * 0x10;
        uVar20 = (ulong)(((uint)*(ushort *)((long)puVar27 + 10) - (uint)*(ushort *)(lVar18 + 8)) -
                        (uint)*(ushort *)(lVar18 + 10)) & 0xffff;
        lVar18 = *(long *)(*(long *)(lVar8 + 0x188) + (long)(int)(uVar16 | uVar12) * 0x38 + 8);
        lVar9 = *(long *)(lVar24 + 0x20);
        iVar17 = *(int *)(lVar9 + 0x40);
        iVar19 = *(int *)(lVar18 + uVar20 * 0x14);
        if (iVar19 < iVar17) {
          iVar17 = 0;
          plVar15 = (long *)(lVar9 + 0x38);
        }
        else {
          plVar15 = (long *)(lVar9 + 0xf0);
        }
        puVar4 = (undefined8 *)(*plVar15 + (long)(iVar19 - iVar17) * 0x10);
        uStack_108 = puVar4[1];
        local_110 = *puVar4;
        lVar9 = *(long *)(lVar24 + 0x20);
        iVar17 = *(int *)(lVar18 + uVar20 * 0x14 + 4);
        iVar19 = *(int *)(lVar9 + 0x40);
        if (iVar17 < iVar19) {
          iVar19 = 0;
          plVar15 = (long *)(lVar9 + 0x38);
        }
        else {
          plVar15 = (long *)(lVar9 + 0xf0);
        }
        puVar4 = (undefined8 *)(*plVar15 + (long)(iVar17 - iVar19) * 0x10);
        uStack_f8 = puVar4[1];
        local_100 = *puVar4;
        local_160 = local_160 & 0xffff0000;
        local_15c = *(undefined4 *)(param_4 + 0x30);
        FUN_031df430(*(undefined8 *)(param_1 + 0x18),lVar23,lVar24,&local_130,&local_110,local_f0,
                     local_f0 + (long)(int)local_e8 * 8,in_x7,local_e0,
                     local_e0 + (long)(int)local_d8 * 8,&local_160);
        lVar18 = local_d8;
        uVar16 = local_d8._4_4_;
        local_d8 = (ulong)local_d8._4_4_ << 0x20;
        if ((-1 < lVar18) && (local_e0 != 0)) {
          FUN_032cf244(puVar5,local_e0,8,uVar16 & 0x3fffffff);
        }
        lVar18 = local_e8;
        local_d8 = CONCAT44(0x80000000,(int)local_d8);
        uVar16 = local_e8._4_4_;
        local_e0 = 0;
        local_e8 = (ulong)local_e8._4_4_ << 0x20;
        if ((-1 < lVar18) && (local_f0 != 0)) {
          FUN_032cf244(puVar5,local_f0,8,uVar16 & 0x3fffffff);
        }
      }
      puVar27 = puVar27 + 3;
    } while (puVar27 != puVar14);
  }
  return;
}


