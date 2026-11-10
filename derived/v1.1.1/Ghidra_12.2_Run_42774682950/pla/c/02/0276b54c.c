/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0276b54c; name: FUN_0276b54c
 */


uint FUN_0276b54c(long param_1,uint param_2,undefined4 *param_3,long param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  char cVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  undefined8 local_1a0;
  char *pcStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  char *pcStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  char *pcStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  char *local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  char *local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 local_100;
  char *local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  char *local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  char *local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  long local_a0;
  long local_98;
  char *pcStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  long *local_78;
  long *local_70 [2];
  
  if (((*PTR_DAT_04379558 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_04379558), iVar6 != 0))
  {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  lVar8 = *(long *)PTR_DAT_04379560;
  *(long *)PTR_DAT_04379568 = lVar8;
  if (lVar8 == 0) {
LAB_0276b630:
    if ((*(long **)(param_1 + 0x68) == (long *)0x0) ||
       (uVar9 = (**(code **)(**(long **)(param_1 + 0x68) + 0x48))(), (uVar9 & 1) == 0)) {
      FUN_0276bfd8(&local_78,~param_2 & 1);
      local_98 = 0x14af575d55c05fbe;
      pcStack_90 = "InstantiateDataStoreClientOuter";
      local_88 = 0x1f;
      uStack_80 = 0;
      local_a0 = param_1;
      FUN_0276c06c(local_70,local_78,&local_98,&local_a0);
      if (local_78 != (long *)0x0) {
        lVar8 = local_78[0xb];
        piVar1 = (int *)(lVar8 + 0xc);
        do {
          iVar6 = *piVar1;
          cVar3 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar6 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar6 + -1 == 0) {
          *(undefined8 *)(lVar8 + 0x18) = 0;
          (**(code **)(*local_78 + 0x20))();
        }
      }
      if (param_4 != 0) {
        puVar2 = param_3 + param_4;
        do {
          switch(*param_3) {
          case 0:
            local_b8 = "CreateLBDataOuter";
            uStack_b0 = 0x11;
            local_c0 = 0x2a5b3e23642bddfe;
            local_a8 = 0;
            local_a0 = param_1;
            FUN_0276c108(&local_78,local_70[0],&local_c0,&local_a0);
            if (local_70[0] != (long *)0x0) {
              lVar8 = local_70[0][0xb];
              piVar1 = (int *)(lVar8 + 0xc);
              do {
                iVar6 = *piVar1;
                cVar3 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar5) {
                  *piVar1 = iVar6 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
                plVar10 = local_70[0];
              } while (cVar3 != '\0');
LAB_0276ba40:
              local_70[0] = (long *)0x0;
              if (iVar6 == 1) {
                *(undefined8 *)(lVar8 + 0x18) = 0;
                (**(code **)(*plVar10 + 0x20))();
              }
            }
            break;
          case 1:
            local_d8 = "DeleteLBDataOuter";
            uStack_d0 = 0x11;
            local_e0 = 0x40ec65300195508b;
            local_c8 = 0;
            local_a0 = param_1;
            FUN_0276c1a4(&local_78,local_70[0],&local_e0,&local_a0);
            if (local_70[0] != (long *)0x0) {
              lVar8 = local_70[0][0xb];
              piVar1 = (int *)(lVar8 + 0xc);
              do {
                iVar6 = *piVar1;
                cVar3 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar5) {
                  *piVar1 = iVar6 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
                plVar10 = local_70[0];
              } while (cVar3 != '\0');
              goto LAB_0276ba40;
            }
            break;
          case 2:
            local_f8 = "ScanMyDataOuter";
            local_100 = 0xf52f183df9bdd721;
            local_f0 = 0xf;
            uStack_e8 = 0;
            local_a0 = param_1;
            FUN_0276c240(&local_78,local_70[0],&local_100,&local_a0);
            if (local_70[0] != (long *)0x0) {
              lVar8 = local_70[0][0xb];
              piVar1 = (int *)(lVar8 + 0xc);
              do {
                iVar6 = *piVar1;
                cVar3 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar5) {
                  *piVar1 = iVar6 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
                plVar10 = local_70[0];
              } while (cVar3 != '\0');
              goto LAB_0276ba40;
            }
            break;
          case 3:
            local_118 = "ScanOtherDataOuter";
            uStack_110 = 0x12;
            local_120 = 0x462528c5790fb9;
            local_108 = 0;
            local_a0 = param_1;
            FUN_0276c2dc(&local_78,local_70[0],&local_120,&local_a0);
            if (local_70[0] != (long *)0x0) {
              lVar8 = local_70[0][0xb];
              piVar1 = (int *)(lVar8 + 0xc);
              do {
                iVar6 = *piVar1;
                cVar3 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar5) {
                  *piVar1 = iVar6 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
                plVar10 = local_70[0];
              } while (cVar3 != '\0');
              goto LAB_0276ba40;
            }
            break;
          case 4:
            local_138 = "ReturnLBOuter";
            local_140 = 0x553623749c8c07e8;
            local_130 = 0xd;
            uStack_128 = 0;
            local_a0 = param_1;
            FUN_0276c378(&local_78,local_70[0],&local_140,&local_a0);
            if (local_70[0] != (long *)0x0) {
              lVar8 = local_70[0][0xb];
              piVar1 = (int *)(lVar8 + 0xc);
              do {
                iVar6 = *piVar1;
                cVar3 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar5) {
                  *piVar1 = iVar6 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
                plVar10 = local_70[0];
              } while (cVar3 != '\0');
              goto LAB_0276ba40;
            }
            break;
          case 5:
            local_160 = 0x7cbf39e7832872e1;
            pcStack_158 = "StartTrackingOuter";
            local_150 = 0x12;
            uStack_148 = 0;
            local_a0 = param_1;
            FUN_0276c414(&local_78,local_70[0],&local_160,&local_a0);
            if (local_70[0] != (long *)0x0) {
              lVar8 = local_70[0][0xb];
              piVar1 = (int *)(lVar8 + 0xc);
              do {
                iVar6 = *piVar1;
                cVar3 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar5) {
                  *piVar1 = iVar6 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
                plVar10 = local_70[0];
              } while (cVar3 != '\0');
              goto LAB_0276ba40;
            }
            break;
          case 6:
            local_180 = 0x9674b82e525423d7;
            pcStack_178 = "StopTrackingOuter";
            local_170 = 0x11;
            uStack_168 = 0;
            local_a0 = param_1;
            FUN_0276c4b0(&local_78,local_70[0],&local_180,&local_a0);
            if (local_70[0] != (long *)0x0) {
              lVar8 = local_70[0][0xb];
              piVar1 = (int *)(lVar8 + 0xc);
              do {
                iVar6 = *piVar1;
                cVar3 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar5) {
                  *piVar1 = iVar6 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
                plVar10 = local_70[0];
              } while (cVar3 != '\0');
              goto LAB_0276ba40;
            }
            break;
          default:
            goto switchD_0276b78c_default;
          }
          local_70[0] = local_78;
switchD_0276b78c_default:
          param_3 = param_3 + 1;
        } while (param_3 != puVar2);
      }
      local_1a0 = 0x8c8cbe118355b43a;
      pcStack_198 = "CatchError";
      local_190 = 10;
      uStack_188 = 0;
      FUN_0276c54c(&local_78,local_70[0],&local_1a0);
      plVar10 = local_70[0];
      local_70[0] = (long *)0x0;
      if (plVar10 != (long *)0x0) {
        lVar8 = plVar10[0xb];
        piVar1 = (int *)(lVar8 + 0xc);
        do {
          iVar6 = *piVar1;
          cVar3 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar6 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar6 + -1 == 0) {
          *(undefined8 *)(lVar8 + 0x18) = 0;
          (**(code **)(*plVar10 + 0x20))();
        }
      }
      local_70[0] = local_78;
      FUN_0277ea5c(param_1 + 0x68);
      if (*(long **)(param_1 + 0x68) == (long *)0x0) {
        uVar7 = 0;
      }
      else {
        uVar7 = (**(code **)(**(long **)(param_1 + 0x68) + 0x48))();
      }
      if (local_70[0] != (long *)0x0) {
        lVar8 = local_70[0][0xb];
        piVar1 = (int *)(lVar8 + 0xc);
        do {
          iVar6 = *piVar1;
          cVar3 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar6 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar6 + -1 == 0) {
          *(undefined8 *)(lVar8 + 0x18) = 0;
          (**(code **)(*local_70[0] + 0x20))();
        }
      }
      goto LAB_0276baf8;
    }
  }
  else {
    FUN_01148a98(local_70);
    if (local_70[0] == (long *)0x0) {
LAB_0276b5e8:
      bVar5 = false;
    }
    else {
      local_78 = (long *)&DAT_2a9b2ac3454aecc1;
      uVar9 = FUN_010f4ccc(local_70[0],&local_78);
      if ((uVar9 & 1) == 0) goto LAB_0276b5e8;
      bVar5 = true;
    }
    if (local_70[0] != (long *)0x0) {
      lVar8 = local_70[0][0xb];
      piVar1 = (int *)(lVar8 + 0xc);
      do {
        iVar6 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar6 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar6 + -1 == 0) {
        *(undefined8 *)(lVar8 + 0x18) = 0;
        (**(code **)(*local_70[0] + 0x20))();
      }
    }
    if (!bVar5) goto LAB_0276b630;
  }
  uVar7 = 0;
LAB_0276baf8:
  return uVar7 & 1;
}


