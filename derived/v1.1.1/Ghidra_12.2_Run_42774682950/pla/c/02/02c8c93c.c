/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c8c93c; name: FUN_02c8c93c
 */


ulong FUN_02c8c93c(ulong param_1,ulong *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  if (0xff < (short)param_1) {
    switch((int)(short)param_1) {
    case 0x100:
      if (param_2 == (ulong *)0x0) {
        iVar2 = (**(code **)(DAT_04407c08 + 0x250))(0x81);
        iVar1 = (**(code **)(DAT_04407c08 + 0x250))(0x80);
        param_1 = (ulong)(uint)(iVar1 + iVar2);
      }
      else {
        uVar4 = *param_2;
        uVar6 = param_2[1];
        do {
          uVar7 = uVar4 ^ uVar6;
          uVar5 = uVar7 ^ (uVar4 >> 0x28 | uVar4 << 0x18);
          iVar2 = (int)uVar6;
          uVar6 = uVar7 >> 0x1b | uVar7 << 0x25;
          uVar3 = (int)uVar4 + iVar2 & 0xff;
          uVar4 = uVar5 ^ uVar7 << 0x10;
        } while (0x80 < uVar3);
        uVar6 = uVar4 ^ uVar6;
        param_1 = (ulong)(((int)uVar5 + (int)(uVar7 >> 0x1b) & 0x7fU) + uVar3);
        *param_2 = uVar6 ^ (uVar4 >> 0x28 | uVar4 << 0x18) ^ uVar6 << 0x10;
        param_2[1] = uVar6 >> 0x1b | uVar6 << 0x25;
      }
      break;
    case 0x101:
      if (param_2 == (ulong *)0x0) {
        param_1 = (**(code **)(DAT_04407c08 + 0x250))(0x10);
      }
      else {
        uVar4 = *param_2;
        uVar6 = param_2[1] ^ uVar4;
        param_1 = (ulong)((int)param_2[1] + (int)uVar4 & 0xf);
        *param_2 = uVar6 ^ (uVar4 >> 0x28 | uVar4 << 0x18) ^ uVar6 << 0x10;
        param_2[1] = uVar6 >> 0x1b | uVar6 << 0x25;
      }
      break;
    case 0x102:
      if (param_2 == (ulong *)0x0) {
        iVar2 = (**(code **)(DAT_04407c08 + 0x250))(0x20);
        param_1 = (ulong)(iVar2 + 0x10);
      }
      else {
        uVar4 = *param_2;
        uVar6 = param_2[1];
        uVar5 = uVar6 ^ uVar4;
        *param_2 = uVar5 ^ (uVar4 >> 0x28 | uVar4 << 0x18) ^ uVar5 << 0x10;
        param_2[1] = uVar5 >> 0x1b | uVar5 << 0x25;
        param_1 = (ulong)(((int)uVar6 + (int)uVar4 & 0x1fU) + 0x10);
      }
      break;
    case 0x103:
      if (param_2 == (ulong *)0x0) {
        iVar2 = (**(code **)(DAT_04407c08 + 0x250))(0xa0);
        param_1 = (ulong)(iVar2 + 0x30);
      }
      else {
        uVar4 = *param_2;
        uVar6 = param_2[1];
        do {
          uVar5 = uVar4 ^ uVar6;
          iVar2 = (int)uVar6;
          uVar6 = uVar5 >> 0x1b | uVar5 << 0x25;
          uVar3 = (int)uVar4 + iVar2 & 0xff;
          uVar4 = uVar5 ^ (uVar4 >> 0x28 | uVar4 << 0x18) ^ uVar5 << 0x10;
        } while (0x9f < uVar3);
        *param_2 = uVar4;
        param_2[1] = uVar6;
        param_1 = (ulong)(uVar3 + 0x30);
      }
      break;
    case 0x104:
      if (param_2 == (ulong *)0x0) {
        iVar2 = (**(code **)(DAT_04407c08 + 0x250))(0x20);
        param_1 = (ulong)(iVar2 + 0xd0);
      }
      else {
        uVar4 = *param_2;
        uVar6 = param_2[1];
        uVar5 = uVar6 ^ uVar4;
        *param_2 = uVar5 ^ (uVar4 >> 0x28 | uVar4 << 0x18) ^ uVar5 << 0x10;
        param_2[1] = uVar5 >> 0x1b | uVar5 << 0x25;
        param_1 = (ulong)(((int)uVar6 + (int)uVar4 & 0x1fU) + 0xd0);
      }
      break;
    case 0x105:
      if (param_2 == (ulong *)0x0) {
        uVar3 = (**(code **)(DAT_04407c08 + 0x250))(0x10);
      }
      else {
        uVar4 = *param_2;
        uVar6 = param_2[1] ^ uVar4;
        uVar3 = (int)param_2[1] + (int)uVar4 & 0xf;
        *param_2 = uVar6 ^ (uVar4 >> 0x28 | uVar4 << 0x18) ^ uVar6 << 0x10;
        param_2[1] = uVar6 >> 0x1b | uVar6 << 0x25;
      }
      param_1 = (ulong)(uVar3 + 0xf0);
      break;
    default:
      param_1 = 0x80;
    }
  }
  return param_1;
}


