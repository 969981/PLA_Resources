/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01f418f4; name: FUN_01f418f4
 */


undefined4 FUN_01f418f4(long param_1,ulong param_2)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  undefined4 uVar10;
  undefined8 *local_58;
  undefined8 uStack_50;
  ulong local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  if (*(long *)(param_1 + 0xf8) == 0) {
    return 0;
  }
  plVar2 = (long *)(param_1 + 0x248);
  if ((param_2 & 1) == 0) {
    plVar2 = (long *)(param_1 + 0x210);
  }
  if ((undefined4 *)plVar2[1] == (undefined4 *)*plVar2) {
    return 0;
  }
  if (*(int *)(param_1 + 0x18c) == 0) {
    return *(undefined4 *)*plVar2;
  }
  lVar7 = *(long *)(*(long *)(param_1 + 0xb8) +
                   (*(ulong *)(param_1 + 0xf0) >> 4 & 0xffffffffffffff8)) +
          (*(ulong *)(param_1 + 0xf0) & 0x7f) * 0x20;
  local_58 = (undefined8 *)0x0;
  uStack_50 = 0;
  FUN_01f4e8c4(&local_58,lVar7);
  local_48 = *(ulong *)(lVar7 + 0x10);
  uStack_40 = *(undefined8 *)(lVar7 + 0x18);
  if (((local_48 & 0xff) != 0) && (lVar7 = FUN_01f4ff30(param_1 + 0x3d8,&uStack_40), lVar7 != 0)) {
    uVar9 = (long)*(int *)(lVar7 + 0x2c) - 1;
    uVar8 = plVar2[1] - *plVar2 >> 2;
    iVar6 = (int)uVar9;
    if (uVar8 <= uVar9) {
      iVar6 = (int)uVar8 + -1;
    }
    if (-1 < iVar6) {
      if (uVar8 <= (ulong)(long)iVar6) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_out_of_range();
      }
      uVar10 = *(undefined4 *)(*plVar2 + (long)iVar6 * 4);
      puVar5 = local_58;
      goto joined_r0x01f41a44;
    }
  }
  uVar10 = 0;
  puVar5 = local_58;
joined_r0x01f41a44:
  if (puVar5 == (undefined8 *)0x0) {
    return uVar10;
  }
  piVar1 = (int *)(puVar5 + 1);
  do {
    iVar6 = *piVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar4) {
      *piVar1 = iVar6 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar6 + -1 != 0) {
    return uVar10;
  }
  puVar5[2] = 0;
  local_58 = puVar5;
  if (((*PTR_DAT_04379498 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0))
  {
    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379498);
  }
  lVar7 = *(long *)PTR_DAT_043794a0;
  *(long *)PTR_DAT_043794a8 = lVar7;
  local_38 = *puVar5;
  FUN_02a44274(lVar7 + 0xd8,&local_38);
  return uVar10;
}


