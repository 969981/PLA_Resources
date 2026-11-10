/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010f4900; name: FUN_010f4900
 */


void FUN_010f4900(long param_1,undefined8 param_2)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  undefined *puVar4;
  long *plVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 *puVar8;
  long lVar9;
  long lVar10;
  uint *puVar11;
  uint *puVar12;
  ulong uVar13;
  uint *puVar14;
  long lVar15;
  uint local_78 [2];
  long *local_70;
  undefined4 local_64;
  
  local_64 = 0;
  if (((*PTR_DAT_04379558 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04379558), iVar7 != 0))
  {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  lVar9 = *(long *)PTR_DAT_04379560;
  *(long *)PTR_DAT_04379568 = lVar9;
  puVar4 = PTR_DAT_04379c88;
  lVar10 = *(long *)(param_1 + 8);
  if ((lVar10 != 0) && (lVar10 = *(long *)(lVar10 + 0x278) - *(long *)(lVar10 + 0x270), lVar10 != 0)
     ) {
    lVar15 = *(long *)(lVar9 + 0x100);
    lVar9 = 0;
    do {
      FUN_010f5a90(&local_70,param_1,lVar9);
      plVar5 = local_70;
      puVar1 = (uint *)puVar4;
      if (local_70 != (long *)0x0) {
        puVar1 = (uint *)(local_70 + 0xb);
      }
      local_78[0] = *puVar1;
      puVar3 = *(uint **)(lVar15 + 0x10);
      uVar13 = (long)puVar3 - (long)*(uint **)(lVar15 + 8);
      if (0 < (long)uVar13) {
        puVar11 = *(uint **)(lVar15 + 8);
        puVar12 = puVar3;
        do {
          puVar14 = puVar11 + (uVar13 / 0x60) * 0xc;
          if (*puVar14 == local_78[0]) goto LAB_010f4a0c;
          puVar2 = puVar14 + 0xc;
          if (local_78[0] <= *puVar14) {
            puVar2 = puVar11;
            puVar12 = puVar14;
          }
          uVar13 = (long)puVar12 - (long)puVar2;
          puVar11 = puVar2;
        } while (0 < (long)uVar13);
      }
      puVar14 = puVar3;
LAB_010f4a0c:
      if ((puVar14 == (uint *)0x0) || (puVar3 == puVar14)) {
        FUN_010f856c(lVar15,local_78,&local_64);
        uVar6 = local_64;
        puVar8 = (undefined4 *)FUN_010f8318(param_2,puVar1);
        *puVar8 = uVar6;
      }
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x20))(plVar5);
      }
      lVar9 = lVar9 + 1;
    } while (lVar9 != lVar10 >> 3);
  }
  return;
}


