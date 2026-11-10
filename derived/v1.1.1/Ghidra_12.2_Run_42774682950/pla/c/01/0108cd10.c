/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0108cd10; name: FUN_0108cd10
 */


void FUN_0108cd10(undefined8 *param_1,char *param_2)

{
  undefined8 uVar1;
  long *plVar2;
  byte bVar3;
  undefined *puVar4;
  int iVar5;
  size_t sVar6;
  int *piVar7;
  ulong uVar8;
  ulong uVar9;
  byte *pbVar10;
  byte *pbVar11;
  undefined1 *puVar12;
  long lVar13;
  
  if (*param_2 != '\0') {
    piVar7 = *(int **)(param_2 + 0x18);
    if ((*(ushort *)((long)piVar7 - (long)*piVar7) < 0x31) ||
       (uVar8 = (ulong)((ushort *)((long)piVar7 - (long)*piVar7))[0x18], uVar8 == 0)) {
LAB_0108cdfc:
      if (((*PTR_DAT_0437a0d0 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_0437a0d0), iVar5 != 0)) {
        FUN_00100250(PTR_FUN_0437a0e0,PTR_DAT_0437a0d8,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_0437a0d0);
      }
      puVar4 = PTR_DAT_0437a0d8;
      uVar1 = *(undefined8 *)(PTR_DAT_0437a0d8 + 8);
      *param_1 = *(undefined8 *)PTR_DAT_0437a0d8;
      param_1[1] = uVar1;
      plVar2 = *(long **)(puVar4 + 0x18);
      param_1[2] = *(undefined8 *)(puVar4 + 0x10);
      param_1[3] = plVar2;
      if (plVar2 == (long *)0x0) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x0108ce40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x18))();
      return;
    }
    uVar9 = (ulong)*(uint *)((long)piVar7 + uVar8);
    lVar13 = (long)((long)piVar7 + uVar8) + uVar9;
    pbVar10 = (byte *)(lVar13 + 4);
    if (lVar13 == 0) goto LAB_0108cdfc;
    puVar12 = &DAT_cbf29ce484222645;
    sVar6 = strlen((char *)pbVar10);
    bVar3 = *pbVar10;
    if (bVar3 != 0) {
      pbVar11 = (byte *)((long)piVar7 + uVar9 + uVar8 + 5);
      do {
        puVar12 = (undefined1 *)(((ulong)puVar12 ^ (ulong)bVar3) * 0x100000001b3);
        bVar3 = *pbVar11;
        pbVar11 = pbVar11 + 1;
      } while (bVar3 != 0);
    }
    *param_1 = puVar12;
    param_1[1] = pbVar10;
    goto LAB_0108cdac;
  }
  piVar7 = *(int **)(param_2 + 0x10);
  if (piVar7 == (int *)0x0) {
    piVar7 = *(int **)(param_2 + 8);
    if ((0x34 < *(ushort *)((long)piVar7 - (long)*piVar7)) &&
       (uVar8 = (ulong)((ushort *)((long)piVar7 - (long)*piVar7))[0x1a], uVar8 != 0))
    goto LAB_0108cd58;
LAB_0108ce60:
    lVar13 = 0;
  }
  else {
    if ((*(ushort *)((long)piVar7 - (long)*piVar7) < 0x35) ||
       (uVar8 = (ulong)((ushort *)((long)piVar7 - (long)*piVar7))[0x1a], uVar8 == 0))
    goto LAB_0108ce60;
LAB_0108cd58:
    lVar13 = (long)((long)piVar7 + uVar8) + (ulong)*(uint *)((long)piVar7 + uVar8);
  }
  puVar12 = &DAT_cbf29ce484222645;
  sVar6 = strlen((char *)(lVar13 + 4));
  bVar3 = *(byte *)(lVar13 + 4);
  if (bVar3 != 0) {
    pbVar10 = (byte *)(lVar13 + 5);
    do {
      puVar12 = (undefined1 *)(((ulong)puVar12 ^ (ulong)bVar3) * 0x100000001b3);
      bVar3 = *pbVar10;
      pbVar10 = pbVar10 + 1;
    } while (bVar3 != 0);
  }
  *param_1 = puVar12;
  param_1[1] = (char *)(lVar13 + 4);
LAB_0108cdac:
  param_1[2] = sVar6;
  param_1[3] = 0;
  return;
}


