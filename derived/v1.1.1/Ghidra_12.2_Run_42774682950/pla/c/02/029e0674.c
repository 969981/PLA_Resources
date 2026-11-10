/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029e0674; name: FUN_029e0674
 */


void FUN_029e0674(long param_1)

{
  uint uVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  byte bVar5;
  char cVar6;
  long lVar7;
  ulong uVar8;
  byte bVar9;
  long lVar10;
  ulong uVar11;
  undefined **local_98;
  long local_90;
  long local_88;
  undefined2 local_80;
  char local_7e;
  undefined1 local_78 [8];
  long local_70;
  undefined1 local_68;
  
  local_90 = *(long *)(param_1 + 8);
  local_88 = *(long *)(param_1 + 0x10);
  local_98 = &PTR_LAB_04277078;
  local_80 = 0;
  local_7e = '\x01';
  FUN_0299d494(&local_98);
  lVar4 = local_88;
  lVar3 = local_90;
  if (local_7e != '\0') {
    return;
  }
  uVar11 = (ulong)(byte)local_80;
  if (local_80._1_1_ < *(byte *)(*(long *)(local_88 + 8) + uVar11 * 0x38 + 0x38)) {
    lVar10 = *(long *)(*(long *)(local_88 + 8) + uVar11 * 0x38 + (ulong)local_80._1_1_ * 8 + 8);
  }
  else {
    lVar10 = 0;
  }
  bVar9 = local_80._1_1_ + 1;
  local_80 = CONCAT11(bVar9,(byte)local_80);
  if ((byte)local_80 < 5) {
    do {
      bVar5 = FUN_0294da60(*(undefined4 *)(lVar3 + 0x110),
                           *(undefined1 *)(*(long *)(lVar3 + 0x58) + 0x55),(uint)uVar11 & 0xff);
      if (bVar9 < bVar5) {
        do {
          if (((bVar9 < *(byte *)(*(long *)(lVar4 + 8) + (uVar11 & 0xff) * 0x38 + 0x38)) &&
              (lVar7 = *(long *)(*(long *)(lVar4 + 8) + (uVar11 & 0xff) * 0x38 + (ulong)bVar9 * 8 +
                                8), lVar7 != 0)) && (*(short *)(lVar7 + 0x74) != 0)) {
            bVar2 = false;
            local_80 = CONCAT11(bVar9,(char)uVar11);
            goto LAB_029e07c4;
          }
          bVar9 = bVar9 + 1;
        } while (bVar9 < bVar5);
      }
      uVar1 = (uint)uVar11 + 1;
      uVar11 = (ulong)uVar1;
      bVar9 = 0;
    } while ((uVar1 & 0xff) < 5);
    bVar9 = 0;
    local_80 = (ushort)(byte)uVar1;
  }
  bVar2 = true;
  local_7e = '\x01';
LAB_029e07c4:
  do {
    uVar8 = uVar11 & 0xff;
    do {
      uVar1 = **(uint **)(*(long *)(param_1 + 8) + 0x58);
      if (uVar1 < 4 && uVar1 != 1) {
        bVar5 = *(byte *)(lVar10 + 0x7d);
        if (bVar5 < 6) {
          cVar6 = '\0';
        }
        else if (bVar5 < 0xc) {
          cVar6 = '\x02';
        }
        else if (bVar5 < 0x12) {
          cVar6 = '\x01';
        }
        else if (bVar5 < 0x18) {
          cVar6 = '\x03';
        }
        else {
          cVar6 = (bVar5 < 0x1e) << 2;
        }
        if ((*(char *)(*(long *)(param_1 + 8) + 0x130) != cVar6) && (*(int *)(lVar10 + 0x2b4) == 2))
        {
          local_68 = 1;
          local_78[0] = 0;
          local_70 = lVar10;
          FUN_029d21c0(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x1a0),local_78,&local_70);
        }
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
    } while (4 < ((uint)uVar11 & 0xff));
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
            goto LAB_029e07c4;
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


