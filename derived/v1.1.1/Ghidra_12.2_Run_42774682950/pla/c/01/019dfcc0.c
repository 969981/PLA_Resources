/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 019dfcc0; name: FUN_019dfcc0
 */


void FUN_019dfcc0(long param_1,long param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long *local_28;
  
  FUN_019e30fc(param_1 + 0x260);
  FUN_009c69bc(&local_28,param_1);
  FUN_019e3374(param_1 + 0x220,param_2 + 0x90);
  FUN_00aeb228(param_1 + 0x230,param_2 + 0xa0);
  FUN_00bd10a0(param_1 + 0x240,param_2 + 0xb0);
  FUN_019e35e4(param_1 + 0x250,param_2 + 0xc0);
  if (local_28 != (long *)0x0) {
    lVar6 = local_28[0xb];
    piVar1 = (int *)(lVar6 + 0xc);
    do {
      iVar2 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar2 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar2 + -1 == 0) {
      *(undefined8 *)(lVar6 + 0x18) = 0;
      (**(code **)(*local_28 + 0x20))();
    }
  }
  *(undefined4 *)(param_1 + 0x314) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x318) = *(undefined4 *)(param_2 + 0x14);
  uVar7 = *(undefined8 *)(param_2 + 0x20);
  uVar8 = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x31c) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x324) = uVar7;
  *(undefined8 *)(param_1 + 0x32c) = uVar8;
  uVar9 = *(undefined8 *)(param_2 + 0x40);
  uVar7 = *(undefined8 *)(param_2 + 0x30);
  uVar8 = *(undefined8 *)(param_2 + 0x38);
  *(undefined4 *)(param_1 + 0x34c) = *(undefined4 *)(param_2 + 0x48);
  *(undefined8 *)(param_1 + 0x33c) = uVar8;
  *(undefined8 *)(param_1 + 0x344) = uVar9;
  *(undefined8 *)(param_1 + 0x334) = uVar7;
  uVar7 = *(undefined8 *)(param_2 + 0x74);
  uVar8 = *(undefined8 *)(param_2 + 0x7c);
  uVar3 = *(undefined4 *)(param_2 + 0x84);
  *(undefined8 *)(param_1 + 0x370) = *(undefined8 *)(param_2 + 0x6c);
  *(undefined4 *)(param_1 + 0x388) = uVar3;
  *(undefined8 *)(param_1 + 0x380) = uVar8;
  *(undefined8 *)(param_1 + 0x378) = uVar7;
  uVar7 = *(undefined8 *)(param_2 + 0x4c);
  uVar8 = *(undefined8 *)(param_2 + 0x54);
  uVar9 = *(undefined8 *)(param_2 + 0x5c);
  *(undefined8 *)(param_1 + 0x368) = *(undefined8 *)(param_2 + 100);
  *(undefined8 *)(param_1 + 0x360) = uVar9;
  *(undefined8 *)(param_1 + 0x358) = uVar8;
  *(undefined8 *)(param_1 + 0x350) = uVar7;
  *(undefined1 *)(param_1 + 0x38c) = *(undefined1 *)(param_2 + 0x88);
  *(undefined1 *)(param_1 + 0x38d) = *(undefined1 *)(param_2 + 0x89);
  FUN_019dfe24(param_1);
  FUN_019e0080(param_1);
  *(undefined8 *)(param_1 + 0x3d0) = *(undefined8 *)(param_1 + 0x390);
  *(undefined8 *)(param_1 + 0x3d8) = *(undefined8 *)(param_1 + 0x398);
  if (*(int *)(param_1 + 0x314) == 1) {
    *(undefined4 *)(param_1 + 0x208) = 4;
  }
  return;
}


