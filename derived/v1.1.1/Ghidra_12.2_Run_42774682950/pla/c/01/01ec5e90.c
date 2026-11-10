/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01ec5e90; name: FUN_01ec5e90
 */


void FUN_01ec5e90(long param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  undefined1 local_f0 [8];
  undefined8 local_e8;
  long *local_e0;
  undefined8 uStack_d8;
  undefined8 local_60;
  undefined8 uStack_58;
  long local_48;
  
  if ((*(long *)(param_1 + 0x220) == 0) || (FUN_009acf14(&local_48), local_48 == 0)) {
    return;
  }
  *(int *)(param_1 + 0x39c) = *(int *)(param_1 + 0x39c) + 1;
  FUN_009c69bc(&local_e0);
  if (local_e0 != (long *)0x0) {
    lVar6 = local_e0[0xb];
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
      (**(code **)(*local_e0 + 0x20))();
    }
  }
  local_e8 = 0;
  plVar7 = *(long **)(param_1 + 8);
  FUN_009c69bc(local_f0);
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
  lVar6 = (**(code **)(*plVar7 + 0x10))(plVar7,0x110,0x10);
  if (lVar6 == 0) {
    (**(code **)(*plVar7 + 0xb8))(plVar7);
  }
  local_e0 = (long *)0x0;
  uStack_d8 = 0;
  FUN_0095e070(&local_e0,param_1 + 0x230);
  local_60 = 0;
  uStack_58 = 0;
  FUN_008c4b3c(&local_60,param_3);
                    /* WARNING: Subroutine does not return */
  FUN_008a93d8(lVar6);
}


