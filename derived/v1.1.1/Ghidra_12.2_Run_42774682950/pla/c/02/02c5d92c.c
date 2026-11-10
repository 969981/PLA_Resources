/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c5d92c; name: FUN_02c5d92c
 */


ulong FUN_02c5d92c(long param_1,undefined4 param_2)

{
  uint uVar1;
  ulong uVar2;
  
  switch(param_2) {
  case 0:
    uVar2 = FUN_02c71d88(*(undefined8 *)(param_1 + 0x98));
    return uVar2;
  case 1:
    uVar2 = FUN_02c720c0(*(undefined8 *)(param_1 + 0x98));
    return uVar2;
  case 2:
    uVar2 = FUN_02c723f8(*(undefined8 *)(param_1 + 0x98));
    return uVar2;
  case 3:
    uVar2 = FUN_02c730d8(*(undefined8 *)(param_1 + 0x98));
    return uVar2;
  case 4:
    uVar2 = FUN_02c72730(*(undefined8 *)(param_1 + 0x98));
    return uVar2;
  case 5:
    uVar2 = FUN_02c72a68(*(undefined8 *)(param_1 + 0x98));
    return uVar2;
  case 6:
    uVar2 = FUN_02c72da0(*(undefined8 *)(param_1 + 0x98));
    return uVar2;
  case 7:
    uVar2 = FUN_02c73410(*(undefined8 *)(param_1 + 0x98));
    return uVar2;
  case 8:
    uVar2 = FUN_02c73a80(*(undefined8 *)(param_1 + 0x98));
    return uVar2;
  case 9:
    uVar2 = FUN_02c73dc8(*(undefined8 *)(param_1 + 0x98));
    return uVar2;
  case 10:
    uVar1 = FUN_02c8488c(*(undefined8 *)(param_1 + 0x98));
    break;
  case 0xb:
    uVar1 = FUN_02c84bc4(*(undefined8 *)(param_1 + 0x98));
    break;
  case 0xc:
    uVar1 = FUN_02c84efc(*(undefined8 *)(param_1 + 0x98));
    goto LAB_02c5da2c;
  case 0xd:
    uVar1 = FUN_02c85234(*(undefined8 *)(param_1 + 0x98));
    break;
  case 0xe:
    uVar1 = FUN_02c75478(*(undefined8 *)(param_1 + 0x98));
    break;
  case 0xf:
    uVar1 = FUN_02c757b0(*(undefined8 *)(param_1 + 0x98));
    break;
  case 0x10:
    uVar1 = FUN_02c75ae8(*(undefined8 *)(param_1 + 0x98));
LAB_02c5da2c:
    return (ulong)(uVar1 & 0xffff);
  case 0x11:
    uVar1 = FUN_02c75e20(*(undefined8 *)(param_1 + 0x98));
    break;
  default:
    return 0;
  }
  return (ulong)(uVar1 & 0xff);
}


