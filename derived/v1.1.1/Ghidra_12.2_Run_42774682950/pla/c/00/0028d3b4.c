/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0028d3b4; name: FUN_0028d3b4
 */


void FUN_0028d3b4(long param_1,undefined8 param_2,long *param_3)

{
  if (*(char *)(param_1 + 0x50) != '\0') {
    FUN_008773a4();
    FUN_00878520(param_1 + 0x58,param_2);
    if (*(long *)(param_1 + 0x178) != 0) {
      (**(code **)(*param_3 + 0x18))(param_3);
      *(undefined8 *)(param_1 + 0x178) = 0;
    }
    *(undefined1 *)(param_1 + 0x50) = 0;
  }
  return;
}


