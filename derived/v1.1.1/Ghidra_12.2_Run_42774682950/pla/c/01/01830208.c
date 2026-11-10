/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01830208; name: FUN_01830208
 */


undefined1  [16] FUN_01830208(long param_1)

{
  long *plVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  long lVar8;
  undefined1 auVar9 [16];
  float fVar10;
  ulong unaff_d8;
  undefined8 in_register_00005108;
  float fVar11;
  long local_a0;
  long lStack_98;
  char local_90;
  undefined7 uStack_8f;
  float local_7c;
  long *local_38;
  
  plVar1 = (long *)(param_1 + 0x280);
  lVar8 = *plVar1;
  lVar7 = nn::os::GetCurrentThread();
  if (lVar7 == lVar8) {
    bVar6 = false;
    lVar7 = 0;
    if (*(char *)(param_1 + 0x290) == '\0') goto LAB_01830290;
LAB_018303a8:
    unaff_d8 = (ulong)*(uint *)(param_1 + 0x2c4);
    in_register_00005108 = 0;
    bVar4 = false;
    if (bVar6) {
LAB_01830298:
      *(undefined8 *)(lVar7 + 0x10) = 0;
      nn::os::SignalLightEvent((LightEventType *)(lVar7 + 4));
    }
  }
  else {
    lVar7 = param_1 + 0x270;
    lVar8 = nn::os::GetCurrentThread();
    do {
      if (*plVar1 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x274));
          while (*plVar1 == 0) {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar6) {
              *plVar1 = lVar8;
              cVar5 = ExclusiveMonitorsStatus();
            }
            if (cVar5 == '\0') goto LAB_01830284;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar8;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
LAB_01830284:
    bVar6 = true;
    if (*(char *)(param_1 + 0x290) != '\0') goto LAB_018303a8;
LAB_01830290:
    bVar4 = true;
    if (bVar6) goto LAB_01830298;
  }
  if (!bVar4) goto LAB_01830310;
  FUN_009c69bc(&local_38,param_1);
  lStack_98 = local_38[0x1b];
  local_a0 = local_38[0x1a];
  FUN_0182efb8(&local_90,param_1,&local_a0);
  if (local_90 == '\0') {
    bVar6 = false;
    fVar10 = 0.0;
    if (local_38 == (long *)0x0) goto LAB_01830308;
LAB_018302ec:
    lVar7 = local_38[0xb];
    piVar2 = (int *)(lVar7 + 0xc);
    do {
      iVar3 = *piVar2;
      cVar5 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = iVar3 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar3 + -1 != 0) goto LAB_01830308;
    *(undefined8 *)(lVar7 + 0x18) = 0;
    (**(code **)(*local_38 + 0x20))();
    if (bVar6) goto LAB_0183035c;
  }
  else {
    bVar6 = true;
    local_90 = '\0';
    fVar10 = local_7c;
    if (local_38 != (long *)0x0) goto LAB_018302ec;
LAB_01830308:
    if (bVar6) {
LAB_0183035c:
      FUN_009c69bc(&local_90,param_1);
      plVar1 = (long *)CONCAT71(uStack_8f,local_90);
      fVar11 = *(float *)((long)plVar1 + 0xd4);
      if (plVar1 != (long *)0x0) {
        lVar7 = plVar1[0xb];
        piVar2 = (int *)(lVar7 + 0xc);
        do {
          iVar3 = *piVar2;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar6) {
            *piVar2 = iVar3 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar3 + -1 == 0) {
          *(undefined8 *)(lVar7 + 0x18) = 0;
          (**(code **)(*plVar1 + 0x20))();
        }
      }
      unaff_d8 = (ulong)(uint)(fVar10 - fVar11);
      in_register_00005108 = 0;
      goto LAB_01830310;
    }
  }
  unaff_d8 = 0;
  in_register_00005108 = 0;
LAB_01830310:
  auVar9._8_8_ = in_register_00005108;
  auVar9._0_8_ = unaff_d8;
  return auVar9;
}


