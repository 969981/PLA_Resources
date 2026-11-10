/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d59a08; name: FUN_00d59a08
 */


void FUN_00d59a08(long param_1)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  long lVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  undefined8 local_40;
  char *pcStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  uVar9 = (uint)*(byte *)(param_1 + 0x6ef);
  if (*(byte *)(param_1 + 0x6ef) != 0) {
    uVar8 = (uint)*(byte *)(param_1 + 0x6ee);
    uVar7 = 0;
    piVar1 = (int *)(param_1 + (long)*(int *)(param_1 + 0x6d8) * 0x60 + 0x640);
    do {
      if (uVar8 == 0) {
        uVar8 = 0;
      }
      else {
        lVar10 = *(long *)(*(long *)(*(long *)(param_1 + (long)*(int *)(param_1 + 0x6d8) * 0x60 +
                                              0x638) + 0xa8) +
                          (ulong)((uint)*(ushort *)(param_1 + 0x6ec) + *piVar1 * uVar7) * 0x10);
        uVar5 = *(undefined8 *)(lVar10 + 0x18);
        lVar6 = param_1 + (ulong)(uVar7 * uVar8) * 0x50;
        uVar2 = *(undefined8 *)(lVar10 + 0x20);
        uVar3 = *(undefined8 *)(lVar10 + 0x28);
        *(undefined8 *)(lVar6 + 0x710) = *(undefined8 *)(lVar10 + 0x10);
        *(undefined8 *)(lVar6 + 0x728) = uVar3;
        *(undefined8 *)(lVar6 + 0x720) = uVar2;
        *(undefined8 *)(lVar6 + 0x718) = uVar5;
        uVar2 = *(undefined8 *)(lVar10 + 0x38);
        uVar5 = *(undefined8 *)(lVar10 + 0x40);
        uVar4 = *(undefined4 *)(lVar10 + 0x48);
        *(undefined8 *)(lVar6 + 0x730) = *(undefined8 *)(lVar10 + 0x30);
        *(undefined4 *)(lVar6 + 0x748) = uVar4;
        *(undefined8 *)(lVar6 + 0x740) = uVar5;
        *(undefined8 *)(lVar6 + 0x738) = uVar2;
        *(undefined8 *)(lVar6 + 0x708) = *(undefined8 *)(lVar10 + 8);
        *(undefined4 *)(lVar10 + 8) = 1;
        *(undefined2 *)(lVar10 + 0xc) = 0;
        *(undefined4 *)(lVar10 + 0x10) = 0;
        *(undefined2 *)(lVar10 + 0x14) = 0;
        *(undefined4 *)(lVar10 + 0x18) = 0;
        *(undefined2 *)(lVar10 + 0x1c) = 0;
        *(undefined8 *)(lVar10 + 0x20) = 0xffffffff00000000;
        *(undefined4 *)(lVar10 + 0x28) = 3;
        uVar8 = (uint)*(byte *)(param_1 + 0x6ee);
        if (1 < uVar8) {
          uVar9 = 1;
          do {
            lVar6 = param_1 + (ulong)(uVar9 + uVar7 * uVar8) * 0x50;
            uVar8 = uVar9 + (uint)*(ushort *)(param_1 + 0x6ec) + uVar7 * *piVar1;
            uVar9 = uVar9 + 1;
            lVar10 = *(long *)(*(long *)(*(long *)(param_1 + (long)*(int *)(param_1 + 0x6d8) * 0x60
                                                  + 0x638) + 0xa8) + (ulong)uVar8 * 0x10);
            uVar5 = *(undefined8 *)(lVar10 + 0x18);
            uVar2 = *(undefined8 *)(lVar10 + 0x20);
            uVar3 = *(undefined8 *)(lVar10 + 0x28);
            *(undefined8 *)(lVar6 + 0x710) = *(undefined8 *)(lVar10 + 0x10);
            *(undefined8 *)(lVar6 + 0x728) = uVar3;
            *(undefined8 *)(lVar6 + 0x720) = uVar2;
            *(undefined8 *)(lVar6 + 0x718) = uVar5;
            uVar2 = *(undefined8 *)(lVar10 + 0x38);
            uVar5 = *(undefined8 *)(lVar10 + 0x40);
            uVar4 = *(undefined4 *)(lVar10 + 0x48);
            *(undefined8 *)(lVar6 + 0x730) = *(undefined8 *)(lVar10 + 0x30);
            *(undefined4 *)(lVar6 + 0x748) = uVar4;
            *(undefined8 *)(lVar6 + 0x740) = uVar5;
            *(undefined8 *)(lVar6 + 0x738) = uVar2;
            *(undefined8 *)(lVar6 + 0x708) = *(undefined8 *)(lVar10 + 8);
            *(undefined4 *)(lVar10 + 8) = 1;
            *(undefined2 *)(lVar10 + 0xc) = 0;
            *(undefined4 *)(lVar10 + 0x10) = 0;
            *(undefined2 *)(lVar10 + 0x14) = 0;
            *(undefined4 *)(lVar10 + 0x18) = 0;
            *(undefined2 *)(lVar10 + 0x1c) = 0;
            *(undefined8 *)(lVar10 + 0x20) = 0xffffffff00000000;
            *(undefined4 *)(lVar10 + 0x28) = 3;
            uVar8 = (uint)*(byte *)(param_1 + 0x6ee);
          } while (uVar9 < uVar8);
        }
        uVar9 = (uint)*(byte *)(param_1 + 0x6ef);
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar9);
  }
  *(undefined1 *)(param_1 + 0x6f8) = 1;
  FUN_00d59564(param_1,1);
  local_40 = 0xb31b3e9543725743;
  pcStack_38 = "anime_L_inventory_parts_00_L_cursor_inventory_00_release";
  local_30 = 0x38;
  uStack_28 = 0;
  lVar6 = 0;
  if (*(long *)(param_1 + 0x2c8) != 0) {
    FUN_0283b430(*(long *)(param_1 + 0x2c8),&local_40);
    lVar6 = *(long *)(param_1 + 0x2c8);
  }
  local_40 = 0x16445a137decbd35;
  pcStack_38 = "anime_L_inventory_parts_00_L_cursor_inventory_00_catch";
  local_30 = 0x36;
  uStack_28 = 0;
  if (lVar6 != 0) {
    FUN_0283b1e8(lVar6,&local_40);
  }
  return;
}


