/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c17bd4; name: FUN_02c17bd4
 */


void FUN_02c17bd4(long param_1,int *param_2)

{
  int *piVar1;
  uint uVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long *local_a0;
  ulong uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_78 = *(undefined8 *)(param_1 + 0xf8);
  local_80 = *(undefined8 *)(param_1 + 0xf0);
  uStack_68 = *(undefined8 *)(param_1 + 0x108);
  uStack_70 = *(undefined8 *)(param_1 + 0x100);
  uStack_58 = *(undefined8 *)(param_1 + 0x118);
  local_60 = *(undefined8 *)(param_1 + 0x110);
  uStack_48 = *(undefined8 *)(param_1 + 0x128);
  uStack_50 = *(undefined8 *)(param_1 + 0x120);
  local_90 = *(undefined8 *)param_2;
  uStack_88 = *(undefined8 *)(param_2 + 2);
  iVar6 = (**(code **)(param_1 + 0x60))(param_1 + 0x80,&local_90);
  if (iVar6 == 2) {
    if (((*(long *)(param_1 + (long)param_2[3] * 0x10 + 0x140) != 0) &&
        (FUN_02c188ac(&local_a0), local_a0 != (long *)0x0)) &&
       (uVar2 = (param_2[1] << (ulong)(param_2[2] & 0x1f)) + *param_2,
       lVar7 = *(long *)(local_a0[0x11] + (long)param_2[2] * 0x38),
       uVar8 = -(ulong)(uVar2 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar2 << 3,
       *(ulong *)(lVar7 + uVar8) = *(ulong *)(lVar7 + uVar8) | 0x40000000, local_a0 != (long *)0x0))
    {
      lVar7 = local_a0[0xb];
      piVar1 = (int *)(lVar7 + 0xc);
      do {
        iVar6 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar6 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar6 + -1 == 0) {
        *(undefined8 *)(lVar7 + 0x18) = 0;
        (**(code **)(*local_a0 + 0x20))();
      }
    }
  }
  else if (iVar6 == 1) {
    FUN_02c17dd0(param_1,param_2);
    lVar9 = *(long *)(param_1 + 0xe0);
    iVar6 = param_2[2];
    nn::os::LockMutex((MutexType *)(lVar9 + 0x68));
    lVar7 = *(long *)(lVar9 + 0x88);
    lVar3 = *(long *)(lVar9 + 0x90);
    nn::os::UnlockMutex((MutexType *)(lVar9 + 0x68));
    if ((ulong)(long)iVar6 < (lVar3 - lVar7 >> 3) * 0x6db6db6db6db6db7 - 1U) {
      uStack_98 = (ulong)(param_2[2] + 1);
      local_a0 = (long *)((ulong)(uint)(*param_2 << 1) | (ulong)(uint)param_2[1] << 0x21);
      FUN_02c17bd4(param_1,&local_a0);
      local_a0 = (long *)((ulong)(*param_2 << 1 | 1) | (ulong)(uint)param_2[1] << 0x21);
      uStack_98 = (ulong)(param_2[2] + 1);
      FUN_02c17bd4(param_1,&local_a0);
      local_a0 = (long *)(CONCAT44(param_2[1] << 1,*param_2 << 1) | 0x100000000);
      uStack_98 = (ulong)(param_2[2] + 1);
      FUN_02c17bd4(param_1,&local_a0);
      local_a0 = (long *)(CONCAT44(param_2[1] << 1,*param_2 << 1) | 0x100000001);
      uStack_98 = (ulong)(param_2[2] + 1);
      FUN_02c17bd4(param_1,&local_a0);
    }
  }
  return;
}


