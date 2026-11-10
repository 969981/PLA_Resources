/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c62e18; name: FUN_02c62e18
 */


void FUN_02c62e18(long param_1,int param_2,undefined4 param_3)

{
  long *plVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  undefined1 auStack_5c [28];
  
  iVar5 = FUN_02c6849c(*(undefined8 *)(param_1 + 0x98));
  if (iVar5 != param_2) {
    FUN_02c79bc4(*(undefined8 *)(param_1 + 0x98),param_2);
    FUN_02c7f4bc(*(undefined8 *)(param_1 + 0x98),param_3);
    uVar6 = FUN_02c702e0(*(undefined8 *)(param_1 + 0x98));
    uVar7 = FUN_02c7061c(*(undefined8 *)(param_1 + 0x98));
    uVar2 = 2;
    if ((uVar7 & 1) == 0) {
      uVar2 = uVar6 & 1;
    }
    uVar8 = FUN_02c8b630(param_2,param_3,uVar2);
    FUN_02c7fe7c(*(undefined8 *)(param_1 + 0x98),uVar2 == 0);
    FUN_02c801cc(*(undefined8 *)(param_1 + 0x98),uVar2 == 1);
    FUN_02c8051c(*(undefined8 *)(param_1 + 0x98),uVar7 & 1);
    FUN_02c7ac88(*(undefined8 *)(param_1 + 0x98),uVar8);
    uVar8 = FUN_02c6f5e8(*(undefined8 *)(param_1 + 0x98));
    uVar8 = FUN_02c8b41c(param_2,param_3,uVar8);
    FUN_02c7f16c(*(undefined8 *)(param_1 + 0x98),uVar8);
    uVar10 = FUN_02c6d278(*(undefined8 *)(param_1 + 0x98));
    if ((uVar10 & 1) == 0) {
      uVar8 = FUN_02c6849c(*(undefined8 *)(param_1 + 0x98));
      lVar12 = *(long *)(param_1 + 0x98);
      lVar11 = nn::os::GetCurrentThread();
      plVar1 = (long *)(lVar12 + 0x30);
      do {
        if (*plVar1 != 0) {
          ClearExclusiveLocal();
          do {
            nn::os::WaitLightEvent((LightEventType *)(lVar12 + 0x24));
            while (*plVar1 == 0) {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar4) {
                *plVar1 = lVar11;
                cVar3 = ExclusiveMonitorsStatus();
              }
              if (cVar3 == '\0') goto LAB_02c62f64;
            }
            ClearExclusiveLocal();
          } while( true );
        }
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lVar11;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
LAB_02c62f64:
      uVar9 = FUN_02c69ba8(lVar12);
      *(undefined8 *)(lVar12 + 0x30) = 0;
      nn::os::SignalLightEvent((LightEventType *)(lVar12 + 0x24));
      FUN_02c51f70(auStack_5c,uVar8,uVar9);
      FUN_02c80efc(*(undefined8 *)(param_1 + 0x98),auStack_5c);
      FUN_02c7ead4(*(undefined8 *)(param_1 + 0x98),0);
    }
    FUN_02c5bb1c(param_1,1);
  }
  return;
}


