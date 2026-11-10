/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0166d290; name: FUN_0166d290
 */


void FUN_0166d290(long *param_1,undefined8 *param_2)

{
  uint *puVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  long *plVar6;
  size_t sVar7;
  int *piVar8;
  ulong uVar9;
  byte *pbVar10;
  byte *pbVar11;
  ulong uVar12;
  long lVar13;
  long *plVar14;
  undefined1 *puVar15;
  
  puVar4 = PTR_DAT_0437a0d8;
  puVar3 = PTR_DAT_0437a0d0;
  piVar8 = (int *)*param_2;
  if ((*(ushort *)((long)piVar8 - (long)*piVar8) < 5) ||
     (uVar9 = (ulong)((ushort *)((long)piVar8 - (long)*piVar8))[2], uVar9 == 0)) {
    piVar8 = (int *)0x0;
  }
  else {
    puVar1 = (uint *)((long)piVar8 + uVar9);
    piVar8 = (int *)((long)puVar1 + (ulong)*puVar1);
  }
  if ((*(ushort *)((long)piVar8 - (long)*piVar8) < 0xb) ||
     (uVar9 = (ulong)((ushort *)((long)piVar8 - (long)*piVar8))[5], uVar9 == 0)) {
LAB_0166d314:
    if (((*PTR_DAT_0437a0d0 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_0437a0d0), iVar5 != 0)) {
      FUN_00100250(PTR_FUN_0437a0e0,PTR_DAT_0437a0d8,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437a0d0);
    }
    puVar15 = *(undefined1 **)puVar4;
    plVar14 = *(long **)(puVar4 + 0x18);
    if (plVar14 != (long *)0x0) {
      (**(code **)(*plVar14 + 0x18))(plVar14);
    }
  }
  else {
    uVar12 = (ulong)*(uint *)((long)piVar8 + uVar9);
    lVar13 = (long)((long)piVar8 + uVar9) + uVar12;
    if (lVar13 == 0) goto LAB_0166d314;
    bVar2 = *(byte *)(lVar13 + 4);
    puVar15 = &DAT_cbf29ce484222645;
    if (bVar2 == 0) {
      plVar14 = (long *)0x0;
    }
    else {
      plVar14 = (long *)0x0;
      pbVar10 = (byte *)((long)piVar8 + uVar12 + uVar9 + 5);
      do {
        puVar15 = (undefined1 *)(((ulong)puVar15 ^ (ulong)bVar2) * 0x100000001b3);
        bVar2 = *pbVar10;
        pbVar10 = pbVar10 + 1;
      } while (bVar2 != 0);
    }
  }
  *(bool *)(*param_1 + 1) = puVar15 == (undefined1 *)0x6061a832903745dc;
  if (plVar14 != (long *)0x0) {
    (**(code **)(*plVar14 + 0x20))(plVar14);
  }
  if ((0xc < *(ushort *)((long)piVar8 - (long)*piVar8)) &&
     (uVar9 = (ulong)((ushort *)((long)piVar8 - (long)*piVar8))[6], uVar9 != 0)) {
    uVar12 = (ulong)*(uint *)((long)piVar8 + uVar9);
    lVar13 = (long)((long)piVar8 + uVar9) + uVar12;
    pbVar10 = (byte *)(lVar13 + 4);
    if (lVar13 != 0) {
      puVar15 = &DAT_cbf29ce484222645;
      sVar7 = strlen((char *)pbVar10);
      bVar2 = *pbVar10;
      if (bVar2 != 0) {
        pbVar11 = (byte *)((long)piVar8 + uVar12 + uVar9 + 5);
        do {
          puVar15 = (undefined1 *)(((ulong)puVar15 ^ (ulong)bVar2) * 0x100000001b3);
          bVar2 = *pbVar11;
          pbVar11 = pbVar11 + 1;
        } while (bVar2 != 0);
      }
      plVar14 = (long *)0x0;
      goto LAB_0166d3a4;
    }
  }
  if (((*puVar3 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_0437a0d0), iVar5 != 0)) {
    FUN_00100250(PTR_FUN_0437a0e0,PTR_DAT_0437a0d8,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437a0d0);
  }
  puVar15 = *(undefined1 **)puVar4;
  pbVar10 = *(byte **)(puVar4 + 8);
  sVar7 = *(size_t *)(puVar4 + 0x10);
  plVar14 = *(long **)(puVar4 + 0x18);
  if (plVar14 != (long *)0x0) {
    (**(code **)(*plVar14 + 0x18))(plVar14);
  }
LAB_0166d3a4:
  lVar13 = *param_1;
  *(undefined1 **)(lVar13 + 8) = puVar15;
  *(byte **)(lVar13 + 0x10) = pbVar10;
  plVar6 = *(long **)(lVar13 + 0x20);
  *(size_t *)(lVar13 + 0x18) = sVar7;
  *(undefined8 *)(lVar13 + 0x20) = 0;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x20))();
  }
  *(long **)(lVar13 + 0x20) = plVar14;
  return;
}


