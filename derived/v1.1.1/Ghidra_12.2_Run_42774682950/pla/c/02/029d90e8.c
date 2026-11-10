/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029d90e8; name: FUN_029d90e8
 */


void FUN_029d90e8(long param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  byte bVar6;
  ulong uVar7;
  undefined1 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  uint uVar12;
  ulong uVar13;
  byte bVar14;
  long lVar15;
  ulong uVar16;
  undefined **local_80;
  long local_78;
  long local_70;
  undefined2 local_68;
  char local_66;
  
  local_78 = *(long *)(param_1 + 8);
  local_70 = *(long *)(param_1 + 0x10);
  local_80 = &PTR_LAB_04277078;
  local_68 = 0;
  local_66 = '\x01';
  FUN_0299d494(&local_80);
  lVar5 = local_70;
  lVar4 = local_78;
  if (local_66 != '\0') {
    return;
  }
  uVar16 = (ulong)(byte)local_68;
  if (local_68._1_1_ < *(byte *)(*(long *)(local_70 + 8) + uVar16 * 0x38 + 0x38)) {
    lVar15 = *(long *)(*(long *)(local_70 + 8) + uVar16 * 0x38 + (ulong)local_68._1_1_ * 8 + 8);
  }
  else {
    lVar15 = 0;
  }
  bVar14 = local_68._1_1_ + 1;
  local_68 = CONCAT11(bVar14,(byte)local_68);
  if ((byte)local_68 < 5) {
    do {
      bVar6 = FUN_0294da60(*(undefined4 *)(lVar4 + 0x110),
                           *(undefined1 *)(*(long *)(lVar4 + 0x58) + 0x55),(uint)uVar16 & 0xff);
      if (bVar14 < bVar6) {
        do {
          if (((bVar14 < *(byte *)(*(long *)(lVar5 + 8) + (uVar16 & 0xff) * 0x38 + 0x38)) &&
              (lVar11 = *(long *)(*(long *)(lVar5 + 8) + (uVar16 & 0xff) * 0x38 + (ulong)bVar14 * 8
                                 + 8), lVar11 != 0)) && (*(short *)(lVar11 + 0x74) != 0)) {
            bVar3 = false;
            local_68 = CONCAT11(bVar14,(char)uVar16);
            goto LAB_029d924c;
          }
          bVar14 = bVar14 + 1;
        } while (bVar14 < bVar6);
      }
      uVar1 = (uint)uVar16 + 1;
      uVar16 = (ulong)uVar1;
      bVar14 = 0;
    } while ((uVar1 & 0xff) < 5);
    bVar14 = 0;
    local_68 = (ushort)(byte)uVar1;
  }
  bVar3 = true;
  local_66 = '\x01';
LAB_029d924c:
  do {
    uVar13 = uVar16 & 0xff;
    do {
      bVar6 = *(byte *)(param_2 + 0x7d);
      lVar11 = *(long *)(param_1 + 0x20);
      uVar7 = (ulong)*(byte *)(lVar15 + 0x7d);
      if (bVar6 == 0x1f) {
        uVar8 = 0x1f;
      }
      else {
        lVar9 = 0;
        lVar10 = *(long *)(*(long *)(*(long *)(*(long *)(lVar11 + 0x20) + 0x10) + 8) + uVar7 * 8 +
                          0x120);
        do {
          uVar7 = *(ulong *)(lVar10 + 0x90 + lVar9);
          if ((uVar7 & 7) != 0) {
            uVar12 = (uint)uVar7;
            uVar1 = 0x1f;
            if ((uVar12 & 7) == 3) {
              uVar1 = uVar12 >> 8 & 0x3f;
            }
            uVar2 = uVar12 >> 0xe & 0x3f;
            if ((uVar12 & 7) != 4) {
              uVar2 = uVar1;
            }
            if ((uVar2 == bVar6) && (*(undefined8 *)(lVar10 + 0x90 + lVar9) = 0xf8, lVar9 == 0x10))
            {
              *(undefined8 *)(lVar10 + 0xe8) = 0xf8;
              *(undefined1 *)(lVar10 + 0x243) = 0;
            }
          }
          lVar9 = lVar9 + 8;
        } while (lVar9 != 0x1a8);
        uVar7 = (ulong)*(byte *)(lVar15 + 0x7d);
        uVar8 = *(undefined1 *)(param_2 + 0x7d);
      }
      FUN_02a3e6b8(*(undefined8 *)(lVar11 + 0x18),0x3e,uVar7,uVar8);
      if (bVar3) {
        return;
      }
      if (bVar14 < *(byte *)(*(long *)(lVar5 + 8) + uVar13 * 0x38 + 0x38)) {
        lVar15 = *(long *)(*(long *)(lVar5 + 8) + uVar13 * 0x38 + (ulong)bVar14 * 8 + 8);
      }
      else {
        lVar15 = 0;
      }
      bVar14 = bVar14 + 1;
      bVar3 = true;
    } while (4 < ((uint)uVar16 & 0xff));
    do {
      bVar6 = FUN_0294da60(*(undefined4 *)(lVar4 + 0x110),
                           *(undefined1 *)(*(long *)(lVar4 + 0x58) + 0x55),uVar13 & 0xffffffff);
      if (bVar14 < bVar6) {
        do {
          if (((bVar14 < *(byte *)(*(long *)(lVar5 + 8) + uVar13 * 0x38 + 0x38)) &&
              (lVar11 = *(long *)(*(long *)(lVar5 + 8) + uVar13 * 0x38 + (ulong)bVar14 * 8 + 8),
              lVar11 != 0)) && (*(short *)(lVar11 + 0x74) != 0)) {
            bVar3 = false;
            uVar16 = uVar13 & 0xffffffff;
            goto LAB_029d924c;
          }
          bVar14 = bVar14 + 1;
        } while (bVar14 < bVar6);
      }
      uVar13 = uVar13 + 1;
      bVar14 = 0;
    } while (uVar13 != 5);
    bVar3 = true;
    uVar16 = 5;
  } while( true );
}


