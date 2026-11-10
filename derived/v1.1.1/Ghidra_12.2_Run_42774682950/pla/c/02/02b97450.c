/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b97450; name: FUN_02b97450
 */


void FUN_02b97450(long *param_1,long *param_2,undefined8 *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  int iVar5;
  undefined8 *puVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  
  puVar6 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x90,8);
  if (puVar6 == (undefined8 *)0x0) {
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    if (((*PTR_DAT_04379520 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_04379520), puVar4 = PTR_DAT_04379528, iVar5 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar4,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar7 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar7 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = param_2;
    *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
    *puVar6 = *param_3;
    uVar9 = param_3[1];
    param_3[1] = 0;
    puVar6[1] = uVar9;
    puVar6[2] = param_3[2];
    puVar6[3] = param_3[3];
    plVar8 = (long *)param_3[1];
    *param_3 = 0;
    param_3[1] = 0;
    if (plVar8 != (long *)0x0) {
      plVar1 = plVar8 + 10;
      do {
        iVar5 = (int)*plVar1 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = iVar5;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar5 == 0) {
        (**(code **)(*plVar8 + 0x10))();
      }
    }
    param_3[2] = 0xffffffffffffffff;
    param_3[3] = 0;
    puVar6[0x10] = 0xffffffffffffffff;
    *(undefined1 *)((long)puVar6 + 0x8a) = 1;
    *(undefined2 *)(puVar6 + 0x11) = 0;
    puVar6[0xe] = 0;
    puVar6[0xf] = 0;
    puVar6[0xc] = 0;
    puVar6[0xd] = 0;
    puVar6[10] = 0;
    puVar6[0xb] = 0;
    puVar6[8] = 0;
    puVar6[9] = 0;
    puVar6[6] = 0;
    puVar6[7] = 0;
    puVar6[4] = 0;
    puVar6[5] = 0;
    *param_1 = (long)puVar6;
    param_1[1] = (long)param_2;
    param_1[2] = 0x90;
    param_1[3] = 8;
    *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
  }
  return;
}


