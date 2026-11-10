/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01aef8d8; name: FUN_01aef8d8
 */


void FUN_01aef8d8(long param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  char cVar5;
  bool bVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined4 local_20;
  long *local_18;
  
  uVar3 = param_2[1];
  uVar9 = param_2[2];
  *(undefined8 *)(param_1 + 0x7f4) = *param_2;
  *(undefined8 *)(param_1 + 0x7fc) = uVar3;
  *(undefined8 *)(param_1 + 0x804) = uVar9;
  uVar9 = param_2[5];
  uVar3 = param_2[4];
  uVar4 = *(undefined4 *)(param_2 + 6);
  *(undefined8 *)(param_1 + 0x80c) = param_2[3];
  *(undefined8 *)(param_1 + 0x81c) = uVar9;
  *(undefined4 *)(param_1 + 0x824) = uVar4;
  *(undefined8 *)(param_1 + 0x814) = uVar3;
  if (*(char *)(param_1 + 0x7f0) == '\0') {
    *(undefined1 *)(param_1 + 0x7f0) = 1;
  }
  if ((*(long *)(param_1 + 0x618) != 0) &&
     (FUN_0095dd00(&local_18,*(long *)(param_1 + 0x618)), local_18 != (long *)0x0)) {
    uVar7 = FUN_025fe5c8(local_18,2);
    if ((uVar7 & 1) != 0) {
      FUN_025ff50c(&local_50,local_18,param_2);
      *(undefined8 *)(param_1 + 0x7fc) = uStack_48;
      *(undefined8 *)(param_1 + 0x804) = local_40;
      *(undefined8 *)(param_1 + 0x7f4) = local_50;
      *(undefined4 *)(param_1 + 0x824) = local_20;
      *(undefined8 *)(param_1 + 0x80c) = local_38;
      *(undefined8 *)(param_1 + 0x814) = uStack_30;
      *(undefined8 *)(param_1 + 0x81c) = local_28;
      if (*(char *)(param_1 + 0x7f0) == '\0') {
        *(undefined1 *)(param_1 + 0x7f0) = 1;
      }
    }
    if (local_18 != (long *)0x0) {
      lVar8 = local_18[0xb];
      piVar1 = (int *)(lVar8 + 0xc);
      do {
        iVar2 = *piVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = iVar2 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar2 + -1 == 0) {
        *(undefined8 *)(lVar8 + 0x18) = 0;
        (**(code **)(*local_18 + 0x20))();
      }
    }
  }
  return;
}


