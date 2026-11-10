/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 012514cc; name: FUN_012514cc
 */


void FUN_012514cc(long param_1,ulong param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined4 *puVar9;
  ulong uVar10;
  long lVar11;
  long *local_38;
  
  uVar7 = FUN_012510b8();
  FUN_012511e4(param_1);
  local_38 = *(long **)(param_1 + 0x5b0);
  if (local_38 != (long *)0x0) {
    lVar11 = local_38[0xb];
    if (*(undefined8 **)(lVar11 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar11 + 0x10) == 0) {
      uVar8 = (**(code **)**(undefined8 **)(lVar11 + 0x18))();
      *(undefined8 *)(lVar11 + 0x10) = uVar8;
    }
    piVar1 = (int *)(lVar11 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  FUN_0281e3a4(uVar7,&local_38);
  if (local_38 != (long *)0x0) {
    lVar11 = local_38[0xb];
    piVar1 = (int *)(lVar11 + 0xc);
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
      *(undefined8 *)(lVar11 + 0x18) = 0;
      (**(code **)(*local_38 + 0x20))();
    }
  }
  puVar9 = (undefined4 *)FUN_01251400(param_1);
  FUN_0281e390(uVar7,puVar9[1]);
  FUN_0281e380(uVar7,*puVar9,0);
  if ((param_2 & 1) == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_0124efdc(param_1);
    uVar5 = uVar5 ^ 1;
  }
  if (*(int *)(*(long *)(param_1 + 0x1270) + (ulong)*(byte *)(param_1 + 0x12a8) * 4) == 0) {
    uVar6 = FUN_0123b66c();
    uVar5 = uVar5 & uVar6;
  }
  FUN_0281e398(uVar7,uVar5 & 1);
  FUN_0281857c(uVar7);
  FUN_0125168c(param_1,0);
  uVar10 = FUN_0124efdc(param_1);
  if ((uVar10 & 1) == 0) {
    if ((*(int *)(*(long *)(param_1 + 0x1270) + (ulong)*(byte *)(param_1 + 0x12a8) * 4) == 0) &&
       (uVar10 = FUN_0123b66c(), (uVar10 & 1) == 0)) {
      FUN_0124f2d8(param_1,2);
    }
    else {
      FUN_0124f2d8(param_1,0);
      FUN_0125168c(param_1,1);
    }
  }
  else {
    FUN_0124f2d8(param_1,1);
  }
  return;
}


