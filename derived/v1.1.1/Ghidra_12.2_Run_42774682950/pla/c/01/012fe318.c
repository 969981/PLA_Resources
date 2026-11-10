/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 012fe318; name: FUN_012fe318
 */


void FUN_012fe318(long param_1,int param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  undefined8 uVar6;
  long **pplVar7;
  long lVar8;
  long *plVar9;
  undefined8 *puVar10;
  long *local_68 [3];
  long *local_50;
  long *local_48;
  undefined8 local_40;
  undefined1 local_38;
  undefined1 local_37;
  undefined1 local_36;
  
  puVar10 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x18);
  plVar5 = (long *)(**(code **)*puVar10)(puVar10);
  if (((*PTR_DAT_04379ca8 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04379ca8), iVar4 != 0))
  {
    uVar6 = FUN_009311a8();
    *(undefined8 *)PTR_DAT_04379c98 = uVar6;
    __cxa_guard_release(PTR_DAT_04379ca8);
  }
  if (plVar5 != (long *)PTR_DAT_04379c98) {
    for (plVar5 = (long *)*plVar5; plVar5 != (long *)PTR_DAT_04379c98; plVar5 = (long *)*plVar5) {
    }
  }
  FUN_00d37c90(local_68,puVar10[0x15],0);
  plVar5 = (long *)local_68[0][0xd];
  if (plVar5 != (long *)0x0) {
    plVar9 = plVar5 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *(int *)plVar9 = (int)*plVar9 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if (local_68[0] != (long *)0x0) {
    lVar8 = local_68[0][0xb];
    piVar1 = (int *)(lVar8 + 0xc);
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
      *(undefined8 *)(lVar8 + 0x18) = 0;
      (**(code **)(*local_68[0] + 0x20))();
    }
  }
  if (param_2 == 0) {
    plVar9 = (long *)0x345d827f1b77cc43;
    pplVar7 = local_68;
  }
  else {
    if (param_2 != 1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    plVar9 = (long *)0x345d817f1b77ca90;
    pplVar7 = &local_48;
  }
  *pplVar7 = plVar9;
  FUN_02c2e7d0(plVar5,pplVar7,*(undefined8 *)(param_1 + 0xa0));
  local_37 = 1;
  local_48 = *(long **)(param_1 + 0xa0);
  local_38 = 1;
  local_36 = 1;
  local_40 = 1;
  FUN_00d67ea8(*(undefined8 *)(param_1 + 0x98),&local_48);
  FUN_02a4754c(local_68,&DAT_04203b98);
  FUN_028354b0(local_68);
  if (local_50 != (long *)0x0) {
    (**(code **)(*local_50 + 0x20))();
  }
  if (plVar5 != (long *)0x0) {
    plVar9 = plVar5 + 10;
    do {
      iVar4 = (int)*plVar9 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *(int *)plVar9 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
    }
  }
  return;
}


