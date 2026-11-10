/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0302b3f4; name: FUN_0302b3f4
 */


void FUN_0302b3f4(long param_1,undefined8 param_2,long param_3)

{
  (**(code **)(**(long **)(param_1 + 0x4c0) + 0x20))
            (*(long **)(param_1 + 0x4c0),*(undefined8 *)(param_3 + 0x10),
             *(undefined4 *)(param_3 + 0x18));
  if ((ulong)(long)((float)(*(long *)(param_1 + 0x950) * 7 + 7) * 0.7) <
      (ulong)*(uint *)(param_3 + 0x18)) {
    FUN_032c1e54(0x3f333333,param_1 + 0x948);
    return;
  }
  return;
}


