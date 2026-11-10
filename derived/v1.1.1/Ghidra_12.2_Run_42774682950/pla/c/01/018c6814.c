/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 018c6814; name: FUN_018c6814
 */


void FUN_018c6814(undefined8 *param_1,long param_2,undefined1 *param_3,uint param_4)

{
  char *__s;
  undefined8 uVar1;
  byte bVar2;
  ulong uVar3;
  undefined *puVar4;
  int iVar5;
  size_t sVar6;
  undefined1 *puVar7;
  int *piVar8;
  uint *puVar9;
  ulong uVar10;
  undefined1 *puVar11;
  byte *pbVar12;
  long *plVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  uint *puVar16;
  
  puVar15 = &DAT_cbf29ce484222645;
  if ((param_3 != &DAT_cbf29ce484222645) &&
     (puVar7 = *(undefined1 **)(param_2 + 0xa0), puVar7 != (undefined1 *)0x0)) {
    uVar10 = (long)puVar7 - ((ulong)puVar7 >> 1 & 0x5555555555555555);
    uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333);
    uVar10 = (uVar10 + (uVar10 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar10 < 2) {
      puVar11 = (undefined1 *)((ulong)(puVar7 + -1) & (ulong)param_3);
    }
    else {
      puVar11 = param_3;
      if (puVar7 <= param_3) {
        uVar3 = 0;
        if (puVar7 != (undefined1 *)0x0) {
          uVar3 = (ulong)param_3 / (ulong)puVar7;
        }
        puVar11 = param_3 + -(uVar3 * (long)puVar7);
      }
    }
    plVar13 = *(long **)(*(long *)(param_2 + 0x98) + (long)puVar11 * 8);
    if ((plVar13 != (long *)0x0) && (plVar13 = (long *)*plVar13, plVar13 != (long *)0x0)) {
      if (uVar10 < 2) {
        do {
          if ((undefined1 *)plVar13[1] == param_3) {
            if ((undefined1 *)plVar13[2] == param_3) goto LAB_018c69a4;
          }
          else if ((undefined1 *)((ulong)plVar13[1] & (ulong)(puVar7 + -1)) != puVar11) break;
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
      else {
        do {
          puVar14 = (undefined1 *)plVar13[1];
          if (puVar14 == param_3) {
            if ((undefined1 *)plVar13[2] == param_3) goto LAB_018c69a4;
          }
          else {
            if (puVar7 <= puVar14) {
              uVar10 = 0;
              if (puVar7 != (undefined1 *)0x0) {
                uVar10 = (ulong)puVar14 / (ulong)puVar7;
              }
              puVar14 = puVar14 + -(uVar10 * (long)puVar7);
            }
            if (puVar14 != puVar11) break;
          }
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
    }
  }
LAB_018c6848:
  if (((*PTR_DAT_0437a0d0 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_0437a0d0), iVar5 != 0))
  {
    FUN_00100250(PTR_FUN_0437a0e0,PTR_DAT_0437a0d8,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437a0d0);
  }
  puVar4 = PTR_DAT_0437a0d8;
  uVar1 = *(undefined8 *)(PTR_DAT_0437a0d8 + 8);
  *param_1 = *(undefined8 *)PTR_DAT_0437a0d8;
  param_1[1] = uVar1;
  plVar13 = *(long **)(puVar4 + 0x18);
  param_1[2] = *(undefined8 *)(puVar4 + 0x10);
  param_1[3] = plVar13;
  if (plVar13 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x018c695c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar13 + 0x18))();
  return;
LAB_018c69a4:
  piVar8 = (int *)plVar13[3];
  if ((*(ushort *)((long)piVar8 - (long)*piVar8) < 0xb) ||
     (uVar10 = (ulong)((ushort *)((long)piVar8 - (long)*piVar8))[5], uVar10 == 0)) {
    puVar16 = (uint *)0x0;
  }
  else {
    puVar16 = (uint *)((long)piVar8 + uVar10);
    puVar16 = (uint *)((long)puVar16 + (ulong)*puVar16);
  }
  if (param_4 < *puVar16) {
    puVar9 = puVar16 + (ulong)param_4 + 1;
    uVar10 = (ulong)*puVar9;
    __s = (char *)((long)puVar9 + uVar10 + 4);
    sVar6 = strlen(__s);
    bVar2 = *(byte *)((long)puVar9 + uVar10 + 4);
    if (bVar2 != 0) {
      pbVar12 = (byte *)((long)puVar16 + uVar10 + (ulong)param_4 * 4 + 9);
      do {
        puVar15 = (undefined1 *)(((ulong)puVar15 ^ (ulong)bVar2) * 0x100000001b3);
        bVar2 = *pbVar12;
        pbVar12 = pbVar12 + 1;
      } while (bVar2 != 0);
    }
    *param_1 = puVar15;
    param_1[1] = __s;
    param_1[2] = sVar6;
    param_1[3] = 0;
    return;
  }
  goto LAB_018c6848;
}


