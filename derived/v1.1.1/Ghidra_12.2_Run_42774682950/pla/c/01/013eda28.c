/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013eda28; name: FUN_013eda28
 */


void FUN_013eda28(long param_1,undefined8 param_2)

{
  ushort uVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  
  *(undefined8 *)(param_1 + 0xc0) = param_2;
  FUN_013e1978(param_1 + 200);
  if (*(long *)(param_1 + 0xc0) != 0) {
    uVar2 = FUN_0284ce20();
    if (0x388 < uVar2) {
      uVar2 = 0x389;
    }
    if (uVar2 != 0) {
      lVar4 = *(long *)(param_1 + 0xc0);
      uVar3 = 0;
      do {
        if ((uVar3 < *(uint *)(lVar4 + 0xa8) >> 1) &&
           (uVar1 = *(ushort *)(*(long *)(lVar4 + 0xa0) + uVar3 * 2), uVar1 - 1 < 0x389)) {
          *(int *)(param_1 + (ulong)uVar1 * 4 + 200) = (int)uVar3;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < uVar2);
    }
  }
  return;
}


