/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ecc0d0; name: FUN_02ecc0d0
 */


void FUN_02ecc0d0(long param_1)

{
  uint uVar1;
  short sVar2;
  long lVar3;
  byte *pbVar4;
  byte *pbVar5;
  ulong uVar6;
  byte *pbVar7;
  short sVar8;
  byte local_24 [4];
  
  local_24[0] = 1;
  local_24[1] = 0;
  local_24[2] = 0;
  local_24[3] = 0;
  pbVar4 = *(byte **)(*(long *)(param_1 + 0x180) + 0x98);
  pbVar5 = pbVar4;
  if (pbVar4 != (byte *)0x0) {
    uVar6 = 0;
    pbVar5 = pbVar4 + ((ulong)(*pbVar4 + 4) & 0x1fc);
    do {
      if (pbVar4[uVar6 + 1] == 0x3a) goto LAB_02ecc130;
      uVar6 = uVar6 + 1;
      pbVar5 = pbVar5 + 4;
    } while (uVar6 < *pbVar4);
    pbVar5 = (byte *)0x0;
  }
LAB_02ecc130:
  pbVar7 = *(byte **)(*(long *)(param_1 + 0x180) + 0xb0);
  pbVar4 = local_24;
  if (pbVar5 != (byte *)0x0) {
    pbVar4 = pbVar5;
  }
  sVar8 = (short)*(undefined4 *)pbVar4;
  if (pbVar7 != (byte *)0x0) {
    uVar6 = 0;
    pbVar5 = pbVar7 + ((ulong)(*pbVar7 + 4) & 0x1fc);
    do {
      if (pbVar7[uVar6 + 1] == 0x3a) {
        sVar2 = FUN_02e87b38(pbVar5);
        sVar8 = sVar2 + sVar8;
        break;
      }
      uVar6 = uVar6 + 1;
      pbVar5 = pbVar5 + 8;
    } while (uVar6 < *pbVar7);
  }
  *(short *)(param_1 + 0x2a0) = sVar8;
  uVar1 = *(uint *)(param_1 + 0x2a3);
  if ((uVar1 >> 0xf & 1) == 0) {
    *(uint *)(param_1 + 0x2a3) = uVar1 | 0x8000;
    if (*(long *)(param_1 + 0x108) != 0) {
      lVar3 = *(long *)(param_1 + 0x180);
      do {
        if (*(long *)(lVar3 + 0x70) != 0) {
          lVar3 = *(long *)(lVar3 + 0x70) + 0x38;
          goto LAB_02ecc1e4;
        }
        lVar3 = *(long *)(lVar3 + 0x80);
      } while (lVar3 != 0);
      lVar3 = 0;
LAB_02ecc1e4:
      FUN_02edc9e8(DAT_0440a158,*(long *)(param_1 + 0x108),lVar3);
      return;
    }
  }
  return;
}


