/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02eee890; name: FUN_02eee890
 */


void FUN_02eee890(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_042ab0b0;
  if (param_1[5] != 0) {
    (*DAT_0442d150)(0);
  }
  if (param_1[3] != 0) {
    *(undefined4 *)(param_1 + 4) = 0;
    (*DAT_0442d150)(0);
    param_1[3] = 0;
    *(undefined4 *)((long)param_1 + 0x24) = 0;
  }
  return;
}


