/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029fca98; name: FUN_029fca98
 */


void FUN_029fca98(long param_1)

{
  uint uVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  byte bVar5;
  long lVar6;
  ulong uVar7;
  byte bVar8;
  long lVar9;
  ulong uVar10;
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
  uVar10 = (ulong)(byte)local_68;
  if (local_68._1_1_ < *(byte *)(*(long *)(local_70 + 8) + uVar10 * 0x38 + 0x38)) {
    lVar9 = *(long *)(*(long *)(local_70 + 8) + uVar10 * 0x38 + (ulong)local_68._1_1_ * 8 + 8);
  }
  else {
    lVar9 = 0;
  }
  bVar8 = local_68._1_1_ + 1;
  local_68 = CONCAT11(bVar8,(byte)local_68);
  if ((byte)local_68 < 5) {
    do {
      bVar5 = FUN_0294da60(*(undefined4 *)(lVar3 + 0x110),
                           *(undefined1 *)(*(long *)(lVar3 + 0x58) + 0x55),(uint)uVar10 & 0xff);
      if (bVar8 < bVar5) {
        do {
          if (((bVar8 < *(byte *)(*(long *)(lVar4 + 8) + (uVar10 & 0xff) * 0x38 + 0x38)) &&
              (lVar6 = *(long *)(*(long *)(lVar4 + 8) + (uVar10 & 0xff) * 0x38 + (ulong)bVar8 * 8 +
                                8), lVar6 != 0)) && (*(short *)(lVar6 + 0x74) != 0)) {
            bVar2 = false;
            local_68 = CONCAT11(bVar8,(char)uVar10);
            goto LAB_029fcbf0;
          }
          bVar8 = bVar8 + 1;
        } while (bVar8 < bVar5);
      }
      uVar1 = (uint)uVar10 + 1;
      uVar10 = (ulong)uVar1;
      bVar8 = 0;
    } while ((uVar1 & 0xff) < 5);
    bVar8 = 0;
    local_68 = (ushort)(byte)uVar1;
  }
  bVar2 = true;
  local_66 = '\x01';
LAB_029fcbf0:
  do {
    uVar7 = uVar10 & 0xff;
    do {
      lVar6 = *(long *)(param_1 + 0x20);
      *(undefined1 *)
       (*(long *)(*(long *)(*(long *)(*(long *)(lVar6 + 0x20) + 0x10) + 8) +
                  (ulong)*(byte *)(lVar9 + 0x7d) * 8 + 0x120) + 0x36e) = 1;
      FUN_02a3e6b8(*(undefined8 *)(lVar6 + 0x18),0x4e,*(undefined1 *)(lVar9 + 0x7d),1);
      if (bVar2) {
        return;
      }
      if (bVar8 < *(byte *)(*(long *)(lVar4 + 8) + uVar7 * 0x38 + 0x38)) {
        lVar9 = *(long *)(*(long *)(lVar4 + 8) + uVar7 * 0x38 + (ulong)bVar8 * 8 + 8);
      }
      else {
        lVar9 = 0;
      }
      bVar8 = bVar8 + 1;
      bVar2 = true;
    } while (4 < ((uint)uVar10 & 0xff));
    do {
      bVar5 = FUN_0294da60(*(undefined4 *)(lVar3 + 0x110),
                           *(undefined1 *)(*(long *)(lVar3 + 0x58) + 0x55),uVar7 & 0xffffffff);
      if (bVar8 < bVar5) {
        do {
          if (((bVar8 < *(byte *)(*(long *)(lVar4 + 8) + uVar7 * 0x38 + 0x38)) &&
              (lVar6 = *(long *)(*(long *)(lVar4 + 8) + uVar7 * 0x38 + (ulong)bVar8 * 8 + 8),
              lVar6 != 0)) && (*(short *)(lVar6 + 0x74) != 0)) {
            bVar2 = false;
            uVar10 = uVar7 & 0xffffffff;
            goto LAB_029fcbf0;
          }
          bVar8 = bVar8 + 1;
        } while (bVar8 < bVar5);
      }
      uVar7 = uVar7 + 1;
      bVar8 = 0;
    } while (uVar7 != 5);
    bVar2 = true;
    uVar10 = 5;
  } while( true );
}


