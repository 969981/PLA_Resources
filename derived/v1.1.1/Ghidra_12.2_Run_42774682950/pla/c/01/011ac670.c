/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011ac670; name: FUN_011ac670
 */


void FUN_011ac670(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined1 uVar1;
  int iVar2;
  long lVar3;
  undefined1 local_24 [4];
  
  local_24[0] = 1;
  FUN_027f6cdc(param_1,param_2,local_24,param_3);
  *param_1 = &DAT_041f5278;
  param_1[9] = &PTR_LAB_041f5348;
  param_1[10] = &PTR_LAB_041f5390;
  if (((*PTR_DAT_04379690 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_04379690), iVar2 != 0))
  {
    FUN_00100250(PTR_LAB_043796a8,PTR_DAT_04379698,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379690);
  }
  lVar3 = *(long *)PTR_DAT_04379698;
  *(long *)PTR_DAT_043796a0 = lVar3;
  *(undefined4 *)(*(long *)(lVar3 + 0x50) + 0x2d48) = 1;
  uVar1 = *(undefined1 *)(param_3 + 0x54);
  lVar3 = *(long *)(lVar3 + 0x50);
  *(undefined4 *)(lVar3 + 0x2de4) = 1;
  *(undefined1 *)(lVar3 + 0x2de8) = uVar1;
  FUN_027f7fe8(param_1,1,*(char *)(param_3 + 0x1ba) == '\0');
  FUN_027f7fe8(param_1,0,1);
  return;
}


