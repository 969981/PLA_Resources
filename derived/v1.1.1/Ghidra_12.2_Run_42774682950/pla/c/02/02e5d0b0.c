/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e5d0b0; name: FUN_02e5d0b0
 */


void FUN_02e5d0b0(long param_1,uint param_2,uint param_3,undefined8 param_4,undefined8 param_5)

{
  int iVar1;
  ulong uVar2;
  
  if (param_2 != param_3) {
    uVar2 = (ulong)param_2;
    iVar1 = *(int *)(param_1 + uVar2 * 0x10);
    if (iVar1 == 0) {
      FUN_02e5c630(*(undefined8 *)(param_1 + uVar2 * 0x10 + 8),param_5);
    }
    else if (iVar1 == 1) {
      FUN_02e5c8d0(*(undefined8 *)(param_1 + uVar2 * 0x10 + 8),param_5);
    }
    else if (iVar1 == 2) {
      FUN_02e5ca30(*(undefined8 *)(param_1 + uVar2 * 0x10 + 8),param_5);
    }
    while (param_2 = param_2 + 1, param_2 != param_3) {
      uVar2 = (ulong)param_2;
      iVar1 = *(int *)(param_1 + uVar2 * 0x10);
      if (iVar1 == 0) {
        FUN_02e5c630(*(undefined8 *)(param_1 + uVar2 * 0x10 + 8),param_5);
      }
      else if (iVar1 == 1) {
        FUN_02e5c8d0(*(undefined8 *)(param_1 + uVar2 * 0x10 + 8),param_5);
      }
      else if (iVar1 == 2) {
        FUN_02e5ca30(*(undefined8 *)(param_1 + uVar2 * 0x10 + 8),param_5);
      }
    }
  }
  return;
}


