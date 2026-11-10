/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c54454; name: FUN_02c54454
 */


void FUN_02c54454(undefined8 *param_1,undefined8 param_2)

{
  int *piVar1;
  long *plVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long *plVar12;
  undefined4 local_8c;
  long *local_88;
  undefined8 local_80;
  undefined8 local_78;
  long local_70;
  long *local_68;
  undefined4 local_60;
  undefined1 auStack_58 [8];
  
  lVar10 = 0;
  *param_1 = &PTR_FUN_0428ac68;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  do {
    lVar7 = DAT_04407c08;
    uVar3 = 0;
    if (((uint)lVar10 & 0xff) < 0xb) {
      uVar3 = (uint)lVar10;
    }
    uVar11 = (ulong)uVar3 & 0xff;
    local_88 = *(long **)(DAT_04407c08 + uVar11 * 0x30 + 0x30);
    if (local_88 != (long *)0x0) {
      (**(code **)(*local_88 + 0x18))();
    }
    lVar9 = lVar7 + uVar11 * 0x30;
    local_80 = *(undefined8 *)(lVar9 + 0x38);
    local_78 = *(undefined8 *)(lVar9 + 0x40);
    local_70 = *(long *)(lVar9 + 0x48);
    local_68 = *(long **)(lVar9 + 0x50);
    if (local_68 != (long *)0x0) {
      (**(code **)(*local_68 + 0x18))();
    }
    local_60 = *(undefined4 *)(lVar7 + uVar11 * 0x30 + 0x58);
    if (local_70 != 0) {
      local_8c = 1;
      lVar7 = FUN_02c549d0(auStack_58,param_2,&local_88,&local_8c);
      if (lVar7 != 0) {
        piVar1 = (int *)(lVar7 + 0x50);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = *piVar1 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      plVar12 = param_1 + lVar10 + 1;
      plVar8 = (long *)*plVar12;
      *plVar12 = 0;
      if (plVar8 != (long *)0x0) {
        plVar2 = plVar8 + 10;
        do {
          iVar6 = (int)*plVar2 + -1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar5) {
            *(int *)plVar2 = iVar6;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar6 == 0) {
          (**(code **)(*plVar8 + 0x10))();
        }
      }
      *plVar12 = lVar7;
    }
    if (local_68 != (long *)0x0) {
      (**(code **)(*local_68 + 0x20))();
    }
    if (local_88 != (long *)0x0) {
      (**(code **)(*local_88 + 0x20))();
    }
    lVar10 = lVar10 + 1;
  } while (lVar10 != 0xb);
  return;
}


