/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0060fd20; name: FUN_0060fd20
 */


void FUN_0060fd20(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  if (*(char *)(param_1 + 0x60) != '\0') {
    return;
  }
  lVar1 = param_1 + 0x30;
  if (lVar1 != param_2) {
    lVar2 = *(long *)(param_2 + 0x20);
    if (lVar2 == 0) {
      *(undefined8 *)(param_1 + 0x50) = 0;
    }
    else if (lVar2 == param_2) {
      *(long *)(param_1 + 0x50) = lVar1;
      (**(code **)(**(long **)(param_2 + 0x20) + 0x28))(*(long **)(param_2 + 0x20),lVar1);
    }
    else {
      *(long *)(param_1 + 0x50) = lVar2;
      *(undefined8 *)(param_2 + 0x20) = 0;
    }
  }
  thunk_FUN_00783da8(param_1 + 0x18,param_1);
  *(undefined1 *)(param_1 + 0x60) = 1;
  return;
}


