/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 009307e8; name: FUN_009307e8
 */


void FUN_009307e8(long param_1,long *param_2,ulong *param_3,undefined4 *param_4)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  undefined8 uVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  long *local_70;
  long *local_68;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined8 local_50;
  long *local_48;
  
  uVar8 = *param_3;
  if (0x6cb415fdf0018ad2 < (long)uVar8) {
    if ((long)uVar8 < 0x6fab1f642054d831) {
      if ((long)uVar8 < 0x6cb41afdf0019352) {
        if (((uVar8 != 0x6cb419fdf001919f) && (uVar8 != 0x6cb415fdf0018ad3)) &&
           (uVar8 != 0x6cb416fdf0018c86)) goto LAB_00930b68;
      }
      else if ((uVar8 != 0x6cb41afdf0019352) && (uVar8 != 0x6cb41bfdf0019505)) {
        uVar10 = 0x1c642054d318;
LAB_00930a1c:
        if (uVar8 != (uVar10 | 0x6fab000000000000)) goto LAB_00930b68;
      }
    }
    else if ((long)uVar8 < 0x76519614e6d2958c) {
      if ((uVar8 != 0x7266d8fb102270eb) && (uVar8 != 0x7266d9fb1022729e)) {
        uVar10 = 0x1f642054d831;
        goto LAB_00930a1c;
      }
    }
    else if (((uVar8 != 0x789f9de1caebd7cb) && (uVar8 != 0x789f9ee1caebd97e)) &&
            (uVar8 != 0x76519614e6d2958c)) goto LAB_00930b68;
    goto LAB_00930b0c;
  }
  if ((long)uVar8 < 0x9695428a19660d6) {
    if ((long)uVar8 < -0x27d7b4f2ee95db7b) {
      if (((uVar8 == 0x88b7e7951e81bbc5) || (uVar8 == 0x88b7e4951e81b6ac)) ||
         (uVar8 == 0xd828480d116a1f6c)) goto LAB_00930b0c;
    }
    else if (((uVar8 == 0xd8284b0d116a2485) || (uVar8 == 0x9695328a1965f23)) ||
            (uVar8 == 0xee688adc8db7da8c)) goto LAB_00930b0c;
LAB_00930b68:
    lVar9 = 0;
  }
  else {
    if (0x3ec7ad5bc7ddf3ce < (long)uVar8) {
      if (((uVar8 == 0x6cb414fdf0018920) || (uVar8 == 0x3ec7ad5bc7ddf3cf)) ||
         (uVar8 == 0x3ec7ae5bc7ddf582)) goto LAB_00930b0c;
      goto LAB_00930b68;
    }
    if (((uVar8 != 0x9695428a19660d6) && (uVar8 != 0x2bad02a9d1b74664)) &&
       (uVar8 != 0x1bcbdfa2acf23bfa)) goto LAB_00930b68;
LAB_00930b0c:
    uVar5 = FUN_0092fe7c(param_1,*param_4);
    if (3 < uVar5) goto LAB_00930b68;
    if (0xd < (&switchD_00930b5c::switchdataD_03888144)
              [(&switchD_00930b5c::switchdataD_03888940)[(int)uVar5] * 2]) {
      local_50 = 0;
      local_60 = &DAT_cbf29ce484222645;
      puStack_58 = &DAT_03996322;
      goto LAB_00930b88;
    }
    lVar9 = 0;
    switch(uVar5) {
    case 1:
      lVar9 = 2;
      break;
    case 2:
      lVar9 = 3;
      break;
    case 3:
      lVar9 = 4;
    }
  }
  local_60 = (undefined1 *)(&DAT_041b8688)[lVar9 * 4];
  puStack_58 = (&PTR_DAT_041b8690)[lVar9 * 4];
  local_50 = (&DAT_041b8698)[lVar9 * 4];
