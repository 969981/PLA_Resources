/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01bae7c0; name: FUN_01bae7c0
 */


void FUN_01bae7c0(long param_1)

{
  long *plVar1;
  undefined8 uVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 local_28;
  
  if (*(char *)(param_1 + 0xb90) != '\0') {
    local_28 = 0xe5583797befa0b92;
    uVar3 = FUN_01baf6e4(param_1,&local_28);
    if ((uVar3 & 1) != 0) {
      return;
    }
  }
  *(undefined8 *)(param_1 + 0xb60) = DAT_043d2cd0;
  *(undefined8 *)(param_1 + 0xb68) = DAT_043d2cd8;
  plVar1 = DAT_043d2ce8;
  *(undefined8 *)(param_1 + 0xb70) = DAT_043d2ce0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x18))(plVar1);
  }
  plVar4 = *(long **)(param_1 + 0xb78);
  *(long **)(param_1 + 0xb78) = plVar1;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x20))();
  }
  uVar2 = DAT_043d2cf0;
  *(undefined8 *)(param_1 + 0xb88) = DAT_043d2cf8;
  *(undefined8 *)(param_1 + 0xb80) = uVar2;
  if ((*(byte *)(param_1 + 0xb50) & 1) == 0) {
    FUN_01a51334(param_1,&DAT_03a7ca60,*(undefined4 *)(param_1 + 0xb80));
    FUN_01a51334(param_1,&DAT_03a7ca68,*(undefined4 *)(param_1 + 0xb88));
    return;
  }
  return;
}


