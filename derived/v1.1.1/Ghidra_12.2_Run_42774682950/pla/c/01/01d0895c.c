/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01d0895c; name: FUN_01d0895c
 */


long FUN_01d0895c(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                 undefined8 param_5,undefined4 *param_6,undefined8 param_7)

{
  int *piVar1;
  undefined4 uVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 *local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  long *local_68;
  undefined8 local_58;
  
  if (((*PTR_DAT_04379520 & 1) == 0) &&
     (iVar7 = __cxa_guard_acquire(PTR_DAT_04379520), puVar5 = PTR_DAT_04379528, iVar7 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar5,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar8 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (0xf < *(ulong *)(lVar8 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = param_1;
  *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
  lVar9 = (**(code **)(*param_1 + 0x10))(param_1,0x260,0x10);
  if (lVar9 == 0) {
    (**(code **)(*param_1 + 0xb8))(param_1);
  }
  local_80 = *param_4;
  local_78 = param_4[1];
  local_70 = param_4[2];
  local_68 = (long *)param_4[3];
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x18))();
  }
  uVar2 = *param_6;
  local_90 = (undefined8 *)0x0;
  uStack_88 = 0;
  FUN_00d08588(&local_90,param_7);
  FUN_01c2b698(lVar9,param_2,param_3,&local_80,param_5,uVar2,&local_90);
  puVar6 = local_90;
  if (local_90 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_90 + 1);
    do {
      iVar7 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar7 + -1 == 0) {
      local_90[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar10 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar10;
      local_58 = *puVar6;
      FUN_02a44274(lVar10 + 0xd8,&local_58);
    }
  }
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x20))();
  }
  *(long **)(lVar9 + 8) = param_1;
  *(long *)(lVar9 + 0x10) = lVar9;
  *(undefined8 *)(lVar9 + 0x18) = 0x260;
  *(undefined8 *)(lVar9 + 0x20) = 0x10;
  *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
  return lVar9;
}


