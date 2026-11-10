/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0276d0c4; name: FUN_0276d0c4
 */


void FUN_0276d0c4(undefined8 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  if (((*PTR_DAT_0437b4d0 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_0437b4d0), iVar4 != 0))
  {
    FUN_00100250(PTR_LAB_0437e718,PTR_DAT_0437b4d8,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437b4d0);
  }
  lVar5 = *(long *)PTR_DAT_0437b4d8;
  *(long *)PTR_DAT_0437b4e0 = lVar5;
  if (lVar5 != 0) {
    puVar2 = (undefined4 *)param_1[1];
    for (puVar1 = (undefined4 *)*param_1; puVar1 != puVar2; puVar1 = puVar1 + 0x26) {
      local_48 = *(undefined8 *)(puVar1 + 0x19);
      local_40 = *(undefined8 *)(puVar1 + 0x1b);
      uStack_38 = *(undefined8 *)(puVar1 + 0x1d);
      uVar3 = *puVar1;
      local_60 = *(undefined8 *)(puVar1 + 0x1f);
      local_58 = *(undefined8 *)(puVar1 + 0x21);
      uStack_50 = *(undefined8 *)(puVar1 + 0x23);
      FUN_02789038(lVar5,uVar3,&local_48,&local_60);
      FUN_02792e44(lVar5,uVar3);
    }
  }
  return;
}


