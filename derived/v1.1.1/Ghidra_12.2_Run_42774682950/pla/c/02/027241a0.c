/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 027241a0; name: FUN_027241a0
 */


void FUN_027241a0(long *param_1,long param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  int iVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  undefined8 *local_78;
  undefined8 uStack_70;
  long *local_68;
  undefined8 *local_60;
  undefined8 uStack_58;
  undefined8 local_48;
  
  FUN_01e205cc(&local_68,param_2 + 0x30);
  if (local_68 == (long *)0x0) {
    *param_1 = 0;
  }
  else {
    local_60 = (undefined8 *)0x0;
    uStack_58 = 0;
    FUN_008802f0(&local_60,local_68 + 0xb);
    local_78 = (undefined8 *)0x0;
    uStack_70 = 0;
    FUN_01d850e8(&local_78,&local_60);
    puVar4 = local_60;
    if (local_60 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_60 + 1);
      do {
        iVar8 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar8 + -1 == 0) {
        local_60[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar11 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar11;
        local_48 = *puVar4;
        FUN_02a44274(lVar11 + 0xd8,&local_48);
      }
    }
    puVar4 = local_78;
    puVar6 = PTR_DAT_04382230;
    puVar5 = PTR_DAT_04382228;
    if (local_78 == (undefined8 *)0x0) {
      *param_1 = 0;
    }
    else {
      if (*(int *)((long)local_78 + 0xc) != 0) {
        piVar1 = (int *)((long)local_78 + 0xc);
        iVar8 = *(int *)((long)local_78 + 0xc);
        do {
          plVar13 = (long *)puVar4[2];
          if (((*puVar5 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar5), iVar7 != 0)) {
            uVar10 = FUN_018cf5f0();
            *(undefined8 *)puVar6 = uVar10;
            __cxa_guard_release(puVar5);
          }
          while( true ) {
            if (plVar13 == (long *)0x0) goto LAB_027243f0;
            if (plVar13 == (long *)puVar6) break;
            plVar13 = (long *)*plVar13;
          }
          iVar7 = *piVar1;
          if (iVar7 == iVar8) {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar8 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 == '\0') {
              lVar12 = puVar4[3];
              lVar11 = 0;
              if (lVar12 != 0) {
                lVar11 = lVar12 + -0x50;
              }
              *param_1 = lVar11;
              puVar4 = local_78;
              goto joined_r0x0272435c;
            }
          }
          else {
            ClearExclusiveLocal();
          }
          iVar8 = iVar7;
        } while (iVar7 != 0);
      }
LAB_027243f0:
      *param_1 = 0;
      puVar4 = local_78;
joined_r0x0272435c:
      local_78 = puVar4;
      if (puVar4 != (undefined8 *)0x0) {
        piVar1 = (int *)(puVar4 + 1);
        do {
          iVar8 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar8 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar8 + -1 == 0) {
          puVar4[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar11 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar11;
          local_60 = (undefined8 *)*puVar4;
          FUN_02a44274(lVar11 + 0xd8,&local_60);
        }
      }
    }
    if ((local_68 != (long *)0x0) && (uVar9 = FUN_02a43a5c(local_68[0xb]), (uVar9 & 1) != 0)) {
      (**(code **)(*local_68 + 0x20))(local_68);
    }
  }
  return;
}


