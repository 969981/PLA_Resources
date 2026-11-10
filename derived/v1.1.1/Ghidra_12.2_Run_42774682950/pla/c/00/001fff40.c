/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001fff40; name: FUN_001fff40
 */


uint FUN_001fff40(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  
  if (((*(byte *)(*(long *)(param_2 + 0x420) + 0x80) & 3) == 0) ||
     (((*(uint *)(param_2 + 0x3fc) ^ 0xffffffff) & 0x1001) == 0)) {
    uVar3 = 0;
  }
  else {
    uVar2 = FUN_001e7620(*(undefined8 *)(param_1 + 0xd8),1);
    if ((((uVar2 & 1) == 0) || (*(long *)(param_1 + 0xa40) == 1)) ||
       ((*(int *)(param_1 + 0xa38) != 6 && (*(int *)(param_1 + 0xa38) != 1)))) {
      uVar3 = 0;
    }
    else {
      uVar3 = 1;
    }
    uVar2 = FUN_001e7620(*(undefined8 *)(param_1 + 0xd8),2);
    if ((uVar2 & 1) != 0) {
      uVar1 = uVar3 | 2;
      if (*(long *)(param_1 + 0xa40) < 3) {
        uVar1 = uVar3;
      }
      return uVar1;
    }
  }
  return uVar3;
}


