/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032fe030; name: FUN_032fe030
 */


bool FUN_032fe030(ulong *param_1)

{
  uint uVar1;
  byte bVar2;
  bool bVar3;
  ulong *puVar4;
  uint uVar5;
  ulong uVar6;
  
  uVar6 = *param_1;
  uVar5 = (uint)uVar6;
  puVar4 = param_1;
  if ((uVar6 & 1) == 0) {
    puVar4 = (ulong *)param_1[1];
    bVar2 = (byte)*puVar4;
    while ((bVar2 & 1) == 0) {
      puVar4 = (ulong *)puVar4[1];
      bVar2 = (byte)*puVar4;
    }
  }
  uVar1 = (uint)puVar4[2];
  if (((uVar1 & 0x1f) != 4 && (uVar1 & 0x1f) != 2) || ((uVar1 & 0x1c00) != 0)) {
    return false;
  }
  uVar1 = (uVar1 >> 10) + 7;
  bVar3 = false;
  if ((uVar1 < 0x48) && (uVar1 = uVar1 >> 3, uVar1 != 0)) {
    while ((uVar5 >> 0x14 & 1) == 0) {
      if (((uVar6 & 1) != 0) || (param_1 = (ulong *)param_1[1], param_1 == (ulong *)0x0))
      goto LAB_032fe104;
      uVar6 = *param_1;
      uVar5 = (uint)uVar6;
    }
    if (param_1 == (ulong *)0x0) {
LAB_032fe104:
      uVar5 = 0;
    }
    else {
      uVar5 = (uVar5 & 0xfffff) - (uVar5 >> 1 & 0x55555);
      uVar5 = (uVar5 >> 2 & 0x33333333) + (uVar5 & 0x33333333);
      uVar5 = (uint)(ushort)param_1[(ulong)((uVar5 + (uVar5 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18)
                                    + 2];
    }
    bVar3 = uVar1 == uVar5;
  }
  return bVar3;
}


