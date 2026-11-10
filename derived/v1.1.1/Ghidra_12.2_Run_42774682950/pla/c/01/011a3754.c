/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011a3754; name: FUN_011a3754
 */


undefined8 FUN_011a3754(undefined8 param_1,long param_2,ushort param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  undefined8 uVar12;
  long lVar13;
  long *plVar14;
  undefined8 *local_68 [2];
  undefined8 local_58;
  
  iVar9 = FUN_02c6849c(*(undefined8 *)(param_2 + 0x98));
  uVar10 = FUN_02c6f924(*(undefined8 *)(param_2 + 0x98));
  if (0x283 < param_3) {
    switch(param_3) {
    case 0x6f1:
      if (iVar9 == 0x1e3) {
        return 1;
      }
      return 0;
    case 0x6f2:
      if (iVar9 == 0x1e4) {
        return 1;
      }
      return 0;
    case 0x6f3:
      if (iVar9 == 0x1e7) {
        return 1;
      }
      return 0;
    case 0x6f4:
      if (iVar9 != 0x1ed) {
        return 0;
      }
      lVar13 = 8;
      break;
    default:
      if (param_3 == 0x284) {
        if (iVar9 != 0x1ed) {
          return 0;
        }
        lVar13 = 0x19;
      }
      else {
        if (param_3 != 0x724) {
          return 0;
        }
        if (iVar9 != 0x1ed) {
          return 0;
        }
        lVar13 = 0x1a;
      }
    }
    goto LAB_011a39b0;
  }
  switch(param_3) {
  case 0x12a:
    if (iVar9 != 0x1ed) {
      return 0;
    }
    lVar13 = 0x11;
    break;
  case 299:
    if (iVar9 != 0x1ed) {
      return 0;
    }
    lVar13 = 0x12;
    break;
  case 300:
    if (iVar9 != 0x1ed) {
      return 0;
    }
    lVar13 = 0x14;
    break;
  case 0x12d:
    if (iVar9 != 0x1ed) {
      return 0;
    }
    lVar13 = 0x13;
    break;
  case 0x12e:
    if (iVar9 != 0x1ed) {
      return 0;
    }
    lVar13 = 0x16;
    break;
  case 0x12f:
    if (iVar9 != 0x1ed) {
      return 0;
    }
    lVar13 = 9;
    break;
  case 0x130:
    if (iVar9 != 0x1ed) {
      return 0;
    }
    lVar13 = 0xb;
    break;
  case 0x131:
    if (iVar9 != 0x1ed) {
      return 0;
    }
    lVar13 = 0xc;
    break;
  case 0x132:
    if (iVar9 != 0x1ed) {
      return 0;
    }
    lVar13 = 10;
    break;
  case 0x133:
    if (iVar9 != 0x1ed) {
      return 0;
    }
    lVar13 = 0x15;
    break;
  case 0x134:
    if (iVar9 != 0x1ed) {
      return 0;
    }
    lVar13 = 0xe;
    break;
  case 0x135:
    if (iVar9 != 0x1ed) {
      return 0;
    }
    lVar13 = 0xd;
    break;
  case 0x136:
    if (iVar9 != 0x1ed) {
      return 0;
    }
    lVar13 = 0xf;
    break;
  case 0x137:
    if (iVar9 != 0x1ed) {
      return 0;
    }
    lVar13 = 0x17;
    break;
  case 0x138:
    if (iVar9 != 0x1ed) {
      return 0;
    }
    lVar13 = 0x18;
    break;
  case 0x139:
    if (iVar9 != 0x1ed) {
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
    goto switchD_011a37bc_caseD_13a;
  case 0x1d2:
    if (iVar9 != 0x1ec) {
      return 0;
    }
    lVar13 = 0;
    break;
  default:
    if (param_3 != 0x27e) {
      return 0;
    }
    if ((iVar9 - 0x281U < 5) && ((1 << (ulong)(iVar9 - 0x281U & 0x1f) & 0x13U) != 0)) {
      return 1;
    }
    if (iVar9 == 0x389) {
      return 1;
    }
    goto switchD_011a37bc_caseD_13a;
  }
LAB_011a39b0:
  if ((&DAT_03a797f0)[lVar13 * 3] != (uVar10 & 0xffff)) {
    if (iVar9 != 0x1ec) {
      return 1;
    }
    FUN_025ad148(local_68);
    puVar4 = local_68[0];
    puVar8 = PTR_DAT_04379d88;
    puVar7 = PTR_DAT_04379d80;
    puVar6 = PTR_DAT_043794d8;
    puVar5 = PTR_DAT_043794d0;
    if (local_68[0] != (undefined8 *)0x0) {
      if (*(int *)((long)local_68[0] + 0xc) != 0) {
        piVar1 = (int *)((long)local_68[0] + 0xc);
        iVar9 = *(int *)((long)local_68[0] + 0xc);
        do {
          plVar14 = (long *)puVar4[2];
          if (((*puVar7 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar7), iVar11 != 0)) {
            if (((*puVar5 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar5), iVar11 != 0)) {
              uVar12 = FUN_0087f8f0();
              *(undefined8 *)puVar6 = uVar12;
              __cxa_guard_release(puVar5);
            }
            *(undefined **)puVar8 = puVar6;
            __cxa_guard_release(puVar7);
          }
          while( true ) {
            if (plVar14 == (long *)0x0) goto LAB_011a3b40;
            if (plVar14 == (long *)puVar8) break;
            plVar14 = (long *)*plVar14;
          }
          iVar11 = *piVar1;
          if (iVar11 == iVar9) {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar9 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 == '\0') {
              lVar13 = puVar4[3];
              plVar14 = (long *)0x0;
              puVar4 = local_68[0];
              if (lVar13 != 0) {
                plVar14 = (long *)(lVar13 + -0x50);
              }
              goto joined_r0x011a3a64;
            }
          }
          else {
            ClearExclusiveLocal();
          }
          iVar9 = iVar11;
        } while (iVar11 != 0);
      }
LAB_011a3b40:
      plVar14 = (long *)0x0;
      puVar4 = local_68[0];
joined_r0x011a3a64:
      if (puVar4 != (undefined8 *)0x0) {
        piVar1 = (int *)(puVar4 + 1);
        do {
          iVar9 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar9 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar9 + -1 == 0) {
          puVar4[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar13 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar13;
          local_58 = *puVar4;
          FUN_02a44274(lVar13 + 0xd8,&local_58);
        }
      }
      if (plVar14 != (long *)0x0) {
        iVar9 = FUN_025acbdc(plVar14);
        lVar13 = plVar14[0xb];
        piVar1 = (int *)(lVar13 + 0xc);
        do {
          iVar11 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar11 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar11 + -1 == 0) {
          *(undefined8 *)(lVar13 + 0x18) = 0;
          (**(code **)(*plVar14 + 0x20))(plVar14);
        }
        if (iVar9 != 3) {
          return 1;
        }
      }
    }
  }
switchD_011a37bc_caseD_13a:
  return 0;
}


