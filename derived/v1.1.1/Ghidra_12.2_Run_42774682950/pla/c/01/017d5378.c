/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 017d5378; name: FUN_017d5378
 */


void FUN_017d5378(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  undefined4 uVar7;
  long lVar8;
  long lVar9;
  int local_2c;
  long *local_28;
  
  iVar6 = FUN_017d4ac0();
  if (iVar6 != 0) {
    iVar6 = FUN_017da8e0(iVar6 + -1);
    lVar9 = *(long *)(param_1 + 0xf0);
    if (lVar9 != param_1 + 0xe8) {
      local_2c = 0;
      do {
        if (*(long *)(lVar9 + 0x18) == 0) {
          local_28 = (long *)0x0;
        }
        else {
          FUN_017dca7c(&local_28);
          if (local_28 != (long *)0x0) {
            if (iVar6 == local_2c) {
              FUN_017db6d4(param_1 + 0xb0,(long *)(lVar9 + 0x18));
              if (local_28 == (long *)0x0) break;
              bVar5 = false;
              local_2c = iVar6;
            }
            else {
              local_2c = local_2c + 1;
              bVar5 = true;
            }
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
            if (!bVar5) break;
          }
        }
        lVar9 = *(long *)(lVar9 + 8);
      } while (lVar9 != param_1 + 0xe8);
    }
    uVar7 = FUN_017db374();
    *(undefined4 *)(param_1 + 0x6c) = uVar7;
    FUN_017db0b0(param_1);
  }
  return;
}


