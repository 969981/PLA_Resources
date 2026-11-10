/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d84ee8; name: FUN_00d84ee8
 */


void FUN_00d84ee8(void)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_DAT_0437b160;
  uVar4 = *(undefined8 *)(*(long *)PTR_DAT_0437b160 + 0x268);
  FUN_00d85454(uVar4);
  FUN_00d854a0(uVar4);
  if (((*PTR_DAT_04379c28 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_04379c28), iVar2 != 0))
  {
    FUN_00100250(PTR_LAB_04379c60,PTR_DAT_04379c30,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379c28);
  }
  lVar3 = *(long *)PTR_DAT_04379c30;
  *(long *)PTR_DAT_04379c38 = lVar3;
  *(undefined4 *)(lVar3 + 0x150) = 0x17;
  FUN_00d884f4(*(undefined8 *)(*(long *)puVar1 + 0x268));
  FUN_00d88d7c(*(undefined8 *)(*(long *)puVar1 + 0x268));
  FUN_00d88f60(*(undefined8 *)(*(long *)puVar1 + 0x268));
  FUN_00d85540(*(undefined8 *)(*(long *)puVar1 + 0x268));
  return;
}


