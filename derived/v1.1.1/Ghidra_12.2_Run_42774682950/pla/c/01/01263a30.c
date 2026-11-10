/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01263a30; name: FUN_01263a30
 */


void FUN_01263a30(undefined8 *param_1,long *param_2,uint param_3)

{
  undefined4 *puVar1;
  long *plVar2;
  byte bVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  byte *pbVar9;
  undefined1 *puVar10;
  long *plVar11;
  long *plVar12;
  ulong uVar13;
  undefined1 *local_70;
  long *local_68;
  
  if (((*PTR_DAT_04379558 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04379558), iVar4 != 0))
  {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  *(undefined8 *)PTR_DAT_04379568 = *(undefined8 *)PTR_DAT_04379560;
  FUN_0114907c(&local_68);
  if (param_3 == 2) {
    local_70 = (undefined1 *)FUN_0111b784(local_68,2);
    plVar12 = param_2 + 7;
    plVar11 = param_2 + 8;
  }
  else {
    local_70 = (undefined1 *)FUN_0111b784(local_68,0);
    if (1 < param_3) {
LAB_01263cd8:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    plVar11 = param_2 + 1;
    plVar12 = param_2;
  }
  lVar5 = *plVar11;
  lVar7 = *plVar12;
  if ((int)((ulong)(lVar5 - lVar7) >> 5) != 0) {
    uVar13 = 0;
    do {
      *(undefined4 *)param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = &DAT_cbf29ce484222645;
      if (param_3 < 2) {
        lVar6 = *param_2;
        lVar8 = param_2[1];
        if (lVar6 == lVar8) goto LAB_01263c54;
LAB_01263b78:
        if (((ulong)(lVar8 - lVar6) >> 5 & 0xffffffff) <= uVar13) goto LAB_01263c54;
        if (param_3 < 2) {
          lVar6 = *param_2;
        }
        else {
          if (param_3 != 2) goto LAB_01263c54;
          lVar6 = param_2[7];
        }
        puVar1 = (undefined4 *)(lVar6 + uVar13 * 0x20);
        *(undefined4 *)param_1 = *puVar1;
        plVar11 = *(long **)(puVar1 + 2);
        if (plVar11 != (long *)0x0) {
          (**(code **)(*plVar11 + 0x18))(plVar11);
        }
        param_1[1] = plVar11;
        plVar12 = *(long **)(puVar1 + 4);
        if (plVar12 != (long *)0x0) {
          (**(code **)(*plVar12 + 0x18))(plVar12);
        }
        param_1[2] = plVar12;
        param_1[3] = *(undefined8 *)(puVar1 + 6);
      }
      else {
        if (param_3 != 2) goto LAB_01263cd8;
        lVar6 = param_2[7];
        lVar8 = param_2[8];
        if (lVar6 != lVar8) goto LAB_01263b78;
LAB_01263c54:
        plVar12 = (long *)0x0;
        plVar11 = (long *)0x0;
      }
      plVar2 = (long *)PTR_PTR_04379d00;
      if (plVar11 != (long *)0x0) {
        plVar2 = plVar11 + 0xc;
      }
      pbVar9 = (byte *)*plVar2;
      bVar3 = *pbVar9;
      puVar10 = &DAT_cbf29ce484222645;
      if (bVar3 != 0) {
        puVar10 = &DAT_cbf29ce484222645;
        do {
          pbVar9 = pbVar9 + 1;
          puVar10 = (undefined1 *)(((ulong)puVar10 ^ (ulong)bVar3) * 0x100000001b3);
          bVar3 = *pbVar9;
        } while (bVar3 != 0);
      }
      if (puVar10 == local_70) goto LAB_01263c90;
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 0x20))(plVar12);
      }
      if (plVar11 != (long *)0x0) {
        (**(code **)(*plVar11 + 0x20))(plVar11);
      }
      uVar13 = uVar13 + 1;
    } while (uVar13 != ((ulong)(lVar5 - lVar7) >> 5 & 0xffffffff));
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = &DAT_cbf29ce484222645;
LAB_01263c90:
  if ((local_68 != (long *)0x0) && (uVar13 = FUN_02a43a5c(local_68[0xb]), (uVar13 & 1) != 0)) {
    (**(code **)(*local_68 + 0x20))(local_68);
  }
  return;
}


