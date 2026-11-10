/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01b780b4; name: FUN_01b780b4
 */


void FUN_01b780b4(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  long *local_48;
  
  if ((*(long *)(param_1 + 0x2a0) != 0) && (FUN_009acf14(&local_48), local_48 != (long *)0x0)) {
    if (0.0 < *(float *)(param_1 + 0x3f4)) {
      plVar7 = *(long **)(param_1 + 8);
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
      *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = plVar7;
      *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
      lVar6 = (**(code **)(*plVar7 + 0x10))(plVar7,0xd0,0x10);
      if (lVar6 == 0) {
        (**(code **)(*plVar7 + 0xb8))(plVar7);
      }
                    /* WARNING: Subroutine does not return */
      FUN_008a93d8(lVar6);
    }
    lVar6 = local_48[0xb];
    piVar1 = (int *)(lVar6 + 0xc);
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
      *(undefined8 *)(lVar6 + 0x18) = 0;
      (**(code **)(*local_48 + 0x20))();
    }
  }
  return;
}


