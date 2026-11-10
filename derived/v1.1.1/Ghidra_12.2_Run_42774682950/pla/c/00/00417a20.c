/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00417a20; name: FUN_00417a20
 */


undefined8 FUN_00417a20(undefined8 *param_1)

{
  int iVar1;
  int *piVar2;
  
  if ((param_1 != (undefined8 *)0x0) && ((undefined8 *)*param_1 != (undefined8 *)0x0)) {
    iVar1 = closedir(*(DIR **)*param_1);
    free((void *)*param_1);
    if (iVar1 == 0) {
      return 1;
    }
    if (iVar1 == -1) {
      return 0;
    }
  }
  piVar2 = __errno_location();
  *piVar2 = 0x16;
  return 0;
}


