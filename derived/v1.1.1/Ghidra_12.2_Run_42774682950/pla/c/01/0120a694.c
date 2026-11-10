/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0120a694; name: FUN_0120a694
 */


void FUN_0120a694(long param_1)

{
  int iVar1;
  ulong uVar2;
  undefined4 uVar3;
  
  switch(*(undefined4 *)(param_1 + 0xb4)) {
  case 0:
    FUN_00d42690(*(undefined8 *)(param_1 + 0x98),1,1);
    FUN_0120d9b8(*(undefined8 *)(param_1 + 0x98));
    FUN_0120d8a0(*(undefined8 *)(param_1 + 0x98));
    FUN_00d4cc80(*(undefined8 *)(param_1 + 0x90));
    *(undefined4 *)(param_1 + 0xb4) = 1;
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
    goto LAB_0120a7d4;
  case 2:
    iVar1 = FUN_0120d8cc(*(undefined8 *)(param_1 + 0x98));
    FUN_0120d8d4(*(undefined8 *)(param_1 + 0x98));
    if (iVar1 == 3) {
      uVar3 = 5;
    }
    else if (iVar1 == 2) {
      uVar3 = 4;
    }
    else {
      if (iVar1 != 1) {
        return;
      }
      FUN_0120d8a8(*(undefined8 *)(param_1 + 0x98));
      FUN_00d4cc78(*(undefined8 *)(param_1 + 0x90));
      FUN_012234ac(*(undefined8 *)(param_1 + 0x90));
      uVar3 = 3;
    }
    goto LAB_0120a7d8;
  case 3:
    uVar2 = FUN_0120d8b0(*(undefined8 *)(param_1 + 0x98));
    if (((uVar2 & 1) != 0) &&
       (uVar2 = FUN_00d4cc88(*(undefined8 *)(param_1 + 0x90)), (uVar2 & 1) != 0)) {
      FUN_00d42690(*(undefined8 *)(param_1 + 0x98),0,1);
      FUN_012152b8(*(undefined8 *)(param_1 + 0x90),1);
      FUN_0120b9f0(param_1);
      return;
    }
    break;
  case 4:
    uVar2 = FUN_01212d30(*(undefined8 *)(param_1 + 0x98));
    goto joined_r0x0120a7d0;
  case 5:
    uVar2 = FUN_01212e64(*(undefined8 *)(param_1 + 0x98));
joined_r0x0120a7d0:
    if ((uVar2 & 1) != 0) {
LAB_0120a7d4:
      uVar3 = 2;
LAB_0120a7d8:
      *(undefined4 *)(param_1 + 0xb4) = uVar3;
    }
  }
  return;
}


