/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029fa848; name: FUN_029fa848
 */


void FUN_029fa848(long param_1,long param_2)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  uint uVar9;
  int iVar10;
  byte local_88;
  byte local_87;
  undefined2 local_86;
  undefined1 local_84;
  byte local_83;
  undefined8 local_82;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined1 auStack_48 [8];
  
  if (*(short *)(param_2 + 0x74) == 0) {
    return;
  }
  uVar6 = *(ulong *)(param_2 + 0xe0);
  bVar1 = *(byte *)(param_2 + 0x7d);
  lVar7 = (uVar6 & 7) - 1;
  if ((uint)lVar7 < 4) {
    iVar10 = -1;
    uVar9 = (uint)(uVar6 >> (*(ulong *)(&DAT_03888260 + lVar7 * 8) & 0x3f)) & 0xffff;
    if (uVar9 < 0x148) {
      if (uVar9 < 0x53) {
        if (uVar9 == 0x14) {
          iVar10 = 0x46;
        }
        else if (uVar9 == 0x23) {
          iVar10 = 0x47;
        }
      }
      else if (uVar9 == 0x53) {
        iVar10 = 0x48;
      }
      else if (uVar9 == 0x80) {
        iVar10 = 0x4a;
      }
      else if (uVar9 == 0xfa) {
        iVar10 = 0x4b;
      }
    }
    else if (uVar9 < 0x263) {
      if (uVar9 == 0x148) {
        iVar10 = 0x4c;
      }
      else if (uVar9 == 0x1cf) {
        iVar10 = 0x49;
      }
    }
    else if (uVar9 == 0x263) {
      iVar10 = 0x4e;
    }
    else if (uVar9 == 0x30b) {
      iVar10 = 0x7f;
    }
    else if (uVar9 == 0x333) {
      iVar10 = 0x8e;
    }
  }
  else {
    uVar9 = 0;
    iVar10 = -1;
  }
  local_58 = 0;
  local_88 = (byte)((uint)uVar6 >> 3) & 0x1f;
  local_82 = 0x606000000000000;
  local_86 = 0;
  local_84 = 0x25;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_87 = bVar1;
  local_83 = local_88;
  switch((int)(uVar6 & 7)) {
  case 1:
  case 2:
  case 3:
    uVar8 = *(undefined8 *)(param_1 + 8);
    if (((uint)uVar6 >> 0x1e & 1) != 0) {
LAB_029fa998:
      uVar3 = FUN_029506a8(param_2,0xe);
      uVar5 = uVar3 / 6;
      uVar3 = uVar3 % 6;
      goto LAB_029fa9bc;
    }
    break;
  case 4:
    uVar8 = *(undefined8 *)(param_1 + 8);
    if ((uVar6 >> 0x24 & 1) != 0) goto LAB_029fa998;
    break;
  default:
    uVar8 = *(undefined8 *)(param_1 + 8);
  }
  uVar6 = FUN_029506a8(param_2,0xe);
  uVar5 = (uint)(uVar6 >> 3) & 0x1fffffff;
  uVar3 = (uint)uVar6 & 7;
LAB_029fa9bc:
  if (uVar3 != 0) {
    uVar5 = uVar5 + 1;
  }
  iVar4 = FUN_0293ebd0(uVar8,param_2,uVar5);
  uVar8 = local_82;
  if (iVar4 == 0) {
    iVar4 = 1;
  }
  local_86 = (undefined2)iVar4;
  if (iVar10 != -1) {
    local_82._6_2_ = SUB82(uVar8,6);
    local_82._0_6_ = CONCAT24((short)iVar10,CONCAT13(1,(undefined3)local_82));
    lVar7 = *(long *)(*(long *)(param_1 + 0x10) + 8);
    if (bVar1 < 6) {
      uVar6 = 0;
    }
    else if (bVar1 < 0xc) {
      uVar6 = 2;
    }
    else if (bVar1 < 0x12) {
      uVar6 = 1;
    }
    else {
      uVar3 = 3;
      if (0x17 < bVar1) {
        uVar3 = (uint)(bVar1 < 0x1e) << 2;
      }
      uVar6 = (ulong)uVar3;
    }
    uVar3 = (uint)*(byte *)(lVar7 + uVar6 * 0x38 + 0x38);
    if (uVar3 != 0) {
      uVar5 = 0;
      do {
        if ((uint)*(byte *)(*(long *)(lVar7 + uVar6 * 0x38 + (ulong)(uVar5 & 0xff) * 8 + 8) + 0x7d)
            == (uint)bVar1) {
          cVar2 = FUN_0294753c(*(undefined8 *)(param_1 + 8));
          if (cVar2 != '\x06') goto LAB_029faacc;
          break;
        }
        uVar5 = uVar5 + 1;
      } while (uVar3 != uVar5);
    }
    cVar2 = '\x06';
LAB_029faacc:
    local_82 = CONCAT17(6,CONCAT16(cVar2,(undefined6)local_82));
  }
  local_78 = CONCAT44((uint)bVar1,0x102007d);
  local_70 = CONCAT44(local_70._4_4_,uVar9);
  FUN_029e27cc(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0xb60),auStack_48,&local_88);
  return;
}


