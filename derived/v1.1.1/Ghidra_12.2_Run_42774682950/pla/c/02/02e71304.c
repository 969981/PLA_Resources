/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e71304; name: FUN_02e71304
 */


void FUN_02e71304(long param_1,long *param_2,ulong param_3,undefined1 *param_4)

{
  undefined8 local_38 [2];
  long local_28;
  undefined1 *local_18;
  
  if ((param_3 & 1) != 0) {
    if ((*(byte *)(param_1 + 0x48) & 1) == 0) {
      local_28 = param_1 + 8;
      local_38[0] = *(undefined8 *)(*(long *)(param_1 + 0x40) + 0x20);
      local_18 = param_4;
      (**(code **)(*param_2 + 0x40))(param_2,1,local_38,&local_18);
    }
    else {
      *param_4 = 0;
    }
  }
  *(byte *)(param_1 + 0x48) = *(byte *)(param_1 + 0x48) | 1;
  return;
}


