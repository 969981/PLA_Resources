/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 016a7da4; name: FUN_016a7da4
 */


void FUN_016a7da4(long param_1,undefined8 param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  bool bVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  long *local_60;
  undefined1 *local_58;
  
  uVar7 = *(ulong *)(param_1 + 0xf0);
  if ((int)uVar7 != 0) {
    uVar8 = 0;
    do {
      if (uVar8 < (ulong)(*(long *)(param_1 + 0x108) - *(long *)(param_1 + 0x100) >> 3)) {
        local_58 = *(undefined1 **)(*(long *)(param_1 + 0x100) + uVar8 * 8);
        if (local_58 != (undefined1 *)0xc0ea47549ab5f3d9) goto LAB_016a7e3c;
      }
      else {
        local_58 = &DAT_cbf29ce484222645;
LAB_016a7e3c:
        FUN_016a50f0(&local_60,param_1,&local_58,param_2);
        plVar6 = local_60;
        if (local_60 != (long *)0x0) {
          if ((*(int *)((long)local_60 + 100) == 0) && ((int)local_60[0x2c] == 2)) {
            FUN_016a7c28(param_1,&local_58);
            bVar5 = true;
          }
          else {
            bVar5 = false;
          }
          plVar1 = plVar6 + 10;
          do {
            iVar4 = (int)*plVar1 + -1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *(int *)plVar1 = iVar4;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar4 == 0) {
            (**(code **)(*plVar6 + 0x10))(plVar6);
          }
          if (bVar5) {
            return;
          }
        }
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 != (uVar7 & 0xffffffff));
  }
  FUN_016a7c28(param_1,&DAT_03a7c4a8);
  return;
}


