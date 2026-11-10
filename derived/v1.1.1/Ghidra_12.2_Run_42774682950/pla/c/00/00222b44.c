/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00222b44; name: FUN_00222b44
 */


uint FUN_00222b44(long param_1,undefined4 param_2)

{
  ulong uVar1;
  uint uVar2;
  undefined1 auStack_34 [4];
  
  if (*(int *)(param_1 + 0x1884) != 0) {
    uVar2 = 0;
    do {
      uVar1 = FUN_00221cb4(param_1,auStack_34,uVar2 & 0xffff,param_2);
      if ((uVar1 & 1) != 0) {
        return uVar2;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)(param_1 + 0x1884));
  }
  return 0xffffffff;
}


