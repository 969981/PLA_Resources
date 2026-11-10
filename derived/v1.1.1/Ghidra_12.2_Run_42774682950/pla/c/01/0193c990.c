/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0193c990; name: FUN_0193c990
 */


undefined8 FUN_0193c990(long param_1)

{
  long *plVar1;
  uint *puVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  ulong *puVar9;
  int *piVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  
  lVar6 = nn::os::GetCurrentThread();
  plVar1 = (long *)(param_1 + 0x98);
  do {
    if (*plVar1 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x8c));
        while (*plVar1 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = lVar6;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_0193c9ec;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = lVar6;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_0193c9ec:
  lVar6 = *(long *)(param_1 + 0xe0) - *(long *)(param_1 + 0xd8);
  uVar7 = 0;
  if (lVar6 != 0) {
    if (((*PTR_DAT_04379678 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_04379678), iVar5 != 0)) {
      FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379678);
    }
    lVar8 = *(long *)PTR_DAT_04379680;
    *(long *)PTR_DAT_04379688 = lVar8;
    if (lVar6 == 8) {
      uVar13 = 0;
    }
    else {
      uVar11 = lVar6 >> 3;
      lVar6 = 0x3f;
      if ((0x7fffffffffffffffU >> (LZCOUNT(uVar11) & 0x3fU) & uVar11) != 0) {
        lVar6 = 0x40;
      }
      puVar9 = *(ulong **)(lVar8 + 0xd8);
      uVar12 = lVar6 - LZCOUNT(uVar11);
      uVar13 = uVar12 >> 6;
      if ((uVar12 & 0x3f) != 0) {
        uVar13 = uVar13 + 1;
      }
      if (uVar12 < uVar13) {
        uVar12 = 0;
      }
      else {
        uVar14 = 0;
        if (uVar13 != 0) {
          uVar14 = uVar12 / uVar13;
        }
        uVar12 = 0xffffffffffffffff >> (-uVar14 & 0x3f);
      }
      uVar14 = *puVar9;
      uVar15 = puVar9[1];
      do {
        uVar16 = uVar14 ^ uVar15;
        uVar13 = uVar14 + uVar15;
        uVar15 = uVar16 >> 0x1b | uVar16 << 0x25;
        uVar13 = uVar13 & uVar12;
        uVar14 = uVar16 ^ (uVar14 >> 0x28 | uVar14 << 0x18) ^ uVar16 << 0x10;
      } while (uVar11 <= uVar13);
      *puVar9 = uVar14;
      puVar9[1] = uVar15;
    }
    piVar10 = *(int **)(*(long *)(param_1 + 0xd8) + uVar13 * 8);
    if ((*(ushort *)((long)piVar10 - (long)*piVar10) < 0xb) ||
       (uVar13 = (ulong)((ushort *)((long)piVar10 - (long)*piVar10))[5], uVar13 == 0)) {
      lVar6 = 0;
    }
    else {
      puVar2 = (uint *)((long)piVar10 + uVar13);
      lVar6 = (long)puVar2 + (ulong)*puVar2;
    }
    uVar7 = FUN_01095da0(lVar6,*(undefined4 *)(param_1 + 0x1b0),*(undefined4 *)(param_1 + 0x1b4),0,0
                         ,param_1 + 0x110);
  }
  *(undefined8 *)(param_1 + 0x98) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x8c));
  return uVar7;
}


