/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0281bf64; name: FUN_0281bf64
 */


void FUN_0281bf64(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  long *local_68;
  long local_60;
  long *local_58;
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  undefined8 local_28;
  
  local_28 = 0;
  iVar4 = (**(code **)(**(long **)(param_1 + 0x100) + 0x58))();
  if (iVar4 != 0) {
    uVar9 = 0;
    uVar8 = 0;
    do {
      uVar6 = (**(code **)(**(long **)(param_1 + 0x100) + 0x40))(*(long **)(param_1 + 0x100),uVar8);
      if ((uVar6 & 1) == 0) {
        if (uVar8 == uVar9) {
          uVar8 = uVar9;
        }
        else {
          FUN_0281e088(param_1,uVar8,auStack_40);
          FUN_0281e088(param_1,uVar9,auStack_50);
          local_60 = param_1;
          FUN_0281e174(&local_58,*(undefined8 *)(param_1 + 8),&local_28,(long)&local_28 + 4,
                       &local_60);
          local_68 = local_58;
          local_58 = (long *)0x0;
          FUN_0115b43c(*(undefined8 *)(param_1 + 0x878),&local_68,0x40);
          if (local_68 != (long *)0x0) {
            lVar7 = local_68[0xb];
            piVar1 = (int *)(lVar7 + 0xc);
            do {
              iVar4 = *piVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar3) {
                *piVar1 = iVar4 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (iVar4 + -1 == 0) {
              *(undefined8 *)(lVar7 + 0x18) = 0;
              (**(code **)(*local_68 + 0x20))();
            }
          }
          if (local_58 != (long *)0x0) {
            lVar7 = local_58[0xb];
            piVar1 = (int *)(lVar7 + 0xc);
            do {
              iVar4 = *piVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar3) {
                *piVar1 = iVar4 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (iVar4 + -1 == 0) {
              *(undefined8 *)(lVar7 + 0x18) = 0;
              (**(code **)(*local_58 + 0x20))();
            }
          }
          uVar8 = (uint)local_28;
          uVar9 = local_28._4_4_;
        }
        uVar9 = uVar9 + 1;
        local_28 = (ulong)uVar9 << 0x20;
      }
      uVar8 = uVar8 + 1;
      local_28 = CONCAT44(local_28._4_4_,uVar8);
      uVar5 = (**(code **)(**(long **)(param_1 + 0x100) + 0x58))();
    } while (uVar8 < uVar5);
  }
  return;
}


