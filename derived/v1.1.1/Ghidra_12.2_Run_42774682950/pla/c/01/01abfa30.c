/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01abfa30; name: FUN_01abfa30
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01abfa30(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long *plVar6;
  long lVar7;
  undefined8 local_110;
  code *local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [104];
  long *local_88;
  undefined1 local_7c [4];
  undefined1 local_78 [4];
  undefined1 local_74 [4];
  undefined8 local_70;
  undefined8 uStack_68;
  long *local_60;
  undefined8 uStack_58;
  long *local_48;
  
  if ((*(long *)(param_1 + 0x268) != 0) &&
     (FUN_018e4ba0(&local_60), plVar6 = local_60, local_60 != (long *)0x0)) {
    local_78[0] = 1;
    local_7c[0] = 1;
    local_74[0] = 0;
    local_60 = (long *)0x0;
    uStack_58 = 0;
    uStack_68 = _UNK_03888fc8;
    local_70 = _DAT_03888fc0;
    FUN_01abfbcc(&local_48,*(undefined8 *)(param_1 + 8),param_2,&local_60,&local_70,param_3,param_4,
                 local_74,local_78,local_7c);
    local_110 = 0;
    local_108 = (code *)0x0;
    local_100 = 0;
    uStack_f8 = 0;
    FUN_00bdc73c(&local_88,plVar6,0xc,&local_48,&local_110,0);
    pcVar5 = local_108;
    if (local_88 != (long *)0x0) {
      lVar7 = local_88[0xb];
      piVar1 = (int *)(lVar7 + 0xc);
      do {
        iVar2 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar2 + -1 == 0) {
        *(undefined8 *)(lVar7 + 0x18) = 0;
        (**(code **)(*local_88 + 0x20))();
        pcVar5 = local_108;
        local_108 = (code *)0x0;
      }
    }
    if (pcVar5 != (code *)0x0) {
      local_100 = 0;
      uStack_f8 = 0;
      local_110 = 0;
      local_108 = (code *)0x0;
      (*pcVar5)(auStack_f0);
    }
    if (local_48 != (long *)0x0) {
      lVar7 = local_48[0xb];
      piVar1 = (int *)(lVar7 + 0xc);
      do {
        iVar2 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar2 + -1 == 0) {
        *(undefined8 *)(lVar7 + 0x18) = 0;
        (**(code **)(*local_48 + 0x20))();
      }
    }
    lVar7 = plVar6[0xb];
    piVar1 = (int *)(lVar7 + 0xc);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      *(undefined8 *)(lVar7 + 0x18) = 0;
      (**(code **)(*plVar6 + 0x20))(plVar6);
    }
  }
  return;
}


