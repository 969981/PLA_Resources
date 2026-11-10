/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02956eb0; name: FUN_02956eb0
 */


undefined8
FUN_02956eb0(undefined8 param_1,ulong *param_2,long param_3,ushort param_4,undefined2 *param_5)

{
  byte bVar1;
  int iVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  
  iVar2 = (int)param_1;
  iVar4 = FUN_02956e40(param_1,param_4 != 0);
  if (iVar4 < 0) {
    return 0;
  }
  uVar6 = (ushort)param_5[1] & 0xffffc000;
  *param_5 = (short)iVar4;
  param_5[1] = (ushort)uVar6 | 2;
  bVar1 = *(byte *)(param_3 + 0x7d);
  uVar5 = uVar6 | 0x82;
  param_5[1] = (short)uVar5;
  *(uint *)(param_5 + 2) = (uint)bVar1;
  if (param_4 != 0) {
    uVar5 = uVar6 | 0x102;
    param_5[1] = (short)uVar5;
    *(uint *)(param_5 + 4) = (uint)param_4;
  }
  uVar3 = (ushort)uVar5;
  if (1 < iVar2 - 0x2fU) {
    if (iVar2 == 0x14) {
      uVar6 = uVar5 >> 7 & 0x7f;
      if (uVar6 < 8) {
        param_5[1] = uVar3 + 0x80 & 0x3f80 | uVar3 & 0xc07f;
        *(undefined4 *)(param_5 + (ulong)uVar6 * 2 + 2) = 0x49;
        return 1;
      }
      return 1;
    }
    if (iVar2 != 10) {
      return 1;
    }
  }
  uVar7 = *param_2;
  switch((uint)uVar7 & 7) {
  case 1:
  case 2:
  case 3:
    uVar6 = (uint)(uVar7 >> 0xe);
    break;
  case 4:
    uVar6 = (uint)(uVar7 >> 0x14);
    break;
  default:
    uVar6 = 0;
  }
  uVar5 = uVar5 >> 7 & 0x7f;
  if (uVar5 < 8) {
    param_5[1] = uVar3 + 0x80 & 0x3f80 | uVar3 & 0xc07f;
    *(uint *)(param_5 + (ulong)uVar5 * 2 + 2) = uVar6 & 0xffff;
  }
  return 1;
}


