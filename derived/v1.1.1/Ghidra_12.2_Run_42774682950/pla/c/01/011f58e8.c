/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011f58e8; name: FUN_011f58e8
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_011f58e8(long param_1)

{
  int *piVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  uint uVar13;
  long *plVar14;
  ulong uVar15;
  undefined8 local_80;
  char *pcStack_78;
  undefined8 local_70;
  long *local_68;
  
  if (**(int **)(param_1 + 0x720) == 1) {
    FUN_00d40460();
    local_80 = &DAT_753f74378b49da9c;
    pcStack_78 = "View_Top";
    local_70 = 8;
    local_68 = (long *)0x0;
    lVar9 = FUN_011f88bc(*(undefined8 *)(param_1 + 0x4c8),&local_80);
    if (local_68 != (long *)0x0) {
      (**(code **)(*local_68 + 0x20))();
    }
    local_80._0_4_ = 0xffffffff;
    uVar13 = *(uint *)(lVar9 + 0x171c);
    if ((uVar13 & 1) != 0) {
      local_80._0_4_ = 0xffff;
      FUN_00d40450(param_1,&local_80);
      uVar13 = *(uint *)(lVar9 + 0x171c);
    }
    if ((uVar13 >> 1 & 1) != 0) {
      local_80._0_4_ = 0x1ffff;
      FUN_00d40450(param_1,&local_80);
      uVar13 = *(uint *)(lVar9 + 0x171c);
    }
    if ((uVar13 >> 2 & 1) != 0) {
      local_80._0_4_ = 0x2ffff;
      FUN_00d40450(param_1,&local_80);
      uVar13 = *(uint *)(lVar9 + 0x171c);
    }
    if ((uVar13 >> 3 & 1) != 0) {
      local_80._0_4_ = 0x3ffff;
      FUN_00d40450(param_1,&local_80);
      uVar13 = *(uint *)(lVar9 + 0x171c);
    }
    if ((uVar13 >> 4 & 1) != 0) {
      local_80._0_4_ = 0x4ffff;
      FUN_00d40450(param_1,&local_80);
      uVar13 = *(uint *)(lVar9 + 0x171c);
    }
    if ((uVar13 >> 5 & 1) != 0) {
      local_80._0_4_ = 0x5ffff;
      FUN_00d40450(param_1,&local_80);
    }
    puVar7 = PTR_DAT_04379568;
    puVar6 = PTR_DAT_04379560;
    puVar5 = PTR_DAT_04379558;
    uVar15 = 0;
    bVar2 = *PTR_DAT_04379558;
    while( true ) {
      if (((bVar2 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar5), iVar8 != 0)) {
        FUN_00100250(PTR_LAB_04379700,puVar6,&PTR_LOOP_0411a000);
        __cxa_guard_release(puVar5);
      }
      lVar11 = *(long *)puVar6;
      *(long *)puVar7 = lVar11;
      plVar14 = *(long **)(lVar11 + 0x248);
      if (plVar14 != (long *)0x0) {
        lVar11 = plVar14[0xb];
        if (*(undefined8 **)(lVar11 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl("","","",0);
        }
        if (*(long *)(lVar11 + 0x10) == 0) {
          uVar10 = (**(code **)**(undefined8 **)(lVar11 + 0x18))();
          *(undefined8 *)(lVar11 + 0x10) = uVar10;
        }
        piVar1 = (int *)(lVar11 + 0xc);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = *piVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      uVar12 = (ulong)*(byte *)(plVar14 + 0x95);
      if (*(byte *)(plVar14 + 0x95) == 0x20) {
        iVar8 = FUN_010e630c();
        uVar12 = (ulong)(iVar8 + 0x1d);
      }
      lVar11 = plVar14[0xb];
      piVar1 = (int *)(lVar11 + 0xc);
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
        *(undefined8 *)(lVar11 + 0x18) = 0;
        (**(code **)(*plVar14 + 0x20))(plVar14);
      }
      if (uVar12 <= uVar15) break;
      uVar13 = 0;
      do {
        if ((*(uint *)(lVar9 + uVar15 * 4 + 0x169c) & 1 << (ulong)(uVar13 & 0x1f)) != 0) {
          local_80._0_4_ = CONCAT22((short)uVar13,(short)uVar15);
          FUN_00d40450(param_1,&local_80);
        }
        uVar13 = uVar13 + 1;
      } while (uVar13 != 0x1e);
      uVar15 = uVar15 + 1;
      bVar2 = *puVar5;
    }
  }
  return;
}


