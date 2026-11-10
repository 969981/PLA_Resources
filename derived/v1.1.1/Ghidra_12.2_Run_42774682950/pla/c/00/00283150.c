/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00283150; name: FUN_00283150
 */


void FUN_00283150(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)(param_2 + 0x1d0);
  plVar1 = (long *)(param_2 + 0x1d0);
  if (((lVar2 == 0) && (*(long *)(param_2 + 0x1d8) == 0)) && (*(char *)(param_2 + 0xf) != '\0')) {
    lVar2 = param_1 + (long)*(int *)(param_2 + 0x14) * 8;
    if (*(long *)(lVar2 + 0x4b0) == param_2) {
      *(undefined8 *)(lVar2 + 0x4b0) = 0;
      lVar2 = (long)*(int *)(param_2 + 0x14);
      lVar3 = *(long *)(param_1 + lVar2 * 8 + 0x4b0);
      if (lVar3 != 0) {
        *(undefined8 *)(lVar3 + 0x1d8) = 0;
        lVar2 = (long)*(int *)(param_2 + 0x14);
      }
      param_1 = param_1 + lVar2 * 8;
      if (*(long *)(param_1 + 0x6b0) == param_2) {
        *(undefined8 *)(param_1 + 0x6b0) = 0;
      }
    }
    else {
      if (*(long *)(lVar2 + 0x6b0) == param_2) {
        *(undefined8 *)(lVar2 + 0x6b0) = 0;
        if (*plVar1 != 0) {
          *(undefined8 *)(*plVar1 + 0x1d8) = *(undefined8 *)(param_2 + 0x1d8);
        }
      }
      if (*(long *)(param_2 + 0x1d8) == 0) {
        FUN_00271640("EmitterSet Remove Failed.\n");
      }
      else {
        *(long *)(*(long *)(param_2 + 0x1d8) + 0x1d0) = *plVar1;
      }
    }
    *(undefined1 *)(param_2 + 0xf) = 0;
    *plVar1 = 0;
    *(undefined8 *)(param_2 + 0x1d8) = 0;
    return;
  }
  lVar3 = param_1 + (long)*(int *)(param_2 + 0x14) * 8;
  if (*(long *)(lVar3 + 0xb0) == param_2) {
    *(long *)(lVar3 + 0xb0) = lVar2;
    lVar2 = (long)*(int *)(param_2 + 0x14);
    lVar3 = *(long *)(param_1 + lVar2 * 8 + 0xb0);
    if (lVar3 != 0) {
      *(undefined8 *)(lVar3 + 0x1d8) = 0;
      lVar2 = (long)*(int *)(param_2 + 0x14);
    }
    param_1 = param_1 + lVar2 * 8;
    if (*(long *)(param_1 + 0x2b0) == param_2) {
      *(undefined8 *)(param_1 + 0x2b0) = 0;
      *plVar1 = 0;
      *(undefined8 *)(param_2 + 0x1d8) = 0;
      return;
    }
    *plVar1 = 0;
    *(undefined8 *)(param_2 + 0x1d8) = 0;
    return;
  }
  if (*(long *)(lVar3 + 0x2b0) == param_2) {
    *(undefined8 *)(lVar3 + 0x2b0) = *(undefined8 *)(param_2 + 0x1d8);
    lVar2 = *(long *)(param_2 + 0x1d0);
  }
  if (lVar2 != 0) {
    *(undefined8 *)(lVar2 + 0x1d8) = *(undefined8 *)(param_2 + 0x1d8);
  }
  if (*(long *)(param_2 + 0x1d8) == 0) {
    FUN_00271640("EmitterSet Remove Failed.\n");
    *plVar1 = 0;
    *(undefined8 *)(param_2 + 0x1d8) = 0;
    return;
  }
  *(long *)(*(long *)(param_2 + 0x1d8) + 0x1d0) = *plVar1;
  *plVar1 = 0;
  *(undefined8 *)(param_2 + 0x1d8) = 0;
  return;
}


