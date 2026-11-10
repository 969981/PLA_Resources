/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01b44d68; name: FUN_01b44d68
 */


bool FUN_01b44d68(undefined8 param_1,undefined4 param_2,long param_3,undefined8 *param_4)

{
  int *piVar1;
  bool bVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  long lVar12;
  long *plVar13;
  undefined8 *puVar14;
  undefined **local_a0 [2];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  undefined8 local_70 [2];
  
  puVar8 = PTR_DAT_0437a668;
  puVar7 = PTR_DAT_0437a660;
  puVar6 = PTR_DAT_043794d8;
  puVar5 = PTR_DAT_043794d0;
  lVar12 = *(long *)(param_3 + 0x260);
  if ((lVar12 != 0) && (*(int *)(lVar12 + 0xc) != 0)) {
    piVar1 = (int *)(lVar12 + 0xc);
    iVar9 = *(int *)(lVar12 + 0xc);
    local_70[0] = param_1;
    do {
      puVar14 = *(undefined8 **)(lVar12 + 0x10);
      if (((*puVar8 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar8), iVar10 != 0)) {
        if (((*puVar5 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar5), iVar10 != 0)) {
          uVar11 = FUN_0087f8f0();
          *(undefined8 *)puVar6 = uVar11;
          __cxa_guard_release(puVar5);
        }
        *(undefined **)puVar7 = puVar6;
        __cxa_guard_release(puVar8);
      }
      if (puVar14 == (undefined8 *)0x0) {
        return false;
      }
      while (puVar14 != (undefined8 *)puVar7) {
        puVar14 = (undefined8 *)*puVar14;
        if (puVar14 == (undefined8 *)0x0) {
          return false;
        }
      }
      iVar10 = *piVar1;
      if (iVar10 == iVar9) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar9 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
          lVar12 = *(long *)(lVar12 + 0x18);
          if (lVar12 == 0) {
            return false;
          }
          plVar13 = (long *)(lVar12 + -0x50);
          local_a0[0] = &PTR_FUN_04287c08;
          local_90 = 0;
          uStack_88 = 0;
          local_80 = param_2;
          iVar9 = FUN_01e44070(0,plVar13,local_a0,local_70,1,param_4,4);
          bVar4 = iVar9 != 0;
          if (bVar4) {
            *(undefined8 *)(param_3 + 0xe88) = param_4[1];
            *(undefined8 *)(param_3 + 0xe80) = *param_4;
          }
          lVar12 = *(long *)(lVar12 + 8);
          piVar1 = (int *)(lVar12 + 0xc);
          do {
            iVar9 = *piVar1;
            cVar3 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar2) {
              *piVar1 = iVar9 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar9 + -1 == 0) {
            *(undefined8 *)(lVar12 + 0x18) = 0;
            (**(code **)(*plVar13 + 0x20))(plVar13);
            return bVar4;
          }
          return bVar4;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar9 = iVar10;
    } while (iVar10 != 0);
  }
  return false;
}


