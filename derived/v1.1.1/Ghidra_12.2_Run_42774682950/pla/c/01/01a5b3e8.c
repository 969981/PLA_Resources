/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a5b3e8; name: FUN_01a5b3e8
 */


void FUN_01a5b3e8(long param_1)

{
  int *piVar1;
  long *plVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  long *plVar7;
  int iVar8;
  undefined8 uVar9;
  long lVar10;
  long *plVar11;
  ulong uVar12;
  uint uVar13;
  ulong uVar14;
  long lVar15;
  undefined4 local_68;
  uint uStack_64;
  long *local_58;
  undefined8 local_48;
  
  FUN_01a4fa84(&local_68);
  FUN_01a4ff90(&local_58,&local_68);
  puVar6 = (undefined8 *)CONCAT44(uStack_64,local_68);
  if (puVar6 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar6 + 1);
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
      puVar6[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar10 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar10;
      local_48 = *puVar6;
      FUN_02a44274(lVar10 + 0xd8,&local_48);
    }
  }
  if (local_58 == (long *)0x0) {
    return;
  }
  if ((int)((ulong)(local_58[0x16] - local_58[0x15]) >> 3) * -0x45d1745d != 0) {
    uVar13 = 0;
    do {
      local_68 = CONCAT31(local_68._1_3_,1);
      uStack_64 = uVar13;
      uVar9 = FUN_028aaeb0(local_58,local_58 + 0x15,&local_68);
      local_48 = CONCAT44(uVar13,(undefined4)local_48);
      local_48 = CONCAT71(local_48._1_7_,1);
      FUN_01a5b8a0(param_1 + 0x6c8,uVar9,&local_48);
      uVar13 = uVar13 + 1;
    } while (uVar13 < (uint)((int)((ulong)(local_58[0x16] - local_58[0x15]) >> 3) * -0x45d1745d));
  }
  if ((int)((ulong)(local_58[0x1d] - local_58[0x1c]) >> 3) * -0x45d1745d != 0) {
    uVar13 = 0;
    do {
      local_68 = CONCAT31(local_68._1_3_,1);
      uStack_64 = uVar13;
      uVar9 = FUN_028aaeb0(local_58,local_58 + 0x1c,&local_68);
      local_48 = CONCAT44(uVar13,(undefined4)local_48);
      local_48 = CONCAT71(local_48._1_7_,1);
      FUN_01a5b8a0(param_1 + 0x730,uVar9,&local_48);
      uVar13 = uVar13 + 1;
    } while (uVar13 < (uint)((int)((ulong)(local_58[0x1d] - local_58[0x1c]) >> 3) * -0x45d1745d));
  }
  if ((int)((ulong)(local_58[0x24] - local_58[0x23]) >> 3) * -0x45d1745d != 0) {
    uVar13 = 0;
    do {
      local_68 = CONCAT31(local_68._1_3_,1);
      uStack_64 = uVar13;
      uVar9 = FUN_028aaeb0(local_58,local_58 + 0x23,&local_68);
      local_48 = CONCAT44(uVar13,(undefined4)local_48);
      local_48 = CONCAT71(local_48._1_7_,1);
      FUN_01a5b8a0(param_1 + 0x798,uVar9,&local_48);
      uVar13 = uVar13 + 1;
    } while (uVar13 < (uint)((int)((ulong)(local_58[0x24] - local_58[0x23]) >> 3) * -0x45d1745d));
  }
  if ((int)((ulong)(local_58[0x2b] - local_58[0x2a]) >> 3) * -0x45d1745d != 0) {
    uVar13 = 0;
    do {
      local_68 = CONCAT31(local_68._1_3_,1);
      uStack_64 = uVar13;
      uVar9 = FUN_028aaeb0(local_58,local_58 + 0x2a,&local_68);
      local_48 = CONCAT44(uVar13,(undefined4)local_48);
      local_48 = CONCAT71(local_48._1_7_,1);
      FUN_01a5b8a0(param_1 + 0x800,uVar9,&local_48);
      uVar13 = uVar13 + 1;
    } while (uVar13 < (uint)((int)((ulong)(local_58[0x2b] - local_58[0x2a]) >> 3) * -0x45d1745d));
  }
  plVar7 = local_58;
  lVar15 = *(long *)(param_1 + 0x418);
  lVar10 = nn::os::GetCurrentThread();
  plVar2 = plVar7 + 0x74;
  do {
    if (*plVar2 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)((long)plVar7 + 0x394));
        while (*plVar2 == 0) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar5) {
            *plVar2 = lVar10;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_01a5b698;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar5) {
      *plVar2 = lVar10;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_01a5b698:
  plVar2 = (long *)plVar7[0x1c];
  plVar3 = (long *)plVar7[0x1d];
  plVar11 = plVar2;
  if (plVar2 != plVar3) {
    lVar10 = *plVar2;
    while (lVar10 != lVar15) {
      plVar11 = plVar11 + 0xb;
      if (plVar3 == plVar11) goto LAB_01a5b80c;
      lVar10 = *plVar11;
    }
  }
  if (plVar3 == plVar11) {
LAB_01a5b80c:
    uVar12 = 0;
    uVar14 = 0;
  }
  else {
    uVar14 = (ulong)(uint)((int)((ulong)((long)plVar11 - (long)plVar2) >> 3) * -0x45d1745d) << 0x20;
    uVar12 = 1;
  }
  plVar7[0x74] = 0;
  nn::os::SignalLightEvent((LightEventType *)((long)plVar7 + 0x394));
  plVar7 = local_58;
  *(ulong *)(param_1 + 0x430) = uVar14 | uVar12;
  lVar15 = *(long *)(param_1 + 0x450);
  lVar10 = nn::os::GetCurrentThread();
  plVar2 = plVar7 + 0x74;
  do {
    if (*plVar2 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)((long)plVar7 + 0x394));
        while (*plVar2 == 0) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar5) {
            *plVar2 = lVar10;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_01a5b754;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar5) {
      *plVar2 = lVar10;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_01a5b754:
  plVar2 = (long *)plVar7[0x15];
  plVar3 = (long *)plVar7[0x16];
  plVar11 = plVar2;
  if (plVar2 != plVar3) {
    lVar10 = *plVar2;
    while (lVar10 != lVar15) {
      plVar11 = plVar11 + 0xb;
      if (plVar3 == plVar11) goto LAB_01a5b824;
      lVar10 = *plVar11;
    }
  }
  if (plVar3 == plVar11) {
LAB_01a5b824:
    uVar12 = 0;
    uVar14 = 0;
  }
  else {
    uVar14 = (ulong)(uint)((int)((ulong)((long)plVar11 - (long)plVar2) >> 3) * -0x45d1745d) << 0x20;
    uVar12 = 1;
  }
  plVar7[0x74] = 0;
  nn::os::SignalLightEvent((LightEventType *)((long)plVar7 + 0x394));
  *(ulong *)(param_1 + 0x4b0) = uVar14 | uVar12;
  if (local_58 != (long *)0x0) {
    lVar10 = local_58[0xb];
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
      (**(code **)(*local_58 + 0x20))();
    }
  }
  return;
}


