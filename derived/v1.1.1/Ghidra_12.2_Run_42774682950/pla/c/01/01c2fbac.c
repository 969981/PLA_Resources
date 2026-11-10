/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01c2fbac; name: FUN_01c2fbac
 */


void FUN_01c2fbac(undefined4 param_1,long param_2,uint param_3,undefined4 param_4)

{
  if ((param_3 != 0) && (*(char *)(param_2 + 0x204) != '\0')) {
    *(undefined1 *)(param_2 + 0x290) = 1;
    *(undefined4 *)(param_2 + 0x294) = 0;
    *(float *)(param_2 + 0x298) = 1.0 / (float)param_3;
    *(undefined4 *)(param_2 + 0x29c) = *(undefined4 *)(param_2 + 0x220);
    *(undefined4 *)(param_2 + 0x2a0) = param_1;
    *(undefined4 *)(param_2 + 0x2a4) = param_4;
  }
  return;
}


