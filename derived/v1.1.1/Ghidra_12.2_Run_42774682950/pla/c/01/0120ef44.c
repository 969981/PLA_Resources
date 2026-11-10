/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0120ef44; name: FUN_0120ef44
 */


void FUN_0120ef44(long param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uVar6;
  code *pcVar7;
  long lVar8;
  long local_1a0;
  undefined1 *local_198;
  undefined8 uStack_190;
  undefined1 *local_140;
  code *local_138;
  code *local_130;
  undefined1 *local_128;
  long local_120;
  undefined1 *local_118;
  undefined8 uStack_110;
  undefined1 *local_c0;
  code *local_b8;
  code *local_b0;
  long *local_a8;
  long local_a0;
  code *local_98;
  undefined8 uStack_90;
  long *local_38;
  
  local_c0 = (undefined1 *)0x917389f633874ee9;
  local_b8 = (code *)0x39880ad;
  local_b0 = (code *)0xf;
  local_a8 = (long *)0x0;
  lVar5 = thunk_FUN_00d2ee28(param_1 + 0x180,&local_c0);
  if (local_a8 != (long *)0x0) {
    (**(code **)(*local_a8 + 0x20))();
  }
  FUN_0281e380(lVar5,param_2,0);
  FUN_0281e390(lVar5,param_3);
  local_38 = *(long **)(param_1 + 0x5d0);
  if (local_38 != (long *)0x0) {
    lVar8 = local_38[0xb];
    if (*(undefined8 **)(lVar8 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar8 + 0x10) == 0) {
      uVar6 = (**(code **)**(undefined8 **)(lVar8 + 0x18))();
      *(undefined8 *)(lVar8 + 0x10) = uVar6;
    }
    piVar1 = (int *)(lVar8 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  FUN_0281e3a4(lVar5,&local_38);
  if (local_38 != (long *)0x0) {
    lVar8 = local_38[0xb];
    piVar1 = (int *)(lVar8 + 0xc);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      *(undefined8 *)(lVar8 + 0x18) = 0;
      (**(code **)(*local_38 + 0x20))();
    }
  }
  local_98 = FUN_0121156c;
  uStack_90 = 0;
  local_c0 = &LAB_01214090;
  local_b8 = FUN_012140b4;
  local_b0 = FUN_012140b8;
  local_a8 = (long *)&LAB_012140cc;
  local_118 = &LAB_01211870;
  uStack_110 = 0;
  local_140 = &LAB_01214090;
  local_138 = FUN_012140b4;
  local_130 = FUN_012140b8;
  local_128 = &LAB_012140cc;
  pcVar7 = *(code **)(lVar5 + 0x298);
  local_198 = &LAB_01211968;
  uStack_190 = 0;
  local_1a0 = param_1;
  local_120 = param_1;
  local_a0 = param_1;
  if (pcVar7 != (code *)0x0) {
    *(undefined8 *)(lVar5 + 0x2a0) = 0;
    *(undefined8 *)(lVar5 + 0x2a8) = 0;
    *(undefined8 *)(lVar5 + 0x290) = 0;
    *(undefined8 *)(lVar5 + 0x298) = 0;
    (*pcVar7)(lVar5 + 0x2b0);
    if (local_b0 == (code *)0x0) goto LAB_0120f0fc;
  }
  (*local_b0)(&local_a0,lVar5 + 0x2b0);
  *(code **)(lVar5 + 0x298) = local_b8;
  *(long **)(lVar5 + 0x2a8) = local_a8;
  *(code **)(lVar5 + 0x2a0) = local_b0;
  *(undefined8 *)(lVar5 + 0x290) = local_c0;
LAB_0120f0fc:
  pcVar7 = *(code **)(lVar5 + 0x118);
  if (pcVar7 != (code *)0x0) {
    *(undefined8 *)(lVar5 + 0x120) = 0;
    *(undefined8 *)(lVar5 + 0x128) = 0;
    *(undefined8 *)(lVar5 + 0x110) = 0;
    *(undefined8 *)(lVar5 + 0x118) = 0;
    (*pcVar7)(lVar5 + 0x130);
  }
  if (local_130 != (code *)0x0) {
    (*local_130)(&local_120,lVar5 + 0x130);
    *(code **)(lVar5 + 0x118) = local_138;
    *(undefined1 **)(lVar5 + 0x128) = local_128;
    *(code **)(lVar5 + 0x120) = local_130;
    *(undefined8 *)(lVar5 + 0x110) = local_140;
  }
  pcVar7 = *(code **)(lVar5 + 0x218);
  if (pcVar7 != (code *)0x0) {
    *(undefined8 *)(lVar5 + 0x220) = 0;
    *(undefined8 *)(lVar5 + 0x228) = 0;
    *(undefined8 *)(lVar5 + 0x210) = 0;
    *(undefined8 *)(lVar5 + 0x218) = 0;
    (*pcVar7)(lVar5 + 0x230);
  }
  FUN_012140b8(&local_1a0,lVar5 + 0x230);
  *(code **)(lVar5 + 0x218) = FUN_012140b4;
  *(undefined1 **)(lVar5 + 0x228) = &LAB_012140cc;
  *(code **)(lVar5 + 0x220) = FUN_012140b8;
  *(undefined8 *)(lVar5 + 0x210) = &LAB_01214090;
  *(undefined1 *)(lVar5 + 0x91a) = 1;
  FUN_0281857c(lVar5);
  FUN_0120e340(param_1,**(undefined4 **)(param_1 + 0x5e0));
  FUN_012140b4(&local_1a0);
  pcVar7 = local_138;
  if (local_138 != (code *)0x0) {
    local_130 = (code *)0x0;
    local_128 = (undefined1 *)0x0;
    local_140 = (undefined1 *)0x0;
    local_138 = (code *)0x0;
    (*pcVar7)(&local_120);
  }
  pcVar7 = local_b8;
  if (local_b8 != (code *)0x0) {
    local_b0 = (code *)0x0;
    local_a8 = (long *)0x0;
    local_c0 = (undefined1 *)0x0;
    local_b8 = (code *)0x0;
    (*pcVar7)(&local_a0);
  }
  return;
}


