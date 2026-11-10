/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0320d6fc; name: FUN_0320d6fc
 */


void FUN_0320d6fc(long param_1,long param_2)

{
  int iVar1;
  ulong *puVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  uint uVar9;
  uint local_12c;
  undefined1 auStack_128 [8];
  undefined8 local_120;
  undefined4 local_118;
  undefined8 local_108;
  undefined4 local_100;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  local_100 = 0;
  local_108 = 0;
  uVar9 = 0;
  local_e8 = 0;
  local_f0 = 0;
  local_e0 = 0;
  local_d8 = 0;
  local_c0 = 0;
  local_c8 = 0;
  local_b8 = 0;
  local_a0 = 0;
  local_a8 = 0;
  local_88 = 0;
  local_90 = 0;
  local_70 = 0;
  local_78 = 0;
  local_58 = 0;
  local_60 = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_118 = 0;
  local_120 = 0;
  iVar1 = *(int *)(param_2 + 0x18) + 1;
  while ((*(long **)(param_2 + 0x10) == (long *)0x0 ||
         (uVar7 = (**(code **)(**(long **)(param_2 + 0x10) + 0x10))(), (uVar7 & 1) == 0))) {
    do {
      uVar9 = uVar9 + 1;
      puVar2 = (ulong *)(*(long *)(param_1 + 0x4c0) +
                        (long)*(int *)(*(long *)(param_1 + 0x70) + (long)iVar1 * 0x40) * 0x40);
      do {
        uVar7 = *puVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar4) {
          *puVar2 = uVar7 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((uint)uVar7 < (uint)(uVar7 >> 0x20)) {
        local_12c = (uint)uVar7;
      }
      else {
        iVar6 = FUN_0332bfc4(param_1 + 0x30,iVar1,1,&local_12c);
        if (iVar6 == 0) {
          lVar5 = tpidr_el0;
          lVar8 = *(long *)(lVar5 + 0x38d490);
          if (lVar8 == 0) {
            lVar8 = FUN_0333d16c(0,1);
            *(long *)(lVar5 + 0x38d490) = lVar8;
          }
          FUN_0316660c(auStack_128,*(undefined8 *)(lVar8 + 0x10));
          return;
        }
        uVar7 = (ulong)local_12c;
      }
      FUN_0320bba4(param_1,auStack_128,uVar7);
    } while ((uVar9 & 3) != 0);
  }
  return;
}


