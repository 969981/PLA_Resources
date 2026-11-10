/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0331f870; name: FUN_0331f870
 */


uint FUN_0331f870(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  long local_30;
  undefined1 local_28;
  
  local_30 = 0;
  local_28 = 0;
  (**(code **)(*(long *)(param_2[2] & 0xfffffffffffffffe) + 0x38))
            ((long *)(param_2[2] & 0xfffffffffffffffe),*param_2,param_2[1],&local_30);
  uVar1 = (**(code **)(*(long *)(param_1[2] & 0xfffffffffffffffe) + 0x30))
                    ((long *)(param_1[2] & 0xfffffffffffffffe),*param_1,param_1[1],local_30 != 0);
  return ~uVar1 >> 0x1f;
}


