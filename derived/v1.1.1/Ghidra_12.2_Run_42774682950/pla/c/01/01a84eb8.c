/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a84eb8; name: FUN_01a84eb8
 */


undefined1  [16] FUN_01a84eb8(long param_1)

{
  undefined1 (*pauVar1) [16];
  int *piVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined1 auVar10 [16];
  long *local_28;
  long *local_18;
  
  FUN_01839c8c(&local_28,param_1 + 0xad0);
  if (local_28 == (long *)0x0) {
    uVar8 = 0;
    uVar9 = 0;
    goto LAB_01a84f60;
  }
  FUN_01839c8c(&local_18,param_1 + 0xad0);
  if (local_18 == (long *)0x0) {
LAB_01a84f94:
    uVar8 = 0;
    uVar9 = 0;
  }
  else {
    lVar7 = local_18[0xb];
    piVar2 = (int *)(lVar7 + 0xc);
    iVar4 = *(int *)((long)local_18 + 0x7c);
    do {
      iVar3 = *piVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar6) {
        *piVar2 = iVar3 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar3 + -1 == 0) {
      *(undefined8 *)(lVar7 + 0x18) = 0;
      (**(code **)(*local_18 + 0x20))();
    }
    if (iVar4 != 2) goto LAB_01a84f94;
    if (local_28[0x1a] == 0) {
      uVar8 = 0;
      uVar9 = 0;
    }
    else {
      pauVar1 = (undefined1 (*) [16])(local_28[0x1a] + 0xc0);
      uVar8 = *(undefined8 *)*pauVar1;
      auVar10 = NEON_ext(*pauVar1,*pauVar1,8,1);
      uVar9 = (ulong)auVar10._0_4_;
    }
  }
  if (local_28 != (long *)0x0) {
    lVar7 = local_28[0xb];
    piVar2 = (int *)(lVar7 + 0xc);
    do {
      iVar4 = *piVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar6) {
        *piVar2 = iVar4 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar4 + -1 == 0) {
      *(undefined8 *)(lVar7 + 0x18) = 0;
      (**(code **)(*local_28 + 0x20))();
    }
  }
LAB_01a84f60:
  auVar10._8_8_ = uVar9;
  auVar10._0_8_ = uVar8;
  return auVar10;
}


