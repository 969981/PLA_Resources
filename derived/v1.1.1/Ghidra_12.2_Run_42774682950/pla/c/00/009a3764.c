/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 009a3764; name: FUN_009a3764
 */


void FUN_009a3764(long *param_1,long param_2,undefined4 param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  long *plVar11;
  undefined4 uVar12;
  long local_a8;
  char *pcStack_a0;
  undefined8 local_98;
  long *local_90;
  long *local_88;
  char *pcStack_80;
  undefined8 local_78;
  long *local_70;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  long *local_58;
  long *local_48;
  
  local_58 = (long *)0x0;
  switch(param_3) {
  case 0:
    FUN_009a40b8(&local_88,*(undefined8 *)(param_2 + 8));
    plVar11 = local_88;
    break;
  case 1:
    FUN_009a4130(&local_88,*(undefined8 *)(param_2 + 8));
    plVar11 = local_88;
    break;
  case 2:
    if (((*PTR_DAT_04379578 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_04379578), iVar5 != 0)) {
      FUN_00100250(PTR_LAB_043796d8,PTR_DAT_04379580,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379578);
    }
    lVar7 = *(long *)PTR_DAT_04379580;
    *(long *)PTR_DAT_04379588 = lVar7;
    FUN_0098f80c(&local_60,lVar7 + 0xd8);
    FUN_0199d14c(&local_88,CONCAT44(uStack_5c,local_60));
    if (local_88 == (long *)0x0) {
      local_48 = (long *)0x0;
LAB_009a39b0:
      plVar11 = (long *)CONCAT44(uStack_5c,local_60);
    }
    else {
      FUN_00959d38(&local_48);
      if (local_88 == (long *)0x0) goto LAB_009a39b0;
      plVar11 = local_88 + 1;
      do {
        iVar5 = (int)*plVar11 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar4) {
          *(int *)plVar11 = iVar5;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar5 != 0) goto LAB_009a39b0;
      local_88[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_04379498), iVar5 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar7 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar7;
      local_a8 = *local_88;
      FUN_02a44274(lVar7 + 0xd8,&local_a8);
      plVar11 = (long *)CONCAT44(uStack_5c,local_60);
    }
    if (plVar11 != (long *)0x0) {
      lVar7 = plVar11[0xb];
      piVar1 = (int *)(lVar7 + 0xc);
      do {
        iVar5 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar5 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar5 + -1 == 0) {
        *(undefined8 *)(lVar7 + 0x18) = 0;
        (**(code **)(*plVar11 + 0x20))();
      }
    }
    if ((local_48 != (long *)0x0) && (FUN_02605ea4(local_48,1), local_48 != (long *)0x0)) {
      lVar7 = local_48[0xb];
      piVar1 = (int *)(lVar7 + 0xc);
      do {
        iVar5 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar5 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar5 + -1 == 0) {
        *(undefined8 *)(lVar7 + 0x18) = 0;
        (**(code **)(*local_48 + 0x20))();
      }
    }
    local_88 = (long *)0x0;
    lVar7 = FUN_009bb5dc(&local_a8,*(undefined8 *)(param_2 + 8),&local_88);
    *param_1 = lVar7;
    if (lVar7 != 0) {
      lVar7 = *(long *)(lVar7 + 0x58);
      if (*(undefined8 **)(lVar7 + 0x18) != (undefined8 *)0x0) {
        if (*(long *)(lVar7 + 0x10) == 0) {
          uVar8 = (**(code **)**(undefined8 **)(lVar7 + 0x18))();
          *(undefined8 *)(lVar7 + 0x10) = uVar8;
        }
        piVar1 = (int *)(lVar7 + 0xc);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = *piVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        goto LAB_009a3924;
      }
      goto LAB_009a3fec;
    }
    goto LAB_009a3924;
  case 3:
    if (((*PTR_DAT_04379578 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_04379578), iVar5 != 0)) {
      FUN_00100250(PTR_LAB_043796d8,PTR_DAT_04379580,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379578);
    }
    lVar7 = *(long *)PTR_DAT_04379580;
    *(long *)PTR_DAT_04379588 = lVar7;
    FUN_0098f80c(&local_60,lVar7 + 0xd8);
    FUN_0199d14c(&local_88,CONCAT44(uStack_5c,local_60));
    if (local_88 == (long *)0x0) {
      local_48 = (long *)0x0;
LAB_009a3ae0:
      plVar11 = (long *)CONCAT44(uStack_5c,local_60);
    }
    else {
      FUN_00959d38(&local_48);
      if (local_88 == (long *)0x0) goto LAB_009a3ae0;
      plVar11 = local_88 + 1;
      do {
        iVar5 = (int)*plVar11 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar4) {
          *(int *)plVar11 = iVar5;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar5 != 0) goto LAB_009a3ae0;
      local_88[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_04379498), iVar5 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar7 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar7;
      local_a8 = *local_88;
      FUN_02a44274(lVar7 + 0xd8,&local_a8);
      plVar11 = (long *)CONCAT44(uStack_5c,local_60);
    }
    if (plVar11 != (long *)0x0) {
      lVar7 = plVar11[0xb];
      piVar1 = (int *)(lVar7 + 0xc);
      do {
        iVar5 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar5 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar5 + -1 == 0) {
        *(undefined8 *)(lVar7 + 0x18) = 0;
        (**(code **)(*plVar11 + 0x20))();
      }
    }
    if ((local_48 != (long *)0x0) && (FUN_02605ea4(local_48,0), local_48 != (long *)0x0)) {
      lVar7 = local_48[0xb];
      piVar1 = (int *)(lVar7 + 0xc);
      do {
        iVar5 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar5 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar5 + -1 == 0) {
        *(undefined8 *)(lVar7 + 0x18) = 0;
        (**(code **)(*local_48 + 0x20))();
      }
    }
    local_88 = (long *)0x0;
    lVar7 = FUN_009bb5dc(&local_a8,*(undefined8 *)(param_2 + 8),&local_88);
    *param_1 = lVar7;
    if (lVar7 != 0) {
      lVar7 = *(long *)(lVar7 + 0x58);
      if (*(undefined8 **)(lVar7 + 0x18) != (undefined8 *)0x0) {
        if (*(long *)(lVar7 + 0x10) == 0) {
          uVar8 = (**(code **)**(undefined8 **)(lVar7 + 0x18))();
          *(undefined8 *)(lVar7 + 0x10) = uVar8;
        }
        piVar1 = (int *)(lVar7 + 0xc);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = *piVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        goto LAB_009a3924;
      }
      goto LAB_009a3fec;
    }
    goto LAB_009a3924;
  case 4:
    uVar8 = *(undefined8 *)(param_2 + 8);
    local_a8._0_4_ = 0;
    goto LAB_009a3a80;
  case 5:
    uVar8 = *(undefined8 *)(param_2 + 8);
    local_a8._0_4_ = 1;
    goto LAB_009a3a80;
  case 6:
    uVar8 = *(undefined8 *)(param_2 + 8);
    local_a8._0_4_ = 2;
    goto LAB_009a3a80;
  case 7:
    uVar8 = *(undefined8 *)(param_2 + 8);
    local_a8._0_4_ = 3;
LAB_009a3a80:
    FUN_009a41a8(&local_88,uVar8,&local_a8);
    plVar11 = local_88;
    break;
  case 8:
    FUN_009a4220(&local_88,*(undefined8 *)(param_2 + 8));
    plVar11 = local_88;
    break;
  case 9:
    uVar8 = *(undefined8 *)(param_2 + 8);
    local_88 = (long *)&DAT_8013c350d279d9f9;
    pcStack_80 = "battle_view";
    local_78 = 0xb;
    local_70 = (long *)0x0;
    local_a8 = -0x9277fea94400098;
    pcStack_a0 = "PokemonAngryPlayerReactionDelay";
    local_60 = 0;
    local_98 = 0x1f;
    local_90 = (long *)0x0;
    if (((*PTR_DAT_04379660 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_04379660), iVar5 != 0)) {
      FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379660);
    }
    uVar9 = *(undefined8 *)PTR_DAT_04379668;
    *(undefined8 *)PTR_DAT_04379670 = uVar9;
    FUN_00d7d9e4(&local_48,uVar9,&local_88);
    local_64 = 0;
    if ((local_48 != (long *)0x0) &&
       (local_64 = FUN_00d78f50(local_48,&local_a8), local_48 != (long *)0x0)) {
      plVar11 = local_48 + 10;
      do {
        iVar5 = (int)*plVar11 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar4) {
          *(int *)plVar11 = iVar5;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar5 == 0) {
        (**(code **)(*local_48 + 0x10))(local_48);
      }
    }
    FUN_009a4298(&local_48,uVar8,&local_60,&local_64);
    plVar11 = local_58;
    local_58 = (long *)0x0;
    if (plVar11 != (long *)0x0) {
      lVar7 = plVar11[0xb];
      piVar1 = (int *)(lVar7 + 0xc);
      do {
        iVar5 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar5 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar5 + -1 == 0) {
        *(undefined8 *)(lVar7 + 0x18) = 0;
        (**(code **)(*plVar11 + 0x20))();
      }
    }
    plVar11 = local_48;
    local_48 = (long *)0x0;
    local_58 = plVar11;
    if (local_90 != (long *)0x0) {
      (**(code **)(*local_90 + 0x20))();
    }
    if (local_70 != (long *)0x0) {
      (**(code **)(*local_70 + 0x20))();
    }
    goto LAB_009a38ac;
  case 10:
    local_88 = (long *)CONCAT44(local_88._4_4_,1);
    plVar11 = (long *)FUN_009bc990(*(undefined8 *)(param_2 + 8),&local_88);
    if (plVar11 != (long *)0x0) {
      lVar7 = plVar11[0xb];
      if (*(undefined8 **)(lVar7 + 0x18) == (undefined8 *)0x0) goto LAB_009a3fec;
      if (*(long *)(lVar7 + 0x10) == 0) {
        uVar8 = (**(code **)**(undefined8 **)(lVar7 + 0x18))();
        *(undefined8 *)(lVar7 + 0x10) = uVar8;
      }
      piVar1 = (int *)(lVar7 + 0xc);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (local_58 != (long *)0x0) {
        lVar7 = local_58[0xb];
        piVar1 = (int *)(lVar7 + 0xc);
        do {
          iVar5 = *piVar1 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar5;
            cVar3 = ExclusiveMonitorsStatus();
          }
          plVar6 = local_58;
        } while (cVar3 != '\0');
LAB_009a38a4:
        local_58 = (long *)0x0;
        if (iVar5 == 0) {
          *(undefined8 *)(lVar7 + 0x18) = 0;
          (**(code **)(*plVar6 + 0x20))();
        }
      }
    }
    break;
  case 0xb:
    local_88 = (long *)CONCAT44(local_88._4_4_,2);
    plVar11 = (long *)FUN_009bc990(*(undefined8 *)(param_2 + 8),&local_88);
    if (plVar11 != (long *)0x0) {
      lVar7 = plVar11[0xb];
      if (*(undefined8 **)(lVar7 + 0x18) == (undefined8 *)0x0) goto LAB_009a3fec;
      if (*(long *)(lVar7 + 0x10) == 0) {
        uVar8 = (**(code **)**(undefined8 **)(lVar7 + 0x18))();
        *(undefined8 *)(lVar7 + 0x10) = uVar8;
      }
      piVar1 = (int *)(lVar7 + 0xc);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (local_58 != (long *)0x0) {
        lVar7 = local_58[0xb];
        piVar1 = (int *)(lVar7 + 0xc);
        do {
          iVar5 = *piVar1 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar5;
            cVar3 = ExclusiveMonitorsStatus();
          }
          plVar6 = local_58;
        } while (cVar3 != '\0');
        goto LAB_009a38a4;
      }
    }
    break;
  default:
    plVar11 = (long *)0x0;
    goto LAB_009a38ac;
  }
  local_58 = plVar11;
