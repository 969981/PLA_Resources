/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 027bcfc0; name: FUN_027bcfc0
 */


void FUN_027bcfc0(long param_1)

{
  long *plVar1;
  code *pcVar2;
  
  if (*(long *)(param_1 + 0x38) != 0) {
    pcVar2 = *(code **)(param_1 + 0xa8);
    if (pcVar2 != (code *)0x0) {
      *(undefined8 *)(param_1 + 0xb0) = 0;
      *(undefined8 *)(param_1 + 0xb8) = 0;
      *(undefined8 *)(param_1 + 0xa0) = 0;
      *(undefined8 *)(param_1 + 0xa8) = 0;
      (*pcVar2)(param_1 + 0xc0);
    }
    pcVar2 = *(code **)(param_1 + 0x128);
    if (pcVar2 != (code *)0x0) {
      *(undefined8 *)(param_1 + 0x130) = 0;
      *(undefined8 *)(param_1 + 0x138) = 0;
      *(undefined8 *)(param_1 + 0x120) = 0;
      *(undefined8 *)(param_1 + 0x128) = 0;
      (*pcVar2)(param_1 + 0x140);
    }
    plVar1 = (long *)(*(long *)(*(long *)(param_1 + 0x38) + 0x5b0) + 0x68);
    (**(code **)(*plVar1 + 8))(plVar1,0);
    if (*(int *)(param_1 + 0x1a0) == 2) {
      FUN_00d68088(*(undefined8 *)(param_1 + 0x38),1);
    }
    else {
      if (*(int *)(param_1 + 0x1a0) != 1) {
        return;
      }
      FUN_00d6802c(*(undefined8 *)(param_1 + 0x38),1);
    }
    *(undefined4 *)(param_1 + 0x1a0) = 3;
  }
  return;
}


