/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 027d7aa0; name: FUN_027d7aa0
 */


void FUN_027d7aa0(long param_1,long *param_2,undefined8 param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  byte bVar5;
  short sVar6;
  int iVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  undefined8 *local_58 [3];
  undefined8 local_40;
  undefined8 local_38;
  
  if (((*param_2 != 0) && (plVar8 = (long *)FUN_0120ccf0(), plVar8 != (long *)0x0)) &&
     (sVar6 = (**(code **)(*plVar8 + 0xd8))(), sVar6 == 2)) {
    lVar9 = (**(code **)(*plVar8 + 200))(plVar8);
    lVar10 = (**(code **)(*plVar8 + 0xf0))(plVar8);
    if (*(long *)(lVar10 + 0x28) == 2) {
      plVar11 = *(long **)(lVar10 + 0x20);
      lVar10 = *plVar11;
      if (lVar10 == lVar9) {
        *(long *)(param_1 + 0x80) = lVar9;
      }
      else {
        *(long *)(param_1 + 0x88) = lVar10;
      }
      lVar10 = plVar11[1];
      if (lVar10 == lVar9) {
        *(long *)(param_1 + 0x80) = lVar9;
      }
      else {
        *(long *)(param_1 + 0x88) = lVar10;
        lVar9 = *(long *)(param_1 + 0x80);
      }
      if ((lVar9 != 0) && (*(long *)(param_1 + 0x88) != 0)) {
        bVar5 = (**(code **)(*plVar8 + 0xa8))(plVar8);
        *(byte *)(param_1 + 0x78) = bVar5 & 1;
        FUN_027d7c90(local_58,param_1);
        FUN_02ccb8c8(&local_40,plVar8,param_3,local_58);
        plVar8 = *(long **)(param_1 + 0x70);
        *(undefined8 *)(param_1 + 0x70) = 0;
        if (plVar8 != (long *)0x0) {
          lVar9 = plVar8[0xb];
          piVar1 = (int *)(lVar9 + 0xc);
          do {
            iVar7 = *piVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar7 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar7 + -1 == 0) {
            *(undefined8 *)(lVar9 + 0x18) = 0;
            (**(code **)(*plVar8 + 0x20))();
          }
        }
        uVar4 = local_40;
        local_40 = 0;
        *(undefined8 *)(param_1 + 0x70) = uVar4;
        if (local_58[0] != (undefined8 *)0x0) {
          piVar1 = (int *)(local_58[0] + 1);
          do {
            iVar7 = *piVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar7 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar7 + -1 == 0) {
            local_58[0][2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar9 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar9;
            local_38 = *local_58[0];
            FUN_02a44274(lVar9 + 0xd8,&local_38);
          }
        }
      }
    }
  }
  return;
}


