/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0060bd10; name: FUN_0060bd10
 */


undefined8 FUN_0060bd10(long param_1,byte *param_2)

{
  ulong uVar1;
  byte bVar2;
  byte *pbVar3;
  
  bVar2 = *param_2;
  uVar1 = (ulong)(bVar2 >> 1);
  if ((bVar2 & 1) != 0) {
    uVar1 = *(ulong *)(param_2 + 8);
  }
  if (uVar1 != 0x10 && uVar1 != 0xc) {
    return 0;
  }
  if ((byte *)(param_1 + 0x10) != param_2) {
    pbVar3 = *(byte **)(param_2 + 0x10);
    if ((bVar2 & 1) == 0) {
      pbVar3 = param_2 + 1;
    }
    FUN_00291910((byte *)(param_1 + 0x10),pbVar3);
  }
  return 1;
}


