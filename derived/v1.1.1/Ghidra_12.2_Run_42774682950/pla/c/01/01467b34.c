/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01467b34; name: FUN_01467b34
 */


long FUN_01467b34(long param_1,byte *param_2)

{
  undefined8 uVar1;
  byte bVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  long *plVar8;
  undefined8 *puVar9;
  size_t sVar10;
  undefined8 uVar11;
  byte *pbVar12;
  long *plVar13;
  long lVar14;
  undefined1 *puVar15;
  undefined1 *local_70;
  byte *pbStack_68;
  size_t local_60;
  long *plStack_58;
  
  if (param_2 == (byte *)0x0) {
    if (((*PTR_DAT_0437a0d0 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_DAT_0437a0d0), iVar7 != 0)) {
      FUN_00100250(PTR_FUN_0437a0e0,PTR_DAT_0437a0d8,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437a0d0);
    }
    puVar15 = *(undefined1 **)PTR_DAT_0437a0d8;
    param_2 = *(byte **)(PTR_DAT_0437a0d8 + 8);
    sVar10 = *(size_t *)(PTR_DAT_0437a0d8 + 0x10);
    plVar13 = *(long **)(PTR_DAT_0437a0d8 + 0x18);
    if (plVar13 != (long *)0x0) {
      (**(code **)(*plVar13 + 0x18))(plVar13);
    }
  }
  else {
    puVar15 = &DAT_cbf29ce484222645;
    sVar10 = strlen((char *)param_2);
    bVar2 = *param_2;
    pbVar12 = param_2;
    while (bVar2 != 0) {
      pbVar12 = pbVar12 + 1;
      puVar15 = (undefined1 *)(((ulong)puVar15 ^ (ulong)bVar2) * 0x100000001b3);
      bVar2 = *pbVar12;
    }
    plVar13 = (long *)0x0;
  }
  uVar11 = *(undefined8 *)(param_1 + 0x70);
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  local_70 = puVar15;
  pbStack_68 = param_2;
  local_60 = sVar10;
  plStack_58 = plVar13;
  if (plVar13 == (long *)0x0) {
    plVar8 = (long *)FUN_0146fdb0(uVar11,uVar1,&local_70);
  }
  else {
    (**(code **)(*plVar13 + 0x18))(plVar13);
    plVar8 = (long *)FUN_0146fdb0(uVar11,uVar1,&local_70);
    (**(code **)(*plVar13 + 0x20))(plVar13);
  }
  if ((*(long **)(param_1 + 0x78) != plVar8) && (lVar14 = *plVar8, lVar14 != 0)) {
    puVar9 = (undefined8 *)
             (*(code *)**(undefined8 **)(lVar14 + 0x50))((undefined8 *)(lVar14 + 0x50));
    puVar6 = PTR_DAT_0437f568;
    if (((*PTR_DAT_0437f560 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_DAT_0437f560), puVar5 = PTR_DAT_0437b330, iVar7 != 0)) {
      if (((*PTR_DAT_0437b328 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_0437b328), puVar4 = PTR_DAT_043794d8, iVar7 != 0)) {
        if (((*PTR_DAT_043794d0 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar7 != 0)) {
          uVar11 = FUN_0087f8f0();
          *(undefined8 *)puVar4 = uVar11;
          __cxa_guard_release(PTR_DAT_043794d0);
        }
        *(undefined **)puVar5 = puVar4;
        __cxa_guard_release(PTR_DAT_0437b328);
      }
      *(undefined **)puVar6 = puVar5;
      __cxa_guard_release(PTR_DAT_0437f560);
    }
    if (puVar9 != (undefined8 *)0x0) {
      do {
        lVar3 = lVar14;
        if (puVar9 == (undefined8 *)puVar6) break;
        puVar9 = (undefined8 *)*puVar9;
        lVar3 = 0;
      } while (puVar9 != (undefined8 *)0x0);
      goto joined_r0x01467cec;
    }
  }
  lVar3 = 0;
joined_r0x01467cec:
  if (plVar13 != (long *)0x0) {
    (**(code **)(*plVar13 + 0x20))(plVar13);
  }
  return lVar3;
}


