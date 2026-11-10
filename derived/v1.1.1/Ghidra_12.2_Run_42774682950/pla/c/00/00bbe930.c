/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00bbe930; name: FUN_00bbe930
 */


void FUN_00bbe930(undefined8 *param_1,long param_2,undefined8 *param_3)

{
  uint *puVar1;
  undefined8 *puVar2;
  byte bVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  byte *pbVar7;
  int *piVar8;
  undefined1 *puVar9;
  ulong uVar10;
  byte *pbVar11;
  long lVar12;
  long *plVar13;
  undefined1 *puVar14;
  
  puVar6 = *(undefined8 **)(param_2 + 0xd8);
  puVar2 = *(undefined8 **)(param_2 + 0xe0);
  puVar5 = puVar6;
  if (puVar6 != puVar2) {
    pbVar7 = PTR_DAT_0437a0d0;
    do {
      puVar9 = &DAT_cbf29ce484222645;
      piVar8 = (int *)puVar5[1];
      if ((piVar8 == (int *)0x0) && (piVar8 = (int *)*puVar5, piVar8 == (int *)0x0)) {
        if (((*pbVar7 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_0437a0d0), iVar4 != 0)) {
          FUN_00100250(PTR_FUN_0437a0e0,PTR_DAT_0437a0d8,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_0437a0d0);
        }
        puVar9 = *(undefined1 **)PTR_DAT_0437a0d8;
        plVar13 = *(long **)(PTR_DAT_0437a0d8 + 0x18);
        pbVar7 = PTR_DAT_0437a0d0;
        if (plVar13 == (long *)0x0) goto LAB_00bbe9d0;
        (**(code **)(*plVar13 + 0x18))(plVar13);
        puVar14 = (undefined1 *)*param_3;
        (**(code **)(*plVar13 + 0x20))(plVar13);
        pbVar7 = PTR_DAT_0437a0d0;
        if (puVar9 == puVar14) goto LAB_00bbe9ec;
      }
      else {
        if ((*(ushort *)((long)piVar8 - (long)*piVar8) < 5) ||
           (uVar10 = (ulong)((ushort *)((long)piVar8 - (long)*piVar8))[2], uVar10 == 0)) {
          lVar12 = 0;
        }
        else {
          puVar1 = (uint *)((long)piVar8 + uVar10);
          lVar12 = (long)puVar1 + (ulong)*puVar1;
        }
        bVar3 = *(byte *)(lVar12 + 4);
        if (bVar3 != 0) {
          pbVar11 = (byte *)(lVar12 + 5);
          do {
            puVar9 = (undefined1 *)(((ulong)puVar9 ^ (ulong)bVar3) * 0x100000001b3);
            bVar3 = *pbVar11;
            pbVar11 = pbVar11 + 1;
          } while (bVar3 != 0);
        }
LAB_00bbe9d0:
        if (puVar9 == (undefined1 *)*param_3) goto LAB_00bbe9ec;
      }
      puVar5 = puVar5 + 2;
    } while (puVar5 != puVar2);
    puVar5 = puVar2;
LAB_00bbe9ec:
    puVar6 = *(undefined8 **)(param_2 + 0xe0);
  }
  puVar2 = (undefined8 *)0x0;
  if (puVar6 != puVar5) {
    puVar2 = puVar5;
  }
  *param_1 = puVar2;
  return;
}


