/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02830130; name: FUN_02830130
 */


void FUN_02830130(long param_1,undefined8 param_2)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  int iVar4;
  long **local_48;
  long local_40;
  long *local_38;
  
  local_38 = (long *)0x0;
  local_48 = &local_38;
  FUN_02830468(param_2,&local_48,0);
  plVar2 = local_38;
  if (local_38 == (long *)0x0) {
    local_38 = (long *)0x0;
    local_48 = &local_38;
    local_40 = param_1;
    FUN_028307d0(param_2,&local_48,0);
    plVar2 = local_38;
    if (local_38 == (long *)0x0) {
      local_48 = &local_38;
      local_38 = (long *)0x0;
      FUN_02830b58(param_2,&local_48,0);
      plVar2 = local_38;
      if (local_38 != (long *)0x0) {
        iVar4 = 0;
        plVar3 = local_38;
        do {
          plVar3 = (long *)plVar3[0x11];
          if (plVar3 == (long *)0x0) {
            iVar4 = 0;
            break;
          }
          iVar4 = iVar4 + 1;
          uVar1 = (**(code **)(*plVar3 + 0xd0))(plVar3);
        } while ((uVar1 & 1) != 0);
        uVar1 = 1;
        do {
          while( true ) {
            if ((uVar1 & 1) == 0) {
              return;
            }
            if (iVar4 != 0) break;
            uVar1 = (**(code **)(*plVar2 + 0xc0))(plVar2,param_1 + 8);
            plVar2 = (long *)plVar2[0x11];
            if (plVar2 == (long *)0x0) {
              return;
            }
          }
          iVar4 = iVar4 + -1;
          uVar1 = 1;
          plVar2 = (long *)plVar2[0x11];
        } while (plVar2 != (long *)0x0);
      }
    }
    else {
      iVar4 = 0;
      plVar3 = local_38;
      do {
        plVar3 = (long *)plVar3[0x11];
        if (plVar3 == (long *)0x0) {
          iVar4 = 0;
          break;
        }
        iVar4 = iVar4 + 1;
        uVar1 = (**(code **)(*plVar3 + 0xd0))(plVar3);
      } while ((uVar1 & 1) != 0);
      uVar1 = 1;
      do {
        if ((uVar1 & 1) == 0) {
          return;
        }
        if (iVar4 == 0) {
          uVar1 = (**(code **)(*plVar2 + 0xc0))(plVar2,param_1 + 8);
        }
        else {
          iVar4 = iVar4 + -1;
          uVar1 = 1;
        }
        plVar2 = (long *)plVar2[0x11];
      } while (plVar2 != (long *)0x0);
    }
  }
  else {
    iVar4 = 0;
    plVar3 = local_38;
    do {
      plVar3 = (long *)plVar3[0x11];
      if (plVar3 == (long *)0x0) {
        iVar4 = 0;
        break;
      }
      iVar4 = iVar4 + 1;
      uVar1 = (**(code **)(*plVar3 + 0xd0))(plVar3);
    } while ((uVar1 & 1) != 0);
    uVar1 = 1;
    do {
      if ((uVar1 & 1) == 0) {
        return;
      }
      if (iVar4 == 0) {
        uVar1 = (**(code **)(*plVar2 + 0xc0))(plVar2,param_1 + 8);
      }
      else {
        iVar4 = iVar4 + -1;
        uVar1 = 1;
      }
      plVar2 = (long *)plVar2[0x11];
    } while (plVar2 != (long *)0x0);
  }
  return;
}


