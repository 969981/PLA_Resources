/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00ab9db4; name: FUN_00ab9db4
 */


void FUN_00ab9db4(long param_1,uint param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  code *pcVar3;
  int iVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 local_b0;
  code *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [96];
  
  puVar1 = PTR_DAT_04379c28;
  if (((*PTR_DAT_04379c28 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04379c28), iVar4 != 0))
  {
    FUN_00100250(PTR_LAB_04379c60,PTR_DAT_04379c30,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379c28);
  }
  puVar2 = PTR_DAT_04379c38;
  puVar7 = (undefined8 *)PTR_DAT_04379c30;
  lVar8 = *(long *)PTR_DAT_04379c30;
  *(long *)PTR_DAT_04379c38 = lVar8;
  if ((*puVar1 & 1) == 0) {
    iVar4 = __cxa_guard_acquire(PTR_DAT_04379c28);
    puVar7 = (undefined8 *)PTR_DAT_04379c30;
    if (iVar4 != 0) {
      FUN_00100250(PTR_LAB_04379c60,PTR_DAT_04379c30,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379c28);
      puVar7 = (undefined8 *)PTR_DAT_04379c30;
    }
  }
  *(undefined8 *)puVar2 = *puVar7;
  uVar5 = FUN_02911ed0();
  local_a0 = 0;
  uStack_98 = 0;
  local_b0 = 0;
  local_a8 = (code *)0x0;
  plVar6 = *(long **)(*(long *)(lVar8 + 0x158) + 0x60);
  iVar4 = (**(code **)(*plVar6 + 0xc0))
                    (plVar6,*(undefined8 *)(param_1 + 8),uVar5,1,&LAB_0290f2d0,lVar8,0,0,0);
  if (iVar4 != 0) {
    FUN_0291629c(*(undefined8 *)(lVar8 + 0x178),param_1,iVar4,uVar5,&local_b0,0,param_2 & 1);
    pcVar3 = local_a8;
    if (local_a8 != (code *)0x0) {
      local_a0 = 0;
      uStack_98 = 0;
      local_b0 = 0;
      local_a8 = (code *)0x0;
      (*pcVar3)(auStack_90);
    }
  }
  return;
}


