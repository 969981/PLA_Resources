/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01b78a38; name: FUN_01b78a38
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b78a38(long param_1,long param_2)

{
  long *plVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  int iVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  short sVar11;
  undefined8 local_70;
  char *local_68;
  undefined8 local_60;
  long *local_58;
  long *local_50;
  char *local_48;
  undefined8 local_40;
  long *local_38;
  
  if ((*(long *)(param_2 + 0x108) != 0) &&
     (FUN_01b7e59c(&local_50), plVar5 = local_50, local_50 != (long *)0x0)) {
    puVar7 = (undefined8 *)(**(code **)local_50[10])(local_50 + 10);
    if (((*PTR_DAT_04382340 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(PTR_DAT_04382340), iVar6 != 0)) {
      uVar9 = FUN_019fa6c0();
      *(undefined8 *)PTR_DAT_04382338 = uVar9;
      __cxa_guard_release(PTR_DAT_04382340);
    }
    if (puVar7 != (undefined8 *)0x0) {
LAB_01b78ab0:
      if (puVar7 != (undefined8 *)PTR_DAT_04382338) goto code_r0x01b78ab8;
      iVar6 = FUN_019e3bb8(plVar5);
      if (iVar6 == 2) {
        local_70 = 0x8815e67ffbd5e537;
        local_68 = "PLAY_PM_FX_MAGMASTORM_REFLECT";
        local_60 = 0x1d;
        local_58 = (long *)0x0;
        plVar8 = *(long **)(param_1 + 0x5c0);
        sVar11 = _DAT_00000054;
        if (plVar8 == (long *)0x0) goto joined_r0x01b78db0;
        plVar1 = plVar8 + 10;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *(int *)plVar1 = (int)*plVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        sVar11 = *(short *)((long)plVar8 + 0x54);
        do {
          iVar6 = (int)*plVar1 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *(int *)plVar1 = iVar6;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar6 == 0) {
          (**(code **)(*plVar8 + 0x10))();
          if (sVar11 != 0x699) goto LAB_01b78cb4;
LAB_01b78b34:
          local_70 = 0xece6b954f5cf1fec;
          local_68 = "PLAY_PM_FX_SIZZLE";
          local_60 = 0x11;
          FUN_01b6ec48(param_1);
          uVar9 = 0xec2bf01c23011916;
LAB_01b78b70:
          FUN_01b75734(&local_50,param_1,uVar9);
          if (*local_48 != '\0') {
            FUN_01b76fa0(param_1,&local_50);
          }
          if (local_38 != (long *)0x0) {
            (**(code **)(*local_38 + 0x20))();
          }
          FUN_01b77f14(param_1,&local_70);
          local_50 = (long *)0xd9cb0faf51ec2a5b;
          local_48 = "PLAY_PM_FX_MAGMASTORM_HIT_ITEM";
          local_40 = 0x1e;
          local_38 = (long *)0x0;
          FUN_01b77f14(param_1,&local_50);
          plVar8 = local_58;
          if (local_38 != (long *)0x0) {
            (**(code **)(*local_38 + 0x20))();
            plVar8 = local_58;
          }
        }
        else {
joined_r0x01b78db0:
          if (sVar11 == 0x699) goto LAB_01b78b34;
LAB_01b78cb4:
          if (sVar11 == 0x694) {
            local_70 = 0xece6b954f5cf1fec;
            local_68 = "PLAY_PM_FX_SIZZLE";
            local_60 = 0x11;
            FUN_01b6ec48(param_1);
            uVar9 = 0x49092c236cf78f32;
            goto LAB_01b78b70;
          }
          if (sVar11 == 0x69a) {
            local_70 = 0xece6b954f5cf1fec;
            local_68 = "PLAY_PM_FX_SIZZLE";
            local_60 = 0x11;
            FUN_01b6ec48(param_1);
            uVar9 = 0xdf7f2703d7359ada;
            goto LAB_01b78b70;
          }
          FUN_01b6ec48(param_1);
          FUN_01b75734(&local_50,param_1,0xff0659251a8a4e5e);
          if (*local_48 != '\0') {
            FUN_01b76fa0(param_1,&local_50);
          }
          if (local_38 != (long *)0x0) {
            (**(code **)(*local_38 + 0x20))();
          }
          FUN_01b77f14(param_1,&local_70);
          plVar8 = local_58;
        }
joined_r0x01b78c88:
        if (plVar8 != (long *)0x0) {
          (**(code **)(*plVar8 + 0x20))();
        }
        goto LAB_01b78c0c;
      }
      if (iVar6 == 1) {
        FUN_01b74a84(param_1,param_2);
        local_50 = (long *)0xbd4e67dfb4544008;
        local_48 = "PLAY_BA_SYS_BALL_REFRECT_LEGENDS";
        local_40 = 0x20;
        local_38 = (long *)0x0;
        FUN_01b77f14(param_1,&local_50);
        plVar8 = local_38;
        goto joined_r0x01b78c88;
      }
      FUN_01b74a84(param_1,param_2);
    }
LAB_01b78c0c:
    lVar10 = plVar5[0xb];
    piVar2 = (int *)(lVar10 + 0xc);
    do {
      iVar6 = *piVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = iVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 + -1 == 0) {
      *(undefined8 *)(lVar10 + 0x18) = 0;
      (**(code **)(*plVar5 + 0x20))(plVar5);
    }
  }
  return;
code_r0x01b78ab8:
  puVar7 = (undefined8 *)*puVar7;
  if (puVar7 == (undefined8 *)0x0) goto LAB_01b78c0c;
  goto LAB_01b78ab0;
}


