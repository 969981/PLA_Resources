/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008c2df0; name: FUN_008c2df0
 */


undefined8 FUN_008c2df0(long param_1)

{
  short sVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (*(long *)(param_1 + 0x90) == 0) {
LAB_008c2e34:
    if (*(long *)(param_1 + 0xf0) != 0) {
      iVar2 = FUN_02c6849c(*(undefined8 *)(*(long *)(param_1 + 0xf0) + 0x98));
      sVar1 = FUN_02c6f924(*(undefined8 *)(*(long *)(param_1 + 0xf0) + 0x98));
      if (iVar2 - 0x1e3U < 2 && sVar1 == 1) goto LAB_008c2f48;
    }
    if (*(long *)(param_1 + 0x150) != 0) {
      iVar2 = FUN_02c6849c(*(undefined8 *)(*(long *)(param_1 + 0x150) + 0x98));
      sVar1 = FUN_02c6f924(*(undefined8 *)(*(long *)(param_1 + 0x150) + 0x98));
      if ((iVar2 - 0x1e3U < 2) && (sVar1 == 1)) goto LAB_008c2f48;
    }
    if (*(long *)(param_1 + 0x1b0) != 0) {
      iVar2 = FUN_02c6849c(*(undefined8 *)(*(long *)(param_1 + 0x1b0) + 0x98));
      sVar1 = FUN_02c6f924(*(undefined8 *)(*(long *)(param_1 + 0x1b0) + 0x98));
      if ((iVar2 - 0x1e3U < 2) && (sVar1 == 1)) goto LAB_008c2f48;
    }
    if (*(long *)(param_1 + 0x210) != 0) {
      iVar2 = FUN_02c6849c(*(undefined8 *)(*(long *)(param_1 + 0x210) + 0x98));
      sVar1 = FUN_02c6f924(*(undefined8 *)(*(long *)(param_1 + 0x210) + 0x98));
      if ((iVar2 - 0x1e3U < 2) && (sVar1 == 1)) goto LAB_008c2f48;
    }
    if (*(long *)(param_1 + 0x270) != 0) {
      iVar2 = FUN_02c6849c(*(undefined8 *)(*(long *)(param_1 + 0x270) + 0x98));
      sVar1 = FUN_02c6f924(*(undefined8 *)(*(long *)(param_1 + 0x270) + 0x98));
      if ((iVar2 - 0x1e3U < 2) && (sVar1 == 1)) goto LAB_008c2f48;
    }
    uVar3 = 0;
  }
  else {
    iVar2 = FUN_02c6849c(*(undefined8 *)(*(long *)(param_1 + 0x90) + 0x98));
    sVar1 = FUN_02c6f924(*(undefined8 *)(*(long *)(param_1 + 0x90) + 0x98));
    if (1 < iVar2 - 0x1e3U || sVar1 != 1) goto LAB_008c2e34;
LAB_008c2f48:
    uVar3 = 1;
  }
  return uVar3;
}


