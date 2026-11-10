/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00994444; name: FUN_00994444
 */


void FUN_00994444(long param_1,undefined1 param_2,undefined8 param_3,int param_4,uint param_5,
                 uint param_6)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  undefined8 uVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  long *local_58;
  undefined2 local_48;
  undefined1 local_46;
  undefined1 local_44 [4];
  
  local_44[0] = param_2;
  if (param_4 == 0x14) {
    uVar9 = FUN_00934f94(*(undefined8 *)(*(long *)(param_1 + 0x330) + 0xd0));
    if ((uVar9 & 1) == 0) {
      param_4 = FUN_009938e4(param_1);
    }
    else {
      param_4 = 0;
    }
  }
  FUN_00956dac(&local_58,param_3);
  plVar5 = local_58;
  if (local_58 != (long *)0x0) {
    lVar10 = local_58[0xb];
    if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar10 + 0x10) == 0) {
      uVar6 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
      *(undefined8 *)(lVar10 + 0x10) = uVar6;
    }
    piVar1 = (int *)(lVar10 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar7 = (long *)FUN_00994624(param_1 + 0x68,local_44);
  plVar8 = (long *)*plVar7;
  *plVar7 = 0;
  if (plVar8 != (long *)0x0) {
    lVar10 = plVar8[0xb];
    piVar1 = (int *)(lVar10 + 0xc);
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
      *(undefined8 *)(lVar10 + 0x18) = 0;
      (**(code **)(*plVar8 + 0x20))();
    }
  }
  *plVar7 = (long)plVar5;
  *(int *)(plVar7 + 1) = param_4;
  *(undefined1 *)((long)plVar7 + 0xc) = 1;
  *(undefined2 *)((long)plVar7 + 0xd) = local_48;
  *(undefined1 *)((long)plVar7 + 0xf) = local_46;
  plVar7[2] = 0x3f8000003f800000;
  *(undefined1 *)(plVar7 + 3) = 0;
  *(bool *)((long)plVar7 + 0x19) = param_4 != 0;
  if (local_58 != (long *)0x0) {
    lVar10 = local_58[0xb];
    piVar1 = (int *)(lVar10 + 0xc);
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
      *(undefined8 *)(lVar10 + 0x18) = 0;
      (**(code **)(*local_58 + 0x20))();
    }
  }
  if ((param_6 & 1) == 0) {
    FUN_0099494c(param_1,local_44[0]);
    FUN_0099516c(param_1,local_44[0],1);
  }
  if ((*(char *)(param_1 + 0x560) == '\0') && ((param_5 & 1) == 0)) {
    FUN_00995880(param_1,local_44);
  }
  return;
}


