/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 006d0a20; name: FUN_006d0a20
 */


undefined8 FUN_006d0a20(long param_1,undefined8 *param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  
  if (*(char *)(param_1 + 0x50) == '\0') {
    *(undefined1 *)(param_1 + 9) = 0;
    uVar1 = *param_3;
    *(undefined2 *)(param_1 + 0x80) = 1;
    *(undefined1 *)(param_1 + 0x170) = uVar1;
    *(undefined8 *)(param_1 + 0x68) = 0;
    *(undefined8 *)(param_1 + 0x6d) = 0;
    uVar6 = FUN_002bbb44(param_1 + 0x60);
    if ((uVar6 & 1) == 0) {
      return 0;
    }
    *param_2 = *(undefined8 *)(param_1 + 0x18);
    plVar5 = *(long **)PTR_DAT_04373140;
  }
  else {
    lVar7 = *(long *)(param_1 + 0x28);
    plVar5 = (long *)(lVar7 + 0x18);
    do {
      lVar8 = *plVar5;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      puVar4 = PTR_DAT_04373140;
    } while (cVar2 != '\0');
    if (lVar8 + -1 == 0) {
      (**(code **)(**(long **)PTR_DAT_04373140 + 0x38))
                (*(long **)PTR_DAT_04373140,*(undefined8 *)(lVar7 + 0x10));
    }
    *param_2 = *(undefined8 *)(param_1 + 0x18);
    *param_3 = *(undefined1 *)(param_1 + 0x170);
    plVar5 = *(long **)puVar4;
  }
  (**(code **)(*plVar5 + 0x120))(plVar5,*(undefined8 *)(param_1 + 0x30));
  return 1;
}


