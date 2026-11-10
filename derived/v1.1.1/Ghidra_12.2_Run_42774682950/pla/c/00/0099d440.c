/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0099d440; name: FUN_0099d440
 */


undefined8 FUN_0099d440(long param_1,undefined1 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_00933eec(*(undefined8 *)(*(long *)(param_1 + 0x330) + 0xd0),*param_2);
  if (lVar1 == 0) {
    return 0x4800;
  }
  uVar2 = FUN_00931f40();
  return uVar2;
}


