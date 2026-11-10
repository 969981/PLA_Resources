/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008ae238; name: FUN_008ae238
 */


void FUN_008ae238(long param_1,undefined1 param_2,int param_3,byte param_4)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 local_48;
  undefined1 local_40 [4];
  undefined4 local_3c;
  uint uStack_38;
  byte local_34;
  
  lVar5 = FUN_00933eec(*(undefined8 *)(*(long *)(param_1 + 0x68) + 0xd0));
  if (param_3 - 1U < 4) {
    uVar7 = (&switchD_00930b5c::switchdataD_03888940)[(int)(param_3 - 1U)];
    iVar4 = FUN_029506a8(*(undefined8 *)(lVar5 + 0x70),*(undefined4 *)(&DAT_03a75614 + uVar7 * 0xc))
    ;
    local_3c = *(undefined4 *)(&DAT_03a75618 + uVar7 * 0xc);
    uStack_38 = (uint)(iVar4 != 1);
    if (iVar4 < 1) {
      uStack_38 = 0xffffffff;
    }
    local_40[0] = param_2;
    local_34 = param_4 & 1;
    FUN_008ae328(&local_48,*(undefined8 *)(*(long *)(param_1 + 0x68) + 0xd8),local_40);
    plVar6 = *(long **)(param_1 + 0xb60);
    *(undefined8 *)(param_1 + 0xb60) = 0;
    if (plVar6 != (long *)0x0) {
      lVar5 = plVar6[0xb];
      piVar1 = (int *)(lVar5 + 0xc);
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
        *(undefined8 *)(lVar5 + 0x18) = 0;
        (**(code **)(*plVar6 + 0x20))();
      }
    }
    *(undefined8 *)(param_1 + 0xb60) = local_48;
  }
  return;
}


