/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032ba220; name: FUN_032ba220
 */


void FUN_032ba220(long param_1,uint param_2)

{
  *(uint *)(param_1 + 0x10) = param_2;
  if (param_2 < 5) {
    nn::os::ChangeThreadPriority
              ((ThreadType *)(param_1 + 0x78),*(int *)(&DAT_039c3384 + (long)(int)param_2 * 4));
    return;
  }
  nn::os::ChangeThreadPriority((ThreadType *)(param_1 + 0x78),0x10);
  return;
}


