/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0260f6d0; name: FUN_0260f6d0
 */


void FUN_0260f6d0(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  undefined8 uVar8;
  long lVar9;
  int iVar10;
  long *plVar11;
  undefined1 auStack_a0 [48];
  undefined1 auStack_70 [24];
  long *local_58;
  undefined8 local_48;
  
  if ((*(char *)(param_1 + 0x37c) != '\0') &&
     ((((((*(long *)(param_1 + 0x348) == 0 || (*(int *)(*(long *)(param_1 + 0x348) + 0xc) == 0)) ||
         (*(long *)(param_1 + 0x318) == 0)) ||
        ((*(int *)(*(long *)(param_1 + 0x318) + 0xc) == 0 || (*(long *)(param_1 + 0x328) == 0)))) ||
       ((*(int *)(*(long *)(param_1 + 0x328) + 0xc) == 0 ||
        ((*(long *)(param_1 + 0x338) == 0 || (*(int *)(*(long *)(param_1 + 0x338) + 0xc) == 0))))))
      || ((*(long *)(param_1 + 0x358) == 0 ||
          (((*(int *)(*(long *)(param_1 + 0x358) + 0xc) == 0 || (*(long *)(param_1 + 0x368) == 0))
           || (*(int *)(*(long *)(param_1 + 0x368) + 0xc) == 0)))))))) {
    FUN_0260ca3c(param_1);
  }
  puVar6 = PTR_DAT_0437a6e0;
  puVar5 = PTR_DAT_0437a6d8;
  lVar9 = *(long *)(param_1 + 0x328);
  if ((lVar9 != 0) && (*(int *)(lVar9 + 0xc) != 0)) {
    piVar1 = (int *)(lVar9 + 0xc);
    iVar10 = *(int *)(lVar9 + 0xc);
    do {
      plVar11 = *(long **)(lVar9 + 0x10);
      if (((*puVar5 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar5), iVar7 != 0)) {
        uVar8 = FUN_00ad3750();
        *(undefined8 *)puVar6 = uVar8;
        __cxa_guard_release(puVar5);
      }
      while( true ) {
        if (plVar11 == (long *)0x0) {
          return;
        }
        if (plVar11 == (long *)puVar6) break;
        plVar11 = (long *)*plVar11;
      }
      iVar7 = *piVar1;
      if (iVar7 == iVar10) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar10 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          lVar9 = *(long *)(lVar9 + 0x18);
          if (lVar9 == 0) {
            return;
          }
          uVar4 = *(int *)(param_1 + 0x378) - 0x1b;
          plVar11 = (long *)(lVar9 + -0x50);
          if (uVar4 < 0xb) {
            local_48 = *(undefined8 *)(&DAT_03a7da78 + (long)(int)uVar4 * 8);
          }
          else {
            local_48 = 0x5475168e5589757a;
          }
          FUN_017d3788(auStack_a0,&local_48);
          FUN_02c90b20(plVar11,auStack_a0);
          FUN_02c91f74(plVar11,auStack_70);
          FUN_02c90b50(plVar11,0);
          if (local_58 != (long *)0x0) {
            (**(code **)(*local_58 + 0x20))();
          }
          FUN_00984b00(auStack_a0);
          lVar9 = *(long *)(lVar9 + 8);
          piVar1 = (int *)(lVar9 + 0xc);
          do {
            iVar10 = *piVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar10 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar10 + -1 == 0) {
            *(undefined8 *)(lVar9 + 0x18) = 0;
            (**(code **)(*plVar11 + 0x20))(plVar11);
            return;
          }
          return;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar10 = iVar7;
    } while (iVar7 != 0);
  }
  return;
}


