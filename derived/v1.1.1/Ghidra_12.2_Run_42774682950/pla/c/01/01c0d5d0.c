/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01c0d5d0; name: FUN_01c0d5d0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01c0d5d0(long param_1,uint param_2,int param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  uint uVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  bool bVar14;
  int local_d4;
  undefined8 *local_d0;
  
  puVar5 = PTR_DAT_0437a6e0;
  puVar4 = PTR_DAT_0437a6d8;
  plVar11 = *(long **)(param_1 + 0x3c8);
  do {
    while( true ) {
      if (plVar11 == (long *)0x0) {
        plVar11 = *(long **)(param_1 + 8);
        if (((*PTR_DAT_04379520 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_DAT_04379520), puVar4 = PTR_DAT_04379528, iVar6 != 0)) {
          FUN_008a62a4(PTR_DAT_04379528);
          FUN_00100250(PTR_LAB_04379530,puVar4,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379520);
        }
        lVar7 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
        if (0xf < *(ulong *)(lVar7 + 0x80)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(long **)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = plVar11;
        *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
        puVar8 = (undefined8 *)(**(code **)(*plVar11 + 0x10))(plVar11,0xe0,0x10);
        if (puVar8 == (undefined8 *)0x0) {
          (**(code **)(*plVar11 + 0xb8))(plVar11);
          _DAT_000000d8 = 0;
          _DAT_000000d0 = 0;
          _DAT_000000c8 = 0;
          _DAT_000000c0 = 0;
          _DAT_000000b8 = 0;
          _DAT_000000b0 = 0;
          _DAT_000000a8 = 0;
          _DAT_000000a0 = 0;
          _DAT_00000098 = 0;
          _DAT_00000090 = 0;
          _DAT_00000088 = 0;
          _DAT_00000080 = 0;
          _DAT_00000078 = 0;
          _DAT_00000070 = 0;
          _DAT_00000068 = 0;
          _DAT_00000060 = 0;
          _DAT_00000058 = 0;
          _DAT_00000050 = 0;
          _DAT_00000048 = 0;
          _DAT_00000040 = 0;
          _DAT_00000038 = 0;
          _DAT_00000030 = 0;
          _DAT_00000028 = 0;
          _DAT_00000020 = 0;
          _DAT_00000018 = 0;
          uRam0000000000000000 = 0;
          _DAT_00000010 = 0;
          _DAT_00000008 = 0;
                    /* WARNING: Subroutine does not return */
          FUN_008a93d8();
        }
        puVar8[0x19] = 0;
        puVar8[0x13] = 0;
        puVar8[0x1a] = 0;
        puVar8[0x1b] = 0;
        puVar8[0x16] = 0;
        puVar8[0x17] = 0;
        puVar8[0x14] = 0;
        puVar8[0x15] = 0;
        puVar8[0x10] = 0;
        puVar8[0x11] = 0;
        puVar8[0xe] = 0;
        puVar8[0xf] = 0;
        puVar8[0xc] = 0;
        puVar8[0xd] = 0;
        puVar8[10] = 0;
        puVar8[0xb] = 0;
        puVar8[8] = 0;
        puVar8[9] = 0;
        puVar8[6] = 0;
        puVar8[7] = 0;
        puVar8[4] = 0;
        puVar8[5] = 0;
        puVar8[2] = 0;
        puVar8[3] = 0;
        *puVar8 = 0;
        puVar8[1] = 0;
        puVar8[0x18] = 0;
        puVar8[0x12] = 0;
                    /* WARNING: Subroutine does not return */
        FUN_008a93d8();
      }
      if (*(uint *)(plVar11 + 2) == param_2) break;
      plVar11 = (long *)*plVar11;
    }
    plVar12 = (long *)plVar11[3];
    uVar10 = param_2;
    if (plVar12 != (long *)0x0) {
      lVar7 = plVar12[0xb];
      if (*(undefined8 **)(lVar7 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0);
      }
      if (*(long *)(lVar7 + 0x10) == 0) {
        uVar9 = (**(code **)**(undefined8 **)(lVar7 + 0x18))();
        *(undefined8 *)(lVar7 + 0x10) = uVar9;
      }
      piVar1 = (int *)(lVar7 + 0xc);
      do {
        cVar2 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar14) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      uVar10 = *(uint *)(plVar11 + 2);
    }
    lVar7 = *(long *)(param_1 + (ulong)uVar10 * 0x10 + 0x358);
    if ((((lVar7 == 0) || (*(int *)(lVar7 + 0xc) == 0)) ||
        (lVar7 = *(long *)(param_1 + (ulong)*(uint *)(plVar11 + 2) * 0x10 + 0x358), lVar7 == 0)) ||
       (*(int *)(lVar7 + 0xc) == 0)) {
LAB_01c0dc3c:
      plVar13 = (long *)0x0;
      bVar14 = true;
    }
    else {
      piVar1 = (int *)(lVar7 + 0xc);
      local_d4 = *(int *)(lVar7 + 0xc);
      do {
        local_d0 = *(undefined8 **)(lVar7 + 0x10);
        if (((*puVar4 & 1) == 0) && (iVar6 = __cxa_guard_acquire(puVar4), iVar6 != 0)) {
          uVar9 = FUN_00ad3750();
          *(undefined8 *)puVar5 = uVar9;
          __cxa_guard_release(puVar4);
        }
        if (local_d0 == (undefined8 *)0x0) goto LAB_01c0dc3c;
        while (local_d0 != (undefined8 *)puVar5) {
          plVar13 = (long *)0x0;
          bVar14 = true;
          local_d0 = (undefined8 *)*local_d0;
          if (local_d0 == (undefined8 *)0x0) goto LAB_01c0dc44;
        }
        iVar6 = *piVar1;
        if (iVar6 == local_d4) {
          cVar2 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar14) {
            *piVar1 = local_d4 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            if (*(long *)(lVar7 + 0x18) == 0) goto LAB_01c0dc3c;
            plVar13 = (long *)(*(long *)(lVar7 + 0x18) + -0x50);
            if ((*(char *)((long)plVar12 + 0x6c) != '\0') && ((int)plVar12[0xd] == param_3)) {
              bVar3 = true;
              goto LAB_01c0e200;
            }
            bVar14 = false;
            break;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        plVar13 = (long *)0x0;
        bVar14 = true;
        local_d4 = iVar6;
      } while (iVar6 != 0);
    }
LAB_01c0dc44:
    FUN_02c90d40(plVar13);
    plVar11 = (long *)FUN_01c110e4(param_1 + 0x398,plVar11);
    bVar3 = false;
    if (!bVar14) {
LAB_01c0e200:
      lVar7 = plVar13[0xb];
      piVar1 = (int *)(lVar7 + 0xc);
      do {
        iVar6 = *piVar1;
        cVar2 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar14) {
          *piVar1 = iVar6 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar6 + -1 == 0) {
        *(undefined8 *)(lVar7 + 0x18) = 0;
        (**(code **)(*plVar13 + 0x20))(plVar13);
      }
    }
    if (plVar12 != (long *)0x0) {
      lVar7 = plVar12[0xb];
      piVar1 = (int *)(lVar7 + 0xc);
      do {
        iVar6 = *piVar1;
        cVar2 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar14) {
          *piVar1 = iVar6 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar6 + -1 == 0) {
        *(undefined8 *)(lVar7 + 0x18) = 0;
        (**(code **)(*plVar12 + 0x20))(plVar12);
      }
    }
    if (bVar3) {
      return;
    }
  } while( true );
}


