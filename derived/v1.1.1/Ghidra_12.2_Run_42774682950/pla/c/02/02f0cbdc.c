/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f0cbdc; name: FUN_02f0cbdc
 */


void FUN_02f0cbdc(long param_1)

{
  uint uVar1;
  uint uVar2;
  long *plVar3;
  int *piVar4;
  long local_38;
  
  if (*(int *)(param_1 + 0x1b8) != 0) {
    piVar4 = *(int **)(param_1 + 0x1b0);
    do {
      if (*piVar4 == 1) {
        local_38 = *(long *)(piVar4 + 2);
        uVar1 = *(uint *)(param_1 + 0x20);
        if (uVar1 != 0) {
          uVar2 = 0;
          if (uVar1 != 0) {
            uVar2 = (uint)local_38 / uVar1;
          }
          for (plVar3 = *(long **)(*(long *)(param_1 + 0x18) +
                                  (ulong)((uint)local_38 - uVar2 * uVar1) * 8);
              plVar3 != (long *)0x0; plVar3 = (long *)plVar3[1]) {
            if (*plVar3 == local_38) {
              if (*(int *)(param_1 + 0x1c0) < 1) {
                FUN_02f0ca80((long *)(param_1 + 0x18),&local_38);
                FUN_02f0c620(param_1,plVar3);
                (*DAT_0442d150)(2,plVar3);
              }
              else {
                *(undefined1 *)((long)plVar3 + 0x14) = 0;
              }
              break;
            }
          }
        }
      }
      else if (*piVar4 == 0) {
        FUN_02f0c7d0(param_1,*(undefined8 *)(piVar4 + 2),piVar4[4]);
      }
      piVar4 = piVar4 + 6;
    } while (piVar4 != (int *)(*(long *)(param_1 + 0x1b0) + (ulong)*(uint *)(param_1 + 0x1b8) * 0x18
                              ));
  }
  *(undefined4 *)(param_1 + 0x1b8) = 0;
  return;
}


