/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01c4eca0; name: FUN_01c4eca0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01c4eca0(undefined8 *param_1,long param_2,undefined8 param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  undefined8 local_110;
  code *local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [100];
  undefined1 local_8c [4];
  undefined1 local_88 [4];
  undefined1 local_84 [4];
  long *local_80;
  char *pcStack_78;
  undefined8 local_70;
  long *local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  long *local_40;
  long *local_38;
  
  *param_1 = 0;
  if ((*(long *)(param_2 + 600) != 0) &&
     (FUN_018e4ba0(&local_80), plVar6 = local_80, local_80 != (long *)0x0)) {
    local_80 = (long *)0x9ff6f72ca6a1d24d;
    pcStack_78 = "PLAY_STDISTORTION_CONTENTS_DISAPPEAR";
    local_70 = 0x24;
    local_68 = (long *)0x0;
    local_84[0] = 1;
    local_88[0] = 1;
    local_8c[0] = 1;
    local_50 = 0;
    uStack_48 = 0;
    uStack_58 = _UNK_03888fc8;
    local_60 = _DAT_03888fc0;
    FUN_01c4f428(&local_40,*(undefined8 *)(param_2 + 8),param_3,&local_50,&local_60,&local_80,
                 local_84,local_88,local_8c);
    local_38 = local_40;
    local_40 = (long *)0x0;
    if (local_68 != (long *)0x0) {
      (**(code **)(*local_68 + 0x20))();
    }
    local_110 = 0;
    local_108 = (code *)0x0;
    local_100 = 0;
    uStack_f8 = 0;
    FUN_00bdc73c(&local_80,plVar6,0xc,&local_38,&local_110,0);
    plVar7 = local_80;
    pcVar5 = local_108;
    local_80 = (long *)0x0;
    *param_1 = plVar7;
    if (local_108 == (code *)0x0) {
      local_108 = (code *)0x0;
    }
    else {
      local_100 = 0;
      uStack_f8 = 0;
      local_110 = 0;
      local_108 = (code *)0x0;
      (*pcVar5)(auStack_f0);
    }
    if (local_38 != (long *)0x0) {
      lVar8 = local_38[0xb];
      piVar1 = (int *)(lVar8 + 0xc);
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
        *(undefined8 *)(lVar8 + 0x18) = 0;
        (**(code **)(*local_38 + 0x20))();
      }
    }
    lVar8 = plVar6[0xb];
    piVar1 = (int *)(lVar8 + 0xc);
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
      *(undefined8 *)(lVar8 + 0x18) = 0;
      (**(code **)(*plVar6 + 0x20))(plVar6);
    }
  }
  return;
}


