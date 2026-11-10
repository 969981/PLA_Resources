/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029dcb34; name: FUN_029dcb34
 */


void FUN_029dcb34(long param_1,undefined8 param_2,undefined8 *param_3)

{
  long *plVar1;
  int iVar2;
  byte bVar3;
  undefined8 *puVar4;
  undefined1 uVar5;
  undefined4 uVar6;
  long lVar7;
  byte bVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  undefined1 uVar14;
  long lVar15;
  ulong uVar16;
  undefined1 local_1c0;
  undefined4 local_1bf;
  undefined2 local_1bb;
  undefined4 local_1b9;
  undefined2 local_1b5;
  undefined4 local_1b3;
  undefined2 local_1af;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined4 local_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 local_164;
  undefined4 local_160;
  undefined2 uStack_15c;
  undefined2 uStack_15a;
  undefined6 uStack_158;
  undefined2 local_152;
  undefined2 uStack_150;
  undefined4 uStack_14e;
  undefined8 *local_148;
  undefined8 **ppuStack_140;
  undefined8 *local_138;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 *local_118;
  undefined8 **local_110;
  undefined8 local_108;
  undefined1 local_100;
  undefined8 uStack_f8;
  undefined1 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined2 uStack_9c;
  undefined2 uStack_9a;
  undefined6 uStack_98;
  undefined2 local_92;
  undefined2 uStack_90;
  undefined4 uStack_8e;
  undefined1 local_88;
  undefined4 local_87;
  undefined2 local_83;
  undefined4 local_81;
  undefined2 local_7d;
  undefined4 local_7b;
  undefined2 local_77;
  undefined8 *local_70 [2];
  
  uVar9 = *(ulong *)(*(long *)(param_1 + 0x40) + 200);
  if (((uint)uVar9 >> 2 & 1) == 0) {
    *(ulong *)(*(long *)(param_1 + 0x40) + 200) = uVar9 | 4;
    lVar7 = *(long *)(param_1 + 0x48);
    uVar9 = (ulong)*(byte *)(lVar7 + 0xd88);
    if (*(byte *)(lVar7 + 0xd88) != 0) {
      uVar16 = 0;
      lVar11 = 8;
      do {
        plVar1 = (long *)(lVar7 + lVar11);
        if ((uint)uVar9 <= ((uint)uVar16 & 0xff)) {
          plVar1 = (long *)0x0;
        }
        if (((int)plVar1[1] == 1) && (iVar2 = (int)plVar1[2], iVar2 != 0)) {
          lVar15 = *plVar1;
          uVar13 = (ulong)*(byte *)(lVar15 + 0x7d);
          lVar12 = *(long *)(param_1 + 0x20);
          uVar6 = FUN_029506a8(lVar15,0xc);
          lVar7 = *(long *)(lVar12 + 0x20);
          uVar9 = FUN_02a17630(*(undefined8 *)(lVar7 + 0x18),
                               *(undefined8 *)
                                (*(long *)(*(long *)(lVar7 + 0x10) + 8) + uVar13 * 8 + 0x120),iVar2,
                               uVar6);
          if ((uVar9 & 1) != 0) {
            FUN_02a3e6b8(*(undefined8 *)(lVar12 + 0x18),0x56,uVar13,iVar2,uVar6);
            FUN_0298cb50(*(undefined8 *)(param_1 + 0x38),lVar15,iVar2);
            lVar12 = *(long *)(param_1 + 0x20);
            lVar7 = *(long *)(lVar12 + 0x20);
            FUN_02a17860(*(undefined8 *)(lVar7 + 0x18),
                         *(undefined8 *)
                          (*(long *)(*(long *)(lVar7 + 0x10) + 8) + uVar13 * 8 + 0x120),iVar2);
            FUN_02a3e6b8(*(undefined8 *)(lVar12 + 0x18),0x57,uVar13,iVar2);
          }
        }
        lVar7 = *(long *)(param_1 + 0x48);
        uVar16 = uVar16 + 1;
        lVar11 = lVar11 + 0x60;
        uVar9 = (ulong)*(byte *)(lVar7 + 0xd88);
      } while (uVar16 < uVar9);
    }
  }
  param_3 = (undefined8 *)*param_3;
  puVar10 = (undefined8 *)*param_3;
  bVar3 = *(byte *)((long)puVar10 + 0x387);
  uVar9 = puVar10[0x2e];
  uStack_150 = 0;
  uStack_14e = 0;
  local_1a8 = 0;
  local_160 = 0;
  uStack_15c = 0;
  uStack_15a = 0;
  uStack_158 = 0;
  local_152 = 0;
  local_1bb = 0x1f1f;
  local_170 = 0;
  uStack_16c = 0;
  uStack_168 = 0;
  local_164 = 0;
  local_1bf = 0x1f1f1f1f;
  local_180 = 0;
  local_178 = 0;
  local_1b9 = 0x6060606;
  local_190 = 0;
  local_188 = 0;
  local_1a0 = 0;
  local_198 = 0;
  local_1b5 = 0x606;
  local_1b3 = 0x1f1f1f1f;
  local_1af = 0x1f1f;
  uStack_90 = 0;
  uStack_8e = 0;
  local_e8 = 0;
  local_88 = 0;
  local_a0 = 0;
  uStack_9c = 0;
  uStack_9a = 0;
  uStack_98 = 0;
  local_92 = 0;
  local_b0 = 0;
  uStack_ac = 0;
  uStack_a8 = 0;
  local_a4 = 0;
  local_c0 = 0;
  local_b8 = 0;
  local_d0 = 0;
  local_c8 = 0;
  local_e0 = 0;
  local_d8 = 0;
  local_87 = 0x1f1f1f1f;
  local_83 = 0x1f1f;
  local_81 = 0x6060606;
  local_7d = 0x606;
  local_77 = 0x1f1f;
  local_7b = 0x1f1f1f1f;
  local_70[0] = param_3;
  FUN_02a02228(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x1c40),&local_120,local_70);
  local_138 = local_108;
  local_128 = uStack_f8;
  local_148 = local_118;
  puVar4 = local_148;
  ppuStack_140 = local_110;
  uVar14 = local_120._4_1_;
  local_1a8 = local_e8;
  local_1a0 = local_e0;
  uVar5 = local_120._5_1_;
  local_188 = local_c8;
  local_180 = local_c0;
  local_198 = local_d8;
  local_190 = local_d0;
  local_178 = local_b8;
  local_170 = local_b0;
  uStack_16c = uStack_ac;
  uStack_168 = uStack_a8;
  local_164 = local_a4;
  local_160 = local_a0;
  local_152 = local_92;
  uStack_150 = uStack_90;
  uStack_15a = uStack_9a;
  uStack_158 = uStack_98;
  uStack_14e = uStack_8e;
  local_1c0 = local_88;
  local_1bf = local_87;
  local_1bb = local_83;
  uStack_15c = uStack_9c;
  local_1af = local_77;
  local_1b9 = local_81;
  local_1b5 = local_7d;
  local_1b3 = local_7b;
  if ((int)local_120 == 4) {
    local_148._0_4_ = (int)local_118;
    local_110 = (undefined8 **)CONCAT44(local_110._4_4_,(int)local_148);
    local_148 = puVar4;
    local_120 = (undefined8 *)&local_1c0;
    local_118 = puVar10;
    FUN_02a09508(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x1ca0),local_70,&local_120);
  }
  else if ((int)local_120 == 1) {
    local_118 = param_3 + 5;
    local_110 = &local_148;
    local_108 = &local_1a8;
    local_120 = puVar10;
    FUN_02a017dc(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x1a80),local_70,&local_120);
    uVar14 = local_70[0]._0_1_;
  }
  lVar7 = *(long *)(*(long *)(param_1 + 0x40) + 8);
  lVar7 = lVar7 + (ulong)*(byte *)(lVar7 + 0x1c8) * 0x40;
  if (*(short *)(lVar7 + 10) != -1) {
    *(undefined1 *)(lVar7 + 0x14) = *(undefined1 *)((long)puVar10 + 0x7d);
    *(int *)(lVar7 + 0x10) = (int)local_148;
    *(undefined1 *)(lVar7 + 0x15) = local_f0;
    if ((int)local_148 == 0x90) {
      bVar8 = 1;
    }
    else {
      lVar11 = *(long *)(*(long *)(param_1 + 0x40) + 8);
      bVar8 = *(byte *)(lVar11 + (ulong)*(byte *)(lVar11 + 0x1c8) * 0x40 + 0x22) ^ 1;
    }
    *(byte *)(lVar7 + 0x16) = bVar8;
    if (*(char *)(lVar7 + 8) == '\0') {
      FUN_02a3ff18(*(undefined8 *)(param_1 + 0x28),(char *)(lVar7 + 8),lVar7 + 0x18);
    }
  }
  local_120 = param_3 + 5;
  local_110 = &local_148;
  local_108 = (undefined8 *)
              CONCAT44(*(undefined4 *)(param_3 + 2),
                       CONCAT13((bVar3 & 0x78) != 0,
                                CONCAT12((uVar9 & 7) != 0,CONCAT11(uVar14,uVar5))));
  local_100 = local_f0;
  local_118 = puVar10;
  FUN_02a01d74(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x1c20),local_70,&local_120);
  puVar4 = local_148;
  lVar11 = *(long *)(*(long *)(param_1 + 0x60) + 0x13a0);
  lVar7 = *(long *)(*(long *)(lVar11 + 0x40) + 8);
  uVar9 = (ulong)*(byte *)(lVar7 + 0x1c8);
  if (*(char *)(lVar7 + uVar9 * 0x40 + 0x30) != '\0') {
    uVar16 = 0;
    do {
      lVar7 = lVar7 + uVar9 * 0x40 + uVar16;
      FUN_029eaab4(lVar11,*(undefined1 *)(lVar7 + 0x31),*(undefined1 *)(lVar7 + 0x3d),
                   *(undefined1 *)(lVar7 + 0x37),(ulong)puVar4 & 0xffffffff);
      uVar16 = uVar16 + 1;
      lVar7 = *(long *)(*(long *)(lVar11 + 0x40) + 8);
      uVar9 = (ulong)*(byte *)(lVar7 + 0x1c8);
    } while (uVar16 < *(byte *)(lVar7 + uVar9 * 0x40 + 0x30));
  }
  return;
}


