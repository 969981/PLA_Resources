/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00838000; name: FUN_00838000
 */


void FUN_00838000(undefined8 param_1,long param_2,int param_3)

{
  byte bVar1;
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
  char cVar13;
  uint uVar14;
  undefined4 uVar15;
  long lVar16;
  long lVar17;
  undefined8 uVar18;
  undefined1 auStack_6b0 [64];
  undefined1 auStack_670 [32];
  int local_650 [4];
  undefined1 auStack_640 [16];
  undefined1 auStack_630 [16];
  undefined4 local_620;
  undefined1 local_61c;
  byte local_61b;
  byte local_61a;
  byte local_619;
  byte local_618;
  byte local_617;
  byte local_616;
  byte local_615;
  byte local_614;
  byte local_613;
  byte local_612;
  byte local_611;
  byte local_610;
  
  if (((param_3 == 0x24) || (param_3 == 0x18)) && (lVar16 = FUN_008473ec(param_1), lVar16 != 0)) {
    lVar16 = FUN_008473ec(param_1);
    lVar17 = FUN_00847388(param_1);
    if (lVar16 == lVar17) {
      local_650[0] = 0;
      local_620 = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)local_650 | 4),(Result *)&local_620);
      bVar1 = *(byte *)(param_2 + 5);
      bVar2 = *(byte *)(param_2 + 6);
      bVar3 = *(byte *)(param_2 + 7);
      bVar4 = *(byte *)(param_2 + 8);
      bVar5 = *(byte *)(param_2 + 9);
      bVar6 = *(byte *)(param_2 + 0xe);
      bVar7 = *(byte *)(param_2 + 10);
      bVar8 = *(byte *)(param_2 + 0xb);
      bVar9 = *(byte *)(param_2 + 0xc);
      bVar10 = *(byte *)(param_2 + 0xf);
      bVar11 = *(byte *)(param_2 + 0xd);
      bVar12 = *(byte *)(param_2 + 0x10);
      FUN_007f0ce0(auStack_670);
      cVar13 = *(char *)(param_2 + 0x11);
      FUN_007e3400(&local_620);
      if (cVar13 == '\x01') {
        uVar18 = 0x12;
      }
      else {
        uVar18 = 6;
      }
      FUN_007e4318(auStack_6b0,&local_620,param_2 + 0x12,uVar18);
      FUN_007f105c(auStack_670,&local_620);
      FUN_007e34a4(&local_620);
      FUN_0083fbc0(auStack_6b0);
      uVar18 = FUN_00855004(*(undefined8 *)PTR_DAT_043773c0);
      lVar16 = FUN_00826d78(uVar18,(ulong)bVar1 << 0x38 | (ulong)bVar2 << 0x30 |
                                   (ulong)bVar3 << 0x28 | (ulong)bVar4 << 0x20 |
                                   (ulong)bVar5 << 0x18 | (ulong)bVar7 << 0x10 | (ulong)bVar8 << 8 |
                                   (ulong)bVar9);
      if (lVar16 != 0) {
        FUN_00825dcc(&local_620,lVar16,auStack_6b0);
        FUN_007ee660(local_650,&local_620);
        if ((local_650[0] == 0) &&
           (uVar14 = FUN_0083fda0(auStack_6b0),
           ((uint)bVar11 << 0x18 | (uint)bVar6 << 0x10 | (uint)bVar10 << 8 | (uint)bVar12) ==
           (uVar14 & 0xffff))) {
          FUN_00821b80(auStack_630);
          uVar15 = FUN_00821c5c(auStack_630);
          local_620 = CONCAT13((char)((uint)uVar15 >> 8),
                               CONCAT12((char)((uint)uVar15 >> 0x10),
                                        CONCAT11((char)((uint)uVar15 >> 0x18),4)));
          local_61c = (undefined1)uVar15;
          local_61b = bVar1;
          local_61a = bVar2;
          local_619 = bVar3;
          local_618 = bVar4;
          local_617 = bVar5;
          local_616 = bVar7;
          local_615 = bVar8;
          local_614 = bVar9;
          local_613 = bVar11;
          local_612 = bVar6;
          local_611 = bVar10;
          local_610 = bVar12;
          FUN_00835fb0(auStack_640,param_1,auStack_670,&local_620,0x11,0);
          FUN_00835b90(param_1,lVar16);
        }
      }
      FUN_0083fc40(auStack_6b0);
    }
  }
  return;
}


