/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c8f704; name: FUN_02c8f704
 */


uint FUN_02c8f704(long param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if ((*PTR_DAT_0437b6f0 & 1) == 0) {
    iVar3 = __cxa_guard_acquire(PTR_DAT_0437b6f0);
    if (iVar3 != 0) {
      FUN_00100250(PTR_LAB_0437f8b0,PTR_DAT_0437b6f8,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437b6f0);
    }
  }
  lVar4 = *(long *)PTR_DAT_0437b6f8;
  *(long *)PTR_DAT_0437b700 = lVar4;
  uVar1 = *(undefined4 *)(param_1 + 0x68);
  if (*(char *)(param_4 + 0xe0) != '\0') {
    FUN_02bcb50c(param_4 + 0xb0,param_4 + 0x70);
    *(undefined1 *)(param_4 + 0xe0) = 0;
  }
  uStack_78 = *(undefined8 *)(param_4 + 0x78);
  local_80 = *(undefined8 *)(param_4 + 0x70);
  uStack_68 = *(undefined8 *)(param_4 + 0x88);
  uStack_70 = *(undefined8 *)(param_4 + 0x80);
  uStack_58 = *(undefined8 *)(param_4 + 0x98);
  local_60 = *(undefined8 *)(param_4 + 0x90);
  uStack_48 = *(undefined8 *)(param_4 + 0xa8);
  uStack_50 = *(undefined8 *)(param_4 + 0xa0);
  uVar2 = FUN_02c9d508(*(undefined8 *)(lVar4 + 0x58),uVar1,*(undefined8 *)(param_2 + 8),param_3,
                       &local_80,param_4 + 0xe8);
  return uVar2 & 1;
}


