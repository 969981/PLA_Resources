/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c45e30; name: FUN_02c45e30
 */


undefined8 * FUN_02c45e30(undefined8 param_1,long *param_2,long *param_3)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  undefined8 *puVar8;
  long *plVar9;
  long lVar10;
  
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
  *(long **)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = param_2;
  *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
  puVar8 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0xf8,8);
  if (puVar8 == (undefined8 *)0x0) {
    (**(code **)(*param_2 + 0xb8))(param_2);
  }
  FUN_02a74588(puVar8);
  *puVar8 = &PTR_LAB_0428a698;
  puVar8[9] = &PTR_LAB_0428a6d8;
  puVar8[0xb] = 0;
  puVar8[0xc] = 0;
  puVar8[0xf] = 0;
  puVar8[0xd] = 0;
  puVar8[0xe] = 0;
  FUN_0087dfb8(puVar8 + 0x10);
  FUN_0087e1f0(puVar8 + 0x15);
  FUN_0087ddc8((long)puVar8 + 0xc4);
  lVar10 = *param_3;
  if (lVar10 != 0) {
    piVar1 = (int *)(lVar10 + 0x50);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar9 = (long *)puVar8[0xb];
  puVar8[0xb] = lVar10;
  if (plVar9 != (long *)0x0) {
    plVar2 = plVar9 + 10;
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
      (**(code **)(*plVar9 + 0x10))();
    }
  }
  puVar8[1] = param_2;
  puVar8[2] = puVar8;
  puVar8[3] = 0xf8;
  puVar8[4] = 8;
  *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
  return puVar8;
}


