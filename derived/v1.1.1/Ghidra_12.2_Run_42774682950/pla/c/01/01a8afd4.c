/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a8afd4; name: FUN_01a8afd4
 */


undefined1  [16] FUN_01a8afd4(long param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  long lVar6;
  undefined1 auVar7 [16];
  long *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  long local_30;
  long lStack_28;
  
  if (*(char *)(param_1 + 0x7a0) == '\0') {
    uVar5 = FUN_01f56528(param_2,*(undefined4 *)(param_1 + 0x770),&local_50);
  }
  else {
    uVar5 = FUN_01f566c8(param_2,*(undefined4 *)(param_1 + 0x770),param_1 + 0x7b0,&local_50);
  }
  if ((uVar5 & 1) != 0) {
    local_60 = *(undefined8 *)PTR_DAT_0437a100;
    local_58 = *(undefined8 *)((long)PTR_DAT_0437a100 + 8);
    *(undefined8 *)(param_1 + 0x7b8) = uStack_48;
    *(undefined8 *)(param_1 + 0x7b0) = local_50;
    *(undefined8 *)(param_1 + 0x7c0) = local_40;
    *(undefined8 *)(param_1 + 2000) = local_60;
    *(undefined8 *)(param_1 + 0x7d8) = local_58;
    *(long **)(param_1 + 0x7c8) = local_68;
    *(undefined8 *)(param_1 + 0x7e0) = 0x3dcccccd3c23d70a;
    if (*(char *)(param_1 + 0x7a0) == '\0') {
      *(undefined1 *)(param_1 + 0x7a0) = 1;
    }
    uVar5 = FUN_01a89ce8(0x3fb33333,0x40a00000,param_1,&local_50,&local_50,0,&local_30,0,1,0);
    if ((uVar5 & 1) != 0) goto LAB_01a8b0f0;
  }
  FUN_009c69bc(&local_68,param_1);
  lStack_28 = local_68[0x1b];
  local_30 = local_68[0x1a];
  if (local_68 != (long *)0x0) {
    lVar6 = local_68[0xb];
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
    if (iVar2 + -1 == 0) {
      *(undefined8 *)(lVar6 + 0x18) = 0;
      (**(code **)(*local_68 + 0x20))();
    }
  }
LAB_01a8b0f0:
  auVar7._8_8_ = lStack_28;
  auVar7._0_8_ = local_30;
  return auVar7;
}


