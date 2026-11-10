/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ee4734; name: FUN_02ee4734
 */


undefined8 FUN_02ee4734(long *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  long local_18;
  
  uVar3 = *(uint *)(param_1 + 1);
  if (uVar3 != 0) {
    iVar4 = 0;
    do {
      iVar1 = iVar4 + (uVar3 >> 1);
      uVar2 = *(uint *)(*param_1 + (long)iVar1 * 0x28 + 0x20);
      if (uVar2 == param_2) {
        local_18 = *param_1 + (long)iVar1 * 0x28;
        if (local_18 == 0) {
          return 0;
        }
        FUN_02ee46a8(param_1,&local_18);
        return 1;
      }
      if (uVar2 < param_2) {
        iVar4 = iVar1 + 1;
      }
      uVar3 = uVar3 - (uVar2 < param_2) >> 1;
    } while (uVar3 != 0);
  }
  return 0;
}


