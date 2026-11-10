/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b2c92c; name: FUN_02b2c92c
 */


void FUN_02b2c92c(long param_1,long *param_2,undefined8 *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  long *plStack_68;
  
  uVar11 = *(long *)(*param_2 + 0xe8) - *(long *)(*param_2 + 0xe0);
  uVar8 = uVar11 >> 3;
  FUN_02b292f0(*param_3,param_1 + 0x58,param_2,uVar8 & 0xffffffff);
  lVar9 = *param_2;
  plVar7 = (long *)*param_3;
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  lVar6 = *(long *)(lVar9 + 0xe0);
  if ((uint)uVar8 < (uint)((ulong)(*(long *)(lVar9 + 0xe8) - lVar6) >> 3)) {
    uVar8 = uVar11 >> 3 & 0xffffffff;
    lVar10 = 0;
    lVar12 = uVar8 << 3;
    do {
      plVar1 = (long *)(lVar6 + lVar12);
      plVar5 = (long *)(*(long *)(param_1 + 0x60) + 0x58);
      (**(code **)(*plVar5 + 0x18))
                (plVar5,*plVar1 + 0x60,
                 *(undefined4 *)(*(long *)(*(long *)(param_1 + 0xd0) + 0xb0) + lVar10 + 0x40));
      lVar6 = *(long *)(plVar7[0x16] + lVar10 + 0x48);
      local_80 = *(undefined8 *)(lVar6 + 8);
      local_78 = *(undefined8 *)(lVar6 + 0x10);
      local_70 = *(undefined8 *)(lVar6 + 0x18);
      plVar5 = *(long **)(lVar6 + 0x20);
      plStack_68 = plVar5;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x18))(plVar5);
      }
      FUN_02b2cafc(param_1,*plVar1 + 0x60,&local_80,*(long *)(*plVar1 + 0x68) + 0x60);
      (**(code **)(*DAT_043ef740 + 0x78))(DAT_043ef740,plVar1);
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x20))(plVar5);
      }
      lVar6 = *(long *)(lVar9 + 0xe0);
      uVar8 = uVar8 + 1;
      lVar10 = lVar10 + 0xd0;
      lVar12 = lVar12 + 8;
    } while (uVar8 < ((ulong)(*(long *)(lVar9 + 0xe8) - lVar6) >> 3 & 0xffffffff));
  }
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 10;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
                    /* WARNING: Could not recover jumptable at 0x02b2caf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar7 + 0x10))(plVar7);
      return;
    }
  }
  return;
}


