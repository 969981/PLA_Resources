/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0294d674; name: FUN_0294d674
 */


/* WARNING: Control flow encountered bad instruction data */

void FUN_0294d674(long param_1,long *param_2,uint param_3)

{
  byte *pbVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  
  uVar9 = (ulong)*(byte *)((long *)*param_2 + 0x11);
  (**(code **)(*(long *)*param_2 + 0x70))();
  if (uVar9 != 0) {
    uVar11 = (ulong)param_3 & 0xff;
    uVar10 = 0;
    pbVar1 = (byte *)(param_1 + uVar11 * 0x38 + 0x38);
    do {
      plVar7 = (long *)*param_2;
      if (plVar7 == (long *)0x0) {
        if (((uint)uVar10 & 0xff) < (uint)*pbVar1) {
          uVar6 = *(undefined8 *)(param_1 + uVar11 * 0x38 + (uVar10 & 0xff) * 8 + 8);
        }
        else {
          uVar6 = 0;
        }
        FUN_02950f48(uVar6,1);
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      plVar2 = plVar7 + 10;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *(int *)plVar2 = (int)*plVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (((uint)uVar10 & 0xff) < (uint)*pbVar1) {
        lVar8 = *(long *)(param_1 + uVar11 * 0x38 + uVar10 * 8 + 8);
      }
      else {
        lVar8 = 0;
      }
      FUN_02950f48(lVar8,1);
      (**(code **)(*plVar7 + 0x28))(plVar7,*(undefined8 *)(lVar8 + 0x60));
      do {
        iVar5 = (int)*plVar2 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *(int *)plVar2 = iVar5;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar5 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 != uVar9);
  }
  return;
}


