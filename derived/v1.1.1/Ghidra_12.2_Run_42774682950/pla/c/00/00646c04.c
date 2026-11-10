/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00646c04; name: FUN_00646c04
 */


undefined8 FUN_00646c04(long param_1,undefined8 *param_2,char *param_3)

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
  
  if (*(char *)(param_1 + 200) != '\0') {
    lVar6 = *(long *)(param_1 + 0xa0);
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
    *param_2 = *(undefined8 *)(param_1 + 0x90);
    *param_3 = *(char *)(param_1 + 0x1e0);
    plVar4 = *(long **)puVar3;
    goto LAB_00646db4;
  }
  if ((*(char *)(param_1 + 9) == '\0') || (*(char *)(param_1 + 8) != '\0')) {
    lVar6 = *(long *)(param_1 + 0x30);
    if (lVar6 == 0) goto LAB_00646c90;
LAB_00646cc4:
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
    lVar6 = *(long *)(param_1 + 0x30);
    if (lVar6 != 0) goto LAB_00646cc4;
LAB_00646c90:
    if (*(long *)(param_1 + 0x40) != 0) goto LAB_00646cc4;
  }
  *(undefined1 *)(param_1 + 0x81) = 0;
  cVar1 = *param_3;
  *(undefined2 *)(param_1 + 0xf0) = 1;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined8 *)(param_1 + 0xdd) = 0;
  *(char *)(param_1 + 0x1e0) = cVar1;
  if (lVar6 == 0) {
    if (*(long *)(param_1 + 0x40) != 0) {
      *(undefined1 *)(param_1 + 0xda) = 1;
      goto LAB_00646d2c;
    }
  }
  else {
    *(undefined1 *)(param_1 + 0xda) = 1;
    if (*(long *)(param_1 + 0x40) != 0) {
LAB_00646d2c:
      (**(code **)(**(long **)PTR_DAT_04373140 + 0xc0))();
      *(undefined8 *)(param_1 + 0x40) = 0;
    }
  }
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(long *)(param_1 + 0x148) = param_1 + 0x39;
  *(undefined8 *)(param_1 + 0x150) = 0;
  *(undefined8 *)(param_1 + 0x140) = 0;
  local_40 = (long *)0x0;
  FUN_002bbcc4(alStack_60,param_1 + 0x160);
  if (alStack_60 == local_40) {
    pcVar7 = *(code **)(*local_40 + 0x20);
LAB_00646d90:
    (*pcVar7)();
  }
  else if (local_40 != (long *)0x0) {
    pcVar7 = *(code **)(*local_40 + 0x28);
    goto LAB_00646d90;
  }
  uVar5 = FUN_002bbb44(param_1 + 0xd0);
  if ((uVar5 & 1) == 0) {
    return 0;
  }
  *param_2 = *(undefined8 *)(param_1 + 0x90);
  plVar4 = *(long **)PTR_DAT_04373140;
LAB_00646db4:
  (**(code **)(*plVar4 + 0x120))(plVar4,*(undefined8 *)(param_1 + 0xa8));
  return 1;
}


