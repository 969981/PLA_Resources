/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001e6d28; name: FUN_001e6d28
 */


void FUN_001e6d28(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  long local_18;
  
  if (*(long *)(param_1 + 0x1c0) != 0) {
    FUN_001e7a9c(param_1,&local_18);
    if (local_18 < 0) {
      if ((*(long *)(param_1 + 0x1d0) == 0) && (*(int *)(param_1 + 0x1d8) == 0)) {
        return;
      }
      *(undefined8 *)(param_1 + 0x1d0) = 0;
      *(undefined8 *)(param_1 + 0x1d8) = 0;
      pcVar3 = *(code **)(param_1 + 0x1c0);
      uVar1 = *(undefined8 *)(param_1 + 0x1c8);
      local_18 = -1;
    }
    else {
      lVar2 = *(long *)(param_1 + 0xb0);
      if ((*(long *)(lVar2 + 0x20) == *(long *)(param_1 + 0x1d0)) &&
         (*(int *)(lVar2 + 0x28) == *(int *)(param_1 + 0x1d8))) {
        return;
      }
      uVar1 = *(undefined8 *)(lVar2 + 0x28);
      *(undefined8 *)(param_1 + 0x1d0) = *(undefined8 *)(lVar2 + 0x20);
      *(undefined8 *)(param_1 + 0x1d8) = uVar1;
      pcVar3 = *(code **)(param_1 + 0x1c0);
      uVar1 = *(undefined8 *)(param_1 + 0x1c8);
    }
    (*pcVar3)(param_1,local_18,uVar1);
  }
  return;
}


