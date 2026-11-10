/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01e28e10; name: FUN_01e28e10
 */


void FUN_01e28e10(undefined8 param_1,long *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  undefined8 local_98;
  undefined8 uStack_90;
  long local_88;
  undefined8 *local_80;
  undefined8 uStack_78;
  undefined8 local_70 [2];
  
  local_80 = (undefined8 *)0x0;
  uStack_78 = 0;
  FUN_017e742c(&local_80,*param_2 + 0x68);
  if (local_80 == (undefined8 *)0x0) {
    local_88 = 0;
  }
  else {
    FUN_017e9e98(&local_88);
    puVar5 = local_80;
    if (local_80 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_80 + 1);
      do {
        iVar6 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar6 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar6 + -1 == 0) {
        local_80[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar7 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar7;
        local_98 = *puVar5;
        FUN_02a44274(lVar7 + 0xd8,&local_98);
      }
    }
  }
  plVar8 = *(long **)(local_88 + 0x78);
  if (((*PTR_DAT_04379618 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_04379618), iVar6 != 0))
  {
    FUN_00100250(PTR_LAB_0437a720,PTR_DAT_04379620,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379618);
  }
  *(undefined8 *)PTR_DAT_04379628 = *(undefined8 *)PTR_DAT_04379620;
  (**(code **)(*(long *)*param_2 + 0x18))(&local_80);
  local_98 = 0;
  uStack_90 = 0;
  FUN_0109c02c(&local_98,&local_80);
  puVar5 = local_80;
  if (local_80 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_80 + 1);
    do {
      iVar6 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar6 + -1 == 0) {
      local_80[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar7 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar7;
      local_70[0] = *puVar5;
      FUN_02a44274(lVar7 + 0xd8,local_70);
    }
  }
  if (((*PTR_DAT_04379520 & 1) == 0) &&
     (iVar6 = __cxa_guard_acquire(PTR_DAT_04379520), puVar4 = PTR_DAT_04379528, iVar6 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar4,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar7 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (0xf < *(ulong *)(lVar7 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = plVar8;
  *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
  lVar7 = (**(code **)(*plVar8 + 0x10))(plVar8,0x80,8);
  if (lVar7 == 0) {
    (**(code **)(*plVar8 + 0xb8))(plVar8);
  }
  local_80 = (undefined8 *)0x0;
  uStack_78 = 0;
  FUN_0125d688(&local_80,&local_98);
                    /* WARNING: Subroutine does not return */
  FUN_008a93d8(lVar7);
}


