/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00407970; name: FUN_00407970
 */


undefined8 FUN_00407970(int *param_1,int param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if ((param_1 != (int *)0x0) && (-1 < param_2)) {
    if (*param_1 <= param_2) {
      return 0;
    }
    uVar1 = *(undefined8 *)(*(long *)(param_1 + 2) + (long)param_2 * 8);
  }
  return uVar1;
}


