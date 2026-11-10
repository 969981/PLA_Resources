/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03287294; name: FUN_03287294
 */


void FUN_03287294(long param_1,long param_2)

{
  int iVar1;
  ulong *puVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  uint local_a4;
  long local_a0;
  long lStack_98;
  long local_90;
  long lStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  long local_70;
  long lStack_68;
  
  lVar7 = *(long *)(param_1 + 0x918);
  lVar9 = *(long *)(lVar7 + 0x18);
  lVar10 = *(long *)(lVar9 + 0x60);
  lStack_98 = lVar10 + (long)*(int *)(lVar9 + 0x68) * 8;
  lVar11 = *(long *)(lVar7 + 0x58);
  lStack_88 = lVar11 + (long)*(int *)(lVar7 + 0x60) * 0x70;
  uStack_78 = *(undefined8 *)(lVar9 + 0x48);
  local_80 = *(undefined8 *)(lVar9 + 0x40);
  iVar1 = *(int *)(param_2 + 0x18) + 1;
  local_a0 = lVar10;
  local_90 = lVar11;
  do {
    puVar2 = (ulong *)(*(long *)(param_1 + 0x4c0) +
                      (long)*(int *)(*(long *)(param_1 + 0x70) + (long)iVar1 * 0x40) * 0x40);
    do {
      uVar8 = *puVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar4) {
        *puVar2 = uVar8 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((uint)uVar8 < (uint)(uVar8 >> 0x20)) {
      local_a4 = (uint)uVar8;
    }
    else {
      iVar5 = FUN_0332bfc4(param_1 + 0x30,iVar1,1,&local_a4);
      if (iVar5 == 0) {
        return;
      }
      uVar8 = (ulong)local_a4;
    }
    iVar5 = (int)uVar8;
    lVar7 = *(long *)(lVar10 + (long)iVar5 * 8);
    lVar9 = lVar11 + (long)iVar5 * 0x70;
    plVar6 = *(long **)(lVar7 + 0xe0);
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 0x30))(plVar6,lVar7,lVar9);
    }
    local_70 = lVar7;
    lStack_68 = lVar9;
    FUN_03287e60(&local_80,lVar11 + (long)iVar5 * 0x70 + 0x50);
  } while( true );
}


