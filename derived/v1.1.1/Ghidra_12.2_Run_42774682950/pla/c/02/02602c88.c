/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02602c88; name: FUN_02602c88
 */


void FUN_02602c88(undefined8 *param_1,long param_2,long *param_3,long *param_4)

{
  int *piVar1;
  uint *puVar2;
  long lVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  uint *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  
  if (((*param_4 != 0) && (lVar6 = *(long *)(param_2 + 0x70), lVar6 != 0)) &&
     (*(char *)(lVar6 + 0x1e1) != '\0')) {
    piVar1 = (int *)((long)*(uint **)(lVar6 + 0x250) + (ulong)**(uint **)(lVar6 + 0x250));
    puVar2 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
    puVar2 = (uint *)((long)puVar2 + (ulong)*puVar2);
    uVar8 = (ulong)*puVar2;
    if (uVar8 == 0) {
      puVar7 = puVar2 + 1;
LAB_02602d50:
      if (puVar7 != puVar2 + 1 + uVar8) {
        plVar11 = *(long **)(param_2 + 8);
        if (((*PTR_DAT_04379520 & 1) == 0) &&
           (iVar5 = __cxa_guard_acquire(PTR_DAT_04379520), puVar4 = PTR_DAT_04379528, iVar5 != 0)) {
          FUN_008a62a4(PTR_DAT_04379528);
          FUN_00100250(PTR_LAB_04379530,puVar4,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379520);
        }
        lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
        if (0xf < *(ulong *)(lVar6 + 0x80)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = plVar11;
        *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
        lVar6 = (**(code **)(*plVar11 + 0x10))(plVar11,0x78,8);
        if (lVar6 == 0) {
          (**(code **)(*plVar11 + 0xb8))(plVar11);
        }
                    /* WARNING: Subroutine does not return */
        FUN_008a93d8(lVar6);
      }
    }
    else {
      lVar6 = 0;
      do {
        uVar9 = (ulong)*(uint *)((long)puVar2 + lVar6 + 4);
        lVar3 = lVar6 + (uVar9 - (long)*(int *)((long)puVar2 + lVar6 + uVar9 + 4));
        if ((*(ushort *)((long)puVar2 + lVar3 + 4) < 5) ||
           (uVar10 = (ulong)*(ushort *)((long)puVar2 + lVar3 + 8), uVar10 == 0)) {
          if (*param_3 == 0) goto LAB_02602d4c;
        }
        else if (*(long *)((long)puVar2 + lVar6 + uVar9 + uVar10 + 4) == *param_3) {
LAB_02602d4c:
          puVar7 = (uint *)((long)puVar2 + lVar6 + 4);
          goto LAB_02602d50;
        }
        lVar6 = lVar6 + 4;
      } while (uVar8 * 4 != lVar6);
    }
  }
  *param_1 = 0;
  return;
}


