/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002113ec; name: FUN_002113ec
 */


void FUN_002113ec(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    *param_1 = *(long *)(lVar1 + 0x88);
    *(undefined8 *)(lVar1 + 0x88) = 0;
    if (*param_1 == 0) {
      param_1[1] = 0;
    }
    param_1[2] = param_1[2] + -1;
  }
  return;
}


