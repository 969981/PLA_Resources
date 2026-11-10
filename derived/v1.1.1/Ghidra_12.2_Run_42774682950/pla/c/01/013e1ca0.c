/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013e1ca0; name: FUN_013e1ca0
 */


uint FUN_013e1ca0(uint param_1,byte *param_2)

{
  uint uVar1;
  bool bVar2;
  byte bVar3;
  ulong uVar4;
  uint uVar5;
  
  if (param_2 != (byte *)0x0) {
    bVar3 = FUN_013e1c38(param_1);
    *param_2 = bVar3 & 1;
  }
  uVar5 = param_1;
  do {
    uVar1 = uVar5 - 1;
    if (5 < uVar1) {
      uVar1 = 1;
    }
    bVar2 = uVar5 != 1;
    uVar5 = 6;
    if (bVar2) {
      uVar5 = uVar1;
    }
    uVar4 = FUN_013e19d0(uVar5);
  } while (((uVar4 & 1) == 0) && (uVar5 != param_1));
  return uVar5;
}


