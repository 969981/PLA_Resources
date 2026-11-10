/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03006f40; name: FUN_03006f40
 */


bool FUN_03006f40(long param_1,int *param_2,int *param_3)

{
  undefined2 *puVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  bool bVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_40 [16];
  undefined2 *local_30;
  uint local_28;
  undefined4 local_24;
  
  local_24 = 0;
  *param_2 = 0;
  *param_3 = 0;
  (**(code **)(DAT_0442d408 + (ulong)*(byte *)(param_1 + 0x20) * 0x80 + 0x18))(param_1,auStack_40);
  if ((local_30 != (undefined2 *)0x0) && (local_28 != 0)) {
    puVar1 = (undefined2 *)((ulong)local_28 + (long)local_30);
    if (local_30 < puVar1) {
      bVar5 = true;
      do {
        uVar6 = 3;
        lVar8 = 0x90;
        lVar9 = 0x10;
        switch(*local_30) {
        case 2:
        case 3:
          break;
        case 4:
          lVar8 = 0x70;
          break;
        case 5:
        case 0x18:
          goto switchD_03006fd4_caseD_5;
        case 6:
        case 0x1c:
          lVar8 = 0x30;
          break;
        case 7:
          uVar6 = 1;
          goto LAB_03007078;
        default:
          bVar2 = false;
          bVar7 = false;
          bVar3 = false;
          *param_2 = *param_2 + (uint)bVar5;
          bVar4 = false;
          if (bVar5 != false) goto LAB_03006ffc;
          goto LAB_03007008;
        case 9:
        case 0xe:
        case 0xf:
          uVar6 = 1;
          lVar9 = 0x20;
          goto switchD_03006fd4_caseD_5;
        case 10:
        case 0x11:
        case 0x17:
          lVar8 = 0x10;
          break;
        case 0xb:
        case 0x12:
          lVar8 = 0x20;
          break;
        case 0xc:
          uVar6 = 2;
          goto LAB_03007078;
        case 0xd:
          uVar6 = (uint)*(byte *)((long)local_30 + 5);
LAB_03007078:
          lVar9 = 0x10;
          goto switchD_03006fd4_caseD_5;
        case 0x10:
          uVar6 = 1;
          lVar9 = 0x30;
switchD_03006fd4_caseD_5:
          bVar7 = false;
          local_30 = (undefined2 *)(lVar9 + (long)local_30);
          bVar3 = true;
          *param_3 = *param_3 + uVar6;
          bVar2 = true;
          goto LAB_03007008;
        case 0x13:
          lVar8 = 0x60;
        }
        local_30 = (undefined2 *)(lVar8 + (long)local_30);
        *param_2 = *param_2 + 1;
        bVar4 = true;
LAB_03006ffc:
        bVar2 = bVar4;
        bVar3 = false;
        bVar7 = true;
LAB_03007008:
        if (!bVar5) {
          bVar2 = bVar3;
        }
      } while ((local_30 < puVar1) && (bVar5 = bVar7, bVar2));
      if (!bVar2) {
        return false;
      }
    }
    if (*param_3 - 2U < 5) {
      return 0 < *param_2;
    }
  }
  return false;
}


