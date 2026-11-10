/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b5a9b8; name: FUN_02b5a9b8
 */


void FUN_02b5a9b8(long *param_1,undefined4 param_2,undefined4 param_3,ulong param_4)

{
  undefined4 uVar1;
  long lVar2;
  ulong uVar3;
  undefined4 local_48;
  undefined8 local_44;
  undefined8 local_3c;
  undefined8 local_34;
  undefined8 local_28;
  undefined8 local_20;
  long lStack_18;
  
  local_44 = 0x100000002;
  local_3c = 0x200000001;
  local_34 = 0x100000001;
  switch(param_3) {
  case 0:
    uVar1 = 2;
    goto LAB_02b5aa58;
  case 1:
    uVar1 = 5;
    goto LAB_02b5aa20;
  case 2:
    uVar1 = 2;
LAB_02b5aa20:
    local_44 = CONCAT44(1,uVar1);
    uVar1 = 6;
    goto LAB_02b5aaa4;
  case 3:
    local_44 = 0x100000010;
    uVar1 = 0x11;
    goto LAB_02b5aaa4;
  case 4:
    local_44 = 0x100000005;
    break;
  case 5:
    uVar1 = 2;
    local_44 = 0x100000002;
    goto LAB_02b5aaa4;
  case 6:
    uVar1 = 9;
LAB_02b5aa58:
    local_44 = CONCAT44(1,uVar1);
    uVar1 = 1;
    goto LAB_02b5aaa4;
  case 7:
    local_44 = 0x10000000a;
    break;
  case 8:
    local_44 = 0x200000005;
    break;
  case 9:
    local_44 = 0x300000005;
    break;
  case 10:
    local_44 = 0x400000005;
    break;
  case 0xb:
    local_44 = 0x500000005;
    break;
  default:
    goto switchD_02b5aa08_default;
  }
  uVar1 = 2;
LAB_02b5aaa4:
  local_3c = CONCAT44(2,uVar1);
switchD_02b5aa08_default:
  if ((uint)param_4 < 5) {
    uVar3 = -(param_4 >> 0x1f & 1) & 0xfffffffc00000000 | (param_4 & 0xffffffff) << 2;
    local_3c = CONCAT44(*(undefined4 *)(&DAT_03a83e04 + uVar3),(undefined4)local_3c);
    local_34 = CONCAT44(*(undefined4 *)(&DAT_03a83e18 + uVar3),1);
  }
  lVar2 = *(long *)(*param_1 + 0x58);
  local_28 = *(undefined8 *)(lVar2 + 8);
  local_20 = *(undefined8 *)(lVar2 + 0x6098);
  lStack_18 = lVar2 + 0x10;
  local_48 = param_2;
  FUN_02b86c3c(*(undefined8 *)(lVar2 + 0x6260),&local_28,&local_48,1);
  return;
}


