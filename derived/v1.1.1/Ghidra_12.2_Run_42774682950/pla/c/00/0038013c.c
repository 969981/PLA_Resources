/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0038013c; name: FUN_0038013c
 */


void FUN_0038013c(long *param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong *puVar5;
  long *plVar6;
  long lVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  long local_88;
  undefined *puStack_80;
  undefined ***local_78;
  undefined **local_70;
  long *plStack_68;
  
  *param_1 = (long)(PTR_DAT_04373c80 + 0x10);
  puVar4 = PTR_LAB_04373aa0;
  puVar3 = PTR_LAB_04373a98;
  puVar2 = PTR_LAB_04373088;
  plVar13 = *(long **)(param_1[3] + 0x10);
  if (plVar13 != (long *)0x0) {
    do {
      lVar12 = plVar13[3];
      lVar11 = *(long *)(lVar12 + 0x20);
      iVar8 = *(int *)(lVar11 + 0x6c);
      if (0 < iVar8) {
        lVar7 = *(long *)(lVar11 + 0x30);
        lVar12 = 0;
        iVar1 = *(int *)(lVar7 + 0x18);
        while( true ) {
          if (((iVar1 != 1) || (*(char *)(**(long **)(lVar7 + lVar12 * 0x30 + 0x20) + 0x41) == '\0')
              ) && (0 < *(int *)(lVar7 + lVar12 * 0x30 + 0x18))) {
            lVar10 = 0;
            do {
              lVar9 = *(long *)(*(long *)(lVar7 + lVar12 * 0x30 + 0x20) + lVar10 * 8);
              puVar5 = *(ulong **)(lVar9 + 0x30);
              if (puVar5 != (ulong *)0x0) {
                puStack_80 = puVar3;
                local_88 = lVar9;
                if (*puVar5 != 0xffffffffffffffff) {
                    /* try { // try from 00380270 to 0038027b has its CatchHandler @ 0038032c */
                  local_78 = &local_70;
                  local_70 = &puStack_80;
                  plStack_68 = &local_88;
                  std::__call_once(puVar5,&local_78,(_func_void_void_ptr *)puVar4);
                }
                lVar7 = *(long *)(lVar11 + 0x30);
              }
              lVar10 = lVar10 + 1;
            } while (lVar10 < *(int *)(lVar7 + lVar12 * 0x30 + 0x18));
            iVar8 = *(int *)(lVar11 + 0x6c);
          }
          lVar12 = lVar12 + 1;
          if (iVar8 <= lVar12) break;
          iVar1 = *(int *)(lVar7 + lVar12 * 0x30 + 0x18);
        }
        lVar12 = plVar13[3];
      }
      if (lVar12 != 0) {
        FUN_003808dc(lVar12);
        FUN_002e2ea0(puVar2,lVar12);
      }
      plVar13 = (long *)*plVar13;
    } while (plVar13 != (long *)0x0);
  }
  std::mutex::~mutex((mutex *)(param_1 + 4));
  plVar13 = (long *)param_1[3];
  param_1[3] = 0;
  puVar2 = PTR_LAB_04373088;
  if (plVar13 != (long *)0x0) {
    plVar6 = (long *)plVar13[2];
    while (plVar6 != (long *)0x0) {
      plVar6 = (long *)*plVar6;
      FUN_002e2ea0(puVar2);
    }
    lVar11 = *plVar13;
    *plVar13 = 0;
    if (lVar11 != 0) {
      FUN_002e2ea0(PTR_LAB_04373088);
    }
    FUN_002e2ea0(PTR_LAB_04373088,plVar13);
  }
  FUN_00391ba4(param_1);
  return;
}


