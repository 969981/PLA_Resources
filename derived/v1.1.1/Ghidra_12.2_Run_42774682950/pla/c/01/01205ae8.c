/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01205ae8; name: FUN_01205ae8
 */


void FUN_01205ae8(long param_1)

{
  int iVar1;
  ulong uVar2;
  
  switch(*(undefined4 *)(param_1 + 0xb4)) {
  case 0:
    FUN_00d42690(*(undefined8 *)(param_1 + 0x98),1,1);
    FUN_0120d9b8(*(undefined8 *)(param_1 + 0x98));
    FUN_0120d8a0(*(undefined8 *)(param_1 + 0x98));
    FUN_00d4cc80(*(undefined8 *)(param_1 + 0x90));
    break;
  case 1:
    uVar2 = FUN_0120d8b0(*(undefined8 *)(param_1 + 0x98));
    if ((uVar2 & 1) == 0) {
      return;
    }
    uVar2 = FUN_00d4cc88(*(undefined8 *)(param_1 + 0x90));
    if ((uVar2 & 1) == 0) {
      return;
    }
    FUN_0120d6fc(*(undefined8 *)(param_1 + 0x98));
    FUN_0120e0b8(*(undefined8 *)(param_1 + 0x98));
    break;
  case 2:
    iVar1 = FUN_0120d8cc(*(undefined8 *)(param_1 + 0x98));
    FUN_0120d8d4(*(undefined8 *)(param_1 + 0x98));
    if (iVar1 == 3) {
      iVar1 = 5;
    }
    else if (iVar1 == 2) {
      iVar1 = 4;
    }
    else {
      if (iVar1 != 1) {
        return;
      }
      FUN_0120d8a8(*(undefined8 *)(param_1 + 0x98));
      FUN_00d4cc78(*(undefined8 *)(param_1 + 0x90));
      FUN_012234ac(*(undefined8 *)(param_1 + 0x90));
      iVar1 = 3;
    }
    goto LAB_01205b4c;
  case 3:
    uVar2 = FUN_0120d8b0(*(undefined8 *)(param_1 + 0x98));
    if ((uVar2 & 1) == 0) {
      return;
    }
    uVar2 = FUN_00d4cc88(*(undefined8 *)(param_1 + 0x90));
    if ((uVar2 & 1) == 0) {
      return;
    }
    FUN_00d42690(*(undefined8 *)(param_1 + 0x98),0,1);
    iVar1 = FUN_01220ce0(*(undefined8 *)(param_1 + 0x90));
    if (iVar1 == 0) {
      FUN_012152b8(*(undefined8 *)(param_1 + 0x90),1);
    }
    else {
      FUN_0121fb5c();
    }
    FUN_01206c08(param_1);
    return;
  case 4:
    uVar2 = FUN_01212d30(*(undefined8 *)(param_1 + 0x98));
    goto joined_r0x01205c3c;
  case 5:
    uVar2 = FUN_01212e64(*(undefined8 *)(param_1 + 0x98));
joined_r0x01205c3c:
    if ((uVar2 & 1) == 0) {
      return;
    }
    iVar1 = 2;
    goto LAB_01205b4c;
  default:
    goto switchD_01205b18_default;
  }
  iVar1 = *(int *)(param_1 + 0xb4) + 1;
LAB_01205b4c:
  *(int *)(param_1 + 0xb4) = iVar1;
switchD_01205b18_default:
  return;
}


