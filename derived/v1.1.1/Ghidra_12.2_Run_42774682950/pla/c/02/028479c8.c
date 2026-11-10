/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028479c8; name: FUN_028479c8
 */


undefined8 * FUN_028479c8(long *param_1,undefined8 *param_2)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined8 local_40;
  undefined1 auStack_38 [8];
  
  if (((*PTR_DAT_04379520 & 1) == 0) &&
     (iVar6 = __cxa_guard_acquire(PTR_DAT_04379520), puVar5 = PTR_DAT_04379528, iVar6 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar5,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar7 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (0xf < *(ulong *)(lVar7 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = param_1;
  *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
  puVar8 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x300,0x10);
  if (puVar8 == (undefined8 *)0x0) {
    (**(code **)(*param_1 + 0xb8))(param_1);
  }
  uVar11 = *param_2;
  local_40 = uVar11;
  FUN_02835b8c(puVar8,uVar11);
  *puVar8 = &PTR_LAB_0426fe68;
  puVar8[0x5d] = 0;
  puVar8[0xd] = &PTR_LAB_0426ffb0;
  *(undefined4 *)(puVar8 + 0x5e) = 0;
  puVar8[9] = &PTR_LAB_0426ff40;
  puVar8[10] = &PTR_LAB_0426ff88;
  lVar9 = FUN_02849fc8(auStack_38,uVar11,&local_40);
  if (lVar9 != 0) {
    piVar1 = (int *)(lVar9 + 0x50);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar10 = (long *)puVar8[0x5d];
  puVar8[0x5d] = 0;
  if (plVar10 != (long *)0x0) {
    plVar2 = plVar10 + 10;
    do {
      iVar6 = (int)*plVar2 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *(int *)plVar2 = iVar6;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*plVar10 + 0x10))();
    }
  }
  puVar8[0x5d] = lVar9;
  puVar8[9] = &PTR_LAB_042700b0;
  puVar8[10] = &PTR_LAB_042700f8;
  *puVar8 = &PTR_LAB_0426ffd8;
  puVar8[1] = param_1;
  puVar8[0xd] = &PTR_LAB_04270120;
  puVar8[2] = puVar8;
  puVar8[3] = 0x300;
  puVar8[4] = 0x10;
  *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
  return puVar8;
}