LAB_00930b88:
  FUN_00930fc0(&local_68,param_3,&local_60);
  plVar15 = *(long **)(*(long *)(param_1 + 0x68) + 0x30);
  if (plVar15 != (long *)0x0) {
    plVar16 = plVar15 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar4) {
        *(int *)plVar16 = (int)*plVar16 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  FUN_00931034(&local_48,plVar15[0xb]);
  plVar16 = *(long **)(*(long *)(*(long *)(local_48[0xd1] + 0x68) + 0xb0) + 0x60);
  if (plVar16 != (long *)0x0) {
    lVar9 = plVar16[0xb];
    if (*(undefined8 **)(lVar9 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar9 + 0x10) == 0) {
      uVar6 = (**(code **)**(undefined8 **)(lVar9 + 0x18))();
      *(undefined8 *)(lVar9 + 0x10) = uVar6;
    }
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar14 = (long *)plVar16[0xd];
  if (plVar14 != (long *)0x0) {
    plVar11 = plVar14 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar4) {
        *(int *)plVar11 = (int)*plVar11 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  lVar9 = plVar16[0xb];
  piVar1 = (int *)(lVar9 + 0xc);
  do {
    iVar7 = *piVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar4) {
      *piVar1 = iVar7 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar7 + -1 == 0) {
    *(undefined8 *)(lVar9 + 0x18) = 0;
    (**(code **)(*plVar16 + 0x20))(plVar16);
  }
  if (local_48 != (long *)0x0) {
    lVar9 = local_48[0xb];
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      iVar7 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar7 + -1 == 0) {
      *(undefined8 *)(lVar9 + 0x18) = 0;
      (**(code **)(*local_48 + 0x20))();
    }
  }
  plVar16 = plVar15 + 10;
  do {
    iVar7 = (int)*plVar16 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar16,0x10);
    if (bVar4) {
      *(int *)plVar16 = iVar7;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar7 == 0) {
    (**(code **)(*plVar15 + 0x10))(plVar15);
  }
  plVar15 = (long *)PTR_DAT_04379c88;
  if (local_68 != (long *)0x0) {
    plVar15 = local_68 + 0xb;
  }
  lVar9 = plVar14[0x16];
  if (lVar9 != 0) {
    plVar16 = *(long **)(lVar9 + 0x270);
    plVar11 = *(long **)(lVar9 + 0x278);
    if (plVar16 != plVar11) {
      uVar5 = 0;
      plVar12 = plVar16;
      do {
        plVar2 = (long *)PTR_DAT_04379c88;
        if (*plVar12 != 0) {
          plVar2 = (long *)(*plVar12 + 0x58);
        }
        if (*plVar2 == *plVar15) {
          if (uVar5 < *(ushort *)(plVar14[0x12] + 2)) {
            iVar7 = 0;
            goto LAB_00930d5c;
          }
          break;
        }
        plVar12 = plVar12 + 1;
        uVar5 = uVar5 + 1;
      } while (plVar11 != plVar12);
    }
  }
  FUN_02c302d0(*param_2,L"error");
  if (plVar14 != (long *)0x0) {
    plVar15 = plVar14 + 10;
    do {
      iVar7 = (int)*plVar15 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar4) {
        *(int *)plVar15 = iVar7;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar7 == 0) {
      (**(code **)(*plVar14 + 0x10))(plVar14);
    }
  }
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x20))();
  }
  return;
  while( true ) {
    plVar16 = plVar16 + 1;
    iVar7 = iVar7 + 1;
    if (plVar11 == plVar16) break;
LAB_00930d5c:
    plVar12 = (long *)PTR_DAT_04379c88;
    if (*plVar16 != 0) {
      plVar12 = (long *)(*plVar16 + 0x58);
    }
    if (*plVar12 == *plVar15) goto LAB_00930d8c;
  }
  iVar7 = 0;
LAB_00930d8c:
  FUN_02c2e33c(plVar14,iVar7,*(undefined8 *)(param_1 + 0x70));
  if (plVar14 != (long *)0x0) {
    plVar15 = plVar14 + 10;
    do {
      iVar7 = (int)*plVar15 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar4) {
        *(int *)plVar15 = iVar7;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar7 == 0) {
      (**(code **)(*plVar14 + 0x10))(plVar14);
    }
  }
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x20))();
  }
  plVar15 = *(long **)(param_1 + 0x70);
  local_70 = plVar15;
  if (plVar15 == (long *)0x0) {
    FUN_0092f418(param_1,&local_70,param_4);
  }
  else {
    plVar16 = plVar15 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar4) {
        *(int *)plVar16 = (int)*plVar16 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    FUN_0092f418(param_1,&local_70,param_4);
    if (plVar15 != (long *)0x0) {
      plVar16 = plVar15 + 10;
      do {
        iVar7 = (int)*plVar16 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar4) {
          *(int *)plVar16 = iVar7;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar7 == 0) {
        (**(code **)(*plVar15 + 0x10))(plVar15);
      }
    }
  }
  uVar6 = *(undefined8 *)(param_1 + 0x70);
  lVar9 = *(long *)(param_1 + 0x78);
  lVar13 = *param_2;
  *(undefined4 *)(lVar9 + 0x124) = 0;
  *(undefined2 *)(lVar9 + 0x128) = 0;
  *(undefined4 *)(lVar9 + 300) = 0;
  *(undefined4 *)(lVar9 + 0x134) = 0;
  FUN_02c33414(lVar9,uVar6);
  if (*(char *)(lVar13 + 0x7c) != '\0') {
    **(undefined2 **)(lVar13 + 0x58) = 0;
    *(undefined2 *)(lVar13 + 0x7a) = 0;
  }
  FUN_02c338a4(lVar9,lVar13,uVar6,0,0);
  return;
}


