/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a2156c; name: FUN_01a2156c
 */


long * FUN_01a2156c(long *param_1,undefined8 *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long *local_38;
  
  if (((*PTR_DAT_04379520 & 1) == 0) &&
     (iVar5 = __cxa_guard_acquire(PTR_DAT_04379520), puVar4 = PTR_DAT_04379528, iVar5 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar4,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (0xf < *(ulong *)(lVar6 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_1;
  *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
  plVar7 = (long *)(**(code **)(*param_1 + 0x10))(param_1,0x310,0x10);
  if (plVar7 == (long *)0x0) {
    (**(code **)(*param_1 + 0xb8))(param_1);
  }
  local_38 = (long *)*param_2;
  *param_2 = 0;
  FUN_0151ee6c(plVar7,&local_38);
  plVar7[0x59] = 0;
  puVar4 = PTR_DAT_04382410;
  plVar7[0x5a] = 0;
  *plVar7 = (long)(puVar4 + 0x10);
  plVar7[0x5b] = 0;
  plVar7[0x5c] = 0;
  plVar7[0x5d] = 0;
  plVar7[9] = (long)(puVar4 + 0x110);
  plVar7[10] = (long)(puVar4 + 0x1f0);
  plVar7[0x58] = (long)(PTR_DAT_0437f998 + 0x10);
  nn::os::InitializeLightEvent((long)plVar7 + 0x2f4,0,1);
  plVar7[0x60] = 0;
  if (local_38 != (long *)0x0) {
    lVar8 = local_38[0xb];
    piVar1 = (int *)(lVar8 + 0xc);
    do {
      iVar5 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar5 + -1 == 0) {
      *(undefined8 *)(lVar8 + 0x18) = 0;
      (**(code **)(*local_38 + 0x20))();
    }
  }
  plVar7[1] = (long)param_1;
  plVar7[2] = (long)plVar7;
  plVar7[3] = 0x310;
  plVar7[4] = 0x10;
  *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
  return plVar7;
}


