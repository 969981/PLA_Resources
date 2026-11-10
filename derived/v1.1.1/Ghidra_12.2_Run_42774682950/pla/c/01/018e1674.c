/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 018e1674; name: FUN_018e1674
 */


void FUN_018e1674(long param_1)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  bool bVar6;
  undefined4 uVar7;
  int iVar8;
  long *plVar9;
  long lVar10;
  undefined1 *local_250;
  code *local_248;
  undefined1 *local_240;
  undefined1 *local_238;
  long alStack_230 [12];
  undefined1 *local_1d0;
  code *local_1c8;
  undefined1 *local_1c0;
  undefined1 *local_1b8;
  long alStack_1b0 [12];
  undefined1 *local_150;
  code *local_148;
  undefined1 *local_140;
  undefined1 *local_138;
  long alStack_130 [12];
  undefined1 *local_d0;
  code *local_c8;
  undefined1 *local_c0;
  undefined1 *local_b8;
  long alStack_b0 [13];
  long *local_48;
  undefined8 uStack_40;
  long *local_38;
  long local_28;
  
  local_48 = (long *)0x0;
  uStack_40 = 0;
  FUN_00ac3fa4(&local_48,param_1 + 0x248);
  if (local_48 == (long *)0x0) {
    local_38 = (long *)0x0;
  }
  else {
    FUN_00bd915c(&local_38);
    plVar9 = local_48;
    if (local_48 != (long *)0x0) {
      plVar2 = local_48 + 1;
      do {
        iVar8 = (int)*plVar2 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *(int *)plVar2 = iVar8;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar8 == 0) {
        local_48[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar10 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar10;
        local_28 = *plVar9;
        FUN_02a44274(lVar10 + 0xd8,&local_28);
      }
    }
  }
  if (local_38 == (long *)0x0) {
LAB_018e1884:
    FUN_016c24d0(&local_48,param_1 + 0x748);
    if (local_48 == (long *)0x0) {
      return;
    }
    FUN_01836814(local_48,0);
    if (local_48 == (long *)0x0) {
      return;
    }
    lVar10 = local_48[0xb];
    piVar1 = (int *)(lVar10 + 0xc);
    do {
      bVar6 = *piVar1 + -1 == 0;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
      plVar9 = local_48;
    } while (cVar3 != '\0');
  }
  else {
    uVar7 = FUN_01b42568();
    switch(uVar7) {
    case 0:
      FUN_018dc980(param_1);
      if (local_38 == (long *)0x0) {
        return;
      }
      lVar10 = local_38[0xb];
      piVar1 = (int *)(lVar10 + 0xc);
      do {
        bVar6 = *piVar1 + -1 == 0;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        plVar9 = local_38;
      } while (cVar3 != '\0');
      break;
    case 1:
      local_d0 = &LAB_018e5374;
      local_c8 = FUN_018e5448;
      local_c0 = &LAB_018e544c;
      local_b8 = &LAB_018e5458;
      alStack_b0[0] = param_1;
      FUN_01b43dc0(local_38,&local_d0);
      pcVar5 = local_c8;
      if (local_c8 != (code *)0x0) {
        local_c0 = (undefined1 *)0x0;
        local_b8 = (undefined1 *)0x0;
        local_d0 = (undefined1 *)0x0;
        local_c8 = (code *)0x0;
        (*pcVar5)(alStack_b0);
      }
      if (local_38 == (long *)0x0) {
        return;
      }
      lVar10 = local_38[0xb];
      piVar1 = (int *)(lVar10 + 0xc);
      do {
        bVar6 = *piVar1 + -1 == 0;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        plVar9 = local_38;
      } while (cVar3 != '\0');
      break;
    case 2:
      if (*(char *)(param_1 + 0x75e) == '\0') {
        local_1d0 = &LAB_018e5554;
        local_1c8 = FUN_018e555c;
        local_1c0 = &LAB_018e5560;
        local_1b8 = &LAB_018e556c;
        alStack_1b0[0] = param_1;
        FUN_01b43dc0(local_38,&local_1d0);
        pcVar5 = local_1c8;
        if (local_1c8 != (code *)0x0) {
          local_1c0 = (undefined1 *)0x0;
          local_1b8 = (undefined1 *)0x0;
          local_1d0 = (undefined1 *)0x0;
          local_1c8 = (code *)0x0;
          (*pcVar5)(alStack_1b0);
        }
        if (local_38 == (long *)0x0) {
          return;
        }
        lVar10 = local_38[0xb];
        piVar1 = (int *)(lVar10 + 0xc);
        do {
          bVar6 = *piVar1 + -1 == 0;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = *piVar1 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          plVar9 = local_38;
        } while (cVar3 != '\0');
      }
      else {
        local_150 = &LAB_018e5464;
        local_148 = FUN_018e5538;
        local_140 = &LAB_018e553c;
        local_138 = &LAB_018e5548;
        alStack_130[0] = param_1;
        FUN_01b43dc0(local_38,&local_150);
        pcVar5 = local_148;
        if (local_148 != (code *)0x0) {
          local_140 = (undefined1 *)0x0;
          local_138 = (undefined1 *)0x0;
          local_150 = (undefined1 *)0x0;
          local_148 = (code *)0x0;
          (*pcVar5)(alStack_130);
        }
        if (local_38 == (long *)0x0) {
          return;
        }
        lVar10 = local_38[0xb];
        piVar1 = (int *)(lVar10 + 0xc);
        do {
          bVar6 = *piVar1 + -1 == 0;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = *piVar1 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          plVar9 = local_38;
        } while (cVar3 != '\0');
      }
      break;
    case 3:
      local_250 = &LAB_018e5578;
      local_248 = FUN_018e5580;
      local_240 = &LAB_018e5584;
      local_238 = &LAB_018e5590;
      alStack_230[0] = param_1;
      FUN_01b43dc0(local_38,&local_250);
      pcVar5 = local_248;
      if (local_248 != (code *)0x0) {
        local_240 = (undefined1 *)0x0;
        local_238 = (undefined1 *)0x0;
        local_250 = (undefined1 *)0x0;
        local_248 = (code *)0x0;
        (*pcVar5)(alStack_230);
      }
      if (local_38 == (long *)0x0) {
        return;
      }
      lVar10 = local_38[0xb];
      piVar1 = (int *)(lVar10 + 0xc);
      do {
        bVar6 = *piVar1 + -1 == 0;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        plVar9 = local_38;
      } while (cVar3 != '\0');
      break;
    case 4:
      FUN_016c24d0(&local_48,param_1 + 0x748);
      if ((local_48 != (long *)0x0) && (FUN_01836814(local_48,0), local_48 != (long *)0x0)) {
        lVar10 = local_48[0xb];
        piVar1 = (int *)(lVar10 + 0xc);
        do {
          iVar8 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar8 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar8 + -1 == 0) {
          *(undefined8 *)(lVar10 + 0x18) = 0;
          (**(code **)(*local_48 + 0x20))();
        }
      }
      if (local_38 == (long *)0x0) {
        return;
      }
      lVar10 = local_38[0xb];
      piVar1 = (int *)(lVar10 + 0xc);
      do {
        bVar6 = *piVar1 + -1 == 0;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        plVar9 = local_38;
      } while (cVar3 != '\0');
      break;
    default:
      if (local_38 != (long *)0x0) {
        lVar10 = local_38[0xb];
        piVar1 = (int *)(lVar10 + 0xc);
        do {
          iVar8 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar8 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar8 + -1 == 0) {
          *(undefined8 *)(lVar10 + 0x18) = 0;
          (**(code **)(*local_38 + 0x20))();
        }
      }
      goto LAB_018e1884;
    }
  }
  if (bVar6) {
    *(undefined8 *)(lVar10 + 0x18) = 0;
    (**(code **)(*plVar9 + 0x20))();
  }
  return;
}


