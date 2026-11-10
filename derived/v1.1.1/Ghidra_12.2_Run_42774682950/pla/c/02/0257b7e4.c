/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0257b7e4; name: FUN_0257b7e4
 */


undefined8 FUN_0257b7e4(long param_1,byte *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  byte bVar3;
  undefined8 *puVar4;
  int iVar5;
  undefined8 *puVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  undefined8 uVar10;
  undefined1 *puVar11;
  undefined8 *puVar12;
  
  if (param_2 == (byte *)0x0) {
    if (((*PTR_DAT_0437a0d0 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_0437a0d0), iVar5 != 0)) {
      FUN_00100250(PTR_FUN_0437a0e0,PTR_DAT_0437a0d8,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437a0d0);
    }
    puVar11 = *(undefined1 **)PTR_DAT_0437a0d8;
    plVar8 = *(long **)(PTR_DAT_0437a0d8 + 0x18);
    if (plVar8 != (long *)0x0) {
      (**(code **)(*plVar8 + 0x18))(plVar8);
    }
  }
  else {
    bVar3 = *param_2;
    puVar11 = &DAT_cbf29ce484222645;
    if (bVar3 == 0) {
      plVar8 = (long *)0x0;
    }
    else {
      plVar8 = (long *)0x0;
      do {
        param_2 = param_2 + 1;
        puVar11 = (undefined1 *)(((ulong)puVar11 ^ (ulong)bVar3) * 0x100000001b3);
        bVar3 = *param_2;
      } while (bVar3 != 0);
    }
  }
  lVar9 = *(long *)(param_1 + 0x148);
  puVar12 = *(undefined8 **)(lVar9 + 0x148);
  lVar2 = *(long *)(lVar9 + 0x150);
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x18))(plVar8);
  }
  puVar4 = puVar12;
  if ((lVar2 != 0) && ((undefined1 *)*puVar12 != puVar11)) {
    lVar7 = lVar2 * 0x30;
    puVar6 = puVar12 + lVar2 * 6;
    do {
      lVar7 = lVar7 + -0x30;
      puVar4 = puVar6;
      if (lVar7 == 0) break;
      puVar1 = puVar12 + 6;
      puVar12 = puVar12 + 6;
      puVar4 = puVar12;
    } while ((undefined1 *)*puVar1 != puVar11);
  }
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x20))(plVar8);
  }
  if (puVar4 == (undefined8 *)(*(long *)(lVar9 + 0x148) + *(long *)(lVar9 + 0x150) * 0x30)) {
    uVar10 = 0;
  }
  else {
    uVar10 = puVar4[4];
  }
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x20))(plVar8);
  }
  return uVar10;
}


