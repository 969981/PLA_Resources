/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02762910; name: FUN_02762910
 */


void FUN_02762910(ulong *param_1)

{
  if ((*param_1 & 1) == 0) {
    *(undefined2 *)param_1 = 0;
  }
  else {
    *(undefined1 *)param_1[2] = 0;
    param_1[1] = 0;
    if ((*param_1 & 1) != 0) {
      (**(code **)(*(long *)param_1[3] + 0x18))
                ((long *)param_1[3],param_1[2],*param_1 & 0xfffffffffffffffe,1);
      *param_1 = 0;
    }
  }
  return;
}


