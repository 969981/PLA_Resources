/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01ad28d8; name: FUN_01ad28d8
 */


uint FUN_01ad28d8(int *param_1,undefined2 *param_2,uint param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  bool bVar5;
  long lVar6;
  ulong uVar7;
  uint extraout_w8;
  uint uVar8;
  long lVar9;
  long *local_38;
  long *local_30;
  undefined1 auStack_28 [8];
  
  iVar2 = *param_1;
  if ((iVar2 != 5) && (iVar2 != 0x21)) {
    if ((iVar2 != 8) ||
       (((param_3 & 1) == 0 || (FUN_00cf6d78(&local_30,param_1 + 2), local_30 == (long *)0x0)))) {
      uVar8 = 0;
      goto LAB_01ad2910;
    }
    FUN_009c69bc(&local_38);
    lVar6 = FUN_009b421c(local_38 + 0x1e,auStack_28);
    if (local_38 == (long *)0x0) {
LAB_01ad2978:
      if (lVar6 != 0) goto LAB_01ad297c;
LAB_01ad2a60:
      uVar8 = 0;
LAB_01ad29ac:
      bVar5 = true;
      bVar4 = true;
    }
    else {
      lVar9 = local_38[0xb];
      piVar1 = (int *)(lVar9 + 0xc);
      do {
        iVar2 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar2 + -1 != 0) goto LAB_01ad2978;
      *(undefined8 *)(lVar9 + 0x18) = 0;
      (**(code **)(*local_38 + 0x20))(local_38);
      if (lVar6 == 0) goto LAB_01ad2a60;
LAB_01ad297c:
      uVar7 = FUN_018de07c();
      if ((((uVar7 & 1) == 0) || (uVar7 = FUN_018e0d5c(lVar6), (uVar7 & 1) != 0)) ||
         (uVar7 = FUN_018e1ab8(lVar6), (uVar7 & 1) != 0)) {
        *param_2 = 0x100;
        uVar8 = 1;
        goto LAB_01ad29ac;
      }
      bVar5 = false;
      bVar4 = false;
      uVar8 = extraout_w8;
    }
    if (local_30 != (long *)0x0) {
      lVar6 = local_30[0xb];
      piVar1 = (int *)(lVar6 + 0xc);
      do {
        iVar2 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      bVar4 = bVar5;
      if (iVar2 + -1 == 0) {
        *(undefined8 *)(lVar6 + 0x18) = 0;
        (**(code **)(*local_30 + 0x20))();
        if (bVar5) goto LAB_01ad2910;
        goto LAB_01ad29d8;
      }
    }
    if (bVar4) goto LAB_01ad2910;
  }
LAB_01ad29d8:
  *(undefined1 *)((long)param_2 + 1) = 0;
  *(int *)(param_2 + 4) = *param_1;
  FUN_00b63974(param_2 + 8,param_1 + 2);
  FUN_00cfa028(param_2 + 0x10,param_1 + 6);
  FUN_0095aa3c(param_2 + 0x18,param_1 + 10);
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0xe);
  FUN_00bd10a0(param_2 + 0x24,param_1 + 0x10);
  *(char *)(param_2 + 0x2c) = (char)param_1[0x14];
  uVar8 = 1;
  *(undefined1 *)param_2 = 1;
LAB_01ad2910:
  return uVar8 & 1;
}


