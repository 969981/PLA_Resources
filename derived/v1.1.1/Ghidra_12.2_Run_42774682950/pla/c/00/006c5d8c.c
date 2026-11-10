/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 006c5d8c; name: FUN_006c5d8c
 */


undefined8 FUN_006c5d8c(long param_1,undefined8 *param_2,char *param_3)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  code *pcVar7;
  long lVar8;
  long alStack_60 [4];
  long *local_40;
  
  if (*(char *)(param_1 + 0x140) != '\0') {
    lVar6 = *(long *)(param_1 + 0x118);
    plVar4 = (long *)(lVar6 + 0x18);
    do {
      lVar8 = *plVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = lVar8 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
      puVar3 = PTR_DAT_04373140;
    } while (cVar1 != '\0');
    if (lVar8 + -1 == 0) {
      (**(code **)(**(long **)PTR_DAT_04373140 + 0x38))
                (*(long **)PTR_DAT_04373140,*(undefined8 *)(lVar6 + 0x10));
    }
    *param_2 = *(undefined8 *)(param_1 + 0x108);
    *param_3 = *(char *)(param_1 + 0x260);
    plVar4 = *(long **)puVar3;
    goto LAB_006c5fa8;
  }
  if ((*(char *)(param_1 + 9) == '\0') || (*(char *)(param_1 + 8) != '\0')) {
    if (*(long *)(param_1 + 0x30) == 0) goto LAB_006c5e18;
LAB_006c5e4c:
    if ((*(char *)(param_1 + 0x38) == '\0') || (*(char *)(param_1 + 0x39) == '\0')) {
      if (*param_3 == '\0') {
        *(undefined1 *)(param_1 + 0x39) = 1;
      }
    }
    else {
      *param_3 = '\0';
    }
  }
  else {
    (**(code **)(**(long **)PTR_DAT_04373140 + 0x58))
              (*(long **)PTR_DAT_04373140,*(undefined8 *)(param_1 + 0x20));
    *(undefined1 *)(param_1 + 9) = 0;
    if (*(long *)(param_1 + 0x30) != 0) goto LAB_006c5e4c;
LAB_006c5e18:
    if (*(long *)(param_1 + 0x40) != 0) goto LAB_006c5e4c;
  }
  FUN_006c6324(param_1 + 0x90,param_3);
  *(undefined1 *)(param_1 + 0xac) = 0;
  FUN_002ba700(param_1 + 0xb0,param_3);
  *(char *)(param_1 + 0x260) = *param_3;
  *(undefined8 *)(param_1 + 0x158) = 0;
  *(undefined2 *)(param_1 + 0x170) = 1;
  *(undefined8 *)(param_1 + 0x15d) = 0;
  if (*(long *)(param_1 + 0x30) == 0) {
    if (*(long *)(param_1 + 0x40) != 0) {
      *(undefined1 *)(param_1 + 0x15a) = 1;
      goto LAB_006c5ed8;
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x15a) = 1;
    if (*(long *)(param_1 + 0x40) != 0) {
LAB_006c5ed8:
      (**(code **)(**(long **)PTR_DAT_04373140 + 0xc0))();
      *(undefined8 *)(param_1 + 0x40) = 0;
    }
  }
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(long *)(param_1 + 0x1c8) = param_1 + 0x39;
  *(undefined8 *)(param_1 + 0x1d0) = 0;
  *(undefined8 *)(param_1 + 0x1c0) = 0;
  local_40 = (long *)0x0;
  FUN_002bbcc4(alStack_60,param_1 + 0x1e0);
  if (alStack_60 == local_40) {
    pcVar7 = *(code **)(*local_40 + 0x20);
LAB_006c5f3c:
    (*pcVar7)();
  }
  else if (local_40 != (long *)0x0) {
    pcVar7 = *(code **)(*local_40 + 0x28);
    goto LAB_006c5f3c;
  }
  if (*(long *)(param_1 + 0x88) != 0) {
    *(undefined1 *)(param_1 + 0x160) = 1;
    *(undefined8 *)(param_1 + 0x88) = 0;
  }
  if ((*(long *)(param_1 + 0x98) != 0) &&
     (*(undefined1 *)(param_1 + 0x161) = 1, *(char *)(param_1 + 0x90) == '\0')) {
    *(undefined8 *)(param_1 + 0x240) = 0;
    *(undefined8 *)(param_1 + 0x238) = 0;
  }
  if (*(long *)(param_1 + 200) != 0) {
    *(undefined1 *)(param_1 + 0x162) = 1;
    *(undefined8 *)(param_1 + 200) = 0;
  }
  uVar5 = FUN_002bbb44(param_1 + 0x150);
  if ((uVar5 & 1) == 0) {
    return 0;
  }
  *param_2 = *(undefined8 *)(param_1 + 0x108);
  plVar4 = *(long **)PTR_DAT_04373140;
LAB_006c5fa8:
  (**(code **)(*plVar4 + 0x120))(plVar4,*(undefined8 *)(param_1 + 0x120));
  return 1;
}


