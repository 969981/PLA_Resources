/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 014eb084; name: FUN_014eb084
 */


void FUN_014eb084(long param_1)

{
  int iVar1;
  ulong uVar2;
  
  switch(*(undefined4 *)(param_1 + 0x1cc)) {
  case 0:
    FUN_00d6b510(*(undefined8 *)(param_1 + 0x1c0));
    FUN_014fd310(*(undefined8 *)(param_1 + 0x1a8));
    FUN_00d6a73c(*(undefined8 *)(param_1 + 0x1b8));
    *(int *)(param_1 + 0x1cc) = *(int *)(param_1 + 0x1cc) + 1;
  case 1:
    uVar2 = FUN_014fd4f4(*(undefined8 *)(param_1 + 0x1a8));
    if (((uVar2 & 1) != 0) &&
       (uVar2 = FUN_00d6a788(*(undefined8 *)(param_1 + 0x1b8)), (uVar2 & 1) != 0)) {
      FUN_014eb59c(param_1);
      FUN_014f9ef8(*(undefined8 *)(param_1 + 0x1a8));
      *(int *)(param_1 + 0x1cc) = *(int *)(param_1 + 0x1cc) + 1;
    }
    break;
  case 2:
    iVar1 = *(int *)(*(long *)(param_1 + 0x1a8) + 0x5ac);
    *(undefined4 *)(*(long *)(param_1 + 0x1a8) + 0x5ac) = 0;
    if (iVar1 != 3) {
      return;
    }
    FUN_00d6b510(*(undefined8 *)(param_1 + 0x1c0));
    FUN_014fd488(*(undefined8 *)(param_1 + 0x1a8));
    FUN_00d6a4ec(*(undefined8 *)(param_1 + 0x1b8));
    *(int *)(param_1 + 0x1cc) = *(int *)(param_1 + 0x1cc) + 1;
  case 3:
    uVar2 = FUN_014fd4f4(*(undefined8 *)(param_1 + 0x1a8));
    if (((uVar2 & 1) != 0) &&
       (uVar2 = FUN_00d6a610(*(undefined8 *)(param_1 + 0x1b8)), (uVar2 & 1) != 0)) {
      *(undefined8 *)(param_1 + 0x1c8) = 0;
    }
  }
  return;
}


