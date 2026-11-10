/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a4a98c; name: FUN_01a4a98c
 */


void FUN_01a4a98c(long param_1,undefined8 param_2)

{
  ulong uVar1;
  code *pcVar2;
  long *plVar3;
  
  plVar3 = (long *)(param_1 + -0x48);
  uVar1 = (**(code **)(*plVar3 + 0xf8))(plVar3);
  if ((uVar1 & 1) == 0) {
    if (*(code **)(param_1 + 0x1a8) == (code *)0x0) {
      return;
    }
    uVar1 = (**(code **)(param_1 + 0x1a8))(param_1 + 0x1c8);
    if ((uVar1 & 1) == 0) {
      return;
    }
    *(undefined1 *)(param_1 + 0x398) = 1;
    pcVar2 = *(code **)(param_1 + 0x1b0);
    if (pcVar2 != (code *)0x0) {
      *(undefined8 *)(param_1 + 0x1b8) = 0;
      *(undefined8 *)(param_1 + 0x1c0) = 0;
      *(undefined8 *)(param_1 + 0x1a8) = 0;
      *(undefined8 *)(param_1 + 0x1b0) = 0;
      (*pcVar2)(param_1 + 0x1c8);
    }
    if (*(code **)(param_1 + 0x228) != (code *)0x0) {
      (**(code **)(param_1 + 0x228))(param_1 + 0x248);
      pcVar2 = *(code **)(param_1 + 0x230);
      if (pcVar2 != (code *)0x0) {
        *(undefined8 *)(param_1 + 0x238) = 0;
        *(undefined8 *)(param_1 + 0x240) = 0;
        *(undefined8 *)(param_1 + 0x228) = 0;
        *(undefined8 *)(param_1 + 0x230) = 0;
        (*pcVar2)(param_1 + 0x248);
        if (*(char *)(param_1 + 0x399) == '\0') {
          return;
        }
        goto LAB_01a4aa48;
      }
    }
  }
  if (*(char *)(param_1 + 0x399) == '\0') {
    return;
  }
LAB_01a4aa48:
                    /* WARNING: Could not recover jumptable at 0x01a4aa64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x108))(plVar3,param_2);
  return;
}


