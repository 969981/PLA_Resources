/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00271680; name: FUN_00271680
 */


void FUN_00271680(long param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = param_1 + 0x1fU & 0xffffffffffffffe0;
  (**(code **)(**(long **)PTR_DAT_04372e80 + 0x10))(*(long **)PTR_DAT_04372e80,uVar1,param_2);
  *(ulong *)PTR_DAT_04372e88 = *(long *)PTR_DAT_04372e88 + uVar1;
  return;
}


