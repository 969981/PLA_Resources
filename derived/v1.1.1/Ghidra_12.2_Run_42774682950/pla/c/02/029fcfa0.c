/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029fcfa0; name: FUN_029fcfa0
 */


void FUN_029fcfa0(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  byte bVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  byte bVar8;
  ulong uVar9;
  undefined **local_80;
  long local_78;
  long local_70;
  undefined2 local_68;
  char local_66;
  
  FUN_029ce3f0(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x20));
  local_70 = *(long *)(param_1 + 0x10);
  if (*(int *)(*(long *)(local_70 + 0x28) + 0x1e4) == 4) {
    local_78 = *(long *)(param_1 + 8);
    local_80 = &PTR_LAB_04277078;
    local_68 = 0;
    local_66 = '\x01';
    FUN_0299d494(&local_80);
    lVar3 = local_70;
    lVar2 = local_78;
    if (local_66 == '\0') {
      uVar9 = (ulong)(byte)local_68;
      if (local_68._1_1_ < *(byte *)(*(long *)(local_70 + 8) + uVar9 * 0x38 + 0x38)) {
        uVar6 = *(undefined8 *)
                 (*(long *)(local_70 + 8) + uVar9 * 0x38 + (ulong)local_68._1_1_ * 8 + 8);
      }
      else {
        uVar6 = 0;
      }
      bVar8 = local_68._1_1_ + 1;
      local_68 = CONCAT11(bVar8,(byte)local_68);
      if ((byte)local_68 < 5) {
        do {
          bVar4 = FUN_0294da60(*(undefined4 *)(lVar2 + 0x110),
                               *(undefined1 *)(*(long *)(lVar2 + 0x58) + 0x55),(uint)uVar9 & 0xff);
          if (bVar8 < bVar4) {
            do {
              if (((bVar8 < *(byte *)(*(long *)(lVar3 + 8) + (uVar9 & 0xff) * 0x38 + 0x38)) &&
                  (lVar5 = *(long *)(*(long *)(lVar3 + 8) + (uVar9 & 0xff) * 0x38 + (ulong)bVar8 * 8
                                    + 8), lVar5 != 0)) && (*(short *)(lVar5 + 0x74) != 0)) {
                local_68 = CONCAT11(bVar8,(char)uVar9);
                FUN_029fd3bc(param_1,uVar6);
                lVar2 = local_78;
LAB_029fd104:
                uVar7 = uVar9 & 0xff;
                if (bVar8 < *(byte *)(*(long *)(lVar3 + 8) + uVar7 * 0x38 + 0x38)) {
                  uVar6 = *(undefined8 *)
                           (*(long *)(lVar3 + 8) + uVar7 * 0x38 + (ulong)bVar8 * 8 + 8);
                }
                else {
                  uVar6 = 0;
                }
                bVar8 = bVar8 + 1;
                if (((uint)uVar9 & 0xff) < 5) {
                  do {
                    bVar4 = FUN_0294da60(*(undefined4 *)(lVar2 + 0x110),
                                         *(undefined1 *)(*(long *)(lVar2 + 0x58) + 0x55),
                                         uVar7 & 0xffffffff);
                    if (bVar8 < bVar4) {
                      do {
                        if (((bVar8 < *(byte *)(*(long *)(lVar3 + 8) + uVar7 * 0x38 + 0x38)) &&
                            (lVar5 = *(long *)(*(long *)(lVar3 + 8) + uVar7 * 0x38 +
                                               (ulong)bVar8 * 8 + 8), lVar5 != 0)) &&
                           (*(short *)(lVar5 + 0x74) != 0)) {
                          FUN_029fd3bc(param_1,uVar6);
                          uVar9 = uVar7 & 0xffffffff;
                          goto LAB_029fd104;
                        }
                        bVar8 = bVar8 + 1;
                      } while (bVar8 < bVar4);
                    }
                    uVar7 = uVar7 + 1;
                    bVar8 = 0;
                  } while (uVar7 != 5);
                }
                FUN_029fd3bc(param_1,uVar6);
                return;
              }
              bVar8 = bVar8 + 1;
            } while (bVar8 < bVar4);
          }
          uVar1 = (uint)uVar9 + 1;
          uVar9 = (ulong)uVar1;
          bVar8 = 0;
        } while ((uVar1 & 0xff) < 5);
        local_68 = (ushort)(byte)uVar1;
      }
      local_66 = 1;
      FUN_029fd3bc(param_1,uVar6);
    }
  }
  return;
}


