/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 033963e4; name: FUN_033963e4
 */


void FUN_033963e4(long param_1,int param_2)

{
  undefined1 *puVar1;
  ulong uVar2;
  short sVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  ulong *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  long *plVar13;
  ulong *puVar14;
  long lVar15;
  undefined1 auVar16 [16];
  ulong local_210;
  undefined1 *local_200;
  undefined1 *puStack_1f8;
  undefined1 local_1f0 [16];
  ulong local_1e0;
  long local_1d8;
  int local_1d0;
  ulong local_140;
  undefined8 local_138;
  ulong local_130;
  undefined8 uStack_128;
  undefined1 auStack_a8 [72];
  
  uVar5 = FUN_03378578();
  if ((uVar5 & 1) == 0) {
    local_130 = 0;
    uStack_128 = 0;
    local_140 = 0;
    local_138 = 0;
    uVar5 = FUN_03322000(*(long *)(param_1 + 8) + 0x18,PTR_PTR_0434a080);
    if (uVar5 != 0) {
      FUN_032d645c(uVar5);
    }
    local_130 = 0;
    uStack_128 = 0;
    local_138 = 0;
    local_140 = uVar5;
    FUN_03322078(auStack_a8,&local_140);
    if (local_140 != 0) {
      FUN_032d647c();
    }
    auVar16 = FUN_0337858c(param_1);
    puVar1 = (undefined1 *)0x0;
    if (auVar16._0_8_ != 0) {
      puVar1 = &LAB_03397080;
    }
    while (puVar1 != (undefined1 *)0x0) {
      puVar14 = auVar16._0_8_;
      iVar4 = FUN_03396ae4(param_1,puVar14[1]);
      FUN_033784ac(param_1,iVar4);
      local_140 = (ulong)auVar16._8_4_;
      FUN_033960c4(&local_140,auStack_a8);
      local_140 = (ulong)iVar4;
      FUN_033960c4(&local_140,auStack_a8);
      uVar5 = *puVar14;
      if (((uint)uVar5 >> 0x15 & 1) == 0) {
LAB_03396574:
        uVar5 = uVar5 & 0xffffffffffdfffff;
        local_210 = 0;
      }
      else {
        puVar7 = (ulong *)FUN_032e2008(puVar14,0x200000);
        if ((puVar7 == (ulong *)0x0) || (local_210 = *puVar7 & 0xffffffffffffefff, local_210 == 0))
        goto LAB_03396574;
      }
      FUN_032dc3a0(&local_140,puVar14,&DAT_04358310);
      uVar9 = local_140;
      if ((local_130 & 1) != 0) {
        FUN_032e0c40(local_130 & 0xfffffffffffffffe);
      }
      uVar2 = uVar5 | 0x2000000;
      if (param_2 != 1 || uVar9 == 0) {
        uVar2 = uVar5;
      }
      local_140 = uVar2 & 2 | (uVar2 & 0x10) >> 2 | (uVar2 & 0x100000) >> 0x11 |
                  (uVar2 & 0x200000) >> 0x11 | (uVar2 & 0x800000) >> 0x12 | (uVar2 & 0x4000) >> 8 |
                  (uVar2 & 0x2000000) >> 0x12 | uVar2 >> 0x14 & 0x100 | uVar2 & 1;
      FUN_033960c4(&local_140,auStack_a8);
      if ((uVar2 & 1) != 0) {
        if ((*puVar14 & 1) == 0) {
LAB_03396810:
          local_140 = 0;
        }
        else {
          puVar7 = (ulong *)FUN_032e2008(puVar14,1);
          if (puVar7 == (ulong *)0x0) goto LAB_03396810;
          local_140 = *puVar7;
        }
        FUN_033960c4(&local_140,auStack_a8);
      }
      if ((uVar2 & 2) != 0) {
        uVar5 = FUN_032e35d8(puVar14);
        if ((puVar14 == (ulong *)0x0) || ((uVar5 & 0x1f) != 8)) {
          uVar5 = FUN_032e35d8(puVar14);
          if ((puVar14 == (ulong *)0x0) || ((uVar5 & 0x1f) != 6)) goto joined_r0x03396884;
          uVar10 = FUN_032e1fec(puVar14);
          iVar4 = FUN_03396ae4(param_1,uVar10);
        }
        else {
          puVar8 = (undefined8 *)FUN_032e20b0(puVar14,1);
          if (puVar8 == (undefined8 *)0x0) {
            uVar10 = FUN_032e1fec(puVar14);
          }
          else {
            uVar11 = *puVar8;
            uVar10 = FUN_032e1fec(puVar14);
            if ((int)((ulong)uVar11 >> 8) != 0) {
              iVar4 = FUN_03396ae4(param_1,uVar10);
              FUN_033784ac(param_1,iVar4);
              goto LAB_03396874;
            }
          }
          iVar4 = FUN_03396ae4(param_1,uVar10);
        }
LAB_03396874:
        local_140 = (ulong)iVar4;
        FUN_033960c4(&local_140,auStack_a8);
      }
joined_r0x03396884:
      if ((uVar2 & 0x10) != 0) {
        if (((byte)*puVar14 >> 4 & 1) == 0) {
LAB_03396a6c:
          local_140 = 0;
        }
        else {
          puVar7 = (ulong *)FUN_032e2008(puVar14,0x10);
          if (puVar7 == (ulong *)0x0) goto LAB_03396a6c;
          local_140 = *puVar7;
        }
        FUN_033960c4(&local_140,auStack_a8);
      }
      if ((uVar2 & 0x100000) != 0) {
        if ((*(byte *)((long)puVar14 + 2) >> 4 & 1) == 0) {
LAB_03396a74:
          uVar5 = 0;
        }
        else {
          puVar7 = (ulong *)FUN_032e2008(puVar14,0x100000);
          if (puVar7 == (ulong *)0x0) goto LAB_03396a74;
          uVar5 = *puVar7;
        }
        local_140 = uVar5 & 0xffff;
        FUN_033960c4(&local_140,auStack_a8);
        local_140 = uVar5 >> 0x10 & 0xffff;
        FUN_033960c4(&local_140,auStack_a8);
      }
      if ((uVar2 & 0x200000) != 0) {
        local_140 = local_210;
        FUN_033960c4(&local_140,auStack_a8);
      }
      if ((uVar2 & 0x800000) != 0) {
        if ((char)*(byte *)((long)puVar14 + 2) < '\0') {
          puVar8 = (undefined8 *)FUN_032e2008(puVar14,0x800000);
          if (puVar8 == (undefined8 *)0x0) goto LAB_03396a7c;
          plVar13 = (long *)*puVar8;
        }
        else {
LAB_03396a7c:
          plVar13 = (long *)0x0;
        }
        sVar3 = (short)*plVar13;
        lVar6 = (long)sVar3;
        local_140 = (ulong)(int)((int)sVar3 | (uint)*(ushort *)((long)plVar13 + 2) << 0x10);
        FUN_033960c4(&local_140,auStack_a8);
        if (0 < sVar3) {
          do {
            plVar13 = plVar13 + 1;
            local_1d8 = *plVar13;
            lVar15 = *(long *)(param_1 + 8);
            local_140 = FUN_032e2c18(&local_1d8);
            lVar12 = FUN_033962f8(lVar15 + 0x68,&local_140);
            local_140 = (lVar12 - *(long *)(lVar15 + 0x68)) * 0x20000000 >> 0x20;
            FUN_033960c4(&local_140,auStack_a8);
            iVar4 = FUN_032e3f8c(&local_1d8);
            if ((*(byte *)(local_1d8 + 2) >> 4 & 1) == 0) {
LAB_03396964:
              local_140 = (long)iVar4;
            }
            else {
              puVar7 = (ulong *)FUN_032e2008(local_1d8,0x100000);
              if ((puVar7 == (ulong *)0x0) || (uVar5 = *puVar7, uVar5 == 0)) goto LAB_03396964;
              local_140 = (long)iVar4 | 0x80;
              FUN_033960c4(&local_140,auStack_a8);
              local_140 = uVar5 >> 0x1c & 0xf;
            }
            FUN_033960c4(&local_140,auStack_a8);
            iVar4 = FUN_032e3f38(&local_1d8);
            local_140 = (ulong)iVar4;
            FUN_033960c4(&local_140,auStack_a8);
            iVar4 = FUN_03396ae4(param_1,*(undefined8 *)(local_1d8 + 8));
            FUN_033784ac(param_1,iVar4);
            local_140 = (ulong)iVar4;
            FUN_033960c4(&local_140,auStack_a8);
            lVar6 = lVar6 + -1;
          } while (lVar6 != 0);
        }
      }
      if ((uVar2 & 0x4000) != 0) {
        puVar8 = (undefined8 *)FUN_032e2008(puVar14,0x4000);
        puVar7 = (ulong *)*puVar8;
        uVar5 = *puVar7;
        iVar4 = (int)uVar5;
        local_140 = (ulong)iVar4;
        FUN_033960c4(&local_140,auStack_a8);
        if (0 < iVar4) {
          uVar5 = uVar5 & 0xffffffff;
          do {
            iVar4 = FUN_03396ae4(param_1,puVar7[1]);
            FUN_033784ac(param_1,iVar4);
            local_140 = (ulong)iVar4;
            FUN_033960c4(&local_140,auStack_a8);
            local_140 = puVar7[2];
            FUN_033960c4(&local_140,auStack_a8);
            uVar5 = uVar5 - 1;
            puVar7 = puVar7 + 2;
          } while (uVar5 != 0);
        }
      }
      if ((uVar2 & 0x2000000) != 0) {
        if ((*(byte *)((long)puVar14 + 3) >> 1 & 1) == 0) {
LAB_03396818:
          uVar10 = 0;
        }
        else {
          puVar8 = (undefined8 *)FUN_032e2008(puVar14,0x2000000);
          if (puVar8 == (undefined8 *)0x0) goto LAB_03396818;
          uVar10 = *puVar8;
        }
        FUN_032c4d5c(&local_140,uVar10);
        if (param_2 == 1 && uVar9 != 0) {
          FUN_032c4d3c(&local_1d8);
          local_1f0._8_8_ = 0;
          local_1e0 = 0;
          local_1f0 = FUN_032e0ab0(uVar9,&DAT_04358310);
          if (local_1f0._8_8_ == 0) {
            uVar5 = 0;
          }
          else {
            uVar5 = FUN_032e3508(local_1f0._8_8_);
            if ((uVar5 & 1) != 0) {
              FUN_032e0c28(uVar5 & 0xfffffffffffffffe);
            }
          }
          if ((local_1e0 & 1) != 0) {
            uVar9 = local_1e0 & 0xfffffffffffffffe;
            local_1e0 = uVar5;
            FUN_032e0c40(uVar9);
            uVar5 = local_1e0;
          }
          local_1e0 = uVar5;
          local_200 = &DAT_03996322;
          puStack_1f8 = &DAT_03996322;
          FUN_032d8240(local_1f0,&local_1d8,&local_200);
          if ((local_1e0 & 1) != 0) {
            FUN_032e0c40(local_1e0 & 0xfffffffffffffffe);
          }
          FUN_032c5d4c(&local_140,local_1d8,local_1d0 + -1);
          FUN_032c4ce8(&local_1d8);
        }
        lVar12 = *(long *)(param_1 + 8);
        lVar6 = lVar12 + 0xa0;
        local_1d8 = FUN_03396ff8(lVar6,local_140);
        lVar6 = FUN_033962f8(lVar6,&local_1d8);
        local_1d8 = (lVar6 - *(long *)(lVar12 + 0xa0)) * 0x20000000 >> 0x20;
        FUN_033960c4(&local_1d8,auStack_a8);
        FUN_032c4ce8(&local_140);
      }
      auVar16 = FUN_0337858c(param_1);
      puVar1 = (undefined1 *)0x0;
      if (auVar16._0_8_ != 0) {
        puVar1 = &LAB_03397080;
      }
    }
    FUN_03322120(auStack_a8);
  }
  return;
}


