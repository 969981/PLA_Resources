/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a4c2c8; name: FUN_02a4c2c8
 */


void FUN_02a4c2c8(long *param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 *puVar11;
  long *plVar12;
  long *local_48;
  undefined8 local_38;
  
  puVar4 = PTR_DAT_043796d0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = (long)(puVar4 + 0x10);
  param_1[4] = 0;
  param_1[5] = 0;
  if (((*PTR_DAT_04379520 & 1) == 0) &&
     (iVar7 = __cxa_guard_acquire(PTR_DAT_04379520), puVar4 = PTR_DAT_04379528, iVar7 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar4,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar8 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (lVar8 == 0) {
    lVar10 = 0;
  }
  else {
    lVar10 = 0;
    if (*(long *)(lVar8 + 0x80) != 0) {
      lVar10 = *(long *)(lVar8 + *(long *)(lVar8 + 0x80) * 8 + -8);
    }
  }
  *param_1 = (long)&PTR_LAB_0427db30;
  param_1[1] = lVar10;
  param_1[9] = (long)&PTR_LAB_0427db78;
  param_1[10] = (long)&DAT_0427dc58;
  plVar12 = param_1 + 0xb;
  *plVar12 = 0;
  param_1[0xc] = 0;
  puVar4 = PTR_DAT_04379498;
  if (((*PTR_DAT_04379498 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0))
  {
    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379498);
  }
  puVar6 = PTR_DAT_043794a8;
  puVar5 = PTR_DAT_043794a0;
  uVar9 = *(undefined8 *)PTR_DAT_043794a0;
  *(undefined8 *)PTR_DAT_043794a8 = uVar9;
  FUN_02a43e4c(&local_48,uVar9,param_1 + 10);
  puVar11 = (undefined8 *)*plVar12;
  *plVar12 = 0;
  if (puVar11 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar11 + 1);
    do {
      iVar7 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar7 + -1 == 0) {
      puVar11[2] = 0;
      if (((*puVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar8 = *(long *)puVar5;
      *(long *)puVar6 = lVar8;
      local_38 = *puVar11;
      FUN_02a44274(lVar8 + 0xd8,&local_38);
    }
  }
  param_1[0xb] = (long)local_48;
  param_1[0xc] = *local_48;
  return;
}


