/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d4c558; name: FUN_00d4c558
 */


undefined8 FUN_00d4c558(long *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 local_50;
  char *pcStack_48;
  undefined8 local_40;
  long *local_38;
  
  local_50 = 0x8ad48bca42a4661b;
  pcStack_48 = "context_menu_00";
  local_40 = 0xf;
  local_38 = (long *)0x0;
  plVar4 = (long *)FUN_00d472a0(param_1 + 0x30,&local_50);
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  if ((plVar4 == (long *)0x0) || (3 < (int)plVar4[0xa0] - 2U)) {
    uVar6 = 0;
  }
  else {
    iVar2 = (int)param_1[0xdb];
    iVar3 = iVar2;
    if (iVar2 == 2) {
      iVar3 = 0;
    }
    lVar5 = FUN_00d2ee28(param_1 + 0x30,&DAT_043ab7d8 + (long)iVar3 * 0x28);
    lVar5 = *(long *)(lVar5 + 0x8b0);
    piVar1 = (int *)(lVar5 + 0x20);
    if (*(int *)(lVar5 + 0x28) != 0) {
      piVar1 = (int *)(lVar5 + 0x24);
    }
    (**(code **)(*param_1 + 0x98))
              (param_1,iVar2,*(int *)(lVar5 + 0x14) + *piVar1 * *(int *)(lVar5 + 0x10),0,7);
    (**(code **)(*plVar4 + 0x58))(plVar4);
    if (*(char *)((long)plVar4 + 0xa2) == '\x01') {
      lVar5 = param_1[0x88];
    }
    else {
      *(undefined1 *)((long)plVar4 + 0xa2) = 1;
      (**(code **)(*plVar4 + 0x98))(plVar4,1);
      lVar5 = param_1[0x88];
    }
    if (lVar5 != 0) {
      if (*(char *)(lVar5 + 0x62) != '\0') {
        return 1;
      }
      *(undefined1 *)(lVar5 + 0x60) = 1;
      if (*(char *)(lVar5 + 0x61) != '\0') {
        FUN_0283351c(*(undefined8 *)(lVar5 + 0x58),0);
      }
      FUN_02831808(*(undefined8 *)(lVar5 + 0x58),0);
    }
    uVar6 = 1;
  }
  return uVar6;
}


