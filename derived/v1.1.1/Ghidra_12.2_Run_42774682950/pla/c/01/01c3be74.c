/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01c3be74; name: FUN_01c3be74
 */


void FUN_01c3be74(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long *plVar8;
  int iVar9;
  undefined8 uVar10;
  long lVar11;
  int iVar12;
  long *plVar13;
  undefined8 uStack_70;
  char *local_68;
  undefined8 local_60;
  long *local_58;
  
  puVar7 = PTR_DAT_04381fd8;
  puVar6 = PTR_DAT_04381fd0;
  puVar5 = PTR_DAT_043794d8;
  puVar4 = PTR_DAT_043794d0;
  lVar11 = *(long *)(param_2 + 0x1f8);
  if ((lVar11 != 0) && (*(int *)(lVar11 + 0xc) != 0)) {
    piVar1 = (int *)(lVar11 + 0xc);
    iVar12 = *(int *)(lVar11 + 0xc);
    do {
      plVar13 = *(long **)(lVar11 + 0x10);
      if (((*puVar6 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar6), iVar9 != 0)) {
        if (((*puVar4 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar4), iVar9 != 0)) {
          uVar10 = FUN_0087f8f0();
          *(undefined8 *)puVar5 = uVar10;
          __cxa_guard_release(puVar4);
        }
        *(undefined **)puVar7 = puVar5;
        __cxa_guard_release(puVar6);
      }
      while( true ) {
        if (plVar13 == (long *)0x0) goto LAB_01c3be98;
        if (plVar13 == (long *)puVar7) break;
        plVar13 = (long *)*plVar13;
      }
      iVar9 = *piVar1;
      if (iVar9 == iVar12) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar12 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          lVar11 = *(long *)(lVar11 + 0x18);
          plVar13 = (long *)(lVar11 + -0x50);
          if (lVar11 != 0) {
            FUN_0256cbe4(&uStack_70,plVar13,param_3,param_4);
            plVar8 = local_58;
            if (*local_68 == '\0') {
              FUN_0256d894(param_1,plVar13,param_3,param_4);
              if (local_58 != (long *)0x0) {
                (**(code **)(*local_58 + 0x20))();
              }
            }
            else {
              *param_1 = uStack_70;
              param_1[1] = local_68;
              local_58 = (long *)0x0;
              param_1[2] = local_60;
              param_1[3] = plVar8;
            }
            lVar11 = *(long *)(lVar11 + 8);
            piVar1 = (int *)(lVar11 + 0xc);
            do {
              iVar12 = *piVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar3) {
                *piVar1 = iVar12 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (iVar12 + -1 == 0) {
              *(undefined8 *)(lVar11 + 0x18) = 0;
              (**(code **)(*plVar13 + 0x20))(plVar13);
              return;
            }
            return;
          }
          break;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar12 = iVar9;
    } while (iVar9 != 0);
  }
LAB_01c3be98:
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = &DAT_cbf29ce484222645;
  param_1[1] = &DAT_03996322;
  return;
}


