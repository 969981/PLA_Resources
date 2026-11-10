/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029ea38c; name: FUN_029ea38c
 */


void FUN_029ea38c(long param_1,undefined8 param_2,long *param_3)

{
  byte bVar1;
  uint uVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  byte bVar6;
  char cVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  byte bVar11;
  ulong uVar12;
  long lVar13;
  undefined **local_80;
  long local_78;
  long local_70;
  undefined2 local_68;
  char local_66;
  
  bVar1 = *(byte *)(*param_3 + 0x7d);
  local_78 = *(long *)(param_1 + 8);
  local_70 = *(long *)(param_1 + 0x10);
  local_68 = 0;
  local_80 = &PTR_LAB_04277078;
  local_66 = '\x01';
  FUN_0299d494(&local_80);
  lVar5 = local_70;
  lVar4 = local_78;
  if (local_66 != '\0') {
    return;
  }
  uVar12 = (ulong)(byte)local_68;
  if (local_68._1_1_ < *(byte *)(*(long *)(local_70 + 8) + uVar12 * 0x38 + 0x38)) {
    lVar13 = *(long *)(*(long *)(local_70 + 8) + uVar12 * 0x38 + (ulong)local_68._1_1_ * 8 + 8);
  }
  else {
    lVar13 = 0;
  }
  bVar11 = local_68._1_1_ + 1;
  local_68 = CONCAT11(bVar11,(byte)local_68);
  if ((byte)local_68 < 5) {
    do {
      bVar6 = FUN_0294da60(*(undefined4 *)(lVar4 + 0x110),
                           *(undefined1 *)(*(long *)(lVar4 + 0x58) + 0x55),(uint)uVar12 & 0xff);
      if (bVar11 < bVar6) {
        do {
          if (((bVar11 < *(byte *)(*(long *)(lVar5 + 8) + (uVar12 & 0xff) * 0x38 + 0x38)) &&
              (lVar9 = *(long *)(*(long *)(lVar5 + 8) + (uVar12 & 0xff) * 0x38 + (ulong)bVar11 * 8 +
                                8), lVar9 != 0)) && (*(short *)(lVar9 + 0x74) != 0)) {
            bVar3 = false;
            local_68 = CONCAT11(bVar11,(char)uVar12);
            goto LAB_029ea4dc;
          }
          bVar11 = bVar11 + 1;
        } while (bVar11 < bVar6);
      }
      uVar2 = (uint)uVar12 + 1;
      uVar12 = (ulong)uVar2;
      bVar11 = 0;
    } while ((uVar2 & 0xff) < 5);
    bVar11 = 0;
    local_68 = (ushort)(byte)uVar2;
  }
  bVar3 = true;
  local_66 = '\x01';
LAB_029ea4dc:
  lVar8 = (ulong)(5 < bVar1) << 1;
  lVar9 = (ulong)(bVar1 < 0x1e) << 2;
  if (0xb < bVar1) {
    lVar8 = 1;
  }
  if (bVar1 < 0x18) {
    lVar9 = 3;
  }
  if (0x11 < bVar1) {
    lVar8 = lVar9;
  }
LAB_029ea518:
  do {
    uVar10 = uVar12 & 0xff;
    do {
      bVar6 = *(byte *)(lVar13 + 0x7d);
      if ((bVar1 == 0x1f) || (bVar6 == 0x1f)) {
LAB_029ea5d4:
        lVar9 = *(long *)(*(long *)(param_1 + 0x60) + 800);
        lVar13 = *(long *)(*(long *)(*(long *)(lVar9 + 0x10) + 8) + (ulong)bVar6 * 8 + 0x120);
        if (*(short *)(lVar13 + 0x76) != 0) {
          FUN_029825a0(*(undefined8 *)(lVar9 + 0x38),lVar13,7);
        }
      }
      else {
        uVar2 = *(uint *)(*(long *)(param_1 + 8) + 0x110);
        if (uVar2 < 3) {
          cVar7 = (&PTR_DAT_04278308)[(int)uVar2][lVar8];
          if (5 < bVar6) goto LAB_029ea5b4;
LAB_029ea580:
          lVar13 = 0;
joined_r0x029ea5c4:
          if (2 < uVar2) goto LAB_029ea5c8;
LAB_029ea58c:
          if (cVar7 != (&PTR_DAT_042782f0)[(int)uVar2][lVar13]) goto LAB_029ea5d4;
        }
        else {
          cVar7 = '\x02';
          if (bVar6 < 6) goto LAB_029ea580;
LAB_029ea5b4:
          if (bVar6 < 0xc) {
            lVar13 = 2;
            goto joined_r0x029ea5c4;
          }
          if (bVar6 < 0x12) {
            lVar13 = 1;
            goto joined_r0x029ea5c4;
          }
          if (bVar6 < 0x18) {
            lVar13 = 3;
            goto joined_r0x029ea5c4;
          }
          lVar13 = (ulong)(bVar6 < 0x1e) << 2;
          if (uVar2 < 3) goto LAB_029ea58c;
LAB_029ea5c8:
          if (cVar7 != '\x02') goto LAB_029ea5d4;
        }
      }
      if (bVar3) {
        return;
      }
      if (bVar11 < *(byte *)(*(long *)(lVar5 + 8) + uVar10 * 0x38 + 0x38)) {
        lVar13 = *(long *)(*(long *)(lVar5 + 8) + uVar10 * 0x38 + (ulong)bVar11 * 8 + 8);
      }
      else {
        lVar13 = 0;
      }
      bVar11 = bVar11 + 1;
      bVar3 = true;
    } while (4 < ((uint)uVar12 & 0xff));
    do {
      bVar6 = FUN_0294da60(*(undefined4 *)(lVar4 + 0x110),
                           *(undefined1 *)(*(long *)(lVar4 + 0x58) + 0x55),uVar10 & 0xffffffff);
      if (bVar11 < bVar6) {
        do {
          if (((bVar11 < *(byte *)(*(long *)(lVar5 + 8) + uVar10 * 0x38 + 0x38)) &&
              (lVar9 = *(long *)(*(long *)(lVar5 + 8) + uVar10 * 0x38 + (ulong)bVar11 * 8 + 8),
              lVar9 != 0)) && (*(short *)(lVar9 + 0x74) != 0)) {
            bVar3 = false;
            uVar12 = uVar10 & 0xffffffff;
            goto LAB_029ea518;
          }
          bVar11 = bVar11 + 1;
        } while (bVar11 < bVar6);
      }
      uVar10 = uVar10 + 1;
      bVar11 = 0;
    } while (uVar10 != 5);
    bVar3 = true;
    uVar12 = 5;
  } while( true );
}


