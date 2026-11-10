/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01c1b244; name: FUN_01c1b244
 */


void FUN_01c1b244(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  int iVar7;
  int iVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined *puVar11;
  byte *pbVar12;
  long *plVar13;
  long lVar14;
  undefined8 *local_80;
  undefined8 uStack_78;
  undefined8 *local_70;
  char *pcStack_68;
  undefined8 local_60;
  long *local_58;
  long *local_50;
  long *local_48;
  undefined8 local_38;
  
  FUN_01c1b8f4(&local_48);
  puVar5 = PTR_DAT_043794d8;
  puVar4 = PTR_DAT_043794d0;
  if (local_48 != (long *)0x0) {
    lVar14 = *(long *)(param_1 + 0x2a0);
    if ((lVar14 != 0) && (*(int *)(lVar14 + 0xc) != 0)) {
      piVar1 = (int *)(lVar14 + 0xc);
      puVar11 = PTR_DAT_0437a748;
      pbVar12 = PTR_DAT_0437a740;
      iVar8 = *(int *)(lVar14 + 0xc);
      do {
        plVar13 = *(long **)(lVar14 + 0x10);
        plVar9 = local_48;
        if (((*pbVar12 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_0437a740), pbVar12 = PTR_DAT_0437a740,
           puVar11 = PTR_DAT_0437a748, plVar9 = local_48, iVar7 != 0)) {
          if (((*puVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar4), iVar7 != 0)) {
            uVar10 = FUN_0087f8f0();
            *(undefined8 *)puVar5 = uVar10;
            __cxa_guard_release(puVar4);
          }
          puVar11 = PTR_DAT_0437a748;
          *(undefined **)PTR_DAT_0437a748 = puVar5;
          pbVar12 = PTR_DAT_0437a740;
          __cxa_guard_release(PTR_DAT_0437a740);
          plVar9 = local_48;
        }
        while( true ) {
          local_48 = plVar9;
          if (plVar13 == (long *)0x0) goto LAB_01c1b27c;
          if (plVar13 == (long *)puVar11) break;
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
          if (cVar2 != '\0') goto LAB_01c1b300;
          local_50 = (long *)(*(long *)(lVar14 + 0x18) + -0x50);
          if (*(long *)(lVar14 + 0x18) != 0) {
            plVar13 = (long *)FUN_017d3d24(plVar9,plVar9[1],&local_50);
            FUN_02c90b20(plVar13,param_1 + 0x2b0);
            local_70 = (undefined8 *)&DAT_a5a3289dce9ffc4a;
            pcStack_68 = "EffCenter01";
            local_60 = 0xb;
            local_58 = (long *)0x0;
            FUN_02c92140(plVar13,&local_70,0,0);
            if (local_58 != (long *)0x0) {
              (**(code **)(*local_58 + 0x20))();
            }
            FUN_02c90b3c(plVar13);
            (**(code **)(*plVar13 + 0x10))(&local_70,plVar13);
            local_80 = (undefined8 *)0x0;
            uStack_78 = 0;
            FUN_00ad3450(&local_80,&local_70);
            puVar6 = local_70;
            if (local_70 != (undefined8 *)0x0) {
              piVar1 = (int *)(local_70 + 1);
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
                local_70[2] = 0;
                if (((*PTR_DAT_04379498 & 1) == 0) &&
                   (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
                  FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                  __cxa_guard_release(PTR_DAT_04379498);
                }
                lVar14 = *(long *)PTR_DAT_043794a0;
                *(long *)PTR_DAT_043794a8 = lVar14;
                local_38 = *puVar6;
                FUN_02a44274(lVar14 + 0xd8,&local_38);
              }
            }
            FUN_00ad52f4(param_1 + 0x290,&local_80);
            puVar6 = local_80;
            if (local_80 != (undefined8 *)0x0) {
              piVar1 = (int *)(local_80 + 1);
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
                local_80[2] = 0;
                if (((*PTR_DAT_04379498 & 1) == 0) &&
                   (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
                  FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                  __cxa_guard_release(PTR_DAT_04379498);
                }
                lVar14 = *(long *)PTR_DAT_043794a0;
                *(long *)PTR_DAT_043794a8 = lVar14;
                local_70 = (undefined8 *)*puVar6;
                FUN_02a44274(lVar14 + 0xd8,&local_70);
              }
            }
            if (local_50 != (long *)0x0) {
              lVar14 = local_50[0xb];
              piVar1 = (int *)(lVar14 + 0xc);
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
                *(undefined8 *)(lVar14 + 0x18) = 0;
                (**(code **)(*local_50 + 0x20))();
              }
            }
            if (plVar9 == (long *)0x0) {
              return;
            }
            goto LAB_01c1b284;
          }
          break;
        }
        ClearExclusiveLocal();
LAB_01c1b300:
        iVar8 = iVar7;
      } while (iVar7 != 0);
    }
LAB_01c1b27c:
    local_50 = (long *)0x0;
    plVar9 = local_48;
    if (local_48 != (long *)0x0) {
LAB_01c1b284:
      lVar14 = plVar9[0xb];
      piVar1 = (int *)(lVar14 + 0xc);
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
        *(undefined8 *)(lVar14 + 0x18) = 0;
        (**(code **)(*plVar9 + 0x20))();
      }
    }
  }
  return;
}


