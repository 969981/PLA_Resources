/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01121ee0; name: FUN_01121ee0
 */


bool FUN_01121ee0(long param_1,long param_2)

{
  int *piVar1;
  int *piVar2;
  
  piVar2 = (int *)(param_1 + 0x7d78);
  piVar1 = (int *)(param_1 + 0x7f08);
  while( true ) {
    if ((*piVar2 == *(int *)(param_2 + 8)) && ((char)piVar2[1] == *(char *)(param_2 + 0x11)))
    goto LAB_01121f44;
    if ((piVar2[2] == *(int *)(param_2 + 8)) && ((char)piVar2[3] == *(char *)(param_2 + 0x11)))
    break;
    piVar2 = piVar2 + 4;
    if (piVar2 == piVar1) {
      piVar2 = piVar1;
LAB_01121f44:
      return piVar2 != piVar1;
    }
  }
  piVar2 = piVar2 + 2;
  goto LAB_01121f44;
}


