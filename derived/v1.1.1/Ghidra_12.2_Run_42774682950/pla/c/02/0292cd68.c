/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0292cd68; name: FUN_0292cd68
 */


void FUN_0292cd68(undefined1 param_1 [16],undefined8 param_2,long param_3)

{
  undefined4 uVar1;
  uint uVar2;
  
  if (*(char *)(param_3 + 0x24) == '\0') {
    return;
  }
  if (*(char *)(param_3 + 0x25) == '\0') {
    return;
  }
  if (*(char *)(param_3 + 0x26) != '\0') {
    if (*(int *)(param_3 + 0x88) != 0) {
      FUN_0292db1c(param_1,param_2,param_3 + 0x38);
    }
    *(undefined4 *)(param_3 + 0x28) = 0;
    *(undefined1 *)(param_3 + 0x26) = 0;
  }
  *(undefined4 *)(param_3 + 0x28) = 0;
  if (*(char *)(param_3 + 0xa8) != '\0') goto LAB_0292cdc0;
  switch(*(undefined4 *)(param_3 + 0xc)) {
  case 0:
    if (*(int *)(param_3 + 0x88) != 0) {
      *(int *)(param_3 + 0x9c) = (int)param_2;
    }
    goto LAB_0292cdc0;
  case 1:
    if (*(int *)(param_3 + 0x88) != 0) {
      *(int *)(param_3 + 0x9c) = (int)param_2;
    }
    break;
  case 2:
    if (*(int *)(param_3 + 0x88) != 0) {
      uVar1 = 3;
      if ((*(uint *)(param_3 + 0x94) | 2) != 3) {
        uVar1 = 4;
      }
      *(undefined4 *)(param_3 + 0x94) = uVar1;
    }
LAB_0292cdc0:
    *(undefined1 *)(param_3 + 0x25) = 0;
    break;
  case 3:
    if (*(int *)(param_3 + 0x88) != 0) {
      uVar2 = *(uint *)(param_3 + 0x94) | 2;
      if (uVar2 != 3) {
        uVar2 = 4;
      }
      *(uint *)(param_3 + 0x94) = uVar2;
    }
  }
  return;
}


