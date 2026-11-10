/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0121546c; name: FUN_0121546c
 */


void FUN_0121546c(long param_1,long param_2)

{
  undefined2 uVar1;
  uint uVar2;
  
  FUN_00d4d9d8(param_1,0x1e,0);
  *(undefined1 *)(param_2 + 0x24) = 0;
  *(undefined1 *)(param_2 + 0x26) = 1;
  if (*(int *)(*(long *)(param_1 + 0x1648) + 4) == 0) {
    uVar2 = *(uint *)(*(long *)(param_1 + 0x1648) + 8);
    uVar1 = 0;
    if ((uVar2 & 0xfffe) < 0x1e) {
      uVar1 = (short)uVar2;
    }
    *(undefined2 *)(param_2 + 0x18) = uVar1;
  }
  return;
}


