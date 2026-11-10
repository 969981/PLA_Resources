/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028ddbb8; name: FUN_028ddbb8
 */


undefined8 FUN_028ddbb8(long param_1,long *param_2)

{
  code *pcVar1;
  
  if ((*(long *)(param_1 + 0x1d0) != 0) != (*param_2 != 0)) {
    return 0;
  }
  pcVar1 = *(code **)(param_1 + 0x1d8);
  if (pcVar1 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x1e0) = 0;
    *(undefined8 *)(param_1 + 0x1e8) = 0;
    *(undefined8 *)(param_1 + 0x1d0) = 0;
    *(undefined8 *)(param_1 + 0x1d8) = 0;
    (*pcVar1)(param_1 + 0x1f0);
  }
  return 1;
}


