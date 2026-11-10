/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008396e4; name: FUN_008396e4
 */


void FUN_008396e4(long param_1,long param_2,int param_3)

{
  ulong *puVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  char cVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  ushort uVar18;
  ulong uVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined2 uVar22;
  uint uVar23;
  ulong uVar24;
  ulong uVar25;
  undefined8 uVar26;
  long lVar27;
  undefined8 uVar28;
  long lVar29;
  undefined1 auStack_650 [32];
  undefined1 local_630;
  ulong local_62f;
  undefined2 local_627;
  undefined1 local_625;
  undefined1 local_624;
  byte local_623;
  byte local_622;
  byte local_621;
  byte local_620;
  byte local_61f;
  byte local_61e;
  byte local_61d;
  byte local_61c;
  byte local_61b;
  byte local_61a;
  byte local_619;
  byte local_618;
  undefined1 auStack_70 [16];
  
  if ((param_3 == 0x2e) || (param_3 == 0x22)) {
    bVar2 = *(byte *)(param_2 + 4);
    bVar3 = *(byte *)(param_2 + 1);
    bVar4 = *(byte *)(param_2 + 2);
    bVar5 = *(byte *)(param_2 + 3);
    bVar6 = *(byte *)(param_2 + 7);
    bVar7 = *(byte *)(param_2 + 8);
    bVar8 = *(byte *)(param_2 + 9);
    bVar9 = *(byte *)(param_2 + 10);
    bVar10 = *(byte *)(param_2 + 0xb);
    bVar11 = *(byte *)(param_2 + 0xc);
    bVar12 = *(byte *)(param_2 + 5);
    bVar13 = *(byte *)(param_2 + 6);
    FUN_007f0ce0(auStack_650);
    cVar14 = *(char *)(param_2 + 0xd);
    FUN_007e3400(&local_630);
    if (cVar14 == '\x01') {
      FUN_007e4318(auStack_70,&local_630,param_2 + 0xe,0x12);
      lVar29 = 0x20;
    }
    else {
      FUN_007e4318(auStack_70,&local_630,param_2 + 0xe,6);
      lVar29 = 0x14;
    }
    puVar1 = (ulong *)(param_2 + lVar29);
    FUN_007f105c(auStack_650,&local_630);
    FUN_007e34a4(&local_630);
    uVar25 = (*puVar1 & 0xff00ff00ff00ff00) >> 8 | (*puVar1 & 0xff00ff00ff00ff) << 8;
    uVar25 = (uVar25 & 0xffff0000ffff0000) >> 0x10 | (uVar25 & 0xffff0000ffff) << 0x10;
    uVar19 = puVar1[1];
    bVar15 = *(byte *)((long)puVar1 + 9);
    bVar16 = *(byte *)((long)puVar1 + 10);
    bVar17 = *(byte *)((long)puVar1 + 0xb);
    uVar18 = *(ushort *)((long)puVar1 + 0xc);
    lVar29 = *(long *)PTR_DAT_04377550;
    uVar24 = FUN_0083fd98(lVar29 + 0x178);
    if ((uVar24 == (uVar25 >> 0x20 | uVar25 << 0x20)) &&
       (uVar23 = FUN_0083fda0(lVar29 + 0x178), puVar21 = PTR_DAT_04377550,
       ((uint)(byte)uVar19 << 0x18 | (uint)bVar15 << 0x10 | (uint)bVar16 << 8 | (uint)bVar17) ==
       (uVar23 & 0xffff))) {
      lVar29 = *(long *)PTR_DAT_04377550 + 0x1b8;
      uVar25 = FUN_0083fd98(lVar29);
      local_623 = bVar3;
      local_622 = bVar4;
      local_621 = bVar5;
      local_620 = bVar2;
      local_61f = bVar12;
      local_61e = bVar13;
      local_61d = bVar6;
      local_61c = bVar7;
      local_61b = bVar8;
      local_61a = bVar9;
      local_619 = bVar10;
      local_618 = bVar11;
      if ((uVar25 == ((ulong)bVar3 << 0x38 | (ulong)bVar4 << 0x30 | (ulong)bVar5 << 0x28 |
                      (ulong)bVar2 << 0x20 | (ulong)bVar12 << 0x18 | (ulong)bVar13 << 0x10 |
                      (ulong)bVar6 << 8 | (ulong)bVar7)) &&
         (uVar23 = FUN_0083fda0(lVar29), puVar20 = PTR_DAT_043773c0,
         ((uint)bVar8 << 0x18 | (uint)bVar9 << 0x10 | (uint)bVar10 << 8 | (uint)bVar11) ==
         (uVar23 & 0xffff))) {
        uVar26 = FUN_00855004(*(undefined8 *)PTR_DAT_043773c0);
        lVar27 = FUN_008280b4(uVar26,lVar29);
        if ((((lVar27 != 0) && (uVar25 = FUN_0083fd04(param_1 + 0xe8,lVar29), (uVar25 & 1) == 0)) &&
            (uVar25 = FUN_007e5f0c(*(undefined8 *)(param_1 + 0xa8)), (uVar25 & 1) == 0)) &&
           ((((uVar25 = FUN_007e5f0c(*(undefined8 *)(param_1 + 0xb0)), (uVar25 & 1) == 0 &&
              (*(long *)(*(long *)PTR_DAT_04377550 + 0xc0) != 0)) &&
             ((uVar25 = FUN_007e5f0c(*(undefined8 *)(param_1 + 0xc0)), (uVar25 & 1) == 0 ||
              (*(char *)(*(long *)(param_1 + 0xc0) + 0xa9) == '\0')))) &&
            ((ushort)(uVar18 >> 8 | uVar18 << 8) <= *(ushort *)(param_1 + 0xdc))))) {
          lVar27 = *(long *)PTR_DAT_04377550;
          local_630 = 8;
          uVar25 = FUN_0083fd98(lVar27 + 0x178);
          uVar25 = (uVar25 & 0xff00ff00ff00ff00) >> 8 | (uVar25 & 0xff00ff00ff00ff) << 8;
          uVar25 = (uVar25 & 0xffff0000ffff0000) >> 0x10 | (uVar25 & 0xffff0000ffff) << 0x10;
          local_62f = uVar25 >> 0x20 | uVar25 << 0x20;
          uVar22 = FUN_0083fda0(lVar27 + 0x178);
          local_625 = (undefined1)((ushort)uVar22 >> 8);
          local_624 = (undefined1)uVar22;
          local_627 = 0;
          FUN_00835fb0(auStack_70,param_1,auStack_650,&local_630,0x19,1);
          uVar26 = FUN_00855004(*(undefined8 *)puVar20);
          uVar28 = FUN_0083fd98(lVar29);
          uVar26 = FUN_00826d78(uVar26,uVar28);
          FUN_00835b90(param_1,uVar26);
          FUN_0083514c(&local_630,param_1,1);
        }
      }
      else {
        lVar29 = *(long *)puVar21;
        local_630 = 8;
        uVar25 = FUN_0083fd98(lVar29 + 0x178);
        uVar25 = (uVar25 & 0xff00ff00ff00ff00) >> 8 | (uVar25 & 0xff00ff00ff00ff) << 8;
        uVar25 = (uVar25 & 0xffff0000ffff0000) >> 0x10 | (uVar25 & 0xffff0000ffff) << 0x10;
        local_62f = uVar25 >> 0x20 | uVar25 << 0x20;
        uVar22 = FUN_0083fda0(lVar29 + 0x178);
        local_625 = (undefined1)((ushort)uVar22 >> 8);
        local_624 = (undefined1)uVar22;
        local_627 = 0;
        FUN_00835fb0(auStack_70,param_1,auStack_650,&local_630,0x19,1);
      }
    }
  }
  return;
}


