/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b5b7f0; name: FUN_02b5b7f0
 */


void FUN_02b5b7f0(long *param_1,int param_2,undefined4 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined4 local_30;
  undefined1 local_2c;
  undefined8 local_28;
  undefined8 local_20;
  long lStack_18;
  
  local_2c = 0;
  local_60 = 0x3f800000;
  uStack_58 = 0x447a0000;
  local_50 = 0;
  uStack_4c = 7;
  uStack_48 = 7;
  local_30 = 8;
  local_70 = 0x100000001;
  local_68 = 0;
  local_40 = 0;
  uStack_38 = 0;
  if (param_2 == 2) {
    local_68 = 1;
    local_70 = 0x100000001;
  }
  else if (param_2 == 1) {
    local_70 = 0x100000001;
    local_68 = 0;
  }
  else if (param_2 == 0) {
    local_68 = 0;
    local_70 = 0;
  }
  local_44 = 7;
  switch(param_3) {
  case 0:
    uVar1 = 0x700000007;
    break;
  case 1:
    uStack_4c = 5;
    uStack_48 = 5;
    local_40 = 0;
    uStack_38 = 0;
    goto switchD_02b5b890_default;
  case 2:
    uStack_4c = 5;
    uStack_48 = 5;
    local_40 = 0;
    uStack_38 = 0x3f80000000000000;
    goto switchD_02b5b890_default;
  case 3:
    uStack_4c = 5;
    uStack_48 = 5;
    local_40 = 0x3f8000003f800000;
    uStack_38 = 0x3f800000;
    goto switchD_02b5b890_default;
  case 4:
    uStack_4c = 5;
    uStack_48 = 5;
    local_40 = 0x3f8000003f800000;
    uStack_38 = 0x3f8000003f800000;
    goto switchD_02b5b890_default;
  case 6:
    local_44 = 1;
  case 5:
    uVar1 = 0x100000001;
    break;
  case 7:
    uVar1 = 0x700000001;
    break;
  case 8:
    uVar1 = 0x100000007;
    break;
  case 9:
    uVar1 = 0x600000006;
    break;
  case 10:
    uVar1 = 0x700000006;
    break;
  case 0xb:
    uVar1 = 0x600000007;
    break;
  case 0xc:
    uVar1 = 0x700000003;
    break;
  case 0xd:
    uVar1 = 0x300000007;
    break;
  default:
    goto switchD_02b5b890_default;
  }
  uStack_4c = (undefined4)uVar1;
  uStack_48 = (undefined4)((ulong)uVar1 >> 0x20);
switchD_02b5b890_default:
  lVar2 = *(long *)(*param_1 + 0x58);
  local_28 = *(undefined8 *)(lVar2 + 8);
  local_20 = *(undefined8 *)(lVar2 + 0x6098);
  lStack_18 = lVar2 + 0x10;
  FUN_02b98cbc(*(undefined8 *)(lVar2 + 0x6160),&local_28,&local_70);
  return;
}


