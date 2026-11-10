/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02bcb980; name: FUN_02bcb980
 */


uint FUN_02bcb980(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  uint uVar6;
  
  uVar5 = 0x80000000;
  uVar6 = 1;
  uVar3 = 0xffffffff;
  do {
    uVar4 = (uint)uVar5;
    uVar1 = uVar4 | uVar6;
    bVar2 = (uVar1 & uVar3) != uVar6;
    uVar6 = uVar6 * 2;
    uVar5 = uVar5 >> 1;
    if (bVar2 && (uVar1 & uVar3) != uVar4) {
      uVar1 = 0;
    }
    uVar3 = uVar1 ^ uVar3;
  } while (uVar6 < (uint)uVar5);
  uVar3 = FUN_02bcbb70(uVar3,param_1,param_2);
  return ~uVar3;
}


