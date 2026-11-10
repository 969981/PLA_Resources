/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01092d30; name: FUN_01092d30
 */


void FUN_01092d30(long *param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar7;
  long lVar8;
  byte in_stack_00000008;
  undefined1 *local_e0;
  code *local_d8;
  undefined1 *local_d0;
  undefined1 *local_c8;
  long alStack_c0 [13];
  long *local_58;
  undefined4 local_48;
  int iStack_44;
  
  iStack_44 = FUN_010924e0();
  if (iStack_44 < 1) {
    *param_1 = 0;
    return;
  }
  local_48 = 1;
  FUN_010938a8(param_1);
  lVar8 = *param_1;
  if (lVar8 != 0) {
    lVar7 = *(long *)(lVar8 + 0x58);
    if (*(undefined8 **)(lVar7 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar7 + 0x10) == 0) {
      uVar6 = (**(code **)**(undefined8 **)(lVar7 + 0x18))();
      *(undefined8 *)(lVar7 + 0x10) = uVar6;
    }
    piVar1 = (int *)(lVar7 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  local_e0 = &LAB_01093c84;
  local_d8 = FUN_01093ef0;
  local_d0 = &LAB_010943e0;
  local_c8 = &LAB_01094454;
  alStack_c0[0] = lVar8;
  FUN_01f0cf24(&local_58,&iStack_44,&local_48,in_x5,in_x6,in_x7,in_stack_00000008 & 1,param_2,
               &local_e0);
  pcVar5 = local_d8;
  if (local_58 != (long *)0x0) {
    lVar8 = local_58[0xb];
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
      (**(code **)(*local_58 + 0x20))();
      pcVar5 = local_d8;
    }
  }
  if (pcVar5 != (code *)0x0) {
    local_d0 = (undefined1 *)0x0;
    local_c8 = (undefined1 *)0x0;
    local_e0 = (undefined1 *)0x0;
    local_d8 = (code *)0x0;
    (*pcVar5)(alStack_c0);
  }
  return;
}


