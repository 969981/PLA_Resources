/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 009a2b7c; name: FUN_009a2b7c
 */


void FUN_009a2b7c(long *param_1,long param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  int *piVar1;
  long *plVar2;
  undefined8 *puVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  undefined *puVar7;
  int iVar8;
  undefined8 uVar9;
  long *plVar10;
  long lVar11;
  byte *pbVar12;
  long lVar13;
  undefined8 *puVar14;
  long *plVar15;
  undefined4 uVar16;
  long *local_118;
  undefined8 *puStack_110;
  undefined8 local_108;
  long *local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  long *local_68;
  
  lVar11 = 0;
  switch(param_3) {
  case 0x2b:
    lVar11 = 2;
    break;
  case 0x2c:
    lVar11 = 4;
    break;
  default:
    local_f8 = 0;
    lVar11 = FUN_009bb5dc(&local_118,*(undefined8 *)(param_2 + 8),&local_f8);
    *param_1 = lVar11;
    if (lVar11 == 0) {
      return;
    }
    lVar11 = *(long *)(lVar11 + 0x58);
    if (*(undefined8 **)(lVar11 + 0x18) != (undefined8 *)0x0) {
      if (*(long *)(lVar11 + 0x10) == 0) {
        uVar9 = (**(code **)**(undefined8 **)(lVar11 + 0x18))();
        *(undefined8 *)(lVar11 + 0x10) = uVar9;
      }
      piVar1 = (int *)(lVar11 + 0xc);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = *piVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      return;
    }
    goto LAB_009a3158;
  case 0x2e:
    lVar11 = 8;
    break;
  case 0x33:
    lVar11 = 10;
    break;
  case 0x92:
    lVar11 = 3;
    break;
  case 0x93:
    lVar11 = 5;
    break;
  case 0x94:
    lVar11 = 9;
    break;
  case 0x95:
    break;
  case 0x96:
    lVar11 = 1;
    break;
  case 0x97:
    lVar11 = 6;
    break;
  case 0x98:
    lVar11 = 7;
    break;
  case 0x99:
    lVar11 = 0x11;
    break;
  case 0x9a:
    lVar11 = 0x12;
    break;
  case 0x9b:
    lVar11 = 0x13;
    break;
  case 0x9c:
    lVar11 = 0x14;
    break;
  case 0x9d:
    lVar11 = 0x15;
    break;
  case 0x9e:
    lVar11 = 0x16;
    break;
  case 0x9f:
    lVar11 = 0x17;
    break;
  case 0xa0:
    lVar11 = 0xb;
    break;
  case 0xa1:
    lVar11 = 0xc;
    break;
  case 0xa2:
    lVar11 = 0xd;
    break;
  case 0xa3:
    lVar11 = 0xe;
    break;
  case 0xa4:
    lVar11 = 0xf;
    break;
  case 0xa5:
    lVar11 = 0x10;
    break;
  case 0xa6:
    lVar11 = 0x18;
  }
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  snprintf((char *)&local_f8,0x80,"bin/effect/battle/sequence/%s.wbin",
           (&PTR_s_es001_041c4200)[lVar11 * 2]);
  lVar11 = FUN_00933eec(*(undefined8 *)(*(long *)(param_2 + 0x330) + 0xd0),param_4);
  if (lVar11 == 0) {
switchD_009a2cb0_default:
    uVar16 = 0;
  }
  else {
    switch(param_3) {
    case 0xa0:
      uVar9 = 0;
      break;
    case 0xa1:
      uVar9 = 1;
      break;
    case 0xa2:
      uVar9 = 2;
      break;
    case 0xa3:
      uVar9 = 3;
      break;
    default:
      goto switchD_009a2cb0_default;
    }
    uVar16 = FUN_009321b4(lVar11,uVar9);
  }
  plVar15 = *(long **)(param_2 + 8);
  if ((*PTR_DAT_04379520 & 1) == 0) {
    iVar8 = __cxa_guard_acquire(PTR_DAT_04379520);
    puVar7 = PTR_DAT_04379528;
    if (iVar8 != 0) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar7,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
  }
  lVar11 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (0xf < *(ulong *)(lVar11 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar11 + *(ulong *)(lVar11 + 0x80) * 8) = plVar15;
  *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + 1;
  plVar10 = (long *)(**(code **)(*plVar15 + 0x10))(plVar15,0x330,0x10);
  if (plVar10 == (long *)0x0) {
    (**(code **)(*plVar15 + 0xb8))(plVar15);
  }
  FUN_00adb43c(plVar10,plVar15,param_4,param_5,uVar16,0,1,1,0);
  plVar10[1] = (long)plVar15;
  plVar10[2] = (long)plVar10;
  plVar10[3] = 0x330;
  plVar10[4] = 0x10;
  *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + -1;
  local_68 = plVar10;
  if (plVar10 != (long *)0x0) {
    lVar11 = plVar10[0xb];
    if (*(undefined8 **)(lVar11 + 0x18) == (undefined8 *)0x0) goto LAB_009a3158;
    if (*(long *)(lVar11 + 0x10) == 0) {
      uVar9 = (**(code **)**(undefined8 **)(lVar11 + 0x18))();
      *(undefined8 *)(lVar11 + 0x10) = uVar9;
    }
    piVar1 = (int *)(lVar11 + 0xc);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = *piVar1 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  plVar15 = local_68;
  if (param_3 != 0x9d) {
    *(undefined1 *)((long)local_68 + 0x303) = 0;
  }
  local_118 = (long *)&DAT_cbf29ce484222645;
  if ((byte)local_f8 != 0) {
    pbVar12 = (byte *)((ulong)&local_f8 | 1);
    bVar4 = (byte)local_f8;
    do {
      local_118 = (long *)(((ulong)local_118 ^ (ulong)bVar4) * 0x100000001b3);
      bVar4 = *pbVar12;
      pbVar12 = pbVar12 + 1;
    } while (bVar4 != 0);
  }
  puStack_110 = &local_f8;
  local_108 = 0x7f;
  local_100 = (long *)0x0;
  FUN_00adc9e8(local_68,&local_118,*(undefined8 *)(param_2 + 8));
  if (local_100 != (long *)0x0) {
    (**(code **)(*local_100 + 0x20))();
  }
  lVar11 = plVar15[0xb];
  local_118 = plVar15;
  if (*(undefined8 **)(lVar11 + 0x18) == (undefined8 *)0x0) {
LAB_009a3158:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  if (*(long *)(lVar11 + 0x10) == 0) {
    uVar9 = (**(code **)**(undefined8 **)(lVar11 + 0x18))();
    *(undefined8 *)(lVar11 + 0x10) = uVar9;
  }
  plVar15 = local_118;
  piVar1 = (int *)(lVar11 + 0xc);
  do {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar6) {
      *piVar1 = *piVar1 + 1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  *(undefined4 *)(local_118 + 0xd) = 1;
  FUN_0099ae98(param_2 + 0x4a0,&local_118);
  if (((((*(byte *)(param_2 + 0x770) & 0x1f) != 0) || ((*(byte *)(param_2 + 0x768) & 0x1f) != 0)) &&
      (*(int *)(param_2 + 0x7b8) == 1)) && (lVar11 = FUN_0099d310(plVar15 + 10), lVar11 != 0)) {
    uVar16 = *(undefined4 *)(param_2 + 0x7c0);
    *(undefined4 *)(lVar11 + 0xf0) = uVar16;
    plVar2 = *(long **)(lVar11 + 0x80);
    for (plVar10 = *(long **)(lVar11 + 0x78); plVar10 != plVar2; plVar10 = plVar10 + 1) {
      puVar14 = *(undefined8 **)(*plVar10 + 0xe0);
      puVar3 = *(undefined8 **)(*plVar10 + 0xe8);
      if ((puVar14 != puVar3) &&
         ((**(code **)(*(long *)*puVar14 + 0x90))(uVar16), puVar14 + 1 != puVar3)) {
        (**(code **)(*(long *)puVar14[1] + 0x90))(uVar16);
        for (puVar14 = puVar14 + 2; puVar14 != puVar3; puVar14 = puVar14 + 1) {
          (**(code **)(*(long *)*puVar14 + 0x90))(uVar16);
        }
      }
    }
  }
  if (plVar15 != (long *)0x0) {
    lVar11 = plVar15[0xb];
    piVar1 = (int *)(lVar11 + 0xc);
    do {
      iVar8 = *piVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar8 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar8 + -1 == 0) {
      *(undefined8 *)(lVar11 + 0x18) = 0;
      (**(code **)(*plVar15 + 0x20))(plVar15);
    }
  }
  lVar11 = FUN_009bb6f0(*(undefined8 *)(param_2 + 8),&local_68);
  if (lVar11 != 0) {
    lVar13 = *(long *)(lVar11 + 0x58);
    if (*(undefined8 **)(lVar13 + 0x18) == (undefined8 *)0x0) goto LAB_009a3158;
    if (*(long *)(lVar13 + 0x10) == 0) {
      uVar9 = (**(code **)**(undefined8 **)(lVar13 + 0x18))();
      *(undefined8 *)(lVar13 + 0x10) = uVar9;
    }
    piVar1 = (int *)(lVar13 + 0xc);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = *piVar1 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  *param_1 = lVar11;
  if (local_68 != (long *)0x0) {
    lVar11 = local_68[0xb];
    piVar1 = (int *)(lVar11 + 0xc);
    do {
      iVar8 = *piVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar8 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar8 + -1 == 0) {
      *(undefined8 *)(lVar11 + 0x18) = 0;
      (**(code **)(*local_68 + 0x20))();
    }
  }
  return;
}


