/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02682b3c; name: FUN_02682b3c
 */


void FUN_02682b3c(undefined8 *param_1,long param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  code *pcVar12;
  int iVar13;
  long *plVar14;
  long local_98 [3];
  long *local_80;
  long *local_78;
  undefined1 local_70 [16];
  
  local_70 = FUN_02680cb8();
  puVar7 = PTR_DAT_0437b090;
  puVar6 = PTR_DAT_0437b088;
  puVar5 = PTR_DAT_043795e0;
  puVar4 = PTR_DAT_043794d0;
  lVar11 = *(long *)(param_2 + 0xc10);
  if ((lVar11 != 0) && (*(int *)(lVar11 + 0xc) != 0)) {
    piVar1 = (int *)(lVar11 + 0xc);
    iVar13 = *(int *)(lVar11 + 0xc);
    do {
      plVar14 = *(long **)(lVar11 + 0x10);
      if ((*puVar6 & 1) == 0) {
        iVar8 = __cxa_guard_acquire(puVar6);
        if (iVar8 != 0) {
          if ((*PTR_DAT_043795d8 & 1) == 0) {
            iVar8 = __cxa_guard_acquire(PTR_DAT_043795d8);
            if (iVar8 != 0) {
              if ((*puVar4 & 1) == 0) {
                iVar8 = __cxa_guard_acquire(puVar4);
                if (iVar8 != 0) {
                  uVar10 = FUN_0087f8f0();
                  *(undefined8 *)PTR_DAT_043794d8 = uVar10;
                  __cxa_guard_release(puVar4);
                }
              }
              *(undefined **)puVar5 = PTR_DAT_043794d8;
              __cxa_guard_release(PTR_DAT_043795d8);
            }
          }
          *(undefined **)puVar7 = puVar5;
          __cxa_guard_release(puVar6);
        }
      }
      while( true ) {
        if (plVar14 == (long *)0x0) goto LAB_02682b74;
        if (plVar14 == (long *)puVar7) break;
        plVar14 = (long *)*plVar14;
      }
      iVar8 = *piVar1;
      if (iVar8 == iVar13) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar13 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 != '\0') goto LAB_02682be4;
        lVar11 = *(long *)(lVar11 + 0x18);
        if (lVar11 != 0) {
          plVar14 = (long *)(lVar11 + -0x50);
          uVar9 = FUN_018303cc(plVar14,local_70);
          if ((uVar9 & 1) != 0) {
            *param_1 = 0;
            param_1[1] = 0;
            FUN_00aeb228(param_1,param_2 + 0xc58);
            lVar11 = *(long *)(lVar11 + 8);
            piVar1 = (int *)(lVar11 + 0xc);
            do {
              iVar13 = *piVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar3) {
                *piVar1 = iVar13 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (iVar13 + -1 != 0) {
              return;
            }
            *(undefined8 *)(lVar11 + 0x18) = 0;
            pcVar12 = *(code **)(*plVar14 + 0x20);
            goto LAB_02682d20;
          }
          lVar11 = *(long *)(lVar11 + 8);
          piVar1 = (int *)(lVar11 + 0xc);
          do {
            iVar13 = *piVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar13 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar13 + -1 != 0) break;
          *(undefined8 *)(lVar11 + 0x18) = 0;
          (**(code **)(*plVar14 + 0x20))(plVar14);
          lVar11 = *(long *)(param_2 + 0xc00);
          goto joined_r0x02682c74;
        }
        break;
      }
      ClearExclusiveLocal();
LAB_02682be4:
      iVar13 = iVar8;
    } while (iVar8 != 0);
  }
LAB_02682b74:
  lVar11 = *(long *)(param_2 + 0xc00);
joined_r0x02682c74:
  if (lVar11 == 0) {
    local_78 = (long *)0x0;
  }
  else {
    FUN_00b91400(&local_78);
    if (local_78 != (long *)0x0) {
      FUN_01c3aa24(local_98,local_78,local_70,0);
      if ((local_98[0] == 0x1de9c90f8c5dcb52) || (local_98[0] == 0x11fdbc27460f2ce0)) {
        param_2 = param_2 + 0xc48;
      }
      else {
        param_2 = param_2 + 0xc38;
      }
      *param_1 = 0;
      param_1[1] = 0;
      FUN_00aeb228(param_1,param_2);
      if (local_80 != (long *)0x0) {
        (**(code **)(*local_80 + 0x20))();
      }
      if (local_78 == (long *)0x0) {
        return;
      }
      lVar11 = local_78[0xb];
      piVar1 = (int *)(lVar11 + 0xc);
      do {
        iVar13 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar13 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar13 + -1 != 0) {
        return;
      }
      *(undefined8 *)(lVar11 + 0x18) = 0;
      pcVar12 = *(code **)(*local_78 + 0x20);
      plVar14 = local_78;
LAB_02682d20:
      (*pcVar12)(plVar14);
      return;
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  FUN_00aeb228(param_1,param_2 + 0xc38);
  return;
}


