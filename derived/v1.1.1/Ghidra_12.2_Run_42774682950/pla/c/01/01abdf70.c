/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01abdf70; name: FUN_01abdf70
 */


void FUN_01abdf70(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  undefined1 auStack_b0 [24];
  long *local_98;
  undefined1 auStack_90 [24];
  long *local_78;
  undefined4 local_6c;
  ulong local_68;
  long local_60 [3];
  long *local_48;
  long *local_40;
  long *local_38;
  
  if ((((*(char *)(param_1 + 0x390) != '\0') && (*(char *)(param_1 + 0x391) == '\0')) &&
      (*(long *)(param_1 + 600) != 0)) && (FUN_00b91400(&local_38), local_38 != (long *)0x0)) {
    if (*(long *)(param_1 + 0x248) == 0) {
      local_40 = (long *)0x0;
    }
    else {
      FUN_01a111e4(&local_40);
      plVar5 = local_38;
      if (local_40 != (long *)0x0) {
        FUN_032c7b0c(&local_68,param_1 + 0x3a0);
        FUN_01c3bbe4(local_60,plVar5,0x18,param_1 + 0x400,&local_68);
        if ((local_68 & 1) != 0) {
          lVar6 = tpidr_el0;
          lVar7 = *(long *)(lVar6 + 0x38d490);
          if (lVar7 == 0) {
            lVar7 = FUN_0333d16c(0,1);
            *(long *)(lVar6 + 0x38d490) = lVar7;
          }
          plVar5 = *(long **)(*(long *)(lVar7 + 8) + 0x58);
          *(undefined8 *)(local_68 - 0x11) = 0;
          (**(code **)(*plVar5 + 0x18))
                    (plVar5,(undefined8 *)(local_68 - 0x11),(long)*(int *)(local_68 - 9) + 0x10);
        }
        if (local_60[0] == -0x3643fe5bcff0c525) {
          local_6c = 3;
          FUN_02a4754c(auStack_90,param_1 + 0x468);
          lVar6 = param_1 + 0x4b0;
        }
        else if (local_60[0] == -0x11b0c2d8ce712917) {
          local_6c = 2;
          FUN_02a4754c(auStack_90,param_1 + 0x450);
          lVar6 = param_1 + 0x498;
        }
        else {
          local_6c = 1;
          FUN_02a4754c(auStack_90,param_1 + 0x438);
          lVar6 = param_1 + 0x480;
        }
        FUN_02a4754c(auStack_b0,lVar6);
        FUN_01abfa30(param_1,param_1 + 0x400,auStack_90,auStack_b0);
        if (local_98 != (long *)0x0) {
          (**(code **)(*local_98 + 0x20))();
        }
        if (local_78 != (long *)0x0) {
          (**(code **)(*local_78 + 0x20))();
        }
        *(undefined1 *)(param_1 + 0x391) = 1;
        FUN_01e4a0dc(local_40,&local_6c);
        if (local_48 != (long *)0x0) {
          (**(code **)(*local_48 + 0x20))();
        }
        if (local_40 != (long *)0x0) {
          lVar6 = local_40[0xb];
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
            (**(code **)(*local_40 + 0x20))();
          }
        }
      }
    }
    if (local_38 != (long *)0x0) {
      lVar6 = local_38[0xb];
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
        (**(code **)(*local_38 + 0x20))();
      }
    }
  }
  return;
}


