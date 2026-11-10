/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ea6020; name: FUN_02ea6020
 */


int FUN_02ea6020(long param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  
  uVar2 = *(uint *)(param_1 + 0x50);
  if (uVar2 == 0) {
    iVar3 = 0;
  }
  else {
    lVar4 = 0;
    do {
      puVar1 = (undefined4 *)(*(long *)(param_1 + 0x48) + lVar4);
      local_58 = *puVar1;
      local_54 = puVar1[1];
      local_50 = 0x61746164;
      local_48 = 0;
      local_44 = puVar1[1];
      (**(code **)(**(long **)(param_1 + 0x60) + 0x18))(*(long **)(param_1 + 0x60),&local_58,0x18);
      lVar4 = lVar4 + 0x10;
    } while ((ulong)uVar2 * 0x10 != lVar4);
    iVar3 = uVar2 * 0x18;
  }
  return iVar3;
}


