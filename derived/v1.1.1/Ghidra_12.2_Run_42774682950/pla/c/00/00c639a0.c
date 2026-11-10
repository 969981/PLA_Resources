/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00c639a0; name: FUN_00c639a0
 */


void FUN_00c639a0(long param_1,long param_2,undefined8 param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  undefined1 *local_38;
  
  plVar7 = *(long **)(*(long *)(param_1 + 0xa0) + 0x98);
  if (plVar7 != (long *)0x0) {
    lVar8 = plVar7[0xb];
    if (*(undefined8 **)(lVar8 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar8 + 0x10) == 0) {
      uVar5 = (**(code **)**(undefined8 **)(lVar8 + 0x18))();
      *(undefined8 *)(lVar8 + 0x10) = uVar5;
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
  lVar8 = param_1 + 0xa8;
  uVar6 = FUN_00b88284(plVar7,lVar8);
  if ((uVar6 & 1) == 0) {
    FUN_00c70c48(plVar7[0xd] + 0x2c8,lVar8,param_2 + 0x10);
  }
  else {
    FUN_00bd7bd4(plVar7,lVar8);
  }
  FUN_00c38094(plVar7,param_1 + 0xb0,param_2 + 0x30);
  if (*(uint *)(param_2 + 0x20) < 0x26) {
    local_38 = *(undefined1 **)(&DAT_03a77bb0 + (long)(int)*(uint *)(param_2 + 0x20) * 8);
  }
  else {
    local_38 = &DAT_cbf29ce484222645;
  }
  FUN_00bc05f0(plVar7,param_1 + 0xb8,&local_38);
  FUN_00bc05f0(plVar7,param_1 + 0xc0,param_2);
  FUN_00bc05f0(plVar7,param_1 + 200,param_3);
  if (plVar7 != (long *)0x0) {
    lVar8 = plVar7[0xb];
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
      (**(code **)(*plVar7 + 0x20))(plVar7);
    }
  }
  return;
}


