/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03178490; name: FUN_03178490
 */


void FUN_03178490(long *param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  uint uVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  
  uVar6 = FUN_0317c604();
  if (*(uint *)(param_1 + 1) == uVar6) {
    lVar8 = *param_1;
    iVar2 = uVar6 + 1;
    if ((int)(*(uint *)((long)param_1 + 0xc) & 0x3fffffff) <= (int)uVar6) {
      lVar8 = FUN_0317c6ec(PTR_PTR_0434a080,iVar2);
      uVar6 = *(uint *)(param_1 + 1);
      *param_1 = lVar8;
    }
    puVar1 = (undefined4 *)(lVar8 + (long)(int)uVar6 * 0x10);
    *puVar1 = *param_2;
    *(undefined8 *)(puVar1 + 2) = *param_3;
    *param_3 = 0;
    *(int *)(param_1 + 1) = iVar2;
  }
  else {
    lVar8 = *param_1 + ((long)((ulong)uVar6 << 0x20) >> 0x1c);
    uVar9 = *param_3;
    *param_3 = 0;
    plVar7 = *(long **)(lVar8 + 8);
    *(undefined8 *)(lVar8 + 8) = uVar9;
    if ((plVar7 != (long *)0x0) && (plVar7[1] != 0)) {
      plVar3 = plVar7 + 2;
      do {
        lVar8 = *plVar3;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar5) {
          *plVar3 = lVar8 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar8 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x03178578. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar7 + 0x18))();
        return;
      }
    }
  }
  return;
}


