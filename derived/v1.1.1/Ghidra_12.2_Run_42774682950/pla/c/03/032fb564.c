/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032fb564; name: FUN_032fb564
 */


undefined4 FUN_032fb564(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  undefined4 uVar7;
  long *plVar8;
  uint uVar9;
  undefined8 *puVar10;
  undefined8 *local_48 [2];
  ulong local_38;
  
  puVar10 = (undefined8 *)*param_1;
  uVar9 = (uint)*param_2;
  if ((uVar9 >> 0x11 & 1) == 0) {
    uVar9 = 0;
    iVar2 = *(int *)(param_1 + 1);
    iVar3 = *(int *)((long)param_1 + 0xc);
  }
  else {
    uVar9 = (uVar9 & 0x1ffff) - (uVar9 >> 1 & 0x5555);
    uVar9 = (uVar9 >> 2 & 0x33333333) + (uVar9 & 0x33333333);
    uVar9 = (uint)*(ushort *)
                   (param_2 + (ulong)((uVar9 + (uVar9 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) + 2);
    iVar2 = *(int *)(param_1 + 1);
    iVar3 = *(int *)((long)param_1 + 0xc);
  }
  if ((param_2 == (undefined8 *)0x0) && (*(char *)*puVar10 == '\0')) {
    uVar7 = 0;
  }
  else {
    FUN_032e2c7c(local_48,param_2,&DAT_04358dc0);
    if ((local_38 & 1) != 0) {
      plVar8 = (long *)(local_38 & 0xfffffffffffffffe);
      plVar1 = plVar8 + 1;
      do {
        lVar6 = *plVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *(int *)plVar1 = (int)lVar6 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if ((plVar8 != (long *)0x0) && ((int)lVar6 == 1)) {
        (**(code **)(*plVar8 + 8))();
      }
    }
    if (local_48[0] == (undefined8 *)0x0) {
      uVar7 = FUN_032f9800(puVar10,param_2,iVar2 + uVar9,param_2,iVar3 + uVar9);
    }
    else {
      uVar7 = (*(code *)*local_48[0])(puVar10[1],param_2,iVar2 + uVar9,param_2,iVar3 + uVar9);
    }
  }
  return uVar7;
}


