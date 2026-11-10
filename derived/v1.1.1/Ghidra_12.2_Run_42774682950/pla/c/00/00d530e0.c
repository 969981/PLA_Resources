/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d530e0; name: FUN_00d530e0
 */


void FUN_00d530e0(long *param_1,int param_2,uint param_3,undefined8 param_4,undefined4 param_5)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  int iVar4;
  long *plVar5;
  bool bVar6;
  uint uVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  long *plVar13;
  long local_80 [3];
  long *local_68;
  
  lVar12 = *(long *)(*(long *)(param_1[(long)param_2 * 0xc + 199] + 0xa8) + (ulong)param_3 * 0x10);
  uVar8 = (**(code **)(*param_1 + 0xc0))();
  if ((uVar8 & 1) == 0) {
    FUN_00d53568(param_1,lVar12,param_5,param_2);
    FUN_00d53960(param_1,param_2,param_3,*(undefined4 *)(lVar12 + 0x48));
    FUN_00d54178(param_1,param_2,param_3,param_2,param_5);
    goto LAB_00d5327c;
  }
  plVar13 = (long *)param_1[0x59];
  if (plVar13 != (long *)0x0) {
    plVar11 = plVar13 + 10;
    do {
      cVar3 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar6) {
        *(int *)plVar11 = (int)*plVar11 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  FUN_00d533f0(local_80,uVar8,param_2,param_5);
  plVar11 = (long *)plVar13[0x29];
  lVar2 = plVar13[0x2a];
  if (local_68 == (long *)0x0) {
    if (lVar2 == 0) goto LAB_00d533d0;
LAB_00d53184:
    if (*plVar11 == local_80[0]) goto LAB_00d533d0;
    lVar10 = lVar2 * 0x30;
    plVar9 = plVar11 + lVar2 * 6;
    do {
      lVar10 = lVar10 + -0x30;
      plVar5 = plVar9;
      if (lVar10 == 0) break;
      plVar1 = plVar11 + 6;
      plVar11 = plVar11 + 6;
      plVar5 = plVar11;
    } while (*plVar1 != local_80[0]);
    plVar11 = plVar5;
    if (local_68 == (long *)0x0) goto LAB_00d5324c;
LAB_00d531c4:
    (**(code **)(*local_68 + 0x20))(local_68);
    *(byte *)(plVar11[4] + 0x58) = *(byte *)(plVar11[4] + 0x58) & 0xfe;
    (**(code **)(*local_68 + 0x20))(local_68);
  }
  else {
    (**(code **)(*local_68 + 0x18))(local_68);
    if (lVar2 != 0) goto LAB_00d53184;
LAB_00d533d0:
    if (local_68 != (long *)0x0) goto LAB_00d531c4;
LAB_00d5324c:
    *(byte *)(plVar11[4] + 0x58) = *(byte *)(plVar11[4] + 0x58) & 0xfe;
  }
  if (plVar13 != (long *)0x0) {
    plVar11 = plVar13 + 10;
    do {
      iVar4 = (int)*plVar11 + -1;
      cVar3 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar6) {
        *(int *)plVar11 = iVar4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar13 + 0x10))(plVar13);
    }
  }
LAB_00d5327c:
  if ((*(int *)(lVar12 + 8) == 1) || (*(char *)((long)param_1 + 0x1641) == '\0')) {
    uVar7 = 0;
  }
  else {
    uVar7 = (**(code **)(*param_1 + 0x170))(param_1,param_2,param_3);
    uVar7 = uVar7 & 1;
  }
  FUN_00d543c4(param_1,param_2,param_5,uVar7);
  uVar7 = (**(code **)(*param_1 + 0x1f0))(param_1,param_2,param_3);
  FUN_00d5b258(param_1,param_2,param_5,uVar7 & 1);
  uVar7 = (**(code **)(*param_1 + 0x1f8))(param_1,param_2,param_3);
  FUN_00d5b4b0(param_1,param_2,param_5,uVar7 & 1);
  plVar13 = (long *)FUN_00d2e944(param_1 + 0x30,param_4);
  if ((*(int *)(lVar12 + 8) == 1) && ((char)param_1[0xdf] == '\0')) {
    bVar6 = (int)param_1[0xdc] == 2;
  }
  else {
    bVar6 = true;
  }
  if ((bool)*(char *)((long)plVar13 + 0xa2) != bVar6) {
    *(bool *)((long)plVar13 + 0xa2) = bVar6;
    (**(code **)(*plVar13 + 0x98))();
  }
                    /* WARNING: Could not recover jumptable at 0x00d53394. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x120))(param_1,param_2,param_3,param_4,param_5);
  return;
}


