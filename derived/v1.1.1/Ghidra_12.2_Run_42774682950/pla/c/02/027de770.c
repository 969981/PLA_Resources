/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 027de770; name: FUN_027de770
 */


undefined8 FUN_027de770(short *param_1,uint param_2,byte param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  short sVar3;
  
  if (((param_2 == 0) || (sVar3 = *param_1, sVar3 == 0)) ||
     (uVar1 = FUN_027de6f0(param_1), (uVar1 & 1) == 0)) {
LAB_027de93c:
    uVar2 = 0;
  }
  else {
    switch(param_3) {
    case 1:
      uVar1 = (ulong)param_2;
      uVar2 = 1;
      do {
        uVar1 = uVar1 - 1;
        param_1 = param_1 + 1;
        if ((sVar3 != 0x4edd) && ((ushort)(sVar3 + 0xb200U) < 0x51a1)) goto LAB_027de93c;
        if (uVar1 == 0) {
          return 1;
        }
        sVar3 = *param_1;
      } while (sVar3 != 0);
      break;
    case 2:
      uVar1 = (ulong)param_2;
      uVar2 = 1;
      do {
        uVar1 = uVar1 - 1;
        param_1 = param_1 + 1;
        if ((sVar3 != 0x4edd) && ((ushort)(sVar3 + 0xb200U) < 0x51a1)) goto LAB_027de93c;
        if (uVar1 == 0) {
          return 1;
        }
        sVar3 = *param_1;
      } while (sVar3 != 0);
      break;
    case 3:
      uVar1 = (ulong)param_2;
      uVar2 = 1;
      do {
        uVar1 = uVar1 - 1;
        param_1 = param_1 + 1;
        if ((sVar3 != 0x4edd) && ((ushort)(sVar3 + 0xb200U) < 0x51a1)) goto LAB_027de93c;
        if (uVar1 == 0) {
          return 1;
        }
        sVar3 = *param_1;
      } while (sVar3 != 0);
      break;
    case 4:
      uVar1 = (ulong)param_2;
      uVar2 = 1;
      do {
        uVar1 = uVar1 - 1;
        param_1 = param_1 + 1;
        if ((sVar3 != 0x4edd) && ((ushort)(sVar3 + 0xb200U) < 0x51a1)) goto LAB_027de93c;
        if (uVar1 == 0) {
          return 1;
        }
        sVar3 = *param_1;
      } while (sVar3 != 0);
      break;
    default:
      uVar1 = (ulong)param_2;
      uVar2 = 1;
      do {
        uVar1 = uVar1 - 1;
        param_1 = param_1 + 1;
        if (((param_3 - 1 < 5) || (param_3 == 7)) &&
           ((sVar3 != 0x4edd && ((ushort)(sVar3 + 0xb200U) < 0x51a1)))) goto LAB_027de93c;
        if (uVar1 == 0) {
          return 1;
        }
        sVar3 = *param_1;
      } while (sVar3 != 0);
    }
  }
  return uVar2;
}


