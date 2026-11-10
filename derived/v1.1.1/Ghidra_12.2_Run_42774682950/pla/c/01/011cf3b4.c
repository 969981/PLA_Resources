/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011cf3b4; name: FUN_011cf3b4
 */


void FUN_011cf3b4(long param_1)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  undefined8 local_60;
  undefined *puStack_58;
  undefined8 local_50;
  long *local_48;
  
  lVar7 = *(long *)(param_1 + 0x5b0);
  lVar6 = *(long *)(param_1 + 0x5b8) - lVar7;
  if (lVar6 != 0) {
    uVar9 = 0;
    while( true ) {
      lVar7 = lVar7 + uVar9 * 0x40;
      lVar2 = *(long *)(lVar7 + 8);
      lVar7 = *(long *)(lVar7 + 0x10);
      local_60 = (&DAT_041f7c48)[uVar9 * 3];
      puStack_58 = (&PTR_s_pane_L_pokeicon_00_P_notice_00_041f7c50)[uVar9 * 3];
      local_50 = (&DAT_041f7c58)[uVar9 * 3];
      plVar8 = *(long **)(param_1 + 0x2c8);
      if (plVar8 != (long *)0x0) {
        plVar1 = plVar8 + 10;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *(int *)plVar1 = (int)*plVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      local_48 = (long *)0x0;
      FUN_0283b11c(plVar8,&local_60,lVar2 != lVar7);
      if (local_48 != (long *)0x0) {
        (**(code **)(*local_48 + 0x20))();
      }
      if (plVar8 != (long *)0x0) {
        plVar1 = plVar8 + 10;
        do {
          iVar5 = (int)*plVar1 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *(int *)plVar1 = iVar5;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar5 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
        }
      }
      uVar9 = uVar9 + 1;
      if ((ulong)(lVar6 >> 6) <= uVar9) break;
      lVar7 = *(long *)(param_1 + 0x5b0);
    }
  }
  return;
}


