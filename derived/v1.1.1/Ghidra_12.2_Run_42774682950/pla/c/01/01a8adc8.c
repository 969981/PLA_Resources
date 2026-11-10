/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a8adc8; name: FUN_01a8adc8
 */


undefined8 FUN_01a8adc8(long param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  undefined4 uVar6;
  long lVar7;
  long *plVar8;
  long *local_80;
  long lStack_78;
  undefined1 auStack_70 [24];
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  
  local_30 = 0;
  if (*(char *)(param_1 + 0x7a0) == '\0') {
    uVar5 = FUN_01f56528(param_2,*(undefined4 *)(param_1 + 0x770),&local_40);
  }
  else {
    uVar5 = FUN_01f566c8(param_2,*(undefined4 *)(param_1 + 0x770),param_1 + 0x7b0,&local_40);
  }
  if ((uVar5 & 1) != 0) {
    local_50 = *(undefined8 *)PTR_DAT_0437a100;
    local_48 = *(undefined8 *)((long)PTR_DAT_0437a100 + 8);
    *(undefined8 *)(param_1 + 0x7b8) = uStack_38;
    *(undefined8 *)(param_1 + 0x7b0) = local_40;
    *(undefined8 *)(param_1 + 0x7c0) = local_30;
    *(undefined8 *)(param_1 + 2000) = local_50;
    *(undefined8 *)(param_1 + 0x7d8) = local_48;
    *(undefined8 *)(param_1 + 0x7c8) = local_58;
    *(undefined8 *)(param_1 + 0x7e0) = 0x3dcccccd3c23d70a;
    if (*(char *)(param_1 + 0x7a0) == '\0') {
      *(undefined1 *)(param_1 + 0x7a0) = 1;
    }
    uVar6 = 1;
    if (*(int *)(param_1 + 0x770) != 0) {
      uVar6 = 2;
    }
    uVar5 = FUN_01a89ce8(0x3fb33333,0x40a00000,param_1,param_2,&local_40,uVar6,auStack_70,1,1,0);
    if ((uVar5 & 1) != 0) {
      FUN_009c69bc(&local_80,param_1);
      lStack_78 = local_80[0x19];
      plVar8 = (long *)local_80[0x18];
      if (local_80 != (long *)0x0) {
        lVar7 = local_80[0xb];
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
          (**(code **)(*local_80 + 0x20))();
        }
      }
      local_80 = plVar8;
      FUN_01a83770(param_1,auStack_70,&local_80);
      FUN_01a8ac20(param_1);
      return 1;
    }
  }
  return 0;
}


