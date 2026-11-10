/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f1245c; name: FUN_02f1245c
 */


void FUN_02f1245c(long param_1,long *param_2)

{
  if (*(long *)(param_1 + 8) != 0) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    FUN_02f59e60(5);
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    *(undefined4 *)(param_1 + 0x20) = 0;
    FUN_02f59e60(5);
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    *(undefined4 *)(param_1 + 0x30) = 0;
    FUN_02f59e60(5);
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined4 *)(param_1 + 0x34) = 0;
  }
  if (*(long *)(param_1 + 0x38) != 0) {
    *(undefined4 *)(param_1 + 0x40) = 0;
    FUN_02f59e60(5);
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(undefined4 *)(param_1 + 0x44) = 0;
  }
  if (*(long *)(param_1 + 0x48) != 0) {
    (**(code **)(*param_2 + 0x18))(param_2);
  }
  if (*(long *)(param_1 + 0x50) != 0) {
    (**(code **)(*param_2 + 0x18))(param_2);
  }
  if (*(long *)(param_1 + 0x58) != 0) {
    (**(code **)(*param_2 + 0x18))(param_2);
  }
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(long *)(param_1 + 0x48) = 0;
  return;
}


