/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013cc6b4; name: FUN_013cc6b4
 */


void FUN_013cc6b4(long param_1,int param_2)

{
  uint uVar1;
  code *pcVar2;
  uint uVar3;
  
  if (*(long *)(param_1 + 0x680) != 0) {
    return;
  }
  uVar1 = *(uint *)(param_1 + 0x700);
  *(undefined4 *)(param_1 + 0x670) = 0;
  uVar3 = uVar1;
  if (param_2 != 0) {
    uVar3 = ~uVar1 & 1;
  }
  pcVar2 = *(code **)(param_1 + 0x688);
  if (pcVar2 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x690) = 0;
    *(undefined8 *)(param_1 + 0x698) = 0;
    *(undefined8 *)(param_1 + 0x680) = 0;
    *(undefined8 *)(param_1 + 0x688) = 0;
    (*pcVar2)(param_1 + 0x6a0);
  }
  *(long *)(param_1 + 0x6a0) = param_1;
  *(int *)(param_1 + 0x6a8) = param_2;
  *(uint *)(param_1 + 0x6ac) = uVar1;
  *(undefined1 **)(param_1 + 0x680) = &LAB_013cda58;
  *(undefined1 **)(param_1 + 0x688) = &LAB_013cda5c;
  *(uint *)(param_1 + 0x6b0) = uVar3;
  *(undefined1 **)(param_1 + 0x690) = &LAB_013cdc34;
  *(undefined1 **)(param_1 + 0x698) = &LAB_013cdc48;
  FUN_013cda60(param_1 + 0x6a0);
  return;
}


