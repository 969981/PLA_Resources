/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 025a1490; name: FUN_025a1490
 */


bool FUN_025a1490(long param_1,uint param_2)

{
  bool bVar1;
  undefined4 uVar2;
  ulong uVar3;
  
  uVar3 = FUN_025a1de8(param_1,param_2 & 1);
  bVar1 = (uVar3 & 1) != 0;
  if (bVar1) {
    uVar2 = FUN_025a5d60(param_1);
    *(undefined4 *)(param_1 + 0x70) = 1;
    *(undefined4 *)(param_1 + 0x74) = uVar2;
    *(undefined4 *)(param_1 + 0x78) = uVar2;
  }
  return bVar1;
}


