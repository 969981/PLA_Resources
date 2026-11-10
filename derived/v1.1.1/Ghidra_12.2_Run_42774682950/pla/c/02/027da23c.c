/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 027da23c; name: FUN_027da23c
 */


void FUN_027da23c(long param_1,undefined8 param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 local_18;
  
  FUN_027d8b40(&local_18,param_2);
  plVar5 = *(long **)(param_1 + 0xb0);
  *(undefined8 *)(param_1 + 0xb0) = 0;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 10;
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
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  *(undefined8 *)(param_1 + 0xb0) = local_18;
  *(undefined4 *)(param_1 + 0xbc) = 3;
  puVar6 = (undefined8 *)FUN_02794ca8();
  uVar7 = *puVar6;
  *(undefined8 *)PTR_DAT_04387d28 = uVar7;
  FUN_027de1b8(uVar7,*(undefined8 *)(param_1 + 0xb0));
  return;
}


