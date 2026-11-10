/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01aae638; name: FUN_01aae638
 */


void FUN_01aae638(undefined8 *param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  undefined8 *puVar6;
  long *local_18;
  
  *param_1 = &PTR_FUN_0423ab68;
  param_1[9] = &PTR_LAB_0423ac70;
  param_1[10] = &PTR_LAB_0423ad50;
  param_1[0x3e] = &PTR_LAB_0423ad78;
  if (param_1[0x99] == 0) goto LAB_01aae674;
  FUN_01aaeb6c(&local_18);
  if ((local_18 == (long *)0x0) || (FUN_01f0c45c(local_18,0,1), local_18 == (long *)0x0)) {
LAB_01aae6cc:
    puVar6 = (undefined8 *)param_1[0x99];
  }
  else {
    lVar5 = local_18[0xb];
    piVar1 = (int *)(lVar5 + 0xc);
    do {
      iVar4 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 + -1 != 0) goto LAB_01aae6cc;
    *(undefined8 *)(lVar5 + 0x18) = 0;
    (**(code **)(*local_18 + 0x20))();
    puVar6 = (undefined8 *)param_1[0x99];
  }
  if (puVar6 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar6 + 1);
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
      puVar6[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar4 = __cxa_guard_acquire(PTR_DAT_04379498), iVar4 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar5 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar5;
      local_18 = (long *)*puVar6;
      FUN_02a44274(lVar5 + 0xd8,&local_18);
    }
  }
LAB_01aae674:
  FUN_01abd680(param_1);
  return;
}


