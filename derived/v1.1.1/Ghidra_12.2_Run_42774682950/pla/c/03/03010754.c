/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03010754; name: FUN_03010754
 */


void FUN_03010754(long param_1,long param_2,uint param_3)

{
  undefined1 auStack_18 [4];
  undefined4 local_14;
  
  *(undefined1 **)(param_1 + 8) = &LAB_03010710;
  *(long *)(param_1 + 0x10) = param_2;
  (**(code **)(DAT_0442d408 + (ulong)*(byte *)(param_2 + 0x20) * 0x80 + 0x70))
            (param_2,param_3 & 1,auStack_18);
  *(undefined4 *)(param_1 + 0x18) = local_14;
  return;
}


