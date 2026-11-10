/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01b145b0; name: FUN_01b145b0
 */


uint FUN_01b145b0(long *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  long *local_28;
  
  if (((((*(byte *)(param_1 + 400) & 7) == 0) &&
       (uVar7 = (**(code **)(*param_1 + 0x1b0))(), (uVar7 & 1) == 0)) &&
      (uVar7 = (**(code **)(*param_1 + 0x1a8))(param_1), (uVar7 & 1) == 0)) &&
     (*(int *)((long)param_1 + 0xb6c) != 1)) {
    if (param_1[0x17e] == 0) {
      local_28 = (long *)0x0;
LAB_01b1460c:
      lVar8 = param_1[0xb9];
    }
    else {
      FUN_01b2463c(&local_28);
      plVar5 = local_28;
      if (local_28 == (long *)0x0) goto LAB_01b1460c;
      uVar7 = FUN_025fb218(local_28);
      lVar8 = plVar5[0xb];
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
      if ((uVar7 & 1) == 0) {
        if (iVar2 == 1) {
          *(undefined8 *)(lVar8 + 0x18) = 0;
          (**(code **)(*plVar5 + 0x20))(plVar5);
        }
        goto LAB_01b14618;
      }
      if (iVar2 != 1) goto LAB_01b1460c;
      *(undefined8 *)(lVar8 + 0x18) = 0;
      (**(code **)(*plVar5 + 0x20))(plVar5);
      lVar8 = param_1[0xb9];
    }
    if ((lVar8 != 0) && (FUN_009cf990(&local_28), local_28 != (long *)0x0)) {
      uVar7 = FUN_01beed80();
      if ((uVar7 & 1) == 0) {
        uVar6 = FUN_01bef094(local_28);
      }
      else {
        uVar6 = 1;
      }
      if (local_28 != (long *)0x0) {
        lVar8 = local_28[0xb];
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
          (**(code **)(*local_28 + 0x20))();
        }
      }
      goto LAB_01b1461c;
    }
  }
LAB_01b14618:
  uVar6 = 0;
LAB_01b1461c:
  return uVar6 & 1;
}


