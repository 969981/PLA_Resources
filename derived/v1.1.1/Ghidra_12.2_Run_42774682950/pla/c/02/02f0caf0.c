/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f0caf0; name: FUN_02f0caf0
 */


void FUN_02f0caf0(long param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  long *plVar4;
  long local_28;
  
  uVar1 = *(uint *)(param_1 + 0x20);
  local_28 = param_2;
  if (uVar1 != 0) {
    uVar2 = 0;
    if (uVar1 != 0) {
      uVar2 = (uint)param_2 / uVar1;
    }
    for (plVar4 = *(long **)(*(long *)(param_1 + 0x18) + (ulong)((uint)param_2 - uVar2 * uVar1) * 8)
        ; plVar4 != (long *)0x0; plVar4 = (long *)plVar4[1]) {
      if (*plVar4 == param_2) {
        if (*(int *)(param_1 + 0x1c0) < 1) {
          FUN_02f0ca80((long *)(param_1 + 0x18),&local_28);
          FUN_02f0c620(param_1,plVar4);
          (*DAT_0442d150)(2,plVar4);
        }
        else {
          *(undefined1 *)((long)plVar4 + 0x14) = 0;
        }
        break;
      }
    }
  }
  if ((0 < *(int *)(param_1 + 0x1c0)) &&
     (puVar3 = (undefined4 *)FUN_02f0d3a0(param_1 + 0x30), puVar3 != (undefined4 *)0x0)) {
    *(long *)(puVar3 + 2) = param_2;
    *puVar3 = 1;
    puVar3[4] = 0;
  }
  return;
}


