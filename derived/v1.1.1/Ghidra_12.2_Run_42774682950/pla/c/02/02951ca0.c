/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02951ca0; name: FUN_02951ca0
 */


void FUN_02951ca0(long param_1,uint param_2,ulong *param_3)

{
  uint uVar1;
  ulong uVar2;
  ulong *puVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  
  uVar2 = *param_3;
  puVar3 = (ulong *)(param_1 + (ulong)param_2 * 8 + 0x90);
  uVar6 = *puVar3;
  if (((uVar6 & 7) != 0) &&
     (uVar5 = (uint)uVar2 & 7, uVar1 = (uint)uVar2 >> 8 & 0x3f,
     (uVar5 == 4 || uVar5 == 2) && uVar1 != 0)) {
    uVar4 = (uint)uVar6;
    uVar5 = uVar4 & 7;
    if ((uVar5 == 4) || (uVar5 == 2)) {
      uVar5 = uVar4 >> 8 & 0x3f;
    }
    else {
      uVar5 = 0;
    }
    uVar5 = uVar5 - *(byte *)(param_1 + (ulong)param_2 + 0x238);
    if ((int)uVar1 < (int)uVar5) {
      if ((uVar2 & 0x3807) == 2) {
        uVar2 = uVar2 & 0xffffffffffffc000 | uVar2 & 0xff | ((ulong)uVar5 & 0x3f) << 8;
      }
      if ((uVar2 & 0x3807) == 4) {
        uVar2 = uVar2 & 0xffffffffffffc000 | uVar2 & 0xff | ((ulong)uVar5 & 0x3f) << 8;
      }
    }
  }
  if ((int)param_2 < 8) {
    *(undefined1 *)(param_1 + 0x239) = 0;
    *(undefined2 *)(param_1 + 0x23a) = 0;
    *(undefined8 *)(param_1 + 0xe8) = 0xf8;
    *(undefined1 *)(param_1 + 0x243) = 0;
    *(undefined4 *)(param_1 + 0x23c) = 0;
    *(undefined8 *)(param_1 + 200) = 0xf8;
    *(undefined8 *)(param_1 + 0x98) = 0xf8;
    *(undefined8 *)(param_1 + 0xa0) = 0xf8;
    *(undefined8 *)(param_1 + 0xa8) = 0xf8;
    *(undefined8 *)(param_1 + 0xb0) = 0xf8;
    *(undefined8 *)(param_1 + 0xb8) = 0xf8;
    *(undefined8 *)(param_1 + 0xc0) = 0xf8;
  }
  *puVar3 = uVar2;
  *(undefined1 *)(param_1 + (ulong)param_2 + 0x238) = 0;
  return;
}


