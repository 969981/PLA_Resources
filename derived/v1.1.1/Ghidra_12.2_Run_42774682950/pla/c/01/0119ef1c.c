/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0119ef1c; name: FUN_0119ef1c
 */


void FUN_0119ef1c(long param_1,int param_2,int param_3,int param_4,int param_5)

{
  if ((*(undefined1 **)(param_1 + 0x1660) != (undefined1 *)0x0) &&
     (((param_2 == 1 && (param_3 == 0)) || ((param_4 == 1 && (param_5 == 0)))))) {
    **(undefined1 **)(param_1 + 0x1660) = 1;
  }
  return;
}


