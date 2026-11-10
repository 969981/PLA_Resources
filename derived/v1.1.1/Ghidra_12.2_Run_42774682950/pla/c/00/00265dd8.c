/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00265dd8; name: FUN_00265dd8
 */


undefined8 FUN_00265dd8(long param_1)

{
  undefined8 local_30;
  long lStack_28;
  
  if (*(long *)(param_1 + 0x160) != 0) {
    FUN_00265cec(param_1);
    *(undefined8 *)(param_1 + 0x160) = 0;
    *(undefined4 *)(param_1 + 0x168) = 0;
  }
  FUN_00265cec(param_1,*(undefined8 *)(param_1 + 0x150));
  if (*(code **)(param_1 + 0x248) != (code *)0x0) {
    local_30 = *(undefined8 *)(param_1 + 0x20);
    lStack_28 = param_1;
    (**(code **)(param_1 + 0x248))(&local_30);
    *(undefined8 *)(param_1 + 0x248) = 0;
  }
  *(undefined1 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0xffffffff;
  return 1;
}


