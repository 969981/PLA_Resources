/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02cd4084; name: FUN_02cd4084
 */


void FUN_02cd4084(undefined8 *param_1,long param_2,uint param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 *local_70;
  undefined8 uStack_68;
  undefined8 *local_60;
  undefined8 uStack_58;
  undefined8 *local_50;
  undefined8 uStack_48;
  undefined8 local_38;
  
  if ((*(long *)PTR_DAT_04377550 != 0) && (lVar5 = FUN_0082b1f8(), lVar5 != 0)) {
    puVar6 = (undefined8 *)FUN_0083383c();
    puVar7 = (undefined8 *)FUN_00833844(lVar5);
    if (puVar6 != puVar7) {
      param_3 = param_3 & 0xffff;
      do {
        if (param_3 == 0) {
          uVar8 = *puVar6;
          local_50 = (undefined8 *)0x0;
          uStack_48 = 0;
          FUN_008802f0(&local_50,param_2 + 0x58);
          local_70 = (undefined8 *)0x0;
          uStack_68 = 0;
          FUN_02cd54dc(&local_70,&local_50);
          puVar6 = local_50;
          if (local_50 != (undefined8 *)0x0) {
            piVar1 = (int *)(local_50 + 1);
            do {
              iVar4 = *piVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar3) {
                *piVar1 = iVar4 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (iVar4 + -1 == 0) {
              local_50[2] = 0;
              if (((*PTR_DAT_04379498 & 1) == 0) &&
                 (iVar4 = __cxa_guard_acquire(PTR_DAT_04379498), iVar4 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar5 = *(long *)PTR_DAT_043794a0;
              *(long *)PTR_DAT_043794a8 = lVar5;
              local_38 = *puVar6;
              FUN_02a44274(lVar5 + 0xd8,&local_38);
            }
          }
          local_60 = (undefined8 *)0x0;
          uStack_58 = 0;
          FUN_02cd630c(&local_60,&local_70);
          *param_1 = uVar8;
          param_1[2] = 0;
          param_1[1] = 0;
          FUN_014d70b0(param_1 + 1,&local_60);
          puVar6 = local_60;
          if (local_60 != (undefined8 *)0x0) {
            piVar1 = (int *)(local_60 + 1);
            do {
              iVar4 = *piVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar3) {
                *piVar1 = iVar4 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (iVar4 + -1 == 0) {
              local_60[2] = 0;
              if (((*PTR_DAT_04379498 & 1) == 0) &&
                 (iVar4 = __cxa_guard_acquire(PTR_DAT_04379498), iVar4 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar5 = *(long *)PTR_DAT_043794a0;
              *(long *)PTR_DAT_043794a8 = lVar5;
              local_50 = (undefined8 *)*puVar6;
              FUN_02a44274(lVar5 + 0xd8,&local_50);
            }
          }
          puVar6 = local_70;
          if (local_70 == (undefined8 *)0x0) {
            return;
          }
          piVar1 = (int *)(local_70 + 1);
          do {
            iVar4 = *piVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar4 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar4 + -1 != 0) {
            return;
          }
          local_70[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar4 = __cxa_guard_acquire(PTR_DAT_04379498), iVar4 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar5 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar5;
          local_50 = (undefined8 *)*puVar6;
          FUN_02a44274(lVar5 + 0xd8,&local_50);
          return;
        }
        puVar6 = puVar6 + 1;
        puVar7 = (undefined8 *)FUN_00833844(lVar5);
        param_3 = param_3 - 1;
      } while (puVar6 != puVar7);
    }
  }
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  return;
}


