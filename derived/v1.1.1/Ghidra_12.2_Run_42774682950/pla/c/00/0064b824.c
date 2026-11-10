/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0064b824; name: FUN_0064b824
 */


undefined8 FUN_0064b824(long param_1,undefined8 *param_2,undefined1 *param_3)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  
  if (*(char *)(param_1 + 0x70) == '\0') {
    if ((*(char *)(param_1 + 9) != '\0') && (*(char *)(param_1 + 8) == '\0')) {
      (**(code **)(**(long **)PTR_DAT_04373140 + 0x58))
                (*(long **)PTR_DAT_04373140,*(undefined8 *)(param_1 + 0x20));
      *(undefined1 *)(param_1 + 9) = 0;
    }
    *(undefined1 *)(param_1 + 400) = *param_3;
    *(undefined2 *)(param_1 + 0xa0) = 1;
    *(undefined8 *)(param_1 + 0x88) = 0;
    *(undefined8 *)(param_1 + 0x8d) = 0;
    uVar5 = FUN_002bbb44(param_1 + 0x80);
    if ((uVar5 & 1) == 0) {
      return 0;
    }
    *param_2 = *(undefined8 *)(param_1 + 0x38);
    plVar4 = *(long **)PTR_DAT_04373140;
  }
  else {
    lVar6 = *(long *)(param_1 + 0x48);
    plVar4 = (long *)(lVar6 + 0x18);
    do {
      lVar7 = *plVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = lVar7 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
      puVar3 = PTR_DAT_04373140;
    } while (cVar1 != '\0');
    if (lVar7 + -1 == 0) {
      (**(code **)(**(long **)PTR_DAT_04373140 + 0x38))
                (*(long **)PTR_DAT_04373140,*(undefined8 *)(lVar6 + 0x10));
    }
    *param_2 = *(undefined8 *)(param_1 + 0x38);
    *param_3 = *(undefined1 *)(param_1 + 400);
    plVar4 = *(long **)puVar3;
  }
  (**(code **)(*plVar4 + 0x120))(plVar4,*(undefined8 *)(param_1 + 0x50));
  return 1;
}


