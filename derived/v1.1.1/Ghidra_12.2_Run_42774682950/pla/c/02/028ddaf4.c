/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028ddaf4; name: FUN_028ddaf4
 */


undefined8 FUN_028ddaf4(long param_1,long *param_2)

{
  code *pcVar1;
  
  if ((*(long *)(param_1 + 0x150) != 0) != (*param_2 != 0)) {
    return 0;
  }
  pcVar1 = *(code **)(param_1 + 0x158);
  if (pcVar1 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x160) = 0;
    *(undefined8 *)(param_1 + 0x168) = 0;
    *(undefined8 *)(param_1 + 0x150) = 0;
    *(undefined8 *)(param_1 + 0x158) = 0;
    (*pcVar1)(param_1 + 0x170);
  }
  return 1;
}