LAB_009a38ac:
  *(undefined4 *)(plVar11 + 0xd) = 1;
  FUN_0099ae98(param_2 + 0x4a0,&local_58);
  if (((((*(byte *)(param_2 + 0x770) & 0x1f) != 0) || ((*(byte *)(param_2 + 0x768) & 0x1f) != 0)) &&
      (*(int *)(param_2 + 0x7b8) == 1)) && (lVar7 = FUN_0099d310(plVar11 + 10), lVar7 != 0)) {
    uVar12 = *(undefined4 *)(param_2 + 0x7c0);
    *(undefined4 *)(lVar7 + 0xf0) = uVar12;
    plVar11 = *(long **)(lVar7 + 0x78);
    plVar6 = *(long **)(lVar7 + 0x80);
    if (plVar11 != plVar6) {
      do {
        puVar10 = *(undefined8 **)(*plVar11 + 0xe0);
        puVar2 = *(undefined8 **)(*plVar11 + 0xe8);
        if ((puVar10 != puVar2) &&
           ((**(code **)(*(long *)*puVar10 + 0x90))(uVar12), puVar10 + 1 != puVar2)) {
          (**(code **)(*(long *)puVar10[1] + 0x90))(uVar12);
          for (puVar10 = puVar10 + 2; puVar10 != puVar2; puVar10 = puVar10 + 1) {
            (**(code **)(*(long *)*puVar10 + 0x90))(uVar12);
          }
        }
        plVar11 = plVar11 + 1;
      } while (plVar11 != plVar6);
    }
  }
  lVar7 = FUN_009bb804(*(undefined8 *)(param_2 + 8),&local_58);
  *param_1 = lVar7;
  if (lVar7 != 0) {
    lVar7 = *(long *)(lVar7 + 0x58);
    if (*(undefined8 **)(lVar7 + 0x18) == (undefined8 *)0x0) {
LAB_009a3fec:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar7 + 0x10) == 0) {
      uVar8 = (**(code **)**(undefined8 **)(lVar7 + 0x18))();
      *(undefined8 *)(lVar7 + 0x10) = uVar8;
    }
    piVar1 = (int *)(lVar7 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
LAB_009a3924:
  if (local_58 != (long *)0x0) {
    lVar7 = local_58[0xb];
    piVar1 = (int *)(lVar7 + 0xc);
    do {
      iVar5 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 + -1 == 0) {
      *(undefined8 *)(lVar7 + 0x18) = 0;
      (**(code **)(*local_58 + 0x20))();
    }
  }
  return;
}


