/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01b6e6fc; name: FUN_01b6e6fc
 */


void FUN_01b6e6fc(long param_1,long param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  int iVar6;
  long lVar7;
  int local_3c;
  long *local_38;
  
  if (((*(int *)(param_2 + 0xf0) == 0x18) && (*(long *)(param_1 + 0x3d0) != 0)) &&
     (FUN_01a111e4(&local_38,*(long *)(param_1 + 0x3d0)), local_38 != (long *)0x0)) {
    lVar7 = *(long *)(param_2 + 0x118);
    plVar5 = *(long **)(param_2 + 0x130);
    if (plVar5 == (long *)0x0) {
      iVar4 = 1;
      if (lVar7 == -0x11b0c2d8ce712917) {
        iVar4 = 2;
      }
      iVar6 = 3;
      if (lVar7 != -0x3643fe5bcff0c525) {
        iVar6 = iVar4;
      }
    }
    else {
      (**(code **)(*plVar5 + 0x18))(plVar5);
      iVar4 = 1;
      if (lVar7 == -0x11b0c2d8ce712917) {
        iVar4 = 2;
      }
      iVar6 = 3;
      if (lVar7 != -0x3643fe5bcff0c525) {
        iVar6 = iVar4;
      }
      (**(code **)(*plVar5 + 0x20))(plVar5);
    }
    local_3c = iVar6;
    FUN_01e4a0dc(local_38,&local_3c);
    if (local_3c == 3) {
      FUN_01b6ea8c(param_1);
      FUN_01b77f14(param_1,param_1 + 0x4c0);
      FUN_01b6eaf4(param_1,param_2);
      FUN_01b6ec48(param_1);
    }
    if (local_38 != (long *)0x0) {
      lVar7 = local_38[0xb];
      piVar1 = (int *)(lVar7 + 0xc);
      do {
        iVar4 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar4 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar4 + -1 == 0) {
        *(undefined8 *)(lVar7 + 0x18) = 0;
        (**(code **)(*local_38 + 0x20))();
      }
    }
  }
  return;
}


