/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00da3dec; name: FUN_00da3dec
 */


/* WARNING: Removing unreachable block (ram,0x00da3f5c) */

undefined8 FUN_00da3dec(long param_1)

{
  long lVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  long *plVar8;
  ulong uVar9;
  int *piVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  long *local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  long local_60;
  undefined4 local_58;
  
  if (((((*(byte *)(param_1 + 0x58) & 1) == 0) ||
       (piVar10 = *(int **)(param_1 + 0x48), piVar10 == (int *)0x0)) ||
      (*(int *)(param_1 + 0x50) == -1)) ||
     ((*(ushort *)((long)piVar10 - (long)*piVar10) < 5 ||
      (((ushort *)((long)piVar10 - (long)*piVar10))[2] == 0)))) {
    uVar7 = 2;
  }
  else {
    lVar1 = param_1 + 0x10;
    iVar5 = FUN_00da1b2c(lVar1);
    plVar2 = (long *)(param_1 + 200);
    *(int *)(param_1 + 0x78) = iVar5;
    FUN_00da40ac(plVar2,(long)iVar5);
    if (0 < *(int *)(param_1 + 0x78)) {
      uVar11 = 0;
      do {
        uVar7 = FUN_00da1be0(lVar1,uVar11 & 0xffffffff);
        lVar13 = uVar11 * 0x70;
        *(undefined8 *)(*plVar2 + lVar13) = uVar7;
        uVar6 = FUN_00da20bc(lVar1,uVar11 & 0xffffffff);
        *(undefined4 *)(*plVar2 + lVar13 + 8) = uVar6;
        FUN_00da1d88(&local_80,lVar1,uVar11 & 0xffffffff);
        lVar12 = *plVar2;
        plVar14 = (long *)(lVar12 + lVar13 + 0x10);
        plVar8 = (long *)*plVar14;
        *plVar14 = 0;
        if (plVar8 != (long *)0x0) {
          (**(code **)(*plVar8 + 0x20))();
        }
        plVar8 = local_80;
        local_80 = (long *)0x0;
        *plVar14 = (long)plVar8;
        lVar13 = lVar12 + uVar11 * 0x70;
        plVar8 = *(long **)(lVar13 + 0x30);
        *(undefined8 *)(lVar13 + 0x18) = local_78;
        *(undefined8 *)(lVar13 + 0x20) = local_70;
        *(undefined8 *)(lVar13 + 0x28) = local_68;
        *(undefined8 *)(lVar13 + 0x30) = 0;
        if (plVar8 != (long *)0x0) {
          (**(code **)(*plVar8 + 0x20))();
        }
        *(long *)(lVar13 + 0x30) = local_60;
        *(undefined4 *)(lVar12 + uVar11 * 0x70 + 0x38) = local_58;
        local_60 = 0;
        if (local_80 != (long *)0x0) {
          (**(code **)(*local_80 + 0x20))();
        }
        lVar13 = *(long *)(param_1 + 200);
        lVar12 = lVar13 + uVar11 * 0x70;
        uVar9 = FUN_00938764(lVar12 + 0x40,1,lVar12 + 0x10,0,*(undefined8 *)(param_1 + 8),
                             param_1 + 0xb0);
        if (((uVar9 & 1) != 0) &&
           (plVar8 = *(long **)(lVar13 + uVar11 * 0x70 + 0x68), plVar8 != (long *)0x0)) {
          lVar12 = plVar8[0xb];
          if (*(undefined8 **)(lVar12 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl("","","",0);
          }
          if (*(long *)(lVar12 + 0x10) == 0) {
            uVar7 = (**(code **)**(undefined8 **)(lVar12 + 0x18))();
            *(undefined8 *)(lVar12 + 0x10) = uVar7;
          }
          piVar10 = (int *)(lVar12 + 0xc);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar10,0x10);
            if (bVar4) {
              *piVar10 = *piVar10 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          lVar12 = plVar8[0xb];
          piVar10 = (int *)(lVar12 + 0xc);
          do {
            iVar5 = *piVar10;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar10,0x10);
            if (bVar4) {
              *piVar10 = iVar5 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar5 + -1 == 0) {
            *(undefined8 *)(lVar12 + 0x18) = 0;
            (**(code **)(*plVar8 + 0x20))(plVar8);
          }
        }
        uVar11 = uVar11 + 1;
      } while ((long)uVar11 < (long)*(int *)(param_1 + 0x78));
    }
    FUN_00da1b24(lVar1);
    uVar7 = 3;
  }
  return uVar7;
}


