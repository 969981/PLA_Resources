/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00f94b00; name: FUN_00f94b00
 */


void FUN_00f94b00(undefined8 param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  long lVar8;
  byte *pbVar9;
  long lVar10;
  code *pcVar11;
  undefined8 uVar12;
  undefined1 *puVar13;
  undefined8 *puVar14;
  long *plVar15;
  undefined1 *puVar16;
  undefined1 auStack_48 [8];
  
  lVar8 = FUN_001511d0(param_1,1);
  lVar8 = *(long *)(lVar8 + ((ulong)(uint)-(int)lVar8 & 7));
  if ((*PTR_DAT_0437d928 != '\0') && (iVar7 = FUN_00155630(param_1,1,"class_cast"), iVar7 != 0)) {
    pcVar11 = (code *)FUN_001511d0(param_1,0xffffffff);
    uVar12 = FUN_00f946e4();
    lVar8 = (*pcVar11)(lVar8,uVar12);
    FUN_0014ff10(param_1,0xfffffffe);
  }
  pbVar9 = (byte *)FUN_00150da0(param_1,2,auStack_48);
  if (pbVar9 == (byte *)0x0) {
    if (((*PTR_DAT_0437a0d0 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_DAT_0437a0d0), iVar7 != 0)) {
      FUN_00100250(PTR_FUN_0437a0e0,PTR_DAT_0437a0d8,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437a0d0);
    }
    puVar16 = *(undefined1 **)PTR_DAT_0437a0d8;
    plVar15 = *(long **)(PTR_DAT_0437a0d8 + 0x18);
    if (plVar15 != (long *)0x0) {
      (**(code **)(*plVar15 + 0x18))(plVar15);
    }
  }
  else {
    bVar4 = *pbVar9;
    puVar16 = &DAT_cbf29ce484222645;
    if (bVar4 == 0) {
      plVar15 = (long *)0x0;
    }
    else {
      plVar15 = (long *)0x0;
      do {
        pbVar9 = pbVar9 + 1;
        puVar16 = (undefined1 *)(((ulong)puVar16 ^ (ulong)bVar4) * 0x100000001b3);
        bVar4 = *pbVar9;
      } while (bVar4 != 0);
    }
  }
  lVar10 = nn::os::GetCurrentThread();
  plVar1 = (long *)(lVar8 + 0x3a0);
  do {
    if (*plVar1 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(lVar8 + 0x394));
        while (*plVar1 == 0) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar6) {
            *plVar1 = lVar10;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') goto LAB_00f94bc0;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = lVar10;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB_00f94bc0:
  puVar2 = *(undefined8 **)(lVar8 + 0x118);
  puVar3 = *(undefined8 **)(lVar8 + 0x120);
  puVar14 = puVar2;
  if (puVar2 != puVar3) {
    puVar13 = (undefined1 *)*puVar2;
    while (puVar13 != puVar16) {
      puVar14 = puVar14 + 0xb;
      if (puVar3 == puVar14) goto LAB_00f94c7c;
      puVar13 = (undefined1 *)*puVar14;
    }
  }
  if (puVar3 == puVar14) {
LAB_00f94c7c:
    bVar6 = false;
    iVar7 = 0;
  }
  else {
    iVar7 = (int)((ulong)((long)puVar14 - (long)puVar2) >> 3) * -0x45d1745d;
    bVar6 = true;
  }
  *(undefined8 *)(lVar8 + 0x3a0) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar8 + 0x394));
  if (plVar15 != (long *)0x0) {
    (**(code **)(*plVar15 + 0x20))(plVar15);
  }
  FUN_0014ff10(param_1,0);
  if (!bVar6) {
    iVar7 = -1;
  }
  FUN_001514d0(param_1,iVar7);
  return;
}


