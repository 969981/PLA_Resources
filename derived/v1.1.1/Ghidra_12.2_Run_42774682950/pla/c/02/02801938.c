/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02801938; name: FUN_02801938
 */


void FUN_02801938(long param_1,undefined8 param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  ulong uVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long local_78;
  long lStack_70;
  long local_68;
  long local_60;
  undefined8 *puStack_58;
  
  lVar6 = nn::os::GetCurrentThread();
  plVar1 = (long *)(param_1 + 0x78);
  do {
    if (*plVar1 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x6c));
        while (*plVar1 == 0) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = lVar6;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_028019a4;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = lVar6;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_028019a4:
  uVar3 = *(ulong *)(param_1 + 0x88);
  puVar2 = (undefined8 *)(param_1 + 0x98);
  if (uVar3 < *(ulong *)(param_1 + 0x90)) {
    FUN_01e61398(puVar2,uVar3,param_2);
    *(long *)(param_1 + 0x88) = *(long *)(param_1 + 0x88) + 0x20;
  }
  else {
    uVar9 = *(ulong *)(param_1 + 0xa0);
    lVar6 = (long)(uVar3 - *(long *)(param_1 + 0x80)) >> 5;
    uVar3 = lVar6 + 1;
    if (0x7ffffffffffffffe < uVar9) {
      uVar9 = 0x7fffffffffffffff;
    }
    if (uVar9 < uVar3) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar7 = *(ulong *)(param_1 + 0x90) - *(long *)(param_1 + 0x80);
    if ((ulong)(lVar7 >> 5) < uVar9 >> 1) {
      uVar8 = lVar7 >> 4;
      uVar9 = uVar3;
      if (uVar3 <= uVar8) {
        uVar9 = uVar8;
      }
    }
    local_60 = 0;
    puStack_58 = puVar2;
    if (uVar9 == 0) {
      local_78 = 0;
    }
    else {
      local_78 = (**(code **)(*(long *)*puVar2 + 0x10))((long *)*puVar2,uVar9 << 5,8);
      if (local_78 == 0) {
        (**(code **)(*(long *)*puVar2 + 0xb8))();
      }
    }
    lVar6 = local_78 + lVar6 * 0x20;
    local_60 = local_78 + uVar9 * 0x20;
    lStack_70 = lVar6;
    FUN_01e61398(puVar2,lVar6,param_2);
    local_68 = lVar6 + 0x20;
    FUN_01e614d0(param_1 + 0x80,&local_78);
    FUN_01e61578(&local_78);
  }
  *(undefined8 *)(param_1 + 0x78) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x6c));
  return;
}


