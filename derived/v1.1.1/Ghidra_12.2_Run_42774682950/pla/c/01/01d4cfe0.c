/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01d4cfe0; name: FUN_01d4cfe0
 */


void FUN_01d4cfe0(undefined8 *param_1,long param_2,int *param_3)

{
  uint *puVar1;
  undefined8 uVar2;
  long *plVar3;
  byte bVar4;
  undefined *puVar5;
  int iVar6;
  size_t sVar7;
  ulong uVar8;
  byte *pbVar9;
  byte *pbVar10;
  undefined1 *puVar11;
  long lVar12;
  
  if (*(char *)(*(long *)(param_2 + 0x820) + 0x1d0) == '\0') {
    if ((*(ushort *)((long)param_3 - (long)*param_3) < 0xb) ||
       (uVar8 = (ulong)((ushort *)((long)param_3 - (long)*param_3))[5], uVar8 == 0)) {
      lVar12 = 0;
    }
    else {
      puVar1 = (uint *)((long)param_3 + uVar8);
      lVar12 = (long)puVar1 + (ulong)*puVar1;
    }
    puVar11 = &DAT_cbf29ce484222645;
    sVar7 = strlen((char *)(lVar12 + 4));
    bVar4 = *(byte *)(lVar12 + 4);
    if (bVar4 != 0) {
      pbVar10 = (byte *)(lVar12 + 5);
      do {
        puVar11 = (undefined1 *)(((ulong)puVar11 ^ (ulong)bVar4) * 0x100000001b3);
        bVar4 = *pbVar10;
        pbVar10 = pbVar10 + 1;
      } while (bVar4 != 0);
    }
    *param_1 = puVar11;
    param_1[1] = (char *)(lVar12 + 4);
  }
  else {
    pbVar10 = *(byte **)(*(long *)(param_2 + 0x820) + 0x150);
    if (pbVar10 == (byte *)0x0) {
      if (((*PTR_DAT_0437a0d0 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_0437a0d0), iVar6 != 0)) {
        FUN_00100250(PTR_FUN_0437a0e0,PTR_DAT_0437a0d8,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_0437a0d0);
      }
      puVar5 = PTR_DAT_0437a0d8;
      uVar2 = *(undefined8 *)(PTR_DAT_0437a0d8 + 8);
      *param_1 = *(undefined8 *)PTR_DAT_0437a0d8;
      param_1[1] = uVar2;
      plVar3 = *(long **)(puVar5 + 0x18);
      param_1[2] = *(undefined8 *)(puVar5 + 0x10);
      param_1[3] = plVar3;
      if (plVar3 == (long *)0x0) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x01d4d0cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x18))();
      return;
    }
    puVar11 = &DAT_cbf29ce484222645;
    sVar7 = strlen((char *)pbVar10);
    bVar4 = *pbVar10;
    pbVar9 = pbVar10;
    while (bVar4 != 0) {
      pbVar9 = pbVar9 + 1;
      puVar11 = (undefined1 *)(((ulong)puVar11 ^ (ulong)bVar4) * 0x100000001b3);
      bVar4 = *pbVar9;
    }
    *param_1 = puVar11;
    param_1[1] = pbVar10;
  }
  param_1[2] = sVar7;
  param_1[3] = 0;
  return;
}


