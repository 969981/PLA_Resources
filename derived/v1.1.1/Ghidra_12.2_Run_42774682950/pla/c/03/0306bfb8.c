/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0306bfb8; name: FUN_0306bfb8
 */


void FUN_0306bfb8(long param_1,long *param_2,undefined8 param_3,undefined8 param_4,long param_5,
                 undefined8 param_6)

{
  undefined8 *puVar1;
  int iVar2;
  ushort uVar3;
  ushort uVar4;
  char cVar5;
  undefined *puVar6;
  ulong uVar7;
  bool bVar8;
  long *plVar9;
  undefined8 *puVar10;
  long lVar11;
  ulong *puVar12;
  long lVar13;
  uint uVar14;
  uint *puVar15;
  uint uVar16;
  uint uVar17;
  long lVar18;
  ulong local_210;
  ulong local_208;
  ulong *local_1f8;
  ulong *local_1f0;
  undefined8 local_1c0 [4];
  ulong *local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined4 local_180;
  ulong local_17c;
  undefined8 auStack_168 [4];
  ulong *local_148;
  undefined8 uStack_140;
  ulong local_138;
  undefined8 uStack_130;
  undefined4 local_128;
  ulong local_124;
  undefined8 local_110;
  short local_108;
  undefined2 local_106;
  uint local_104;
  long local_f8;
  long local_f0;
  undefined8 local_e8;
  uint local_e0;
  long local_d8;
  long local_d0;
  long local_c8;
  undefined8 local_c0;
  uint local_b8;
  long local_b0;
  long local_a8;
  undefined8 local_a0;
  long local_98 [2];
  undefined8 *local_88;
  uint *local_80;
  uint local_78;
  int local_74;
  ushort local_70 [8];
  
  lVar11 = *(long *)(param_1 + 8);
  local_98[0] = *param_2;
  local_88 = *(undefined8 **)(param_1 + 0x4e0);
  local_74 = 0;
  local_a8 = 0;
  local_a0 = 0x8000000000000000;
  local_138 = local_138 & 0xffffffff00000000;
  local_80 = (uint *)0x0;
  local_148 = (ulong *)0x0;
  uStack_140 = 0;
  FUN_0306c5c0(auStack_168,param_5);
  uVar16 = *(uint *)((long)local_148 + 4);
  local_190 = (ulong)local_190._4_4_ << 0x20;
  local_1a0 = (ulong *)0x0;
  local_198 = 0;
  lVar13 = param_5;
  if (*(long *)(param_5 + 0x10) != 0) {
    FUN_0306c5c0(local_1c0);
    lVar13 = *(long *)(param_5 + 0x10);
  }
  puVar6 = PTR_PTR_0434a090;
  uVar4 = 0;
  local_1f8 = (ulong *)0x0;
  local_1f0 = (ulong *)0x0;
  if (local_1a0 == (ulong *)0x0) goto LAB_0306c354;
LAB_0306c074:
  bVar8 = false;
  puVar12 = local_1a0;
  do {
    if ((local_1f0 != local_148) && (local_148 != (ulong *)0x0)) {
      local_208 = *local_148;
      local_1f0 = local_148;
    }
    if (local_1f8 == puVar12) {
LAB_0306c1b8:
      bVar8 = puVar12 != (ulong *)0x0;
      if ((puVar12 == (ulong *)0x0) || (local_148 == (ulong *)0x0)) {
        if ((puVar12 == (ulong *)0x0) || (local_148 != (ulong *)0x0)) goto LAB_0306c0ac;
        puVar10 = local_1c0;
      }
      else {
        puVar10 = auStack_168;
        if ((local_210 & 0xffffff00ffffff) <= (local_208 & 0xffffff00ffffff)) {
          puVar10 = local_1c0;
        }
      }
    }
    else {
      if (!bVar8) {
        local_210 = *puVar12;
        local_1f8 = puVar12;
        goto LAB_0306c1b8;
      }
      bVar8 = false;
LAB_0306c0ac:
      if ((local_148 == (ulong *)0x0) || (bVar8)) {
        if ((int)local_a0 != 0) {
          FUN_0306bb50(param_1,param_2,uVar16,&local_a8,local_98,param_6,uVar4);
        }
        uVar7 = local_a0;
        uVar16 = local_a0._4_4_;
        local_a0 = (ulong)local_a0._4_4_ << 0x20;
        if ((-1 < (long)uVar7) && (local_a8 != 0)) {
          FUN_032cf244(puVar6,local_a8,0x10,uVar16 & 0x3fffffff);
        }
        local_128 = 0;
        local_138 = 0;
        uStack_130 = 0;
        FUN_0306c664(auStack_168,*(undefined8 *)(param_1 + 0x4e0),param_4,param_5);
        local_180 = 0;
        local_190 = 0;
        uStack_188 = 0;
        if (*(long *)(param_5 + 0x10) != 0) {
          FUN_0306c664(local_1c0,*(undefined8 *)(param_1 + 0x4e0),param_4);
          param_5 = *(long *)(param_5 + 0x10);
        }
        puVar10 = local_88;
        break;
      }
      puVar10 = auStack_168;
    }
    puVar15 = (uint *)puVar10[4];
    uVar17 = puVar15[1];
    if (uVar17 == uVar16) {
      uVar17 = uVar16;
    }
    else if ((int)local_a0 == 0) {
      uVar16 = uVar17;
    }
    else {
      FUN_0306bb50(param_1,param_2,uVar16,&local_a8,local_98,param_6,uVar4);
      local_a0 = local_a0 & 0xffffffff00000000;
      uVar4 = 0;
      uVar16 = puVar15[1];
    }
    local_f8 = *(long *)(lVar11 + 0x38);
    local_d0 = local_f8 + (ulong)(uVar16 & 0xffffff) * 0xc0;
    local_f0 = *(long *)(lVar11 + 0x150);
    local_c8 = local_f0 + (ulong)*(uint *)(local_d0 + 0x80) * 0x80;
    local_f8 = local_f8 + ((ulong)*puVar15 & 0xffffff) * 0xc0;
    local_f0 = local_f0 + (ulong)*(uint *)(local_f8 + 0x80) * 0x80;
    uVar3 = (ushort)puVar15[3];
    if (((uVar3 & 0x300) != 0) && ((uVar3 & 0x90) == 0)) {
      local_110 = *puVar10;
      local_104 = puVar15[2];
      local_108 = ((short)*(undefined4 *)(puVar10 + 1) - (short)local_110) + -0x20;
      uVar16 = local_104;
      if ((int)*(uint *)((long)puVar10 + 0x14) <= (int)local_104) {
        uVar16 = *(uint *)((long)puVar10 + 0x14);
      }
      local_106 = (undefined2)uVar16;
      if ((uVar3 >> 8 & 1) == 0) {
        if ((uVar3 >> 9 & 1) == 0) {
          plVar9 = (long *)0x0;
        }
        else {
          plVar9 = *(long **)(*(long *)(param_1 + 0x40) + 0x13a8);
        }
      }
      else {
        plVar9 = *(long **)(*(long *)(param_1 + 0x40) + 0x13a0);
      }
      local_70[0] = uVar3;
      (**(code **)(*plVar9 + 0x10))(plVar9,param_1,param_2,local_70,&local_d0,&local_f8,&local_110);
    }
    uVar4 = uVar3 | uVar4;
    uVar14 = puVar15[2];
    uVar16 = uVar17;
    if (0 < (int)uVar14) {
      do {
        lVar18 = puVar10[5];
        if ((*(char *)((long)puVar15 + 0xe) == '\0') &&
           ((((puVar15[3] & 0x90) == 0 || ((*(byte *)(lVar18 + 0x90) | 2) == 3)) ||
            ((*(byte *)(*(long *)(lVar18 + 0x98) + 0x2c) >> 6 & 1) != 0)))) {
          local_c0 = *(undefined8 *)(lVar18 + 0xa8);
          local_b8 = *(uint *)(lVar18 + 0xa0);
          local_b0 = *(long *)(local_d0 + 0x78);
          if (*(char *)(local_b0 + 0x18) == '\x15') {
            plVar9 = (long *)(local_b0 + ((ulong)(local_b8 >> 0x1a) & 0x38) + 0x48);
            local_b0 = *plVar9;
            if (local_b0 == 0) {
              local_b0 = 0;
            }
            else {
              local_b0 = local_b0 + (long)plVar9;
            }
          }
          local_e8 = *(undefined8 *)(lVar18 + 0xb0);
          local_e0 = *(uint *)(lVar18 + 0xa4);
          local_d8 = *(long *)(local_f8 + 0x78);
          if (*(char *)(local_d8 + 0x18) == '\x15') {
            plVar9 = (long *)(local_d8 + ((ulong)(local_e0 >> 0x1a) & 0x38) + 0x48);
            local_d8 = *plVar9;
            if (local_d8 == 0) {
              local_d8 = 0;
            }
            else {
              local_d8 = local_d8 + (long)plVar9;
            }
          }
          FUN_0306b740(param_1,param_2,lVar18,&local_d0,&local_f8,0,local_98,param_6);
        }
        else {
          iVar2 = (int)local_a0 + 1;
          if ((int)(local_a0._4_4_ & 0x3fffffff) <= (int)local_a0) {
            local_a8 = FUN_0306c8b0(puVar6,iVar2,local_a8,local_a0 & 0xffffffff,(long)&local_a0 + 4)
            ;
          }
          puVar1 = (undefined8 *)(local_a8 + (long)(int)local_a0 * 0x10);
          local_a0 = CONCAT44(local_a0._4_4_,iVar2);
          *puVar1 = puVar15;
          puVar1[1] = lVar18;
        }
        FUN_0306c604(puVar10);
        uVar14 = uVar14 - 1;
      } while (uVar14 != 0);
    }
    while( true ) {
      if (local_1a0 != (ulong *)0x0) goto LAB_0306c074;
LAB_0306c354:
      if (*(long *)(lVar13 + 0x10) == 0) break;
      FUN_0306c5c0(local_1c0);
      lVar13 = *(long *)(lVar13 + 0x10);
    }
    puVar12 = (ulong *)0x0;
    bVar8 = true;
  } while( true );
joined_r0x0306c42c:
  local_88 = puVar10;
  if (local_190 == 0) {
    if (*(long *)(param_5 + 0x10) != 0) {
      FUN_0306c664(local_1c0,*(undefined8 *)(param_1 + 0x4e0),param_4);
      param_5 = *(long *)(param_5 + 0x10);
      puVar10 = local_88;
      goto joined_r0x0306c42c;
    }
    if (local_138 == 0) {
      if ((local_80 != (uint *)0x0) && (local_98[0] != 0)) {
        if (local_78 == (*local_80 & 0xffff)) {
          *(undefined8 *)(*(long *)(local_98[0] + 0x10) + (long)(int)local_80[1] * 8) = 0;
          *(undefined1 *)(local_98[0] + 0xc) = 1;
          iVar2 = *(int *)(puVar10 + 0xb);
          lVar13 = puVar10[1];
          *(uint **)(lVar13 + (long)iVar2 * 8) = local_80;
          *(int *)(puVar10 + 0xb) = iVar2 + 1;
          if (*(int *)((long)puVar10 + 0x5c) <= iVar2 + 1) {
            (**(code **)(*(long *)*puVar10 + 0x28))
                      ((long *)*puVar10,lVar13 + (long)(iVar2 + -5) * 8,6);
            *(int *)(puVar10 + 0xb) = iVar2 + -5;
          }
        }
        else {
          do {
            cVar5 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(local_80,0x10);
            if (bVar8) {
              *local_80 = *local_80 - local_78;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
      }
      if ((local_74 != 0) && (local_80 = (uint *)0x0, *(char *)(local_98[0] + 0xc) == '\0')) {
        FUN_032bff9c(local_98);
      }
      return;
    }
    puVar10 = auStack_168;
  }
  else if (local_138 == 0) {
    puVar10 = local_1c0;
  }
  else {
    puVar10 = auStack_168;
    if ((local_17c & 0xffffff00ffffff) <= (local_124 & 0xffffff00ffffff)) {
      puVar10 = local_1c0;
    }
  }
  FUN_0306c6fc(puVar10);
  puVar10 = local_88;
  goto joined_r0x0306c42c;
}


