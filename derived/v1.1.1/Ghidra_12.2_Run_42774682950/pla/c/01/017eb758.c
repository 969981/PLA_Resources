/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 017eb758; name: FUN_017eb758
 */


/* WARNING: Control flow encountered bad instruction data */

void FUN_017eb758(undefined8 *param_1,long param_2,long *param_3,undefined8 *param_4)

{
  int *piVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  ulong uVar6;
  undefined *puVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  ulong uVar11;
  long lVar12;
  code *pcVar13;
  ulong uVar14;
  ulong uVar15;
  long *plVar16;
  undefined8 *unaff_x20;
  long *unaff_x21;
  long *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  long lVar17;
  undefined8 *local_f0;
  long *local_e8;
  undefined8 local_e0;
  code *local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined1 auStack_c0 [104];
  undefined8 local_58;
  
  if (*(char *)(param_2 + 0x162) != '\0') goto LAB_017ebcac;
  uVar11 = *(ulong *)(param_2 + 0x70);
  if (uVar11 != 0) {
    uVar14 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar14 = (uVar14 & 0x3333333333333333) + (uVar14 >> 2 & 0x3333333333333333);
    uVar14 = (uVar14 + (uVar14 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar14 < 2) {
      uVar15 = (ulong)((uint)uVar11 - 1) & 3;
    }
    else {
      uVar15 = 3;
      if (uVar11 < 4) {
        uVar2 = (uint)uVar11 & 0xff;
        uVar5 = 0;
        if ((uVar11 & 0xff) != 0) {
          uVar5 = 3 / uVar2;
        }
        uVar15 = (ulong)(3 - uVar5 * uVar2);
      }
    }
    plVar16 = *(long **)(*(long *)(param_2 + 0x68) + uVar15 * 8);
    unaff_x20 = param_4;
    unaff_x23 = param_3;
    if ((plVar16 != (long *)0x0) && (plVar16 = (long *)*plVar16, plVar16 != (long *)0x0)) {
      if (uVar14 < 2) {
        do {
          if (plVar16[1] == 3) {
            if ((int)plVar16[2] == 3) goto LAB_017eb84c;
          }
          else if ((plVar16[1] & uVar11 - 1) != uVar15) break;
          plVar16 = (long *)*plVar16;
        } while (plVar16 != (long *)0x0);
      }
      else {
        do {
          uVar14 = plVar16[1];
          if (uVar14 == 3) {
            if ((int)plVar16[2] == 3) goto LAB_017eb84c;
          }
          else {
            if (uVar11 <= uVar14) {
              uVar6 = 0;
              if (uVar11 != 0) {
                uVar6 = uVar14 / uVar11;
              }
              uVar14 = uVar14 - uVar6 * uVar11;
            }
            if (uVar14 != uVar15) break;
          }
          plVar16 = (long *)*plVar16;
        } while (plVar16 != (long *)0x0);
      }
    }
  }
  FUN_017ebdf0();
  param_4 = unaff_x20;
  param_3 = unaff_x23;
LAB_017ebd74:
  iVar8 = __cxa_guard_acquire(PTR_DAT_04379498);
  if (iVar8 != 0) {
    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379498);
  }
LAB_017eb9cc:
  lVar12 = *(long *)PTR_DAT_043794a0;
  *(long *)PTR_DAT_043794a8 = lVar12;
  local_58 = *unaff_x25;
  FUN_02a44274(lVar12 + 0xd8,&local_58);
LAB_017eb9f8:
  unaff_x21[0x14] = *(long *)(*param_3 + 0xa8);
  lVar12 = *param_3;
  if (lVar12 != 0) {
    lVar17 = *(long *)(lVar12 + 0x58);
    if (*(undefined8 **)(lVar17 + 0x18) == (undefined8 *)0x0) goto LAB_017ebdb0;
    if (*(long *)(lVar17 + 0x10) == 0) {
      uVar10 = (**(code **)**(undefined8 **)(lVar17 + 0x18))();
      *(undefined8 *)(lVar17 + 0x10) = uVar10;
    }
    piVar1 = (int *)(lVar17 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar16 = (long *)unaff_x21[0x104];
  unaff_x21[0x104] = lVar12;
  if (plVar16 != (long *)0x0) {
    lVar12 = plVar16[0xb];
    piVar1 = (int *)(lVar12 + 0xc);
    do {
      iVar8 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar8 + -1 == 0) {
      *(undefined8 *)(lVar12 + 0x18) = 0;
      (**(code **)(*plVar16 + 0x20))();
    }
  }
  FUN_009addb0(param_1,unaff_x21,unaff_x24[3]);
  local_d0 = 0;
  uStack_c8 = 0;
  local_e8 = (long *)0x0;
  local_f0 = (undefined8 *)CONCAT26(local_f0._6_2_,3);
  local_e0 = 0;
  local_d8 = (code *)0x0;
  lVar12 = unaff_x21[0xb];
  if (*(undefined8 **)(lVar12 + 0x18) != (undefined8 *)0x0) {
    if (*(long *)(lVar12 + 0x10) == 0) {
      uVar10 = (**(code **)**(undefined8 **)(lVar12 + 0x18))();
      *(undefined8 *)(lVar12 + 0x10) = uVar10;
    }
    piVar1 = (int *)(lVar12 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    plVar16 = unaff_x21;
    if (local_e8 != (long *)0x0) {
      lVar12 = local_e8[0xb];
      piVar1 = (int *)(lVar12 + 0xc);
      do {
        iVar8 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar8 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      plVar16 = unaff_x21;
      if (iVar8 + -1 == 0) {
        *(undefined8 *)(lVar12 + 0x18) = 0;
        lVar12 = *local_e8;
        local_e8 = unaff_x21;
        (**(code **)(lVar12 + 0x20))();
        plVar16 = local_e8;
      }
    }
    local_e8 = plVar16;
    pcVar13 = local_d8;
    if (local_d8 == (code *)0x0) {
      pcVar13 = (code *)param_4[2];
      local_d8 = (code *)0x0;
    }
    else {
      local_d0 = 0;
      uStack_c8 = 0;
      local_e0 = 0;
      local_d8 = (code *)0x0;
      (*pcVar13)(auStack_c0);
      pcVar13 = (code *)param_4[2];
    }
    if (pcVar13 != (code *)0x0) {
      (*pcVar13)(param_4 + 4,auStack_c0);
      local_e0 = *param_4;
      local_d8 = (code *)param_4[1];
      local_d0 = param_4[2];
      uStack_c8 = param_4[3];
    }
    lVar12 = nn::os::GetCurrentThread();
    plVar16 = (long *)(param_2 + 0x150);
    do {
      if (*plVar16 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x144));
          while (*plVar16 == 0) {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar16,0x10);
            if (bVar4) {
              *plVar16 = lVar12;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') goto LAB_017ebb74;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar4) {
        *plVar16 = lVar12;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
LAB_017ebb74:
    if (*(long *)(param_2 + 0x110) == *(long *)(param_2 + 0x118)) {
      FUN_017ebedc(param_2 + 0x108,&local_f0);
    }
    else {
      FUN_009af634(param_2 + 0x120,*(long *)(param_2 + 0x110),&local_f0);
      *(long *)(param_2 + 0x110) = *(long *)(param_2 + 0x110) + 0x90;
    }
    *(undefined1 *)(param_2 + 0x160) = 1;
    *(undefined8 *)(param_2 + 0x150) = 0;
    nn::os::SignalLightEvent((LightEventType *)(param_2 + 0x144));
    pcVar13 = local_d8;
    if (local_d8 == (code *)0x0) {
      local_d8 = (code *)0x0;
    }
    else {
      local_d0 = 0;
      uStack_c8 = 0;
      local_e0 = 0;
      local_d8 = (code *)0x0;
      (*pcVar13)(auStack_c0);
    }
    if (local_e8 != (long *)0x0) {
      lVar12 = local_e8[0xb];
      piVar1 = (int *)(lVar12 + 0xc);
      do {
        iVar8 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar8 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar8 + -1 == 0) {
        *(undefined8 *)(lVar12 + 0x18) = 0;
        (**(code **)(*local_e8 + 0x20))();
      }
    }
    lVar12 = unaff_x21[0xb];
    piVar1 = (int *)(lVar12 + 0xc);
    do {
      iVar8 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar8 + -1 == 0) {
      *(undefined8 *)(lVar12 + 0x18) = 0;
      (**(code **)(*unaff_x21 + 0x20))(unaff_x21);
      return;
    }
    return;
  }
LAB_017ebdb0:
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl("","","",0);
LAB_017ebca4:
  puVar9 = (undefined8 *)*puVar9;
  if (puVar9 == (undefined8 *)0x0) goto LAB_017ebcac;
  goto LAB_017eb880;
LAB_017eb84c:
  lVar12 = plVar16[7];
  unaff_x24 = (undefined8 *)(lVar12 + 0x50);
  puVar9 = (undefined8 *)(**(code **)*unaff_x24)(unaff_x24);
  if (((*PTR_DAT_04381958 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04381958), iVar8 != 0))
  {
    uVar10 = FUN_017ebdfc();
    *(undefined8 *)PTR_DAT_04381960 = uVar10;
    __cxa_guard_release(PTR_DAT_04381958);
  }
  if (puVar9 != (undefined8 *)0x0) {
LAB_017eb880:
    if (puVar9 != (undefined8 *)PTR_DAT_04381960) goto LAB_017ebca4;
    plVar16 = *(long **)(lVar12 + 0x68);
    if (((*PTR_DAT_04379520 & 1) == 0) &&
       (iVar8 = __cxa_guard_acquire(PTR_DAT_04379520), puVar7 = PTR_DAT_04379528, iVar8 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar7,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar17 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar17 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar17 + *(ulong *)(lVar17 + 0x80) * 8) = plVar16;
    *(long *)(lVar17 + 0x80) = *(long *)(lVar17 + 0x80) + 1;
    unaff_x21 = (long *)(**(code **)(*plVar16 + 0x10))(plVar16,0x850,0x10);
    if (unaff_x21 == (long *)0x0) {
      (**(code **)(*plVar16 + 0xb8))(plVar16);
      FUN_01d9037c(0);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    FUN_01d9037c();
    unaff_x21[0x104] = 0;
    *(undefined4 *)(unaff_x21 + 0x105) = 0;
    unaff_x21[9] = (long)&PTR_LAB_0424d840;
    unaff_x21[10] = (long)&PTR_LAB_0424d888;
    unaff_x21[0x24] = (long)&PTR_LAB_0424d8b0;
    unaff_x21[0x106] = 0;
    unaff_x21[0x107] = 0;
    unaff_x21[0x108] = 0;
    unaff_x21[0x109] = 0;
    *unaff_x21 = (long)&PTR_LAB_0424d770;
    unaff_x21[1] = (long)plVar16;
    unaff_x21[2] = (long)unaff_x21;
    unaff_x21[3] = 0x850;
    unaff_x21[4] = 0x10;
    *(long *)(lVar17 + 0x80) = *(long *)(lVar17 + 0x80) + -1;
    lVar17 = unaff_x21[0xb];
    if (*(undefined8 **)(lVar17 + 0x18) != (undefined8 *)0x0) {
      if (*(long *)(lVar17 + 0x10) == 0) {
        uVar10 = (**(code **)**(undefined8 **)(lVar17 + 0x18))();
        *(undefined8 *)(lVar17 + 0x10) = uVar10;
      }
      piVar1 = (int *)(lVar17 + 0xc);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      local_f0 = (undefined8 *)0x0;
      local_e8 = (long *)0x0;
      FUN_0095e898(&local_f0,lVar12 + 0x70);
      FUN_009ae04c(unaff_x21,&local_f0);
      if (local_f0 != (undefined8 *)0x0) {
        piVar1 = (int *)(local_f0 + 1);
        do {
          iVar8 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar8 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar8 + -1 != 0) goto LAB_017eb9f8;
        local_f0[2] = 0;
        unaff_x25 = local_f0;
        if ((*PTR_DAT_04379498 & 1) == 0) goto LAB_017ebd74;
        goto LAB_017eb9cc;
      }
      goto LAB_017eb9f8;
    }
    goto LAB_017ebdb0;
  }
LAB_017ebcac:
  *param_1 = 0;
  return;
}


