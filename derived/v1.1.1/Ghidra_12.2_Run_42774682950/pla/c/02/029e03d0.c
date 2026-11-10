/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029e03d0; name: FUN_029e03d0
 */


void FUN_029e03d0(long param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  byte bVar4;
  uint uVar5;
  undefined4 uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  byte bVar10;
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
  lVar3 = local_70;
  lVar2 = local_78;
  if (local_66 != '\0') {
    return;
  }
  uVar11 = (ulong)(byte)local_68;
  if (local_68._1_1_ < *(byte *)(*(long *)(local_70 + 8) + uVar11 * 0x38 + 0x38)) {
    lVar8 = *(long *)(*(long *)(local_70 + 8) + uVar11 * 0x38 + (ulong)local_68._1_1_ * 8 + 8);
  }
  else {
    lVar8 = 0;
  }
  bVar10 = local_68._1_1_ + 1;
  local_68 = CONCAT11(bVar10,(byte)local_68);
  if ((byte)local_68 < 5) {
    do {
      bVar4 = FUN_0294da60(*(undefined4 *)(lVar2 + 0x110),
                           *(undefined1 *)(*(long *)(lVar2 + 0x58) + 0x55),(uint)uVar11 & 0xff);
      if (bVar10 < bVar4) {
        do {
          if (((bVar10 < *(byte *)(*(long *)(lVar3 + 8) + (uVar11 & 0xff) * 0x38 + 0x38)) &&
              (lVar7 = *(long *)(*(long *)(lVar3 + 8) + (uVar11 & 0xff) * 0x38 + (ulong)bVar10 * 8 +
                                8), lVar7 != 0)) && (*(short *)(lVar7 + 0x74) != 0)) {
            bVar1 = false;
            local_68 = CONCAT11(bVar10,(char)uVar11);
            goto LAB_029e0520;
          }
          bVar10 = bVar10 + 1;
        } while (bVar10 < bVar4);
      }
      uVar5 = (uint)uVar11 + 1;
      uVar11 = (ulong)uVar5;
      bVar10 = 0;
    } while ((uVar5 & 0xff) < 5);
    bVar10 = 0;
    local_68 = (ushort)(byte)uVar5;
  }
  bVar1 = true;
  local_66 = '\x01';
LAB_029e0520:
  do {
    uVar9 = uVar11 & 0xff;
    do {
      uVar5 = FUN_02948d48(*(undefined8 *)(param_1 + 8),lVar8);
      if (uVar5 - 1 < 3) {
        uVar6 = *(undefined4 *)(&DAT_03a80608 + (long)(int)(uVar5 - 1) * 4);
LAB_029e0580:
        FUN_02a3fa08(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),0x9c,uVar6,
                     *(undefined1 *)(lVar8 + 0x7d),0xffff0000);
      }
      else {
        uVar6 = 0x412;
        if ((uVar5 | 1) == 5) goto LAB_029e0580;
      }
      if (bVar1) {
        return;
      }
      if (bVar10 < *(byte *)(*(long *)(lVar3 + 8) + uVar9 * 0x38 + 0x38)) {
        lVar8 = *(long *)(*(long *)(lVar3 + 8) + uVar9 * 0x38 + (ulong)bVar10 * 8 + 8);
      }
      else {
        lVar8 = 0;
      }
      bVar10 = bVar10 + 1;
      bVar1 = true;
    } while (4 < ((uint)uVar11 & 0xff));
    do {
      bVar4 = FUN_0294da60(*(undefined4 *)(lVar2 + 0x110),
                           *(undefined1 *)(*(long *)(lVar2 + 0x58) + 0x55),uVar9 & 0xffffffff);
      if (bVar10 < bVar4) {
        do {
          if (((bVar10 < *(byte *)(*(long *)(lVar3 + 8) + uVar9 * 0x38 + 0x38)) &&
              (lVar7 = *(long *)(*(long *)(lVar3 + 8) + uVar9 * 0x38 + (ulong)bVar10 * 8 + 8),
              lVar7 != 0)) && (*(short *)(lVar7 + 0x74) != 0)) {
            bVar1 = false;
            uVar11 = uVar9 & 0xffffffff;
            goto LAB_029e0520;
          }
          bVar10 = bVar10 + 1;
        } while (bVar10 < bVar4);
      }
      uVar9 = uVar9 + 1;
      bVar10 = 0;
    } while (uVar9 != 5);
    bVar1 = true;
    uVar11 = 5;
  } while( true );
}


