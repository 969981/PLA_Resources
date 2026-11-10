/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01c43c0c; name: FUN_01c43c0c
 */


long FUN_01c43c0c(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined1 *param_7,undefined1 *param_8,
                 undefined1 *param_9,undefined1 *param_10,undefined1 *param_11,undefined8 param_12)

{
  int *piVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  char cVar7;
  bool bVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  int iVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  char local_80 [8];
  undefined8 *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  if (((*PTR_DAT_04379520 & 1) == 0) &&
     (iVar11 = __cxa_guard_acquire(PTR_DAT_04379520), puVar9 = PTR_DAT_04379528, iVar11 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar9,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar12 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (0xf < *(ulong *)(lVar12 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar12 + *(ulong *)(lVar12 + 0x80) * 8) = param_2;
  *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + 1;
  lVar13 = (**(code **)(*param_2 + 0x10))(param_2,0x140,0x10);
  if (lVar13 == 0) {
    (**(code **)(*param_2 + 0xb8))(param_2);
  }
  uVar2 = *param_7;
  uVar3 = *param_8;
  uVar4 = *param_9;
  uVar5 = *param_10;
  uVar6 = *param_11;
  local_80[0] = '\0';
  local_78 = (undefined8 *)0x0;
  uStack_70 = 0;
  FUN_0087fcf0(&local_78,param_12);
  local_80[0] = '\x01';
  FUN_01cc622c(lVar13,param_3,param_4,param_5,param_6,uVar2,uVar3,uVar4,uVar5,uVar6,local_80);
  puVar10 = local_78;
  if ((local_80[0] != '\0') && (local_78 != (undefined8 *)0x0)) {
    piVar1 = (int *)(local_78 + 1);
    do {
      iVar11 = *piVar1;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar8) {
        *piVar1 = iVar11 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (iVar11 + -1 == 0) {
      local_78[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar14 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar14;
      local_68 = *puVar10;
      FUN_02a44274(lVar14 + 0xd8,&local_68);
    }
  }
  *(long **)(lVar13 + 8) = param_2;
  *(long *)(lVar13 + 0x10) = lVar13;
  *(undefined8 *)(lVar13 + 0x18) = 0x140;
  *(undefined8 *)(lVar13 + 0x20) = 0x10;
  *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + -1;
  return lVar13;
}


