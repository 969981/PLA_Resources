/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01f0cf24; name: FUN_01f0cf24
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_01f0cf24(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,byte param_7,undefined8 param_8,
                 undefined8 *param_9)

{
  int *piVar1;
  byte bVar2;
  bool bVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  code *pcVar7;
  int iVar8;
  undefined8 uVar9;
  long lVar10;
  byte *pbVar11;
  long lVar12;
  long *plVar13;
  undefined1 *puVar14;
  int local_1f8;
  undefined8 *local_1f0;
  code *local_1e8;
  code *local_1e0;
  undefined8 uStack_1d8;
  undefined1 auStack_1d0 [104];
  undefined1 *local_168;
  long *local_160;
  undefined8 uStack_158;
  long *local_150;
  undefined8 local_148 [8];
  long *local_108;
  ulong local_100;
  long *local_f8;
  undefined8 *local_f0;
  code *pcStack_e8;
  code *local_e0;
  undefined8 local_d8;
  undefined1 auStack_d0 [112];
  
  FUN_01f0c80c();
  lVar12 = DAT_043d4720;
  if ((DAT_043d4720 != 0) && (*(int *)(DAT_043d4720 + 0xc) != 0)) {
    piVar1 = (int *)(DAT_043d4720 + 0xc);
    local_1f8 = *(int *)(DAT_043d4720 + 0xc);
    do {
      plVar13 = *(long **)(lVar12 + 0x10);
      if (((*PTR_DAT_043796e0 & 1) == 0) &&
         (iVar8 = __cxa_guard_acquire(PTR_DAT_043796e0), iVar8 != 0)) {
        if (((*PTR_DAT_043794d0 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar8 != 0)) {
          uVar9 = FUN_0087f8f0();
          *(undefined8 *)PTR_DAT_043794d8 = uVar9;
          __cxa_guard_release(PTR_DAT_043794d0);
        }
        *(undefined **)PTR_DAT_043796e8 = PTR_DAT_043794d8;
        __cxa_guard_release(PTR_DAT_043796e0);
      }
      while( true ) {
        if (plVar13 == (long *)0x0) goto LAB_01f0cf78;
        if (plVar13 == (long *)PTR_DAT_043796e8) break;
        plVar13 = (long *)*plVar13;
      }
      iVar8 = *piVar1;
      if (iVar8 == local_1f8) {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = local_1f8 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 == '\0') {
          lVar12 = *(long *)(lVar12 + 0x18);
          if (lVar12 != 0) {
            FUN_0199c304(&local_f0);
            if (local_f0 == (undefined8 *)0x0) {
              local_f8 = (long *)0x0;
              goto LAB_01f0d06c;
            }
            FUN_009acf14(&local_f8);
            puVar6 = local_f0;
            if (local_f0 == (undefined8 *)0x0) goto LAB_01f0d06c;
            piVar1 = (int *)(local_f0 + 1);
            do {
              iVar8 = *piVar1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar5) {
                *piVar1 = iVar8 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar8 + -1 == 0) {
              local_f0[2] = 0;
              if (((*PTR_DAT_04379498 & 1) == 0) &&
                 (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar10 = *(long *)PTR_DAT_043794a0;
              *(long *)PTR_DAT_043794a8 = lVar10;
              local_148[0] = *puVar6;
              FUN_02a44274(lVar10 + 0xd8,local_148);
              if (local_f8 == (long *)0x0) goto LAB_01f0d474;
LAB_01f0d074:
              local_100 = 0;
              FUN_0199ea14(&local_f0,(long *)(lVar12 + -0x50));
              if (local_f0 == (undefined8 *)0x0) {
                local_160 = (long *)0x0;
              }
              else {
                FUN_01aaeb6c(&local_160);
                if (local_f0 != (undefined8 *)0x0) {
                  piVar1 = (int *)(local_f0 + 1);
                  do {
                    iVar8 = *piVar1;
                    cVar4 = '\x01';
                    bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                    if (bVar5) {
                      *piVar1 = iVar8 + -1;
                      cVar4 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar4 != '\0');
                  if (iVar8 + -1 == 0) {
                    local_f0[2] = 0;
                    if (((*PTR_DAT_04379498 & 1) == 0) &&
                       (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
                      FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                      __cxa_guard_release(PTR_DAT_04379498);
                    }
                    lVar10 = *(long *)PTR_DAT_043794a0;
                    *(long *)PTR_DAT_043794a8 = lVar10;
                    local_148[0] = *local_f0;
                    FUN_02a44274(lVar10 + 0xd8,local_148);
                  }
                }
              }
              if (local_160 != (long *)0x0) {
                local_100 = FUN_01f0c4f0(local_160,0);
                FUN_01f0c3c8(local_160,0,1);
                if (local_160 != (long *)0x0) {
                  lVar10 = local_160[0xb];
                  piVar1 = (int *)(lVar10 + 0xc);
                  do {
                    iVar8 = *piVar1;
                    cVar4 = '\x01';
                    bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                    if (bVar5) {
                      *piVar1 = iVar8 + -1;
                      cVar4 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar4 != '\0');
                  if (iVar8 + -1 == 0) {
                    *(undefined8 *)(lVar10 + 0x18) = 0;
                    (**(code **)(*local_160 + 0x20))();
                  }
                }
              }
              local_108 = (long *)0x0;
              puVar14 = &DAT_cbf29ce484222645;
              snprintf((char *)local_148,0x40,"discardItemNo_%lu",local_100);
              pcStack_e8 = (code *)0x0;
              local_f0 = (undefined8 *)0x0;
              uStack_158 = 0;
              local_160 = (long *)0x0;
              if ((byte)local_148[0] != 0) {
                pbVar11 = (byte *)((ulong)local_148 | 1);
                bVar2 = (byte)local_148[0];
                do {
                  puVar14 = (undefined1 *)(((ulong)puVar14 ^ (ulong)bVar2) * 0x100000001b3);
                  bVar2 = *pbVar11;
                  pbVar11 = pbVar11 + 1;
                } while (bVar2 != 0);
              }
              local_168 = puVar14;
              FUN_01f0d524(&local_150,param_8,param_2,param_3,&local_100,param_4,param_5,param_6,
                           &local_f0,&local_160,&local_168);
              plVar13 = local_f8;
              local_108 = local_150;
              *(byte *)((long)local_150 + 0xc9) = param_7 & 1;
              local_1e0 = (code *)0x0;
              uStack_1d8 = 0;
              local_1f0 = (undefined8 *)0x0;
              local_1e8 = (code *)0x0;
              if ((code *)param_9[2] != (code *)0x0) {
                (*(code *)param_9[2])(param_9 + 4,auStack_1d0);
                local_1f0 = (undefined8 *)*param_9;
                local_1e8 = (code *)param_9[1];
                local_1e0 = (code *)param_9[2];
                uStack_1d8 = param_9[3];
              }
              lVar10 = plVar13[0xf];
              local_e0 = (code *)0x0;
              local_d8 = 0;
              local_f0 = (undefined8 *)0x0;
              pcStack_e8 = (code *)0x0;
              if (local_1e0 != (code *)0x0) {
                (*local_1e0)(auStack_1d0,auStack_d0);
                local_f0 = local_1f0;
                local_d8 = uStack_1d8;
                pcStack_e8 = local_1e8;
                local_e0 = local_1e0;
              }
              FUN_01c61f24(param_1,lVar10,0xd,&local_108,&local_f0,0);
              pcVar7 = pcStack_e8;
              if (pcStack_e8 == (code *)0x0) {
                pcStack_e8 = (code *)0x0;
              }
              else {
                local_e0 = (code *)0x0;
                local_d8 = 0;
                local_f0 = (undefined8 *)0x0;
                pcStack_e8 = (code *)0x0;
                (*pcVar7)(auStack_d0);
              }
              if (local_1e8 != (code *)0x0) {
                (*local_1e8)(auStack_1d0);
              }
              if (local_108 != (long *)0x0) {
                lVar10 = local_108[0xb];
                piVar1 = (int *)(lVar10 + 0xc);
                do {
                  iVar8 = *piVar1;
                  cVar4 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar5) {
                    *piVar1 = iVar8 + -1;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                if (iVar8 + -1 == 0) {
                  *(undefined8 *)(lVar10 + 0x18) = 0;
                  (**(code **)(*local_108 + 0x20))();
                }
              }
              if (local_f8 != (long *)0x0) {
                lVar10 = local_f8[0xb];
                piVar1 = (int *)(lVar10 + 0xc);
                do {
                  iVar8 = *piVar1;
                  cVar4 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar5) {
                    *piVar1 = iVar8 + -1;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                if (iVar8 == 1) {
                  *(undefined8 *)(lVar10 + 0x18) = 0;
                  (**(code **)(*local_f8 + 0x20))();
                }
              }
              bVar5 = true;
            }
            else {
LAB_01f0d06c:
              if (local_f8 != (long *)0x0) goto LAB_01f0d074;
LAB_01f0d474:
              bVar5 = false;
            }
            lVar10 = *(long *)(lVar12 + 8);
            piVar1 = (int *)(lVar10 + 0xc);
            do {
              iVar8 = *piVar1;
              cVar4 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar3) {
                *piVar1 = iVar8 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar8 + -1 == 0) {
              *(undefined8 *)(lVar10 + 0x18) = 0;
              (**(code **)(*(long *)(lVar12 + -0x50) + 0x20))();
            }
            if (bVar5) {
              return;
            }
          }
          break;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      local_1f8 = iVar8;
    } while (iVar8 != 0);
  }
LAB_01f0cf78:
  *param_1 = 0;
  return;
}


