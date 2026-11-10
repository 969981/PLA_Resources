/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008c4e4c; name: FUN_008c4e4c
 */


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008c4e4c(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  undefined8 *puVar8;
  long *plVar9;
  int *piVar10;
  
  puVar4 = PTR_DAT_043796d0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = (long)(puVar4 + 0x10);
  param_1[4] = 0;
  param_1[5] = 0;
  puVar4 = PTR_DAT_04379520;
  if (((*PTR_DAT_04379520 & 1) == 0) &&
     (iVar6 = __cxa_guard_acquire(PTR_DAT_04379520), puVar5 = PTR_DAT_04379528, iVar6 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar5,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  puVar5 = PTR_DAT_04379528;
  lVar7 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if ((lVar7 == 0) || (*(long *)(lVar7 + 0x80) == 0)) {
    plVar9 = (long *)0x0;
  }
  else {
    plVar9 = *(long **)(lVar7 + *(long *)(lVar7 + 0x80) * 8 + -8);
  }
  *(undefined2 *)(param_1 + 0xb) = 0;
  *param_1 = (long)&PTR_FUN_041b69b0;
  param_1[1] = (long)plVar9;
  param_1[0xe] = 0;
  param_1[9] = (long)&PTR_LAB_041b6a08;
  param_1[10] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  if (((*puVar4 & 1) == 0) &&
     (iVar6 = __cxa_guard_acquire(PTR_DAT_04379520), puVar4 = PTR_DAT_04379528, iVar6 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar4,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar7 = nn::os::GetTlsValue(*(undefined4 *)puVar5);
  if (0xf < *(ulong *)(lVar7 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = plVar9;
  *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
  puVar8 = (undefined8 *)(**(code **)(*plVar9 + 0x10))(plVar9,0xb8,8);
  if (puVar8 == (undefined8 *)0x0) {
    (**(code **)(*plVar9 + 0xb8))(plVar9);
    _DAT_000000b0 = 0;
    _DAT_000000a8 = 0;
    _DAT_000000a0 = 0;
    _DAT_00000098 = 0;
    _DAT_00000090 = 0;
    _DAT_00000088 = 0;
    _DAT_00000080 = 0;
    _DAT_00000078 = 0;
    _DAT_00000070 = 0;
    _DAT_00000068 = 0;
    _DAT_00000060 = 0;
    _DAT_00000058 = 0;
    _DAT_00000050 = 0;
    _DAT_00000048 = 0;
    _DAT_00000040 = 0;
    _DAT_00000038 = 0;
    _DAT_00000030 = 0;
    _DAT_00000028 = 0;
    _DAT_00000020 = 0;
    _DAT_00000018 = 0;
    uRam0000000000000000 = 0;
    _DAT_00000010 = 0;
    _DAT_00000008 = 0;
    FUN_008c5ef4();
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  puVar8[0x15] = 0;
  puVar8[0x16] = 0;
  puVar8[0x13] = 0;
  puVar8[0x14] = 0;
  puVar8[0x11] = 0;
  puVar8[0x12] = 0;
  puVar8[0xf] = 0;
  puVar8[0x10] = 0;
  puVar8[0xd] = 0;
  puVar8[0xe] = 0;
  puVar8[0xb] = 0;
  puVar8[0xc] = 0;
  puVar8[8] = 0;
  puVar8[9] = 0;
  puVar8[6] = 0;
  puVar8[7] = 0;
  puVar8[4] = 0;
  puVar8[5] = 0;
  puVar8[2] = 0;
  puVar8[3] = 0;
  *puVar8 = 0;
  puVar8[1] = 0;
  piVar10 = (int *)(puVar8 + 10);
  piVar10[0] = 0;
  piVar10[1] = 0;
  FUN_008c5ef4();
  puVar8[0x16] = 0;
  *puVar8 = &PTR_FUN_041b6a58;
  puVar8[1] = plVar9;
  puVar8[9] = &PTR_LAB_041b6dc8;
  puVar8[2] = puVar8;
  puVar8[3] = 0xb8;
  puVar8[4] = 8;
  *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar10,0x10);
    if (bVar3) {
      *piVar10 = *piVar10 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  plVar9 = (long *)param_1[0xe];
  param_1[0xe] = 0;
  if (plVar9 != (long *)0x0) {
    plVar1 = plVar9 + 10;
    do {
      iVar6 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar6;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*plVar9 + 0x10))();
    }
  }
  param_1[0xe] = (long)puVar8;
  return;
}


