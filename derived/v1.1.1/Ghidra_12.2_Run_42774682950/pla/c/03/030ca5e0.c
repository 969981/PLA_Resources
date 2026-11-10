/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030ca5e0; name: FUN_030ca5e0
 */


void FUN_030ca5e0(long param_1,long param_2,long param_3,long param_4,ulong param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  byte bVar6;
  undefined8 *puVar7;
  uint uVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  uint *puVar13;
  undefined8 uVar14;
  long *plVar15;
  long lVar16;
  int *piVar17;
  long lVar18;
  uint uVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  long local_1c8;
  undefined8 *local_1c0;
  uint *local_1b8;
  int local_1b0;
  uint local_1ac;
  long local_1a0;
  undefined8 *local_198;
  int local_190;
  uint local_18c;
  undefined1 auStack_188 [24];
  long local_170;
  undefined8 uStack_168;
  undefined4 local_160;
  undefined8 local_158;
  long local_150;
  long local_148;
  long local_140;
  uint local_138;
  long local_130;
  long local_128;
  long local_120;
  long local_118;
  long local_110;
  long local_108;
  uint local_100;
  long local_f8;
  long local_f0;
  long local_e8;
  double local_e0;
  double dStack_d8;
  double local_d0;
  double dStack_c8;
  undefined1 auStack_c0 [80];
  undefined8 local_70;
  undefined8 uStack_68;
  
  bVar5 = *(byte *)(param_2 + 0xe);
  bVar6 = bVar5 >> 5;
  uVar8 = bVar5 >> 2 & 7;
  if (*(int *)(param_3 + 0x80) == *(int *)(param_1 + 0x2a0)) {
    local_f8 = *(long *)(param_3 + 0x78);
    if ((local_f8 == 0) || (*(char *)(local_f8 + 0x18) != '\x15')) {
      local_100 = 0xffffffff;
    }
    else {
      plVar15 = (long *)(local_f8 + (ulong)bVar6 * 8 + 0x48);
      local_f8 = *plVar15;
      if (local_f8 == 0) {
        local_f8 = 0;
      }
      else {
        local_f8 = local_f8 + (long)plVar15;
      }
      local_100 = (uint)bVar6 << 0x1d | 0x1fffffff;
    }
    local_110 = *(long *)(*(long *)(*(long *)(param_1 + 0x298) + 8) + 0x150) +
                (long)*(int *)(param_1 + 0x2a0) * 0x80;
    local_108 = *(long *)(*(long *)(*(long *)(*(long *)(param_1 + 0x298) + 8) + 0x898) + 0x48) +
                (ulong)*(ushort *)(param_3 + 0x8a) * 0x50;
    local_118 = param_3;
    local_e8 = param_3;
    FUN_030c7920(param_1,param_4,uVar8,1,&local_70,&local_e0,auStack_c0,&local_150);
    puVar9 = *(undefined8 **)(param_1 + 0x2a8);
    dVar20 = (double)puVar9[2];
    dVar21 = (double)puVar9[3];
    dVar22 = (double)puVar9[4];
    *(undefined8 *)(param_1 + 0x2f8) = 0;
    *(undefined8 *)(param_1 + 0x300) = 0;
    *(undefined8 *)(param_1 + 0x308) = 0;
    *(double *)(param_1 + 0x2e8) = (double)(float)dVar21;
    *(double *)(param_1 + 0x2e0) = (double)(float)dVar20;
    *(double *)(param_1 + 0x2f0) = (double)(float)dVar22;
    uVar14 = *puVar9;
    *(undefined8 *)(param_1 + 0x328) = puVar9[1];
    *(undefined8 *)(param_1 + 800) = uVar14;
    *(ulong *)(param_1 + 0x318) =
         CONCAT44((float)dStack_c8,(float)(local_d0 - (double)(float)dVar22));
    *(ulong *)(param_1 + 0x310) =
         CONCAT44((float)(dStack_d8 - (double)(float)dVar21),
                  (float)(local_e0 - (double)(float)dVar20));
    *(undefined4 *)(param_1 + 0x390) = *(undefined4 *)(param_1 + 0x4c8);
    *(undefined8 *)(param_1 + 0x338) = uStack_68;
    *(undefined8 *)(param_1 + 0x330) = local_70;
    *(uint *)(param_1 + 0x394) = (uint)*(ushort *)(local_150 + 0x94) << 0x10;
  }
  else {
    local_130 = *(long *)(param_4 + 0x78);
    if ((local_130 == 0) || (*(char *)(local_130 + 0x18) != '\x15')) {
      local_138 = 0xffffffff;
    }
    else {
      plVar15 = (long *)(local_130 + (ulong)uVar8 * 8 + 0x48);
      local_130 = *plVar15;
      if (local_130 == 0) {
        local_130 = 0;
      }
      else {
        local_130 = local_130 + (long)plVar15;
      }
      local_138 = (uint)(bVar5 >> 2) << 0x1d | 0x1fffffff;
    }
    local_148 = *(long *)(*(long *)(*(long *)(param_1 + 0x298) + 8) + 0x150) +
                (long)*(int *)(param_4 + 0x80) * 0x80;
    local_140 = *(long *)(*(long *)(*(long *)(*(long *)(param_1 + 0x298) + 8) + 0x898) + 0x48) +
                (ulong)*(ushort *)(param_4 + 0x8a) * 0x50;
    local_150 = param_4;
    local_120 = param_4;
    FUN_030c7920(param_1,param_3,(ulong)bVar6,1,&local_70,&local_e0,auStack_c0,&local_118);
    puVar9 = *(undefined8 **)(param_1 + 0x2a8);
    dVar22 = (double)puVar9[4];
    dVar20 = (double)puVar9[2];
    dVar21 = (double)puVar9[3];
    *(undefined8 *)(param_1 + 0x2f8) = 0;
    *(undefined8 *)(param_1 + 0x318) = 0;
    *(undefined8 *)(param_1 + 0x310) = 0;
    *(double *)(param_1 + 0x2e8) = (double)(float)dVar21;
    *(double *)(param_1 + 0x2e0) = (double)(float)dVar20;
    *(double *)(param_1 + 0x2f0) = (double)(float)dVar22;
    uVar14 = *puVar9;
    *(undefined8 *)(param_1 + 0x338) = puVar9[1];
    *(undefined8 *)(param_1 + 0x330) = uVar14;
    *(ulong *)(param_1 + 0x308) =
         CONCAT44((float)dStack_c8,(float)(local_d0 - (double)(float)dVar22));
    *(ulong *)(param_1 + 0x300) =
         CONCAT44((float)(dStack_d8 - (double)(float)dVar21),
                  (float)(local_e0 - (double)(float)dVar20));
    *(undefined4 *)(param_1 + 0x394) = *(undefined4 *)(param_1 + 0x4c8);
    *(undefined8 *)(param_1 + 0x328) = uStack_68;
    *(undefined8 *)(param_1 + 800) = local_70;
    *(uint *)(param_1 + 0x390) = (uint)*(ushort *)(local_118 + 0x94) << 0x10;
  }
  if (*(int *)(param_1 + 0x118) < 0xe01) {
    lVar12 = *(long *)(param_1 + 0x110) + (long)*(int *)(param_1 + 0x118) + 0x20;
  }
  else {
    lVar12 = FUN_032bf82c(param_1 + 0x100);
  }
  FUN_032c4a00(lVar12,param_2,(ulong)*(byte *)(param_2 + 9) << 4);
  *(long **)(param_1 + 0xa8) = &local_118;
  *(long **)(param_1 + 0xb0) = &local_150;
  *(undefined8 *)(param_1 + 0x378) = 0x7f8000007f800000;
  *(undefined8 *)(param_1 + 0x370) = 0x7f8000007f800000;
  if (*(char *)(param_2 + 8) == '\x02') {
    local_f0 = local_f8;
    local_128 = local_130;
    if (((param_5 & 1) != 0) && (2 < *(byte *)(lVar12 + 9))) {
      *(undefined1 *)(lVar12 + 0x15) = 0;
      *(undefined4 *)(lVar12 + 0x1c) = 0;
      *(undefined1 *)(lVar12 + 0x1b) = 0;
      *(undefined1 *)(lVar12 + 9) = 2;
    }
    FUN_030c8300(param_1,&local_118,&local_150,lVar12);
  }
  else {
    local_170 = 0;
    if ((param_5 & 1) == 0) {
      FUN_030c9d20(param_1,&local_118,&local_150,lVar12,param_1 + 0x150);
    }
    else {
      if (*(int *)(lVar12 + 0x2c) == 0) {
LAB_030caabc:
        local_198 = (undefined8 *)0x0;
      }
      else {
        local_1a0 = *(long *)(lVar12 + 0x20);
        local_198 = (undefined8 *)(local_1a0 + (ulong)*(ushort *)(lVar12 + 0x28) + 0x20);
        local_18c = (uint)*(ushort *)(lVar12 + 0x2a);
        local_190 = *(int *)(lVar12 + 0x2c) - local_18c;
        if (*(ushort *)(lVar12 + 0x2a) == 0) goto LAB_030caabc;
      }
      puVar9 = local_198;
      local_1c8 = 0;
      lVar10 = param_1 + 400;
      FUN_032bf524(&local_1c8,*(undefined8 *)(*(long *)(param_1 + 0x298) + 0x4e0),lVar10);
      iVar4 = *(int *)(local_1c8 + 8);
      *(short *)(lVar12 + 0x28) = (short)local_1b0;
      *(short *)(lVar12 + 0x2a) = (short)local_1ac;
      *(uint **)(lVar12 + 0x20) = local_1b8;
      *(uint *)(lVar12 + 0x2c) = -(local_1ac + iVar4);
      while (puVar9 != (undefined8 *)0x0) {
        while( true ) {
          bVar5 = *(byte *)((long)puVar9 + 9);
          uVar8 = (uint)bVar5;
          if (*(char *)(puVar9 + 1) == '\x02' && 2 < uVar8) {
            if (local_1b0 < 0xec1) {
              puVar7 = (undefined8 *)((long)local_1b8 + (long)local_1b0 + 0x20);
            }
            else {
              puVar7 = (undefined8 *)FUN_032bf82c(&local_1c8);
            }
            uVar1 = *(undefined4 *)(puVar9 + 1);
            uVar2 = *(undefined4 *)((long)puVar9 + 0xc);
            *puVar7 = *puVar9;
            *(undefined4 *)(puVar7 + 1) = uVar1;
            *(undefined4 *)((long)puVar7 + 0xc) = uVar2;
            uVar1 = *(undefined4 *)(puVar9 + 3);
            uVar2 = *(undefined4 *)((long)puVar9 + 0x1c);
            puVar7[2] = puVar9[2];
            *(undefined4 *)(puVar7 + 3) = uVar1;
            *(undefined4 *)((long)puVar7 + 0x1c) = uVar2;
            local_1b0 = local_1b0 + 0x20;
            *(undefined1 *)((long)puVar7 + 0x15) = 0;
            *(undefined4 *)((long)puVar7 + 0x1c) = 0;
            *(undefined1 *)((long)puVar7 + 0x1b) = 0;
            *(undefined1 *)((long)puVar7 + 9) = 2;
          }
          else {
            if ((int)(local_1b0 + (uint)bVar5 * 0x10) < 0xee1) {
              puVar7 = (undefined8 *)((long)local_1b8 + (long)local_1b0 + 0x20);
            }
            else {
              puVar7 = (undefined8 *)FUN_032bf82c(&local_1c8);
            }
            uVar19 = (uint)bVar5;
            puVar11 = puVar9;
            if ((uVar19 + (uVar19 == 0) & 1) != 0) {
              uVar1 = *(undefined4 *)(puVar9 + 1);
              uVar2 = *(undefined4 *)((long)puVar9 + 0xc);
              *puVar7 = *puVar9;
              *(undefined4 *)(puVar7 + 1) = uVar1;
              *(undefined4 *)((long)puVar7 + 0xc) = uVar2;
              puVar7 = puVar7 + 2;
              uVar8 = uVar19 - 1;
              puVar11 = puVar9 + 2;
            }
            if ((bool)bVar5 != (uVar19 != 0)) {
              do {
                uVar8 = uVar8 - 2;
                uVar1 = *(undefined4 *)(puVar11 + 1);
                uVar2 = *(undefined4 *)((long)puVar11 + 0xc);
                *puVar7 = *puVar11;
                *(undefined4 *)(puVar7 + 1) = uVar1;
                *(undefined4 *)((long)puVar7 + 0xc) = uVar2;
                uVar1 = *(undefined4 *)(puVar11 + 3);
                uVar2 = *(undefined4 *)((long)puVar11 + 0x1c);
                puVar7[2] = puVar11[2];
                *(undefined4 *)(puVar7 + 3) = uVar1;
                *(undefined4 *)((long)puVar7 + 0x1c) = uVar2;
                puVar11 = puVar11 + 4;
                puVar7 = puVar7 + 4;
              } while (0 < (int)uVar8);
            }
            local_1b0 = local_1b0 + (uint)bVar5 * 0x10;
          }
          local_1ac = local_1ac + 1;
          local_18c = local_18c - 1;
          if ((int)local_18c < 1) break;
          puVar9 = local_198 + (ulong)*(byte *)((long)puVar9 + 9) * 2;
          local_198 = puVar9;
          if (puVar9 == (undefined8 *)0x0) goto LAB_030cacf4;
        }
        puVar9 = (undefined8 *)FUN_032bf9c8(&local_1a0,1);
      }
LAB_030cacf4:
      FUN_032bffbc(lVar12 + 0x20,&local_1c8);
      *(ushort *)(lVar12 + 10) = *(ushort *)(lVar12 + 10) & 0xfbff;
      if (local_1ac == 0) {
        piVar17 = (int *)(local_1c8 + 0x18);
        iVar4 = *piVar17;
        if (iVar4 < 2) goto LAB_030cad28;
        iVar3 = *(int *)(local_1c0 + 0xb);
        lVar16 = *(long *)(*(long *)(local_1c8 + 0x10) + (long)(iVar4 + -2) * 8);
        lVar18 = local_1c0[1];
        *(undefined8 *)(lVar18 + (long)iVar3 * 8) =
             *(undefined8 *)(*(long *)(local_1c8 + 0x10) + (long)(iVar4 + -1) * 8);
        *(int *)(local_1c0 + 0xb) = iVar3 + 1;
        if (*(int *)((long)local_1c0 + 0x5c) <= iVar3 + 1) {
          (**(code **)(*(long *)*local_1c0 + 0x28))
                    ((long *)*local_1c0,lVar18 + (long)(iVar3 + -5) * 8,6);
          *(int *)(local_1c0 + 0xb) = iVar3 + -5;
        }
        *(undefined8 *)(lVar16 + 8) = 0;
        uVar8 = 0xffffffff;
      }
      else {
LAB_030cad28:
        piVar17 = (int *)(local_1c8 + 8);
        local_1b8[2] = 0;
        local_1b8[3] = 0;
        *local_1b8 = *local_1b8 & 0xffff0000 | local_1ac & 0xffff;
        *local_1b8 = *local_1b8 & 0xffff | local_1b0 << 0x10;
        uVar8 = local_1ac;
      }
      *piVar17 = *piVar17 + uVar8;
      local_158 = *(undefined8 *)(*(long *)(param_1 + 0x298) + 0x4e0);
      local_160 = 0;
      uStack_168 = 0;
      local_170 = lVar10;
      FUN_030c9d20(param_1,&local_118,&local_150,lVar12,auStack_188);
      FUN_032bfcd8(auStack_188);
      FUN_032be7c0(lVar10,*(undefined8 *)(*(long *)(param_1 + 0x298) + 0x4e0));
    }
  }
  lVar10 = *(long *)(param_1 + 0xe0);
  *(uint *)(param_1 + 0x118) = *(int *)(param_1 + 0x118) + (uint)*(byte *)(lVar12 + 9) * 0x10;
  *(int *)(param_1 + 0x11c) = *(int *)(param_1 + 0x11c) + 1;
  if (lVar10 == 0) {
    return;
  }
  if (*(char *)(param_1 + 0xfa) == '\0') {
    FUN_0301e778(param_1 + 0x80,*(undefined8 *)(param_1 + 0x298),param_1);
    return;
  }
  uVar14 = **(undefined8 **)(param_1 + 200);
  *(undefined4 *)(lVar10 + 8) = 0x7777;
  FUN_032bffbc(param_1 + 0xd0,*(undefined8 *)(param_1 + 200));
  plVar15 = *(long **)(param_1 + 200);
  uVar8 = *(uint *)((long)plVar15 + 0x1c);
  lVar12 = *plVar15;
  if (uVar8 == 0) {
    piVar17 = (int *)(lVar12 + 0x18);
    iVar4 = *piVar17;
    if (1 < iVar4) {
      puVar9 = (undefined8 *)plVar15[1];
      iVar3 = *(int *)(puVar9 + 0xb);
      lVar18 = *(long *)(*(long *)(lVar12 + 0x10) + (long)(iVar4 + -2) * 8);
      lVar10 = puVar9[1];
      *(undefined8 *)(lVar10 + (long)iVar3 * 8) =
           *(undefined8 *)(*(long *)(lVar12 + 0x10) + (long)(iVar4 + -1) * 8);
      *(int *)(puVar9 + 0xb) = iVar3 + 1;
      if (*(int *)((long)puVar9 + 0x5c) <= iVar3 + 1) {
        (**(code **)(*(long *)*puVar9 + 0x28))((long *)*puVar9,lVar10 + (long)(iVar3 + -5) * 8,6);
        *(int *)(puVar9 + 0xb) = iVar3 + -5;
      }
      *(undefined8 *)(lVar18 + 8) = 0;
      uVar8 = 0xffffffff;
      goto LAB_030ca98c;
    }
  }
  puVar13 = (uint *)plVar15[2];
  piVar17 = (int *)(lVar12 + 8);
  lVar12 = plVar15[3];
  puVar13[2] = 0;
  puVar13[3] = 0;
  *puVar13 = *puVar13 & 0xffff0000 | uVar8 & 0xffff;
  *puVar13 = *puVar13 & 0xffff | (int)lVar12 << 0x10;
LAB_030ca98c:
  *piVar17 = *piVar17 + uVar8;
  *plVar15 = 0;
  plVar15[2] = 0;
  FUN_032bf658(*(undefined8 *)(param_1 + 200),uVar14,param_1 + 0xd0);
  plVar15 = *(long **)(param_1 + 200);
  lVar12 = plVar15[3];
  iVar4 = *(int *)((long)plVar15 + 0x1c);
  iVar3 = *(int *)(*plVar15 + 8);
  *(long *)(param_1 + 0xd0) = plVar15[2];
  *(short *)(param_1 + 0xd8) = (short)lVar12;
  *(short *)(param_1 + 0xda) = (short)iVar4;
  *(int *)(param_1 + 0xdc) = -(iVar4 + iVar3);
  *(long *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  return;
}


