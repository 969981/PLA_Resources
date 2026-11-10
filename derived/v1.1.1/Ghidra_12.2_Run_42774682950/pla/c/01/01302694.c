/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01302694; name: FUN_01302694
 */


void FUN_01302694(long param_1)

{
  undefined4 uVar1;
  undefined8 local_18;
  
  local_18 = 0;
  FUN_00d51c38(param_1,&local_18,(ulong)&local_18 | 4,0);
  *(undefined8 *)(param_1 + 0x1738) = local_18;
  uVar1 = (undefined4)local_18;
  *(undefined4 *)(param_1 + 0x1748) = uVar1;
  *(undefined4 *)(param_1 + 0x1740) = uVar1;
  *(undefined4 *)(param_1 + 0x1750) = uVar1;
  return;
}


