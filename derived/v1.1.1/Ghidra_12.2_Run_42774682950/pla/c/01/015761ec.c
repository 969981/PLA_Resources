/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 015761ec; name: FUN_015761ec
 */


undefined8 * FUN_015761ec(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  int iVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 *local_50;
  undefined8 uStack_48;
  undefined8 local_38;
  
  if (((*PTR_DAT_04379520 & 1) == 0) &&
     (iVar6 = __cxa_guard_acquire(PTR_DAT_04379520), puVar1 = PTR_DAT_04379528, iVar6 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar1,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar7 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (0xf < *(ulong *)(lVar7 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = param_1;
  *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
  puVar8 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x4f0,0x10);
  if (puVar8 == (undefined8 *)0x0) {
    (**(code **)(*param_1 + 0xb8))(param_1);
  }
  local_50 = (undefined8 *)0x0;
  uStack_48 = 0;
  FUN_0156cf88(&local_50,param_2);
  FUN_01513474(puVar8,&local_50,param_3);
  puVar5 = local_50;
  *puVar8 = &PTR_LAB_04218ba8;
  puVar8[0x90] = 0;
  puVar8[9] = &PTR_LAB_04218c08;
  puVar8[10] = &PTR_LAB_04218c50;
  puVar8[0x91] = &DAT_cbf29ce484222645;
  puVar8[0x92] = &DAT_03996322;
  puVar8[0x93] = 0;
  puVar8[0x94] = 0;
  *(undefined4 *)(puVar8 + 0x95) = 0;
  puVar8[0x96] = 0;
  puVar8[0x98] = 0;
  puVar8[0x99] = 0;
  puVar8[0x9a] = 0;
  puVar8[0x9b] = 0;
  puVar1 = PTR_DAT_0437f998 + 0x10;
  puVar8[0x9c] = 0;
  puVar8[0x97] = puVar1;
  if (local_50 != (undefined8 *)0x0) {
    piVar2 = (int *)(local_50 + 1);
    do {
      iVar6 = *piVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = iVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 + -1 == 0) {
      local_50[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar9 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar9;
      local_38 = *puVar5;
      FUN_02a44274(lVar9 + 0xd8,&local_38);
    }
  }
  puVar8[1] = param_1;
  puVar8[2] = puVar8;
  puVar8[3] = 0x4f0;
  puVar8[4] = 0x10;
  *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
  return puVar8;
}


