/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01af5bb8; name: FUN_01af5bb8
 */


void FUN_01af5bb8(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  byte *pbVar4;
  undefined8 *puVar5;
  byte *pbVar6;
  undefined8 *puVar7;
  byte *pbVar8;
  undefined8 *puVar9;
  ulong uVar10;
  int iVar11;
  int iVar12;
  undefined8 uVar13;
  long lVar14;
  long *plVar15;
  undefined8 *puVar16;
  undefined8 local_80;
  undefined8 uStack_78;
  long *local_70;
  undefined8 local_68;
  
  *(undefined1 *)(param_1 + 0x828) = 1;
  FUN_01aeeeb4(param_1,1);
  local_80 = (undefined8 *)0x0;
  uStack_78 = 0;
  FUN_01b00924(&local_80,param_1 + 0x688);
  if (local_80 == (undefined8 *)0x0) {
    local_70 = (long *)0x0;
  }
  else {
    FUN_0095dafc(&local_70);
    puVar5 = local_80;
    if (local_80 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_80 + 1);
      do {
        iVar11 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar11 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar11 + -1 == 0) {
        local_80[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar14 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar14;
        local_68 = *puVar5;
        FUN_02a44274(lVar14 + 0xd8,&local_68);
      }
    }
  }
  if (local_70 != (long *)0x0) {
    uVar10 = (ulong)local_80 >> 0x20;
    local_80 = (undefined8 *)CONCAT44((int)uVar10,1);
    FUN_01b0dce0(local_70,&local_80,1);
    if (local_70 != (long *)0x0) {
      lVar14 = local_70[0xb];
      piVar1 = (int *)(lVar14 + 0xc);
      do {
        iVar11 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar11 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar11 + -1 == 0) {
        *(undefined8 *)(lVar14 + 0x18) = 0;
        (**(code **)(*local_70 + 0x20))();
        lVar14 = *(long *)(param_1 + 0x648);
        pbVar4 = PTR_DAT_043794d0;
        puVar5 = (undefined8 *)PTR_DAT_043794d8;
        pbVar6 = PTR_DAT_043795d8;
        puVar7 = (undefined8 *)PTR_DAT_043795e0;
        pbVar8 = PTR_DAT_043806c8;
        puVar9 = (undefined8 *)PTR_DAT_043806d0;
        goto joined_r0x01af5c84;
      }
    }
  }
  lVar14 = *(long *)(param_1 + 0x648);
  pbVar4 = PTR_DAT_043794d0;
  puVar5 = (undefined8 *)PTR_DAT_043794d8;
  pbVar6 = PTR_DAT_043795d8;
  puVar7 = (undefined8 *)PTR_DAT_043795e0;
  pbVar8 = PTR_DAT_043806c8;
  puVar9 = (undefined8 *)PTR_DAT_043806d0;
joined_r0x01af5c84:
  PTR_DAT_043794d0 = pbVar4;
  PTR_DAT_043794d8 = (undefined *)puVar5;
  PTR_DAT_043795d8 = pbVar6;
  PTR_DAT_043795e0 = (undefined *)puVar7;
  PTR_DAT_043806c8 = pbVar8;
  PTR_DAT_043806d0 = (undefined *)puVar9;
  if ((lVar14 != 0) && (*(int *)(lVar14 + 0xc) != 0)) {
    piVar1 = (int *)(lVar14 + 0xc);
    iVar11 = *(int *)(lVar14 + 0xc);
    do {
      puVar16 = *(undefined8 **)(lVar14 + 0x10);
      if (((*pbVar8 & 1) == 0) && (iVar12 = __cxa_guard_acquire(pbVar8), iVar12 != 0)) {
        if (((*pbVar6 & 1) == 0) && (iVar12 = __cxa_guard_acquire(pbVar6), iVar12 != 0)) {
          if (((*pbVar4 & 1) == 0) && (iVar12 = __cxa_guard_acquire(pbVar4), iVar12 != 0)) {
            uVar13 = FUN_0087f8f0();
            *puVar5 = uVar13;
            __cxa_guard_release(pbVar4);
          }
          *puVar7 = puVar5;
          __cxa_guard_release(pbVar6);
        }
        *puVar9 = puVar7;
        __cxa_guard_release(pbVar8);
      }
      while( true ) {
        if (puVar16 == (undefined8 *)0x0) {
          return;
        }
        if (puVar16 == puVar9) break;
        puVar16 = (undefined8 *)*puVar16;
      }
      iVar12 = *piVar1;
      if (iVar12 == iVar11) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar11 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          lVar14 = *(long *)(lVar14 + 0x18);
          if (lVar14 == 0) {
            return;
          }
          plVar15 = (long *)(lVar14 + -0x50);
          FUN_01b8eb7c(plVar15);
          lVar14 = *(long *)(lVar14 + 8);
          piVar1 = (int *)(lVar14 + 0xc);
          do {
            iVar11 = *piVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar11 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar11 + -1 == 0) {
            *(undefined8 *)(lVar14 + 0x18) = 0;
            (**(code **)(*plVar15 + 0x20))(plVar15);
            return;
          }
          return;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar11 = iVar12;
    } while (iVar12 != 0);
  }
  return;
}


