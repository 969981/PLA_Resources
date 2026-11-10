/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0134a240; name: FUN_0134a240
 */


void FUN_0134a240(undefined1 param_1 [16],undefined4 param_2,long param_3)

{
  long lVar1;
  undefined4 uVar2;
  undefined8 local_18;
  
  local_18 = 0;
  lVar1 = *(long *)(param_3 + 0x5c0);
  if (*(char *)(lVar1 + 0x104) == '\0') {
    uVar2 = FUN_0134a29c(param_3,*(undefined4 *)(lVar1 + 0x88));
    local_18 = CONCAT44(param_2,uVar2);
  }
  else {
    local_18 = *(undefined8 *)(lVar1 + 0x108);
  }
  FUN_0134a394(param_3,&local_18,1,0);
  return;
}


