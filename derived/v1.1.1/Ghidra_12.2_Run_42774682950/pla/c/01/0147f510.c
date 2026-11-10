/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0147f510; name: FUN_0147f510
 */


void FUN_0147f510(undefined1 *param_1,undefined1 *param_2,undefined1 *param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (param_1 != param_2) {
    do {
      *param_3 = *param_1;
      *(undefined8 *)(param_3 + 8) = *(undefined8 *)(param_1 + 8);
      uVar3 = *(undefined8 *)(param_1 + 0x18);
      *(undefined8 *)(param_3 + 0x10) = *(undefined8 *)(param_1 + 0x10);
      *(undefined8 *)(param_3 + 0x18) = uVar3;
      *(undefined8 *)(param_3 + 0x20) = *(undefined8 *)(param_1 + 0x20);
      *(undefined8 *)(param_3 + 0x28) = *(undefined8 *)(param_1 + 0x28);
      plVar2 = *(long **)(param_3 + 0x38);
      *(undefined8 *)(param_3 + 0x30) = *(undefined8 *)(param_1 + 0x30);
      *(undefined8 *)(param_3 + 0x38) = 0;
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x20))();
      }
      uVar3 = *(undefined8 *)(param_1 + 0x38);
      *(undefined8 *)(param_1 + 0x38) = 0;
      *(undefined8 *)(param_3 + 0x38) = uVar3;
      puVar1 = (undefined8 *)(param_1 + 0x40);
      uVar3 = *(undefined8 *)(param_1 + 0x48);
      uVar4 = *(undefined8 *)(param_1 + 0x50);
      param_1 = param_1 + 0x58;
      *(undefined8 *)(param_3 + 0x40) = *puVar1;
      *(undefined8 *)(param_3 + 0x48) = uVar3;
      *(undefined8 *)(param_3 + 0x50) = uVar4;
      param_3 = param_3 + 0x58;
    } while (param_1 != param_2);
  }
  return;
}


