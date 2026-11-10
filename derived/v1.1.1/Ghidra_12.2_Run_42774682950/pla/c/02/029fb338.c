/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029fb338; name: FUN_029fb338
 */


void FUN_029fb338(long param_1,long param_2,undefined4 param_3,uint param_4)

{
  byte *pbVar1;
  undefined2 uVar2;
  uint uVar3;
  ulong uVar4;
  undefined1 auStack_60 [8];
  long local_58;
  undefined4 local_50;
  undefined1 local_4c;
  byte local_4b;
  undefined8 *local_48;
  undefined2 local_40;
  undefined8 local_38;
  ulong local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined4 local_18;
  
  switch(param_4) {
  case 4:
    pbVar1 = (byte *)(param_2 + 0xb0);
    uVar2 = 0x58;
    local_4c = 0x27;
    break;
  case 5:
    pbVar1 = (byte *)(param_2 + 0xb8);
    uVar2 = 0x52;
    local_4c = 0x26;
    break;
  default:
    local_4c = 0;
    local_4b = (byte)(*(uint *)(param_2 + (ulong)param_4 * 8 + 0x90) >> 3) & 0x1f;
    local_38 = 0;
    local_30 = 0;
    if (param_4 != 7) goto LAB_029fb460;
    uVar2 = 0x402;
    goto LAB_029fb3f4;
  case 0xb:
    pbVar1 = (byte *)(param_2 + 0xe8);
    uVar2 = 0x6d;
    local_4c = 0x28;
    break;
  case 0xc:
    pbVar1 = (byte *)(param_2 + 0xf0);
    uVar2 = 0x156;
    local_4c = 0x29;
    break;
  case 0x30:
    pbVar1 = (byte *)(param_2 + 0x210);
    uVar2 = 0x40d;
    local_4c = 0x2f;
  }
  local_4b = *pbVar1 >> 3;
LAB_029fb3f4:
  local_30 = 0;
  local_38._0_4_ = CONCAT22(0x82,uVar2);
  local_38 = (ulong)CONCAT14(*(undefined1 *)(param_2 + 0x7d),(undefined4)local_38);
  if (param_4 == 0x30) {
    uVar4 = *(ulong *)(param_2 + 0x210);
    switch((uint)uVar4 & 7) {
    case 1:
    case 2:
    case 3:
      uVar3 = (uint)(uVar4 >> 0xe);
      break;
    case 4:
      uVar3 = (uint)(uVar4 >> 0x14);
      break;
    default:
      uVar3 = 0;
    }
    local_38._0_4_ = CONCAT22(0x102,uVar2);
    local_38 = (ulong)CONCAT14(*(undefined1 *)(param_2 + 0x7d),(undefined4)local_38);
    local_30 = (ulong)(uVar3 & 0xffff);
  }
LAB_029fb460:
  local_18 = 0;
  uStack_20 = 0;
  local_28 = 0;
  local_48 = &local_38;
  local_40 = 0x101;
  local_58 = param_2;
  local_50 = param_3;
  FUN_029f6330(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x17c0),auStack_60,&local_58);
  return;
}


