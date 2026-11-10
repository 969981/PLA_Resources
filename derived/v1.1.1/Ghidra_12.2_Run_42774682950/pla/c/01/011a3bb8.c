/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011a3bb8; name: FUN_011a3bb8
 */


undefined8 FUN_011a3bb8(long param_1,ulong param_2,uint param_3)

{
  long *plVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  undefined8 uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  undefined *puVar14;
  long *plVar15;
  long *plVar16;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined2 uStack_bc;
  undefined2 uStack_ba;
  undefined4 local_b8;
  undefined2 local_b4;
  undefined2 uStack_b2;
  undefined8 local_b0;
  undefined4 local_a8;
  long *local_a0;
  int local_98;
  undefined2 local_94;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 uStack_70;
  undefined4 local_6c;
  undefined4 uStack_68;
  undefined4 local_64;
  undefined4 uStack_60;
  undefined4 local_5c;
  undefined1 auStack_50 [16];
  
  param_2 = param_2 & 0xffffffff;
  if (((*PTR_DAT_04379678 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_04379678), iVar6 != 0))
  {
    FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379678);
  }
  lVar12 = *(long *)PTR_DAT_04379680;
  *(long *)PTR_DAT_04379688 = lVar12;
  plVar15 = *(long **)(lVar12 + 0xd0);
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
  plVar16 = (long *)plVar15[0xb];
  if (plVar16 != (long *)0x0) {
    plVar1 = plVar16 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  lVar12 = (**(code **)(*plVar16 + 0x50))(plVar16,param_2);
  if (plVar16 != (long *)0x0) {
    plVar1 = plVar16 + 10;
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
      (**(code **)(*plVar16 + 0x10))(plVar16);
    }
  }
  plVar16 = plVar15 + 10;
  do {
    iVar6 = (int)*plVar16 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar16,0x10);
    if (bVar4) {
      *(int *)plVar16 = iVar6;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar6 == 0) {
    (**(code **)(*plVar15 + 0x10))(plVar15);
  }
  iVar6 = FUN_02c6849c(*(undefined8 *)(lVar12 + 0x98));
  uVar7 = FUN_02c6f924(*(undefined8 *)(lVar12 + 0x98));
  uVar8 = param_3 & 0xffff;
  if (uVar8 < 0x284) {
    switch(uVar8) {
    case 0x12a:
      if (iVar6 != 0x1ed) {
        return 0;
      }
      lVar13 = 0x11;
      break;
    case 299:
      if (iVar6 != 0x1ed) {
        return 0;
      }
      lVar13 = 0x12;
      break;
    case 300:
      if (iVar6 != 0x1ed) {
        return 0;
      }
      lVar13 = 0x14;
      break;
    case 0x12d:
      if (iVar6 != 0x1ed) {
        return 0;
      }
      lVar13 = 0x13;
      break;
    case 0x12e:
      if (iVar6 != 0x1ed) {
        return 0;
      }
      lVar13 = 0x16;
      break;
    case 0x12f:
      if (iVar6 != 0x1ed) {
        return 0;
      }
      lVar13 = 9;
      break;
    case 0x130:
      if (iVar6 != 0x1ed) {
        return 0;
      }
      lVar13 = 0xb;
      break;
    case 0x131:
      if (iVar6 != 0x1ed) {
        return 0;
      }
      lVar13 = 0xc;
      break;
    case 0x132:
      if (iVar6 != 0x1ed) {
        return 0;
      }
      lVar13 = 10;
      break;
    case 0x133:
      if (iVar6 != 0x1ed) {
        return 0;
      }
      lVar13 = 0x15;
      break;
    case 0x134:
      if (iVar6 != 0x1ed) {
        return 0;
      }
      lVar13 = 0xe;
      break;
    case 0x135:
      if (iVar6 != 0x1ed) {
        return 0;
      }
      lVar13 = 0xd;
      break;
    case 0x136:
      if (iVar6 != 0x1ed) {
        return 0;
      }
      lVar13 = 0xf;
      break;
    case 0x137:
      if (iVar6 != 0x1ed) {
        return 0;
      }
      lVar13 = 0x17;
      break;
    case 0x138:
      if (iVar6 != 0x1ed) {
        return 0;
      }
      lVar13 = 0x18;
      break;
    case 0x139:
      if (iVar6 != 0x1ed) {
        return 0;
      }
      lVar13 = 0x10;
      break;
    case 0x13a:
    case 0x13b:
    case 0x13c:
    case 0x13d:
    case 0x13e:
    case 0x13f:
    case 0x140:
    case 0x141:
    case 0x142:
    case 0x143:
    case 0x144:
    case 0x145:
    case 0x146:
    case 0x147:
    case 0x148:
    case 0x149:
    case 0x14a:
    case 0x14b:
    case 0x14c:
    case 0x14d:
    case 0x14e:
    case 0x14f:
    case 0x150:
    case 0x151:
    case 0x152:
    case 0x153:
    case 0x154:
    case 0x155:
    case 0x156:
    case 0x157:
    case 0x158:
    case 0x159:
    case 0x15a:
    case 0x15b:
    case 0x15c:
    case 0x15d:
    case 0x15e:
    case 0x15f:
    case 0x160:
    case 0x161:
    case 0x162:
    case 0x163:
    case 0x164:
    case 0x165:
    case 0x166:
    case 0x167:
    case 0x168:
    case 0x169:
    case 0x16a:
    case 0x16b:
    case 0x16c:
    case 0x16d:
    case 0x16e:
    case 0x16f:
    case 0x170:
    case 0x171:
    case 0x172:
    case 0x173:
    case 0x174:
    case 0x175:
    case 0x176:
    case 0x177:
    case 0x178:
    case 0x179:
    case 0x17a:
    case 0x17b:
    case 0x17c:
    case 0x17d:
    case 0x17e:
    case 0x17f:
    case 0x180:
    case 0x181:
    case 0x182:
    case 0x183:
    case 0x184:
    case 0x185:
    case 0x186:
    case 0x187:
    case 0x188:
    case 0x189:
    case 0x18a:
    case 0x18b:
    case 0x18c:
    case 0x18d:
    case 0x18e:
    case 399:
    case 400:
    case 0x191:
    case 0x192:
    case 0x193:
    case 0x194:
    case 0x195:
    case 0x196:
    case 0x197:
    case 0x198:
    case 0x199:
    case 0x19a:
    case 0x19b:
    case 0x19c:
    case 0x19d:
    case 0x19e:
    case 0x19f:
    case 0x1a0:
    case 0x1a1:
    case 0x1a2:
    case 0x1a3:
    case 0x1a4:
    case 0x1a5:
    case 0x1a6:
    case 0x1a7:
    case 0x1a8:
    case 0x1a9:
    case 0x1aa:
    case 0x1ab:
    case 0x1ac:
    case 0x1ad:
    case 0x1ae:
    case 0x1af:
    case 0x1b0:
    case 0x1b1:
    case 0x1b2:
    case 0x1b3:
    case 0x1b4:
    case 0x1b5:
    case 0x1b6:
    case 0x1b7:
    case 0x1b8:
    case 0x1b9:
    case 0x1ba:
    case 0x1bb:
    case 0x1bc:
    case 0x1bd:
    case 0x1be:
    case 0x1bf:
    case 0x1c0:
    case 0x1c1:
    case 0x1c2:
    case 0x1c3:
    case 0x1c4:
    case 0x1c5:
    case 0x1c6:
    case 0x1c7:
    case 0x1c8:
    case 0x1c9:
    case 0x1ca:
    case 0x1cb:
    case 0x1cc:
    case 0x1cd:
    case 0x1ce:
    case 0x1cf:
    case 0x1d0:
    case 0x1d1:
      goto switchD_011a3ccc_caseD_13a;
    case 0x1d2:
      if (iVar6 != 0x1ec) {
        return 0;
      }
      lVar13 = 0;
      break;
    default:
      if (uVar8 != 0x27e) {
        return 0;
      }
      if (((4 < iVar6 - 0x281U) || ((1 << (ulong)(iVar6 - 0x281U & 0x1f) & 0x13U) == 0)) &&
         (iVar6 != 0x389)) {
        return 0;
      }
      goto LAB_011a3d88;
    }
    goto LAB_011a3d9c;
  }
  switch(uVar8) {
  case 0x6f1:
    if (iVar6 != 0x1e3) {
      return 0;
    }
    break;
  case 0x6f2:
    if (iVar6 != 0x1e4) {
      return 0;
    }
    break;
  case 0x6f3:
    if (iVar6 != 0x1e7) {
      return 0;
    }
    break;
  case 0x6f4:
    if (iVar6 != 0x1ed) {
      return 0;
    }
    lVar13 = 8;
    goto LAB_011a3d9c;
  default:
    if (uVar8 == 0x284) {
      if (iVar6 != 0x1ed) {
        return 0;
      }
      lVar13 = 0x19;
    }
    else {
      if (uVar8 != 0x724) {
        return 0;
      }
      if (iVar6 != 0x1ed) {
        return 0;
      }
      lVar13 = 0x1a;
    }
LAB_011a3d9c:
    uVar8 = (&DAT_03a797f0)[lVar13 * 3];
    if (uVar8 == (uVar7 & 0xffff)) {
switchD_011a3ccc_caseD_13a:
      return 0;
    }
    goto LAB_011a3dd8;
  }
