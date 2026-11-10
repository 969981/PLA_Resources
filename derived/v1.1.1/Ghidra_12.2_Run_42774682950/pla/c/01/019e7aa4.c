/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 019e7aa4; name: FUN_019e7aa4
 */


uint FUN_019e7aa4(int *param_1)

{
  int *piVar1;
  bool bVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  int iVar6;
  long lVar7;
  uint uVar8;
  undefined8 *local_38;
  undefined8 uStack_30;
  long *local_28;
  
  if (*param_1 == 0x17) {
    return 1;
  }
  local_38 = (undefined8 *)0x0;
  uStack_30 = 0;
  FUN_00b63974(&local_38,param_1 + 2);
  FUN_00cf6d78(&local_28,&local_38);
  if (local_28 != (long *)0x0) {
    bVar2 = (char)local_28[0x40] != '\0';
    if (bVar2) {
      uVar8 = 0xffffffff;
    }
    else {
      uVar8 = (int)local_28[0x44] - 1;
    }
    lVar7 = local_28[0xb];
    piVar1 = (int *)(lVar7 + 0xc);
    do {
      iVar6 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 + -1 == 0) {
      *(undefined8 *)(lVar7 + 0x18) = 0;
      (**(code **)(*local_28 + 0x20))();
    }
    if (!bVar2 && uVar8 < 0x20) {
      uVar8 = 0x8200037fU >> (ulong)(uVar8 & 0x1f) & 1;
      puVar5 = local_38;
      goto joined_r0x019e7b94;
    }
  }
  uVar8 = 0;
  puVar5 = local_38;
joined_r0x019e7b94:
  if (puVar5 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar5 + 1);
    do {
      iVar6 = *piVar1;
      cVar3 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar2) {
        *piVar1 = iVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 + -1 == 0) {
      puVar5[2] = 0;
      local_38 = puVar5;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar7 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar7;
      local_28 = (long *)*puVar5;
      FUN_02a44274(lVar7 + 0xd8,&local_28);
    }
  }
  return uVar8;
}


