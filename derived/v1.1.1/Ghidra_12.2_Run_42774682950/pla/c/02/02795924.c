/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02795924; name: FUN_02795924
 */


undefined8 FUN_02795924(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char cVar6;
  bool bVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  code *pcVar11;
  char *__s;
  undefined8 *local_e0;
  undefined8 local_d8;
  char *pcStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 *local_b8;
  undefined8 local_b0;
  char *pcStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  char *pcStack_88;
  undefined8 local_80;
  long *local_78;
  undefined8 local_70;
  char *pcStack_68;
  undefined8 local_60;
  long *local_58;
  long *local_50;
  long *local_48;
  long *local_40;
  undefined8 local_38;
  
  if ((*(int *)(param_1 + 9) != 1) &&
     (((long *)param_1[10] == (long *)0x0 ||
      (uVar8 = (**(code **)(*(long *)param_1[10] + 0x48))(), (uVar8 & 1) == 0)))) {
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    __s = (char *)(param_1 + 1);
    __s[0] = '\0';
    __s[1] = '\0';
    __s[2] = '\0';
    __s[3] = '\0';
    __s[4] = '\0';
    __s[5] = '\0';
    __s[6] = '\0';
    __s[7] = '\0';
    snprintf(__s,0x40,"%s",param_2);
    local_70 = 0x30c9981689681b60;
    pcStack_68 = "BcatSync";
    local_60 = 8;
    local_58 = (long *)0x0;
    FUN_02795c78(&local_50,&local_70,*param_1);
    local_90 = 0x110cb6f47890bc04;
    pcStack_88 = "LoadDirectory";
    local_80 = 0xd;
    local_78 = (long *)0x0;
    FUN_02795d08(&local_48,local_50,&local_90,*param_1,__s);
    local_b0 = 0x2d1a1220bc1efa7c;
    pcStack_a8 = "LoadSuccess";
    local_a0 = 0xb;
    uStack_98 = 0;
    local_b8 = param_1;
    FUN_02795dac(&local_40,local_48,&local_b0,&local_b8);
    local_d8 = 0x55d7f8250e00c96d;
    pcStack_d0 = "LoadFailure";
    local_c8 = 0xb;
    uStack_c0 = 0;
    local_e0 = param_1;
    FUN_02795e7c(&local_38,local_40,&local_d8,&local_e0);
    plVar9 = (long *)param_1[10];
    param_1[10] = 0;
    if (plVar9 != (long *)0x0) {
      lVar10 = plVar9[0xb];
      piVar1 = (int *)(lVar10 + 0xc);
      do {
        iVar2 = *piVar1;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar7) {
          *piVar1 = iVar2 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar2 + -1 == 0) {
        *(undefined8 *)(lVar10 + 0x18) = 0;
        (**(code **)(*plVar9 + 0x20))();
      }
    }
    uVar3 = local_38;
    local_38 = 0;
    param_1[10] = uVar3;
    if (local_40 != (long *)0x0) {
      lVar10 = local_40[0xb];
      piVar1 = (int *)(lVar10 + 0xc);
      do {
        iVar2 = *piVar1;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar7) {
          *piVar1 = iVar2 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar2 + -1 == 0) {
        *(undefined8 *)(lVar10 + 0x18) = 0;
        (**(code **)(*local_40 + 0x20))();
      }
    }
    if (local_48 != (long *)0x0) {
      lVar10 = local_48[0xb];
      piVar1 = (int *)(lVar10 + 0xc);
      do {
        iVar2 = *piVar1;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar7) {
          *piVar1 = iVar2 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar2 + -1 == 0) {
        *(undefined8 *)(lVar10 + 0x18) = 0;
        (**(code **)(*local_48 + 0x20))();
      }
    }
    if (local_78 != (long *)0x0) {
      (**(code **)(*local_78 + 0x20))();
    }
    if (local_50 != (long *)0x0) {
      lVar10 = local_50[0xb];
      piVar1 = (int *)(lVar10 + 0xc);
      do {
        iVar2 = *piVar1;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar7) {
          *piVar1 = iVar2 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar2 + -1 == 0) {
        *(undefined8 *)(lVar10 + 0x18) = 0;
        (**(code **)(*local_50 + 0x20))();
      }
    }
    if (local_58 != (long *)0x0) {
      (**(code **)(*local_58 + 0x20))();
    }
    if ((long *)param_1[10] == (long *)0x0) {
      param_1[10] = 0;
      return 0;
    }
    uVar8 = (**(code **)(*(long *)param_1[10] + 0x48))();
    if ((uVar8 & 1) != 0) {
      pcVar11 = (code *)param_1[0xd];
      if (pcVar11 != (code *)0x0) {
        param_1[0xe] = 0;
        param_1[0xf] = 0;
        param_1[0xc] = 0;
        param_1[0xd] = 0;
        (*pcVar11)(param_1 + 0x10);
      }
      if ((code *)param_3[2] != (code *)0x0) {
        (*(code *)param_3[2])(param_3 + 4,param_1 + 0x10);
        uVar3 = *param_3;
        uVar4 = param_3[1];
        uVar5 = param_3[3];
        param_1[0xe] = param_3[2];
        param_1[0xf] = uVar5;
        param_1[0xc] = uVar3;
        param_1[0xd] = uVar4;
      }
      if (*(char *)(param_1 + 0x1c) != '\0') {
        *(undefined1 *)(param_1 + 0x1c) = 0;
      }
      *(undefined4 *)(param_1 + 9) = 1;
      return 1;
    }
    plVar9 = (long *)param_1[10];
    param_1[10] = 0;
    if (plVar9 == (long *)0x0) {
      return 0;
    }
    lVar10 = plVar9[0xb];
    piVar1 = (int *)(lVar10 + 0xc);
    do {
      iVar2 = *piVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar7) {
        *piVar1 = iVar2 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar2 == 1) {
      *(undefined8 *)(lVar10 + 0x18) = 0;
      (**(code **)(*plVar9 + 0x20))();
    }
  }
  return 0;
}


