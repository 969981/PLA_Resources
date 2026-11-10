/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0064b344; name: FUN_0064b344
 */


undefined8 FUN_0064b344(long param_1,undefined8 *param_2,undefined1 *param_3)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  
  if (*(char *)(param_1 + 0xa8) == '\0') {
    FUN_002ba700(param_1 + 0x18,param_3);
    *(undefined1 *)(param_1 + 0x1c0) = *param_3;
    *(undefined2 *)(param_1 + 0xd0) = 1;
    *(undefined8 *)(param_1 + 0xb8) = 0;
    *(undefined8 *)(param_1 + 0xbd) = 0;
    if (*(long *)(param_1 + 0x10) != 0) {
      *(undefined1 *)(param_1 + 0xc0) = 1;
      *(undefined8 *)(param_1 + 0x10) = 0;
    }
    if (*(long *)(param_1 + 0x30) != 0) {
      *(undefined1 *)(param_1 + 0xc2) = 1;
      *(undefined8 *)(param_1 + 0x30) = 0;
    }
    uVar5 = FUN_002bbb44(param_1 + 0xb0);
    if ((uVar5 & 1) == 0) {
      return 0;
    }
    *param_2 = *(undefined8 *)(param_1 + 0x70);
    plVar4 = *(long **)PTR_DAT_04373140;
  }
  else {
    lVar6 = *(long *)(param_1 + 0x80);
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
    *param_2 = *(undefined8 *)(param_1 + 0x70);
    *param_3 = *(undefined1 *)(param_1 + 0x1c0);
    plVar4 = *(long **)puVar3;
  }
  (**(code **)(*plVar4 + 0x120))(plVar4,*(undefined8 *)(param_1 + 0x88));
  return 1;
}


