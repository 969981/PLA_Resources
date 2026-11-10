/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008c25f0; name: FUN_008c25f0
 */


undefined8 FUN_008c25f0(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((((*(long *)(param_1 + 0x90) == 0) ||
       (iVar1 = FUN_02c6849c(*(undefined8 *)(*(long *)(param_1 + 0x90) + 0x98)), 2 < iVar1 - 0x1e0U)
       ) && ((*(long *)(param_1 + 0xf0) == 0 ||
             (iVar1 = FUN_02c6849c(*(undefined8 *)(*(long *)(param_1 + 0xf0) + 0x98)),
             2 < iVar1 - 0x1e0U)))) &&
     ((((*(long *)(param_1 + 0x150) == 0 ||
        (iVar1 = FUN_02c6849c(*(undefined8 *)(*(long *)(param_1 + 0x150) + 0x98)),
        2 < iVar1 - 0x1e0U)) &&
       ((*(long *)(param_1 + 0x1b0) == 0 ||
        (iVar1 = FUN_02c6849c(*(undefined8 *)(*(long *)(param_1 + 0x1b0) + 0x98)),
        2 < iVar1 - 0x1e0U)))) &&
      (((*(long *)(param_1 + 0x210) == 0 ||
        (iVar1 = FUN_02c6849c(*(undefined8 *)(*(long *)(param_1 + 0x210) + 0x98)),
        2 < iVar1 - 0x1e0U)) &&
       ((*(long *)(param_1 + 0x270) == 0 ||
        (iVar1 = FUN_02c6849c(*(undefined8 *)(*(long *)(param_1 + 0x270) + 0x98)),
        2 < iVar1 - 0x1e0U)))))))) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}


