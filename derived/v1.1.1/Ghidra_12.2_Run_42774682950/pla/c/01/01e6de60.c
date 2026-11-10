/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01e6de60; name: FUN_01e6de60
 */


void FUN_01e6de60(long *param_1)

{
  if ((long *)param_1[100] != (long *)0x0) {
    (**(code **)(*(long *)param_1[100] + 0x20))();
  }
  if ((long *)param_1[0x60] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x60] + 0x20))();
  }
  if ((long *)param_1[0x5d] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x5d] + 0x20))();
  }
  if ((long *)param_1[0x5a] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x5a] + 0x20))();
  }
  if ((long *)param_1[0x56] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x56] + 0x20))();
  }
  FUN_01e6dfa4(param_1 + 0x1f);
  if ((long *)param_1[0x14] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x14] + 0x20))();
  }
  if ((long *)param_1[0x12] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x12] + 0x20))();
  }
  if ((long *)param_1[0xe] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0xe] + 0x20))();
  }
  if ((long *)param_1[0xc] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0xc] + 0x20))();
  }
  if ((long *)param_1[8] != (long *)0x0) {
    (**(code **)(*(long *)param_1[8] + 0x20))();
  }
  if ((long *)param_1[6] != (long *)0x0) {
    (**(code **)(*(long *)param_1[6] + 0x20))();
  }
  if ((long *)param_1[2] != (long *)0x0) {
    (**(code **)(*(long *)param_1[2] + 0x20))();
  }
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 0x20))();
  }
  if ((long *)*param_1 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x01e6df94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*param_1 + 0x20))();
  return;
}


