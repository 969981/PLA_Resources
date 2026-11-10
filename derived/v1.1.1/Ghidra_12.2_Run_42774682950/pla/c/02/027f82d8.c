/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 027f82d8; name: FUN_027f82d8
 */


undefined1 FUN_027f82d8(long param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  undefined1 uVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  undefined1 *puVar10;
  long *plVar11;
  long *local_48;
  
  if (((*PTR_DAT_04379690 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04379690), iVar7 != 0))
  {
    FUN_00100250(PTR_LAB_043796a8,PTR_DAT_04379698,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379690);
  }
  lVar9 = *(long *)PTR_DAT_04379698;
  *(long *)PTR_DAT_043796a0 = lVar9;
  if ((*(long *)(param_1 + 0x138) != 0) && (*(long *)(param_1 + 0x120) != 0)) {
    puVar10 = *(undefined1 **)(param_1 + 0x118);
    puVar2 = puVar10 + *(long *)(param_1 + 0x120);
    do {
      uVar3 = *puVar10;
      FUN_02867d5c(&local_48,*(undefined8 *)(lVar9 + 0x50),uVar3);
      plVar6 = local_48;
      plVar11 = *(long **)(param_1 + 0x138);
      if (local_48 != (long *)0x0) {
        lVar8 = local_48[0xb];
        piVar1 = (int *)(lVar8 + 0xc);
        do {
          iVar7 = *piVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar7 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar7 + -1 == 0) {
          *(undefined8 *)(lVar8 + 0x18) = 0;
          (**(code **)(*local_48 + 0x20))(local_48);
        }
      }
      if (plVar11 == plVar6) {
        return uVar3;
      }
      puVar10 = puVar10 + 1;
    } while (puVar10 != puVar2);
  }
  return *(undefined1 *)(*(long *)(param_1 + 0x118) + (long)*(int *)(param_1 + 0x150));
}


