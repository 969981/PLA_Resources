/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0020e878; name: FUN_0020e878
 */


long FUN_0020e878(long param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,ulong param_6)

{
  long lVar1;
  uint local_24;
  
  *param_2 = 0;
  lVar1 = FUN_0020eca0(&local_24,(undefined8 *)(param_1 + 0xd8),param_2,
                       *(undefined4 *)(param_1 + 0xb8),*(undefined8 *)(param_1 + 0xd8),param_3,
                       param_4,param_5);
  if ((lVar1 == -1) || (param_6 < local_24)) {
    lVar1 = -0x20b;
  }
  else {
    *(ulong *)(param_1 + 0xb8) = (ulong)local_24;
  }
  return lVar1;
}


