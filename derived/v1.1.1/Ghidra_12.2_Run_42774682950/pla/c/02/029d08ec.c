/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029d08ec; name: FUN_029d08ec
 */


void FUN_029d08ec(long param_1,long *param_2,long param_3)

{
  uint uVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  byte bVar5;
  ulong uVar6;
  long *plVar7;
  char *pcVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  byte bVar12;
  long lVar13;
  ulong uVar14;
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
  uVar14 = (ulong)(byte)local_68;
  if (local_68._1_1_ < *(byte *)(*(long *)(local_70 + 8) + uVar14 * 0x38 + 0x38)) {
    lVar13 = *(long *)(*(long *)(local_70 + 8) + uVar14 * 0x38 + (ulong)local_68._1_1_ * 8 + 8);
  }
  else {
    lVar13 = 0;
  }
  bVar12 = local_68._1_1_ + 1;
  local_68 = CONCAT11(bVar12,(byte)local_68);
  if ((byte)local_68 < 5) {
    do {
      bVar5 = FUN_0294da60(*(undefined4 *)(lVar3 + 0x110),
                           *(undefined1 *)(*(long *)(lVar3 + 0x58) + 0x55),(uint)uVar14 & 0xff);
      if (bVar12 < bVar5) {
        do {
          if (((bVar12 < *(byte *)(*(long *)(lVar4 + 8) + (uVar14 & 0xff) * 0x38 + 0x38)) &&
              (lVar10 = *(long *)(*(long *)(lVar4 + 8) + (uVar14 & 0xff) * 0x38 + (ulong)bVar12 * 8
                                 + 8), lVar10 != 0)) && (*(short *)(lVar10 + 0x74) != 0)) {
            bVar2 = false;
            local_68 = CONCAT11(bVar12,(char)uVar14);
            goto LAB_029d0a38;
          }
          bVar12 = bVar12 + 1;
        } while (bVar12 < bVar5);
      }
      uVar1 = (uint)uVar14 + 1;
      uVar14 = (ulong)uVar1;
      bVar12 = 0;
    } while ((uVar1 & 0xff) < 5);
    bVar12 = 0;
    local_68 = (ushort)(byte)uVar1;
  }
  bVar2 = true;
  local_66 = '\x01';
LAB_029d0a38:
LAB_029d0a40:
  uVar11 = uVar14 & 0xff;
  bVar5 = *(byte *)(param_3 + 8);
joined_r0x029d0a48:
  uVar6 = (ulong)bVar5;
  if (uVar6 != 0) {
    pcVar8 = (char *)(param_3 + 9);
    do {
      if (*pcVar8 == *(char *)(lVar13 + 0x7d)) {
        if (lVar13 != 0) {
          uVar6 = (ulong)*(byte *)((long)param_2 + 0x5a);
          if (uVar6 < 6) {
            plVar7 = param_2;
            uVar9 = uVar6;
            if (*(byte *)((long)param_2 + 0x5a) != 0) goto LAB_029d0ab8;
            goto LAB_029d0ad0;
          }
        }
        break;
      }
      uVar6 = uVar6 - 1;
      pcVar8 = pcVar8 + 1;
    } while (uVar6 != 0);
  }
  goto LAB_029d0b14;
  while( true ) {
    uVar9 = uVar9 - 1;
    plVar7 = plVar7 + 1;
    if (uVar9 == 0) break;
LAB_029d0ab8:
    if (*plVar7 == lVar13) goto LAB_029d0b14;
  }
LAB_029d0ad0:
  param_2[uVar6] = lVar13;
  *(undefined1 *)((long)param_2 + (ulong)*(byte *)((long)param_2 + 0x5a) + 0x48) = 0;
  *(undefined2 *)((long)param_2 + (ulong)*(byte *)((long)param_2 + 0x5a) * 2 + 0x30) = 0;
  *(undefined2 *)((long)param_2 + (ulong)*(byte *)((long)param_2 + 0x5a) * 2 + 0x3c) = 0;
  bVar5 = *(char *)((long)param_2 + 0x5a) + 1;
  *(byte *)((long)param_2 + 0x5a) = bVar5;
  if (*(byte *)((long)param_2 + 0x5b) < bVar5) {
    *(byte *)((long)param_2 + 0x5b) = bVar5;
  }
LAB_029d0b14:
  if (bVar2) {
    return;
  }
  if (bVar12 < *(byte *)(*(long *)(lVar4 + 8) + uVar11 * 0x38 + 0x38)) {
    lVar13 = *(long *)(*(long *)(lVar4 + 8) + uVar11 * 0x38 + (ulong)bVar12 * 8 + 8);
  }
  else {
    lVar13 = 0;
  }
  bVar12 = bVar12 + 1;
  bVar2 = true;
  if (((uint)uVar14 & 0xff) < 5) goto LAB_029d0b48;
  bVar5 = *(byte *)(param_3 + 8);
  goto joined_r0x029d0a48;
LAB_029d0b48:
  do {
    bVar5 = FUN_0294da60(*(undefined4 *)(lVar3 + 0x110),
                         *(undefined1 *)(*(long *)(lVar3 + 0x58) + 0x55),uVar11 & 0xffffffff);
    if (bVar12 < bVar5) {
      do {
        if (((bVar12 < *(byte *)(*(long *)(lVar4 + 8) + uVar11 * 0x38 + 0x38)) &&
            (lVar10 = *(long *)(*(long *)(lVar4 + 8) + uVar11 * 0x38 + (ulong)bVar12 * 8 + 8),
            lVar10 != 0)) && (*(short *)(lVar10 + 0x74) != 0)) {
          bVar2 = false;
          uVar14 = uVar11 & 0xffffffff;
          goto LAB_029d0a40;
        }
        bVar12 = bVar12 + 1;
      } while (bVar12 < bVar5);
    }
    uVar11 = uVar11 + 1;
    bVar12 = 0;
  } while (uVar11 != 5);
  bVar2 = true;
  uVar14 = 5;
  goto LAB_029d0a40;
}


