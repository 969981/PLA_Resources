/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 027a6780; name: FUN_027a6780
 */


void FUN_027a6780(uint param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar5 = 1 << (ulong)(param_2 - 1U & 0x1f);
  if (1 < (uVar5 & 0xffff)) {
    uVar4 = 1;
    uVar6 = 1;
    uVar3 = uVar5 & 0xffff;
    do {
      uVar2 = uVar5 | uVar6;
      uVar6 = uVar4 << 1;
      uVar1 = param_1 & uVar2 & 0xffff;
      uVar5 = uVar3 >> 1;
      if (uVar4 != uVar1 && uVar3 != uVar1) {
        uVar2 = 0;
      }
      param_1 = uVar2 ^ param_1;
      uVar4 = uVar6 & 0xfffe;
      uVar3 = uVar5;
    } while (uVar4 < uVar5);
  }
  return;
}


