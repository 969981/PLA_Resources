/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029fc7bc; name: FUN_029fc7bc
 */


void FUN_029fc7bc(long param_1)

{
  uint uVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  byte bVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  byte bVar9;
  long lVar10;
  ulong uVar11;
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
  lVar4 = local_70;
  lVar3 = local_78;
  if (local_66 != '\0') {
    return;
  }
  uVar11 = (ulong)(byte)local_68;
  if (local_68._1_1_ < *(byte *)(*(long *)(local_70 + 8) + uVar11 * 0x38 + 0x38)) {
    lVar10 = *(long *)(*(long *)(local_70 + 8) + uVar11 * 0x38 + (ulong)local_68._1_1_ * 8 + 8);
  }
  else {
    lVar10 = 0;
  }
  bVar9 = local_68._1_1_ + 1;
  local_68 = CONCAT11(bVar9,(byte)local_68);
  if ((byte)local_68 < 5) {
    do {
      bVar5 = FUN_0294da60(*(undefined4 *)(lVar3 + 0x110),
                           *(undefined1 *)(*(long *)(lVar3 + 0x58) + 0x55),(uint)uVar11 & 0xff);
      if (bVar9 < bVar5) {
        do {
          if (((bVar9 < *(byte *)(*(long *)(lVar4 + 8) + (uVar11 & 0xff) * 0x38 + 0x38)) &&
              (lVar7 = *(long *)(*(long *)(lVar4 + 8) + (uVar11 & 0xff) * 0x38 + (ulong)bVar9 * 8 +
                                8), lVar7 != 0)) && (*(short *)(lVar7 + 0x74) != 0)) {
            bVar2 = false;
            local_68 = CONCAT11(bVar9,(char)uVar11);
            goto LAB_029fc90c;
          }
          bVar9 = bVar9 + 1;
        } while (bVar9 < bVar5);
      }
      uVar1 = (uint)uVar11 + 1;
      uVar11 = (ulong)uVar1;
      bVar9 = 0;
    } while ((uVar1 & 0xff) < 5);
    bVar9 = 0;
    local_68 = (ushort)(byte)uVar1;
  }
  bVar2 = true;
  local_66 = '\x01';
LAB_029fc90c:
  do {
    uVar8 = uVar11 & 0xff;
    bVar5 = *(byte *)(lVar10 + 0x388);
    while( true ) {
      if ((bVar5 >> 4 & 1) != 0) {
        lVar7 = *(long *)(param_1 + 0x20);
        lVar6 = *(long *)(*(long *)(*(long *)(*(long *)(lVar7 + 0x20) + 0x10) + 8) +
                          (ulong)*(byte *)(lVar10 + 0x7d) * 8 + 0x120);
        *(byte *)(lVar6 + 0x388) = *(byte *)(lVar6 + 0x388) & 0xef;
        FUN_02a3e6b8(*(undefined8 *)(lVar7 + 0x18),0x1f,*(undefined1 *)(lVar10 + 0x7d),0xc);
        lVar7 = *(long *)(param_1 + 0x20);
        lVar6 = *(long *)(*(long *)(*(long *)(*(long *)(lVar7 + 0x20) + 0x10) + 8) +
                          (ulong)*(byte *)(lVar10 + 0x7d) * 8 + 0x120);
        *(byte *)(lVar6 + 0x386) = *(byte *)(lVar6 + 0x386) | 8;
        FUN_02a3e6b8(*(undefined8 *)(lVar7 + 0x18),0x20,*(undefined1 *)(lVar10 + 0x7d),0x13);
      }
      if (bVar2) {
        return;
      }
      if (bVar9 < *(byte *)(*(long *)(lVar4 + 8) + uVar8 * 0x38 + 0x38)) {
        lVar10 = *(long *)(*(long *)(lVar4 + 8) + uVar8 * 0x38 + (ulong)bVar9 * 8 + 8);
      }
      else {
        lVar10 = 0;
      }
      bVar9 = bVar9 + 1;
      bVar2 = true;
      if (((uint)uVar11 & 0xff) < 5) break;
      bVar5 = *(byte *)(lVar10 + 0x388);
    }
    do {
      bVar5 = FUN_0294da60(*(undefined4 *)(lVar3 + 0x110),
                           *(undefined1 *)(*(long *)(lVar3 + 0x58) + 0x55),uVar8 & 0xffffffff);
      if (bVar9 < bVar5) {
        do {
          if (((bVar9 < *(byte *)(*(long *)(lVar4 + 8) + uVar8 * 0x38 + 0x38)) &&
              (lVar7 = *(long *)(*(long *)(lVar4 + 8) + uVar8 * 0x38 + (ulong)bVar9 * 8 + 8),
              lVar7 != 0)) && (*(short *)(lVar7 + 0x74) != 0)) {
            bVar2 = false;
            uVar11 = uVar8 & 0xffffffff;
            goto LAB_029fc90c;
          }
          bVar9 = bVar9 + 1;
        } while (bVar9 < bVar5);
      }
      uVar8 = uVar8 + 1;
      bVar9 = 0;
    } while (uVar8 != 5);
    bVar2 = true;
    uVar11 = 5;
  } while( true );
}


