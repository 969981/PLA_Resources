/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 012fe220; name: FUN_012fe220
 */


undefined8 FUN_012fe220(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  uVar2 = 1;
  switch(*(undefined1 *)(param_1 + 0xc0)) {
  case 0:
    uVar3 = FUN_00d681d0(*(undefined8 *)(param_1 + 0x98));
    if ((uVar3 & 1) != 0) {
      FUN_00d6802c(*(undefined8 *)(param_1 + 0x98),1);
      *(undefined1 *)(param_1 + 0xc0) = 1;
    }
    break;
  case 1:
    uVar3 = FUN_00d6868c(*(undefined8 *)(param_1 + 0x98));
    if ((uVar3 & 1) != 0) {
      iVar1 = FUN_00d686a0(*(undefined8 *)(param_1 + 0x98));
      *(undefined1 *)(param_1 + 0xc0) = 2;
      uVar3 = FUN_012ffcf8(*(undefined8 *)(param_1 + 0x90));
      if ((uVar3 & 1) == 0) {
        if (iVar1 == 0) goto LAB_012fe2e0;
LAB_012fe2c4:
        *(undefined1 *)(param_1 + 0xc0) = 3;
      }
      else if (iVar1 == 0) {
        FUN_012ff5c0(*(undefined8 *)(param_1 + 0x90),1);
        FUN_012fe318(param_1,1);
      }
      else {
        if (iVar1 != 1) goto LAB_012fe2c4;
LAB_012fe2e0:
        FUN_012ff5c0(*(undefined8 *)(param_1 + 0x90),0);
        FUN_012fe318(param_1,0);
      }
    }
    break;
  case 2:
    uVar3 = FUN_00d6868c(*(undefined8 *)(param_1 + 0x98));
    if ((uVar3 & 1) != 0) goto LAB_012fe2c4;
    break;
  case 3:
    goto switchD_012fe254_caseD_3;
  }
  uVar2 = 0;
switchD_012fe254_caseD_3:
  return uVar2;
}


