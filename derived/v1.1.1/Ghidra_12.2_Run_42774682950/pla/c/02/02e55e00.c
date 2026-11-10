/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e55e00; name: FUN_02e55e00
 */


void FUN_02e55e00(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 local_40 [2];
  undefined1 auStack_30 [8];
  float local_28;
  
  local_40[0] = param_1;
  FUN_02e54748(auStack_30,*(undefined8 *)(param_2 + 0x100),local_40);
  if (*(float *)(param_2 + 0x118) < local_28) {
    *(float *)(param_2 + 0x118) = local_28;
    *(undefined8 *)(param_2 + 0x108) = param_3;
  }
  if (local_28 < *(float *)(param_2 + 0x11c)) {
    *(float *)(param_2 + 0x11c) = local_28;
    *(undefined8 *)(param_2 + 0x110) = param_3;
  }
  return;
}


