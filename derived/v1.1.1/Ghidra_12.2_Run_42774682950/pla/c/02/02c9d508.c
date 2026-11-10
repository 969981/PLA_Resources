/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c9d508; name: FUN_02c9d508
 */


undefined8
FUN_02c9d508(long param_1,undefined4 param_2,long param_3,long param_4,undefined8 param_5,
            long *param_6)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  char cVar4;
  bool bVar5;
  undefined4 uVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined8 local_58;
  
  lVar7 = nn::os::GetCurrentThread();
  plVar9 = (long *)(param_1 + 0x7e0);
  do {
    if (*plVar9 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x7d4));
        while (*plVar9 == 0) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar5) {
            *plVar9 = lVar7;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_02c9d584;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar5) {
      *plVar9 = lVar7;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_02c9d584:
  uVar3 = *(undefined4 *)(*(long *)(param_3 + 600) + 0x80);
  if (param_4 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = FUN_0028420c(*(undefined8 *)(param_1 + 0x80),param_4,uVar3);
  }
  uVar8 = FUN_00282f34(*(undefined8 *)(param_1 + 0x80),param_6,uVar6,uVar3,param_2,0,0);
  uVar11 = 0;
  if ((uVar8 & 1) != 0) {
    if ((*param_6 == 0) || ((int)param_6[1] != *(int *)(*param_6 + 0x2c))) {
      uVar11 = 0;
    }
    else {
      uVar11 = FUN_002669c8(param_6);
      FUN_002667f0(uVar11,param_5);
      local_58 = FUN_002669c8(param_6);
      plVar9 = (long *)FUN_02c9db58(param_1 + 0x658,&local_58);
      lVar7 = *(long *)(param_3 + 0x58);
      if (*(undefined8 **)(lVar7 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0);
      }
      if (*(long *)(lVar7 + 0x10) == 0) {
        uVar11 = (**(code **)**(undefined8 **)(lVar7 + 0x18))();
        *(undefined8 *)(lVar7 + 0x10) = uVar11;
      }
      piVar1 = (int *)(lVar7 + 0xc);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = *piVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      plVar10 = (long *)*plVar9;
      *plVar9 = param_3;
      if (plVar10 != (long *)0x0) {
        lVar7 = plVar10[0xb];
        piVar1 = (int *)(lVar7 + 0xc);
        do {
          iVar2 = *piVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar2 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar2 + -1 == 0) {
          *(undefined8 *)(lVar7 + 0x18) = 0;
          (**(code **)(*plVar10 + 0x20))();
        }
      }
      uVar11 = 1;
    }
  }
  *(undefined8 *)(param_1 + 0x7e0) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x7d4));
  return uVar11;
}


