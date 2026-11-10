/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0088378c; name: FUN_0088378c
 */


undefined8 FUN_0088378c(long param_1,int *param_2,byte param_3)

{
  int *piVar1;
  int iVar2;
  undefined1 uVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  ulong uVar7;
  undefined1 *puVar8;
  long *plVar9;
  long lVar10;
  undefined8 local_40;
  byte local_38 [8];
  
  if (*param_2 == 1) {
    lVar10 = *(long *)(param_1 + 0x2b98);
    if (*(char *)(lVar10 + 0x79) == '\0') {
      return 0;
    }
    (*(code *)**(undefined8 **)(lVar10 + 0x50))();
    uVar7 = FUN_008a6490();
    if ((uVar7 & 1) == 0) {
      lVar10 = 0;
    }
    puVar8 = (undefined1 *)FUN_008bf520(lVar10);
    uVar3 = *puVar8;
    bVar4 = puVar8[1];
    plVar9 = *(long **)(param_1 + 0x2b98);
    *(undefined8 *)(param_1 + 0x2b98) = 0;
    if (plVar9 != (long *)0x0) {
      lVar10 = plVar9[0xb];
      piVar1 = (int *)(lVar10 + 0xc);
      do {
        iVar2 = *piVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = iVar2 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar2 + -1 == 0) {
        *(undefined8 *)(lVar10 + 0x18) = 0;
        (**(code **)(*plVar9 + 0x20))();
      }
    }
    if ((bVar4 & 1) != 0) {
      return 1;
    }
    FUN_0088362c(param_1,param_1 + 0x2be8,uVar3);
  }
  else {
    if (*param_2 != 0) {
      return 1;
    }
    *(undefined1 *)(param_1 + 0x2be0) = 0;
    *(undefined1 **)(param_1 + 0x2bd0) = (undefined1 *)(param_1 + 0x2be0);
    *(undefined4 *)(param_1 + 0x2bd8) = 0x58;
    uVar7 = FUN_00883940(param_1,*(undefined8 *)(param_1 + 0x2ba8));
    if ((uVar7 & 1) != 0) {
      local_38[0] = param_3 & 1;
      FUN_00883a70(&local_40,*(undefined8 *)(*(long *)(param_1 + 0x2b68) + 0xd8),local_38);
      plVar9 = *(long **)(param_1 + 0x2b98);
      *(undefined8 *)(param_1 + 0x2b98) = 0;
      if (plVar9 != (long *)0x0) {
        lVar10 = plVar9[0xb];
        piVar1 = (int *)(lVar10 + 0xc);
        do {
          iVar2 = *piVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar6) {
            *piVar1 = iVar2 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar2 + -1 == 0) {
          *(undefined8 *)(lVar10 + 0x18) = 0;
          (**(code **)(*plVar9 + 0x20))();
        }
      }
      *(undefined8 *)(param_1 + 0x2b98) = local_40;
      *param_2 = *param_2 + 1;
      return 0;
    }
    FUN_0293d170(param_1 + 0x2be8);
  }
  *(undefined1 *)(param_1 + 0x2be0) = 1;
  return 1;
}


