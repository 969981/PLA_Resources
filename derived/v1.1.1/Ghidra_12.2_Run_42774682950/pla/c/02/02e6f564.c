/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e6f564; name: FUN_02e6f564
 */


void FUN_02e6f564(long param_1,long param_2,long param_3,long param_4,undefined4 param_5,
                 undefined4 param_6)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  
  plVar3 = *(long **)(param_1 + 0x640);
  if (plVar3 != (long *)0x0) {
    if (*plVar3 == 0) {
      *(undefined8 *)(param_1 + 0x640) = 0;
      *(undefined8 *)(param_1 + 0x638) = 0;
    }
    else {
      *(long *)(param_1 + 0x640) = *plVar3;
    }
    *(int *)(param_1 + 0x630) = *(int *)(param_1 + 0x630) + -1;
  }
  iVar1 = *(int *)(param_2 + 0x60);
  iVar2 = *(int *)(*(long *)(param_2 + 0x20) + 8);
  *(undefined4 *)(plVar3 + 2) = param_5;
  *(undefined4 *)((long)plVar3 + 0x14) = param_6;
  plVar3[3] = param_3;
  plVar3[4] = (long)&LAB_02e7137c;
  plVar3[5] = (long)plVar3;
  plVar3[6] = 0;
  plVar3[1] = (ulong)(uint)(iVar1 * iVar2) + param_4;
  plVar3[8] = param_2;
  *(byte *)(plVar3 + 9) = *(byte *)(plVar3 + 9) & 0xfc;
  return;
}


