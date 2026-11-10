/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a59398; name: FUN_01a59398
 */


/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_01a59398(long *param_1,ulong param_2)

{
  int *piVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  long *plVar12;
  undefined8 *local_78;
  char *pcStack_70;
  undefined8 local_68;
  long *local_60;
  undefined8 local_58;
  
  FUN_01a50850(&local_78);
  puVar3 = local_78;
  puVar5 = PTR_DAT_0437a408;
  puVar4 = PTR_DAT_0437a400;
  if (local_78 != (undefined8 *)0x0) {
    if (*(int *)((long)local_78 + 0xc) != 0) {
      piVar1 = (int *)((long)local_78 + 0xc);
      iVar8 = *(int *)((long)local_78 + 0xc);
      do {
        plVar12 = (long *)puVar3[2];
        if (((*puVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar4), iVar7 != 0)) {
          uVar10 = FUN_009cdcc0();
          *(undefined8 *)puVar5 = uVar10;
          __cxa_guard_release(puVar4);
        }
        while( true ) {
          if (plVar12 == (long *)0x0) goto LAB_01a595a4;
          if (plVar12 == (long *)puVar5) break;
          plVar12 = (long *)*plVar12;
        }
        iVar7 = *piVar1;
        if (iVar7 == iVar8) {
          cVar2 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar6) {
            *piVar1 = iVar8 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            lVar11 = puVar3[3];
            plVar12 = (long *)0x0;
            puVar3 = local_78;
            if (lVar11 != 0) {
              plVar12 = (long *)(lVar11 + -0x50);
            }
            goto joined_r0x01a59474;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar8 = iVar7;
      } while (iVar7 != 0);
    }
LAB_01a595a4:
    plVar12 = (long *)0x0;
    puVar3 = local_78;
joined_r0x01a59474:
    local_78 = puVar3;
    if (puVar3 != (undefined8 *)0x0) {
      piVar1 = (int *)(puVar3 + 1);
      do {
        iVar8 = *piVar1;
        cVar2 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = iVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar8 + -1 == 0) {
        puVar3[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar11 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar11;
        local_58 = *puVar3;
        FUN_02a44274(lVar11 + 0xd8,&local_58);
      }
    }
    if (plVar12 != (long *)0x0) {
      local_78 = (undefined8 *)0x594d9555a877c0fd;
      pcStack_70 = "random_action";
      local_68 = 0xd;
      local_60 = (long *)0x0;
      uVar9 = FUN_017f22f0(plVar12,&local_78);
      if (local_60 != (long *)0x0) {
        (**(code **)(*local_60 + 0x20))();
      }
      lVar11 = plVar12[0xb];
      piVar1 = (int *)(lVar11 + 0xc);
      do {
        iVar8 = *piVar1;
        cVar2 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = iVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      bVar6 = iVar8 == 1;
      if (bVar6) {
        *(undefined8 *)(lVar11 + 0x18) = 0;
      }
      if ((uVar9 & 1) != 0) {
        if (bVar6) {
          (**(code **)(*plVar12 + 0x20))(plVar12);
          return 1;
        }
        return 1;
      }
      if (bVar6) {
        (**(code **)(*plVar12 + 0x20))(plVar12);
      }
    }
  }
  if (((param_2 & 1) == 0) || (uVar9 = (**(code **)(*param_1 + 800))(param_1), (uVar9 & 1) == 0)) {
    return 0;
  }
  return 1;
}


