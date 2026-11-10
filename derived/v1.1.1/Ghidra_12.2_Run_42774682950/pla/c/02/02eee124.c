/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02eee124; name: FUN_02eee124
 */


undefined8 FUN_02eee124(long param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  
  uVar3 = *(uint *)(param_1 + 0x10);
  uVar5 = *(uint *)(param_1 + 0x14);
  if (uVar5 <= uVar3) {
    iVar1 = uVar5 + (uVar5 >> 1);
    if (uVar5 == 0) {
      iVar1 = 1;
    }
    uVar5 = iVar1 + uVar5;
    lVar4 = (*DAT_0442d148)(0,*(undefined8 *)(param_1 + 8),(ulong)uVar5 << 3);
    if (lVar4 == 0) {
      return 2;
    }
    *(long *)(param_1 + 8) = lVar4;
    *(uint *)(param_1 + 0x14) = uVar5;
  }
  if (uVar3 < uVar5) {
    uVar5 = *(uint *)(param_1 + 0x10);
    *(uint *)(param_1 + 0x10) = uVar5 + 1;
    puVar2 = (undefined4 *)(*(long *)(param_1 + 8) + (ulong)uVar5 * 8);
    if (puVar2 != (undefined4 *)0x0) {
      *(undefined4 *)(*(long *)(param_1 + 8) + (ulong)uVar5 * 8 + 4) = param_3;
      *puVar2 = param_2;
      return 1;
    }
  }
  return 2;
}


