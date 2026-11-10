/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00214ef0; name: FUN_00214ef0
 */


undefined8 FUN_00214ef0(long param_1)

{
  long *plVar1;
  code *pcVar2;
  
  if ((((param_1 == 0) || (*(long *)(param_1 + 0x40) == 0)) ||
      (pcVar2 = *(code **)(param_1 + 0x48), pcVar2 == (code *)0x0)) ||
     (((plVar1 = *(long **)(param_1 + 0x38), plVar1 == (long *)0x0 || (*plVar1 != param_1)) ||
      (0x1f < (int)plVar1[1] - 0x3f34U)))) {
    return 0xfffffffe;
  }
  if (plVar1[9] != 0) {
    (*pcVar2)(*(undefined8 *)(param_1 + 0x50),plVar1[9]);
    pcVar2 = *(code **)(param_1 + 0x48);
    plVar1 = *(long **)(param_1 + 0x38);
  }
  (*pcVar2)(*(undefined8 *)(param_1 + 0x50),plVar1);
  *(undefined8 *)(param_1 + 0x38) = 0;
  return 0;
}


