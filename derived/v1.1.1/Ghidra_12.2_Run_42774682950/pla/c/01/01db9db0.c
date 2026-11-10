/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01db9db0; name: FUN_01db9db0
 */


void FUN_01db9db0(undefined8 *param_1,long *param_2,undefined8 param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  undefined1 *local_c0;
  code *local_b8;
  undefined1 *local_b0;
  undefined1 *puStack_a8;
  undefined1 auStack_a0 [96];
  long *local_40;
  long *local_38;
  
  if (((param_2[1] == 0) || (lVar8 = *param_2, uVar7 = FUN_02a43a8c(), lVar8 == 0)) ||
     ((uVar7 & 1) != 0)) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  if ((param_2[1] == 0) || (FUN_009acf14(&local_38), plVar6 = local_38, local_38 == (long *)0x0)) {
    *param_1 = 0;
  }
  else {
    FUN_01c0fe58(&local_40,*param_2);
    local_38 = local_40;
    FUN_01c0fed8(local_40,param_2,param_3);
    local_c0 = &LAB_01dbc730;
    local_b8 = FUN_01dbc76c;
    local_b0 = &LAB_01dbc770;
    puStack_a8 = &LAB_01dbc774;
    FUN_01c0ff10(param_1,plVar6,0x22,&local_38,&local_c0,0);
    pcVar5 = local_b8;
    if (local_b8 == (code *)0x0) {
      local_b8 = (code *)0x0;
    }
    else {
      local_b0 = (undefined1 *)0x0;
      puStack_a8 = (undefined1 *)0x0;
      local_c0 = (undefined1 *)0x0;
      local_b8 = (code *)0x0;
      (*pcVar5)(auStack_a0);
    }
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
    lVar8 = plVar6[0xb];
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
      (**(code **)(*plVar6 + 0x20))(plVar6);
    }
  }
  return;
}


