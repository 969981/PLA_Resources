/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a3b200; name: FUN_02a3b200
 */


void FUN_02a3b200(long param_1,long param_2,long param_3,char param_4,int param_5,char param_6)

{
  uint uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  
  if (param_4 == '\x02') {
    if (((param_6 != '\x05') || (uVar1 = param_5 - 1, 7 < uVar1)) ||
       ((0xbfU >> (ulong)(uVar1 & 0x1f) & 1) == 0)) {
      if (param_2 == 0) {
        return;
      }
      if (param_3 == 0) {
        return;
      }
      FUN_02a3e6b8(*(undefined8 *)(param_1 + 0x18),0xa8,*(undefined1 *)(param_2 + 0x7d),
                   *(undefined1 *)(param_3 + 0x7d));
      return;
    }
    if (param_3 == 0) {
      return;
    }
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    uVar3 = *(undefined4 *)(&DAT_038884c0 + (long)(int)uVar1 * 4);
    goto LAB_02a3b364;
  }
  if (param_4 != '\x01') {
switchD_02a3b234_caseD_9:
    FUN_02a3fa08(*(undefined8 *)(param_1 + 0x18),0x9c,0x237,0xffff0000);
    return;
  }
  switch(param_5) {
  case 1:
    if (param_3 != 0) {
      uVar2 = *(undefined8 *)(param_1 + 0x18);
      uVar3 = 0x5f;
LAB_02a3b364:
      FUN_02a3fa08(uVar2,0x9d,uVar3,*(undefined1 *)(param_3 + 0x7d),0xffff0000);
      return;
    }
    break;
  case 2:
    if (param_3 != 0) {
      uVar2 = *(undefined8 *)(param_1 + 0x18);
      uVar3 = 0x6a;
      goto LAB_02a3b364;
    }
    break;
  case 3:
    if (param_3 != 0) {
      uVar2 = *(undefined8 *)(param_1 + 0x18);
      uVar3 = 100;
      goto LAB_02a3b364;
    }
    break;
  case 4:
    if (param_3 != 0) {
      uVar2 = *(undefined8 *)(param_1 + 0x18);
      uVar3 = 0x5a;
      goto LAB_02a3b364;
    }
    break;
  case 5:
    if (param_3 != 0) {
      uVar2 = *(undefined8 *)(param_1 + 0x18);
      uVar3 = 0x54;
      goto LAB_02a3b364;
    }
    break;
  case 6:
    if (param_3 != 0) {
      uVar2 = *(undefined8 *)(param_1 + 0x18);
      uVar3 = 0x3fb;
      goto LAB_02a3b364;
    }
    break;
  case 7:
    if (param_3 != 0) {
      FUN_02a3fa08(*(undefined8 *)(param_1 + 0x18),0x9d,0x400,*(undefined1 *)(param_3 + 0x7d),
                   0xffff0000);
      return;
    }
    break;
  case 8:
    if (param_3 != 0) {
      uVar2 = *(undefined8 *)(param_1 + 0x18);
      uVar3 = 0x77;
      goto LAB_02a3b364;
    }
    break;
  default:
    goto switchD_02a3b234_caseD_9;
  case 0x11:
    if (param_3 != 0) {
      uVar2 = *(undefined8 *)(param_1 + 0x18);
      uVar3 = 10;
      goto LAB_02a3b364;
    }
    break;
  case 0x16:
    break;
  }
  return;
}


