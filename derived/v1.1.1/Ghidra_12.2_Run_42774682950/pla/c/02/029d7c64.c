/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029d7c64; name: FUN_029d7c64
 */


uint FUN_029d7c64(long param_1)

{
  int iVar1;
  byte bVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  byte bVar6;
  uint uVar7;
  char cVar8;
  undefined1 *puVar9;
  long lVar10;
  long lVar11;
  uint uVar12;
  ulong uVar13;
  byte bVar14;
  ulong uVar15;
  undefined **local_80;
  long local_78;
  long local_70;
  undefined2 local_68;
  char local_66;
  
  local_78 = *(long *)(param_1 + 8);
  local_70 = *(long *)(param_1 + 0x10);
  local_68 = 0;
  local_66 = '\x01';
  local_80 = &PTR_LAB_04277078;
  FUN_0299d494(&local_80);
  lVar5 = local_70;
  lVar4 = local_78;
  if (local_66 != '\0') {
    return 1;
  }
  uVar15 = (ulong)(byte)local_68;
  if (local_68._1_1_ < *(byte *)(*(long *)(local_70 + 8) + uVar15 * 0x38 + 0x38)) {
    lVar11 = *(long *)(*(long *)(local_70 + 8) + uVar15 * 0x38 + (ulong)local_68._1_1_ * 8 + 8);
  }
  else {
    lVar11 = 0;
  }
  bVar14 = local_68._1_1_ + 1;
  local_68 = CONCAT11(bVar14,(byte)local_68);
  if ((byte)local_68 < 5) {
    do {
      bVar6 = FUN_0294da60(*(undefined4 *)(lVar4 + 0x110),
                           *(undefined1 *)(*(long *)(lVar4 + 0x58) + 0x55),(uint)uVar15 & 0xff);
      if (bVar14 < bVar6) {
        do {
          if (((bVar14 < *(byte *)(*(long *)(lVar5 + 8) + (uVar15 & 0xff) * 0x38 + 0x38)) &&
              (lVar10 = *(long *)(*(long *)(lVar5 + 8) + (uVar15 & 0xff) * 0x38 + (ulong)bVar14 * 8
                                 + 8), lVar10 != 0)) && (*(short *)(lVar10 + 0x74) != 0)) {
            bVar3 = false;
            local_68 = CONCAT11(bVar14,(char)uVar15);
            goto LAB_029d7dac;
          }
          bVar14 = bVar14 + 1;
        } while (bVar14 < bVar6);
      }
      uVar12 = (uint)uVar15 + 1;
      uVar15 = (ulong)uVar12;
      bVar14 = 0;
    } while ((uVar12 & 0xff) < 5);
    bVar14 = 0;
    local_68 = (ushort)(byte)uVar12;
  }
  bVar3 = true;
  local_66 = '\x01';
LAB_029d7dac:
  uVar12 = 1;
LAB_029d7db4:
  do {
    uVar13 = uVar15 & 0xff;
    do {
      bVar6 = *(byte *)(lVar11 + 0x7d);
      bVar2 = *(byte *)(*(long *)(param_1 + 8) + 0x130);
      if (bVar6 < 6) {
        lVar10 = 0;
      }
      else if (bVar6 < 0xc) {
        lVar10 = 2;
      }
      else if (bVar6 < 0x12) {
        lVar10 = 1;
      }
      else if (bVar6 < 0x18) {
        lVar10 = 3;
      }
      else {
        lVar10 = (ulong)(bVar6 < 0x1e) << 2;
      }
      iVar1 = *(int *)(*(long *)(param_1 + 8) + 0x110);
      if (iVar1 == 2) {
LAB_029d7e4c:
        if (bVar2 < 5) {
          puVar9 = &DAT_03a7ebe0;
LAB_029d7e90:
          cVar8 = puVar9[bVar2];
        }
        else {
          cVar8 = '\x02';
          puVar9 = &DAT_03a7ebe0;
        }
LAB_029d7e94:
        if (cVar8 != puVar9[lVar10]) {
          uVar7 = FUN_029506a8(lVar11,0xf);
          if (uVar7 <= uVar12) {
            uVar7 = uVar12;
          }
          uVar12 = uVar7;
        }
      }
      else {
        if (iVar1 == 1) {
          if (bVar2 < 5) {
            puVar9 = &DAT_03a7ebe5;
            goto LAB_029d7e90;
          }
          cVar8 = '\x02';
          puVar9 = &DAT_03a7ebe5;
          goto LAB_029d7e94;
        }
        if (iVar1 == 0) goto LAB_029d7e4c;
      }
      if (bVar3) {
        return uVar12;
      }
      if (bVar14 < *(byte *)(*(long *)(lVar5 + 8) + uVar13 * 0x38 + 0x38)) {
        lVar11 = *(long *)(*(long *)(lVar5 + 8) + uVar13 * 0x38 + (ulong)bVar14 * 8 + 8);
      }
      else {
        lVar11 = 0;
      }
      bVar14 = bVar14 + 1;
      bVar3 = true;
    } while (4 < ((uint)uVar15 & 0xff));
    do {
      bVar6 = FUN_0294da60(*(undefined4 *)(lVar4 + 0x110),
                           *(undefined1 *)(*(long *)(lVar4 + 0x58) + 0x55),uVar13 & 0xffffffff);
      if (bVar14 < bVar6) {
        do {
          if (((bVar14 < *(byte *)(*(long *)(lVar5 + 8) + uVar13 * 0x38 + 0x38)) &&
              (lVar10 = *(long *)(*(long *)(lVar5 + 8) + uVar13 * 0x38 + (ulong)bVar14 * 8 + 8),
              lVar10 != 0)) && (*(short *)(lVar10 + 0x74) != 0)) {
            bVar3 = false;
            uVar15 = uVar13 & 0xffffffff;
            goto LAB_029d7db4;
          }
          bVar14 = bVar14 + 1;
        } while (bVar14 < bVar6);
      }
      uVar13 = uVar13 + 1;
      bVar14 = 0;
    } while (uVar13 != 5);
    bVar3 = true;
    uVar15 = 5;
  } while( true );
}


