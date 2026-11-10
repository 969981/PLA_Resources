/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008379c0; name: FUN_008379c0
 */


void FUN_008379c0(long param_1,long param_2,uint param_3)

{
  char cVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  byte bVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  uint uVar8;
  undefined *puVar9;
  byte bVar10;
  short sVar11;
  ushort uVar12;
  ulong uVar13;
  ulong uVar14;
  undefined1 *puVar15;
  long lVar16;
  undefined8 uVar17;
  long *plVar18;
  undefined4 *puVar19;
  ulong uVar20;
  undefined1 auStack_140 [16];
  undefined1 auStack_130 [16];
  undefined1 auStack_120 [16];
  undefined1 auStack_110 [16];
  undefined1 auStack_100 [16];
  undefined1 auStack_f0 [16];
  undefined1 auStack_e0 [16];
  undefined1 auStack_d0 [16];
  undefined1 auStack_c0 [16];
  undefined1 auStack_b0 [16];
  undefined4 local_a0 [4];
  undefined4 local_90 [4];
  undefined4 local_80 [4];
  undefined4 local_70 [4];
  
  puVar9 = PTR_DAT_04377550;
  if (param_3 < 4) {
    return;
  }
  cVar1 = *(char *)(param_2 + 3);
  if (cVar1 != '\x03') {
    if (cVar1 == '\n') {
      (**(code **)(**(long **)(*(long *)PTR_DAT_04377550 + 0x18) + 0x1a8))();
      FUN_0083adf8(*(undefined8 *)(param_1 + 0xa8));
      return;
    }
    if (param_3 != 0x2b) {
      return;
    }
    switch(cVar1) {
    case '\x02':
      uVar8 = (*(uint *)(param_2 + 4) & 0xff00ff00) >> 8 | (*(uint *)(param_2 + 4) & 0xff00ff) << 8;
      *(uint *)(*(long *)PTR_DAT_04377550 + 0x11c) = uVar8 >> 0x10 | uVar8 << 0x10;
      uVar17 = *(undefined8 *)(param_1 + 0xa8);
      local_70[0] = 0x6c38;
      local_80[0] = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)local_70 | 4),(Result *)local_80);
      FUN_007ee578(auStack_c0,local_70);
      puVar15 = auStack_c0;
      break;
    default:
      uVar14 = (*(ulong *)(param_2 + 0x18) & 0xff00ff00ff00ff00) >> 8 |
               (*(ulong *)(param_2 + 0x18) & 0xff00ff00ff00ff) << 8;
      uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
      uVar20 = *(ulong *)(param_2 + 0xc);
      uVar5 = *(ushort *)(param_2 + 0x16);
      uVar2 = *(undefined1 *)(param_2 + 0x22);
      uVar3 = *(undefined1 *)(param_2 + 0x23);
      local_90[0] = CONCAT22(local_90[0]._2_2_,*(undefined2 *)(param_2 + 0x24));
      bVar4 = *(byte *)(param_2 + 0x26);
      uVar6 = *(ushort *)(param_2 + 0x27);
      lVar16 = *(long *)PTR_DAT_04377550;
      uVar7 = *(ushort *)(param_2 + 0x29);
      uVar13 = FUN_0083fd98(lVar16 + 0x178);
      if (uVar13 != (uVar14 >> 0x20 | uVar14 << 0x20)) {
        return;
      }
      sVar11 = FUN_0083fda0(lVar16 + 0x178);
      if (CONCAT11(uVar2,uVar3) != sVar11) {
        return;
      }
      lVar16 = *(long *)puVar9;
      uVar14 = (uVar20 & 0xff00ff00ff00ff00) >> 8 | (uVar20 & 0xff00ff00ff00ff) << 8;
      uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
      uVar13 = FUN_0083fd98(lVar16 + 0x1b8);
      if (uVar13 != (uVar14 >> 0x20 | uVar14 << 0x20)) {
        return;
      }
      uVar12 = FUN_0083fda0(lVar16 + 0x1b8);
      puVar9 = PTR_DAT_043773c0;
      if ((ushort)(uVar5 >> 8 | uVar5 << 8) != uVar12) {
        return;
      }
      lVar16 = FUN_00855004(*(undefined8 *)PTR_DAT_043773c0);
      lVar16 = *(long *)(lVar16 + 0x98);
      if ((*(char *)(lVar16 + 0x90) != -3) && (*(char *)(lVar16 + 0x91) != -3)) {
        return;
      }
      uVar14 = FUN_007e5f0c(*(undefined8 *)(param_1 + 0xa8));
      if ((uVar14 & 1) == 0) {
        return;
      }
      switch(cVar1) {
      case '\x01':
        uVar5 = uVar6 >> 8 | uVar6 << 8;
        uVar17 = *(undefined8 *)(param_1 + 0xa8);
        local_70[0] = 0;
        local_80[0] = 0;
        nn::err::ErrorResultVariant::ErrorResultVariant
                  ((ErrorResultVariant *)((ulong)local_70 | 4),(Result *)local_80);
        FUN_007ee578(auStack_100,local_70);
        FUN_0083ada8(uVar17,auStack_100);
        uVar17 = FUN_00855004(*(undefined8 *)puVar9);
        FUN_00827a20(uVar17,lVar16,local_90,(ulong)bVar4);
        if ((ushort)bVar4 < *(ushort *)(*(long *)puVar9 + 0x50)) {
          *(undefined1 *)(*(long *)(param_1 + 0x788) + (ulong)bVar4) = 1;
        }
        *(ushort *)(lVar16 + 0xf8) = uVar5;
        if (*(ushort *)(param_1 + 0x790) <= uVar5) {
          *(ushort *)(param_1 + 0x790) = uVar5 + 1;
        }
        FUN_0082f888(*(undefined8 *)PTR_DAT_04377ce8,lVar16,local_90);
        *(ushort *)(param_1 + 0xde) = uVar7 >> 8 | uVar7 << 8;
        return;
      default:
        uVar17 = *(undefined8 *)(param_1 + 0xa8);
        local_70[0] = 0x10408;
        local_80[0] = 0;
        nn::err::ErrorResultVariant::ErrorResultVariant
                  ((ErrorResultVariant *)((ulong)local_70 | 4),(Result *)local_80);
        FUN_007ee578(auStack_140,local_70);
        puVar15 = auStack_140;
        break;
      case '\x06':
        uVar17 = *(undefined8 *)(param_1 + 0xa8);
        local_70[0] = 0x643f;
        local_80[0] = 0;
        nn::err::ErrorResultVariant::ErrorResultVariant
                  ((ErrorResultVariant *)((ulong)local_70 | 4),(Result *)local_80);
        FUN_007ee578(auStack_110,local_70);
        puVar15 = auStack_110;
        break;
      case '\a':
        uVar17 = *(undefined8 *)(param_1 + 0xa8);
        local_70[0] = 0x6442;
        local_80[0] = 0;
        nn::err::ErrorResultVariant::ErrorResultVariant
                  ((ErrorResultVariant *)((ulong)local_70 | 4),(Result *)local_80);
        FUN_007ee578(auStack_130,local_70);
        puVar15 = auStack_130;
        break;
      case '\b':
        uVar17 = *(undefined8 *)(param_1 + 0xa8);
        local_70[0] = 0x6443;
        local_80[0] = 0;
        nn::err::ErrorResultVariant::ErrorResultVariant
                  ((ErrorResultVariant *)((ulong)local_70 | 4),(Result *)local_80);
        FUN_007ee578(auStack_120,local_70);
        puVar15 = auStack_120;
      }
      break;
    case '\x04':
      uVar17 = *(undefined8 *)(param_1 + 0xa8);
      local_70[0] = 0x6c3d;
      local_80[0] = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)local_70 | 4),(Result *)local_80);
      FUN_007ee578(auStack_e0,local_70);
      puVar15 = auStack_e0;
      break;
    case '\x05':
      uVar17 = *(undefined8 *)(param_1 + 0xa8);
      local_70[0] = 0x647b;
      local_80[0] = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)local_70 | 4),(Result *)local_80);
      FUN_007ee578(auStack_d0,local_70);
      puVar15 = auStack_d0;
      break;
    case '\t':
      uVar17 = *(undefined8 *)(param_1 + 0xa8);
      local_70[0] = 0x647e;
      local_80[0] = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)local_70 | 4),(Result *)local_80);
      FUN_007ee578(auStack_f0,local_70);
      puVar15 = auStack_f0;
    }
    goto LAB_00837b9c;
  }
  bVar4 = *(byte *)(param_2 + 2);
  uVar2 = *(undefined1 *)(param_2 + 1);
  local_70[0] = 0;
  local_80[0] = 0;
  lVar16 = *(long *)PTR_DAT_043773c0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_70 | 4),(Result *)local_80);
  plVar18 = *(long **)(*(long *)PTR_DAT_04377550 + 0x18);
  bVar10 = FUN_008483b0(lVar16 + 0x10,uVar2);
  if (bVar10 < bVar4) {
    uVar14 = (**(code **)(*plVar18 + 0x160))(plVar18);
    if ((uVar14 & 1) != 0) {
      local_90[0] = 0x641e;
      goto LAB_00837b3c;
    }
    local_a0[0] = 0x6467;
LAB_00837b54:
    puVar19 = local_a0;
  }
  else {
    uVar14 = (**(code **)(*plVar18 + 0x160))(plVar18);
    if ((uVar14 & 1) == 0) {
      local_a0[0] = 0x6468;
      goto LAB_00837b54;
    }
    local_90[0] = 0x641f;
LAB_00837b3c:
    puVar19 = local_90;
  }
  local_80[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)puVar19 | 4),(Result *)local_80);
  FUN_007ee578(local_80,puVar19);
  FUN_007ee660(local_70,local_80);
  uVar17 = *(undefined8 *)(param_1 + 0xa8);
  FUN_007ee578(auStack_b0,local_70);
  puVar15 = auStack_b0;
LAB_00837b9c:
  FUN_0083ada8(uVar17,puVar15);
  return;
}


