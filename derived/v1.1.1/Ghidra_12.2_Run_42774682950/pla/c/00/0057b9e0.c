/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0057b9e0; name: FUN_0057b9e0
 */


void FUN_0057b9e0(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    *param_1 = "invalid";
    if ((void *)param_1[2] != (void *)0x0) {
      free((void *)param_1[2]);
      param_1[2] = 0;
    }
    if ((void *)param_1[1] != (void *)0x0) {
      free((void *)param_1[1]);
      param_1[1] = 0;
    }
    if ((void *)param_1[3] != (void *)0x0) {
      free((void *)param_1[3]);
      param_1[3] = 0;
    }
    if (param_1[4] != 0) {
      FUN_00452330();
      param_1[4] = 0;
    }
  }
  return;
}


