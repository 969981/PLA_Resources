/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028f9830; name: FUN_028f9830
 */


/* WARNING: Removing unreachable block (ram,0x028f9958) */

void FUN_028f9830(long param_1,long param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  short sVar7;
  int iVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  undefined *puVar13;
  
  if ((int)((ulong)(*(long *)(param_1 + 0x18) - *(long *)(param_1 + 0x10)) >> 6) == 0) {
    if (((*PTR_DAT_0437a570 & 1) == 0) &&
       (iVar8 = __cxa_guard_acquire(PTR_DAT_0437a570), iVar8 != 0)) {
      FUN_00100250(PTR_LAB_0437a728,PTR_DAT_0437a578,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437a570);
    }
    plVar2 = (long *)PTR_DAT_0437a578;
    if (*(long *)(param_2 + 200) != 0) {
      plVar2 = (long *)(*(long *)(param_2 + 200) + 0x88);
    }
    lVar10 = *plVar2;
    if (lVar10 != 0) {
      uVar12 = (ulong)(param_3[1] - *param_3) >> 5;
      uVar11 = uVar12 & 0xffffffff;
      iVar8 = (int)uVar12;
      if (iVar8 == 0) {
        uVar11 = (ulong)(uint)(int)(short)((short)((uint)(*(int *)(lVar10 + 0x278) -
                                                         *(int *)(lVar10 + 0x270)) >> 4) * -0x5555);
      }
      uVar12 = *(long *)(param_1 + 0x18) - *(long *)(param_1 + 0x10) >> 6;
      if (uVar12 < uVar11) {
        FUN_028fb8d0((long *)(param_1 + 0x10),uVar11 - uVar12);
      }
      else if (uVar12 != uVar11) {
        *(ulong *)(param_1 + 0x18) = *(long *)(param_1 + 0x10) + uVar11 * 0x40;
      }
      plVar1 = (long *)(param_1 + 0x88);
      FUN_01bb86a0(plVar1,uVar11);
      puVar6 = PTR_DAT_0437a0d8;
      puVar5 = PTR_DAT_0437a0d0;
      if (iVar8 == 0) {
        if ((int)uVar11 != 0) {
          uVar12 = 0;
          do {
            lVar10 = *plVar2;
            uVar9 = FUN_02b68dac(lVar10,uVar12 & 0xffffffff);
            puVar4 = *(undefined8 **)(lVar10 + 0x60);
            for (puVar3 = *(undefined8 **)(lVar10 + 0x58); puVar3 != puVar4; puVar3 = puVar3 + 2) {
              sVar7 = FUN_02b6f370(*puVar3,uVar9);
              if (-1 < sVar7) {
                sVar7 = *(short *)((long)puVar3 + 10) + sVar7;
                goto LAB_028f9a28;
              }
            }
            sVar7 = -1;
LAB_028f9a28:
            *(int *)(*plVar1 + uVar12 * 4) = (int)sVar7;
            uVar12 = uVar12 + 1;
          } while (uVar12 != uVar11);
        }
      }
      else if ((int)uVar11 != 0) {
        uVar12 = 0;
        lVar10 = *plVar2;
        do {
          if ((ulong)(param_3[1] - *param_3 >> 5) <= (ulong)(long)(int)uVar12) break;
          puVar13 = (undefined *)(*param_3 + (long)(int)uVar12 * 0x20);
LAB_028f99a8:
          puVar4 = *(undefined8 **)(lVar10 + 0x60);
          for (puVar3 = *(undefined8 **)(lVar10 + 0x58); puVar3 != puVar4; puVar3 = puVar3 + 2) {
            sVar7 = FUN_02b6f370(*puVar3,puVar13);
            if (-1 < sVar7) {
              sVar7 = *(short *)((long)puVar3 + 10) + sVar7;
              goto LAB_028f9960;
            }
          }
          sVar7 = -1;
LAB_028f9960:
          *(int *)(*plVar1 + uVar12 * 4) = (int)sVar7;
          uVar12 = uVar12 + 1;
          if (uVar12 == uVar11) {
            return;
          }
          lVar10 = *plVar2;
        } while (-1 < (int)uVar12);
        puVar13 = puVar6;
        if (((*puVar5 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar5), iVar8 != 0)) {
          FUN_00100250(PTR_FUN_0437a0e0,puVar6,&PTR_LOOP_0411a000);
          __cxa_guard_release(puVar5);
        }
        goto LAB_028f99a8;
      }
    }
  }
  return;
}


