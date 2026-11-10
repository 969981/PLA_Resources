/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02fbc5e4; name: FUN_02fbc5e4
 */


void FUN_02fbc5e4(undefined8 *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 local_38;
  
  FUN_02fd6728();
  *param_1 = &PTR_LAB_042b9320;
  (**(code **)(**(long **)(param_2 + 0x50) + 0x98))(&local_38);
  param_1[10] = local_38;
  lVar2 = FUN_032cf5b0(0x70);
  lVar3 = *(long *)(param_2 + 0x58);
  lVar1 = 0;
  if (lVar3 != 0) {
    lVar1 = lVar3 + param_2 + 0x58;
  }
  FUN_02fc5940(lVar2,lVar1);
  lVar1 = 0;
  if (lVar2 != 0) {
    lVar1 = lVar2 - (long)(param_1 + 0xb);
  }
  param_1[0xb] = lVar1;
  *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 0x60);
  return;
}


