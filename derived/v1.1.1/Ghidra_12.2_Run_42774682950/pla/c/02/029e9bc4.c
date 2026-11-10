/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029e9bc4; name: FUN_029e9bc4
 */


void FUN_029e9bc4(long param_1,long *param_2)

{
  uint uVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  byte bVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  byte bVar11;
  long lVar12;
  ulong uVar13;
  undefined **local_80;
  long local_78;
  long local_70;
  undefined2 local_68;
  char local_66;
  
  *(undefined8 *)((long)param_2 + 0x56) = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  *param_2 = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  local_78 = *(long *)(param_1 + 8);
  local_70 = *(long *)(param_1 + 0x10);
  local_68 = 0;
  local_80 = &PTR_LAB_04277078;
  local_66 = '\x01';
  FUN_0299d494(&local_80);
  lVar4 = local_70;
  lVar3 = local_78;
  if (local_66 == '\0') {
    uVar13 = (ulong)(byte)local_68;
    if (local_68._1_1_ < *(byte *)(*(long *)(local_70 + 8) + uVar13 * 0x38 + 0x38)) {
      lVar12 = *(long *)(*(long *)(local_70 + 8) + uVar13 * 0x38 + (ulong)local_68._1_1_ * 8 + 8);
    }
    else {
      lVar12 = 0;
    }
    bVar11 = local_68._1_1_ + 1;
    local_68 = CONCAT11(bVar11,(byte)local_68);
    if ((byte)local_68 < 5) {
      do {
        bVar5 = FUN_0294da60(*(undefined4 *)(lVar3 + 0x110),
                             *(undefined1 *)(*(long *)(lVar3 + 0x58) + 0x55),(uint)uVar13 & 0xff);
        if (bVar11 < bVar5) {
          do {
            if (((bVar11 < *(byte *)(*(long *)(lVar4 + 8) + (uVar13 & 0xff) * 0x38 + 0x38)) &&
                (lVar9 = *(long *)(*(long *)(lVar4 + 8) + (uVar13 & 0xff) * 0x38 + (ulong)bVar11 * 8
                                  + 8), lVar9 != 0)) && (*(short *)(lVar9 + 0x74) != 0)) {
              bVar2 = false;
              local_68 = CONCAT11(bVar11,(char)uVar13);
              goto LAB_029e9d28;
            }
            bVar11 = bVar11 + 1;
          } while (bVar11 < bVar5);
        }
        uVar1 = (uint)uVar13 + 1;
        uVar13 = (ulong)uVar1;
        bVar11 = 0;
      } while ((uVar1 & 0xff) < 5);
      bVar11 = 0;
      local_68 = (ushort)(byte)uVar1;
    }
    bVar2 = true;
    local_66 = '\x01';
LAB_029e9d28:
    uVar10 = uVar13 & 0xff;
joined_r0x029e9d34:
    if (lVar12 != 0) {
      uVar6 = (ulong)*(byte *)((long)param_2 + 0x5a);
      if (uVar6 < 6) {
        plVar7 = param_2;
        uVar8 = uVar6;
        if (*(byte *)((long)param_2 + 0x5a) != 0) {
          do {
            if (*plVar7 == lVar12) goto LAB_029e9dd4;
            uVar8 = uVar8 - 1;
            plVar7 = plVar7 + 1;
          } while (uVar8 != 0);
        }
        param_2[uVar6] = lVar12;
        *(undefined1 *)((long)param_2 + (ulong)*(byte *)((long)param_2 + 0x5a) + 0x48) = 0;
        *(undefined2 *)((long)param_2 + (ulong)*(byte *)((long)param_2 + 0x5a) * 2 + 0x30) = 0;
        *(undefined2 *)((long)param_2 + (ulong)*(byte *)((long)param_2 + 0x5a) * 2 + 0x3c) = 0;
        bVar5 = *(char *)((long)param_2 + 0x5a) + 1;
        *(byte *)((long)param_2 + 0x5a) = bVar5;
        if (*(byte *)((long)param_2 + 0x5b) < bVar5) {
          *(byte *)((long)param_2 + 0x5b) = bVar5;
        }
      }
    }
LAB_029e9dd4:
    if (!bVar2) {
      if (bVar11 < *(byte *)(*(long *)(lVar4 + 8) + uVar10 * 0x38 + 0x38)) {
        lVar12 = *(long *)(*(long *)(lVar4 + 8) + uVar10 * 0x38 + (ulong)bVar11 * 8 + 8);
      }
      else {
        lVar12 = 0;
      }
      bVar11 = bVar11 + 1;
      bVar2 = true;
      if (((uint)uVar13 & 0xff) < 5) {
        do {
          bVar5 = FUN_0294da60(*(undefined4 *)(lVar3 + 0x110),
                               *(undefined1 *)(*(long *)(lVar3 + 0x58) + 0x55),uVar10 & 0xffffffff);
          if (bVar11 < bVar5) {
            do {
              if (((bVar11 < *(byte *)(*(long *)(lVar4 + 8) + uVar10 * 0x38 + 0x38)) &&
                  (lVar9 = *(long *)(*(long *)(lVar4 + 8) + uVar10 * 0x38 + (ulong)bVar11 * 8 + 8),
                  lVar9 != 0)) && (*(short *)(lVar9 + 0x74) != 0)) {
                bVar2 = false;
                uVar13 = uVar10 & 0xffffffff;
                uVar10 = uVar10 & 0xff;
                goto joined_r0x029e9d34;
              }
              bVar11 = bVar11 + 1;
            } while (bVar11 < bVar5);
          }
          uVar10 = uVar10 + 1;
          bVar11 = 0;
        } while (uVar10 != 5);
        bVar2 = true;
        uVar10 = 5;
        uVar13 = uVar10;
      }
      goto joined_r0x029e9d34;
    }
  }
  return;
}


