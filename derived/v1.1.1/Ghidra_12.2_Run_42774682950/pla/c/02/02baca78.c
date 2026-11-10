/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02baca78; name: FUN_02baca78
 */


void FUN_02baca78(long param_1,long *param_2,int param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  long local_48;
  
  if (*(long *)(param_1 + 0x210) != 0) {
    if (*(int *)(*(long *)(param_1 + 0x210) + 8) == param_3) {
      return;
    }
    FUN_02bacc58(param_1 + 0x210,0);
  }
  plVar9 = *(long **)(param_1 + 8);
  plVar6 = (long *)(**(code **)(*plVar9 + 0x10))(plVar9,0x38,8);
  if (plVar6 == (long *)0x0) {
    plVar9 = (long *)0x0;
    uVar11 = 0;
    uVar10 = 0;
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
    *(long **)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = plVar9;
    *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
    *plVar6 = param_2[0xb];
    *(int *)(plVar6 + 1) = param_3;
    plVar6[2] = 0;
    plVar6[3] = 0;
    plVar6[4] = 0;
    plVar6[5] = 0;
    plVar6[6] = 0;
    local_58 = 0;
    local_68 = 0x20;
    uStack_60 = 0x10;
    (**(code **)(*param_2 + 0x30))(&local_48,param_2,&local_68,2,0,0);
    plVar8 = (long *)plVar6[2];
    plVar6[2] = 0;
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
    plVar6[2] = local_48;
    plVar6[3] = 0;
    plVar6[5] = 0;
    uVar10 = 8;
    uVar11 = 0x38;
    *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
  }
  FUN_02bacc58(param_1 + 0x210,plVar6);
  *(long **)(param_1 + 0x218) = plVar9;
  *(undefined8 *)(param_1 + 0x220) = uVar11;
  *(undefined8 *)(param_1 + 0x228) = uVar10;
  return;
}