LAB_011a3d88:
  uVar8 = uVar7 ^ 1;
LAB_011a3dd8:
  FUN_02c62fcc(lVar12,uVar8,0);
  if (((*PTR_DAT_04379558 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_04379558), iVar6 != 0))
  {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  *(undefined8 *)PTR_DAT_04379568 = *(undefined8 *)PTR_DAT_04379560;
  FUN_01148f20(&local_a0);
  FUN_01135c84(local_a0,lVar12,1);
  if (local_a0 != (long *)0x0) {
    lVar13 = local_a0[0xb];
    piVar2 = (int *)(lVar13 + 0xc);
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
      *(undefined8 *)(lVar13 + 0x18) = 0;
      (**(code **)(*local_a0 + 0x20))();
    }
  }
  if (((*PTR_DAT_04379618 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_04379618), iVar6 != 0))
  {
    FUN_00100250(PTR_LAB_0437a720,PTR_DAT_04379620,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379618);
  }
  *(undefined8 *)PTR_DAT_04379628 = *(undefined8 *)PTR_DAT_04379620;
  FUN_00ae4f84(&local_a0);
  plVar15 = local_a0;
  puVar5 = PTR_DAT_04379630;
  if (local_a0 != (long *)0x0) {
    if (*(int *)((long)local_a0 + 0xc) != 0) {
      piVar2 = (int *)((long)local_a0 + 0xc);
      puVar14 = PTR_DAT_04379638;
      iVar6 = *(int *)((long)local_a0 + 0xc);
      do {
        plVar16 = (long *)plVar15[2];
        if (((*puVar5 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(puVar5), puVar14 = PTR_DAT_04379638, iVar9 != 0)) {
          uVar10 = FUN_008b2784();
          *(undefined8 *)PTR_DAT_04379638 = uVar10;
          __cxa_guard_release(puVar5);
          puVar14 = PTR_DAT_04379638;
        }
        while( true ) {
          if (plVar16 == (long *)0x0) goto LAB_011a431c;
          if (plVar16 == (long *)puVar14) break;
          plVar16 = (long *)*plVar16;
        }
        iVar9 = *piVar2;
        if (iVar9 == iVar6) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar4) {
            *piVar2 = iVar6 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            lVar13 = plVar15[3];
            plVar15 = (long *)0x0;
            plVar16 = local_a0;
            if (lVar13 != 0) {
              plVar15 = (long *)(lVar13 + -0x50);
            }
            goto joined_r0x011a4278;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar6 = iVar9;
      } while (iVar9 != 0);
    }
LAB_011a431c:
    plVar15 = (long *)0x0;
    plVar16 = local_a0;
joined_r0x011a4278:
    if (plVar16 != (long *)0x0) {
      plVar1 = plVar16 + 1;
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
        plVar16[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar13 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar13;
        local_c8 = *plVar16;
        FUN_02a44274(lVar13 + 0xd8,&local_c8);
      }
    }
    if (plVar15 != (long *)0x0) {
      FUN_00b234ec(plVar15);
      lVar13 = plVar15[0xb];
      piVar2 = (int *)(lVar13 + 0xc);
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
        *(undefined8 *)(lVar13 + 0x18) = 0;
        (**(code **)(*plVar15 + 0x20))(plVar15);
      }
    }
  }
  FUN_00d488f4(&local_a0);
  uVar11 = (ulong)local_c8 >> 0x20;
  local_c8 = CONCAT44((uint)uVar11 & 0xffff0000,3);
  local_c0 = 0;
  uStack_bc = 0;
  local_b8 = 0;
  local_b4 = 0;
  local_b0 = 0xffffffff00000000;
  local_a8 = 3;
  FUN_01090b20(&local_c0,lVar12);
  local_94 = local_c8._4_2_;
  local_90 = CONCAT26(uStack_ba,CONCAT24(uStack_bc,local_c0));
  uStack_88 = CONCAT26(uStack_b2,CONCAT24(local_b4,local_b8));
  local_98 = (int)local_c8;
  local_80 = local_b0;
  local_78 = local_a8;
  if ((int)local_c8 == 2) {
    uStack_68 = 0;
    local_64 = 0;
    uStack_60 = 0;
    local_5c = 0;
    uStack_70 = 0;
    local_6c = 0;
    local_74 = 1;
  }
  else if ((int)local_c8 == 3) {
    local_5c = 0;
    local_64 = 0;
    uStack_60 = 0;
    local_6c = 0;
    uStack_68 = 0;
    local_74 = 3;
    uStack_70 = 2;
  }
  FUN_00d5e078(param_1,1,param_2,&local_a0);
  FUN_0119c444(param_1,1,param_2);
  FUN_011a9804(*(undefined8 *)(param_1 + 0x16b8),param_2);
  FUN_02c4fb44(auStack_50,param_3 & 0xffff);
  uVar10 = FUN_02c4fc60(auStack_50,0x11);
  if ((((int)uVar10 == 1) && (uVar10 = FUN_02c4fc60(auStack_50,0x29), 0 < (int)uVar10)) ||
     (uVar11 = FUN_0119f7dc(uVar10,param_3), (uVar11 & 1) != 0)) {
    lVar12 = *(long *)(param_1 + 0x16b8);
  }
  else {
    lVar12 = *(long *)(param_1 + 0x16b8);
    if (3 < (param_3 - 0x6df & 0xffff)) {
      lVar12 = *(long *)(lVar12 + 0x5c0) + param_2 * 0x500;
      FUN_0283b1e8(*(undefined8 *)(lVar12 + 8),lVar12 + 0x458);
      FUN_0283b748(0,*(undefined8 *)(lVar12 + 8),lVar12 + 0x458);
      return 1;
    }
  }
  uVar8 = FUN_0119e684(param_1,param_2,param_3);
  FUN_02857b70(*(long *)(lVar12 + 0x5c0) + param_2 * 0x500,1,uVar8 & 1);
  return 1;
}


