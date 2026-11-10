/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01ed6038; name: FUN_01ed6038
 */


uint FUN_01ed6038(long param_1)

{
  long *plVar1;
  long *plVar2;
  int iVar3;
  int *piVar4;
  code *pcVar5;
  undefined2 uVar6;
  int iVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  uint uVar12;
  undefined1 *local_f0;
  code *local_e8;
  undefined1 *local_e0;
  undefined1 *local_d8;
  undefined1 auStack_d0 [96];
  undefined8 local_70;
  int local_64;
  
  FUN_01ed6260(param_1 + 0x128);
  lVar10 = *(long *)(param_1 + 0x78);
  uVar8 = 0;
  uVar12 = 1;
  plVar11 = (long *)(lVar10 + 0x60);
  if (*(int *)(lVar10 + 0x68) != 0) goto LAB_01ed60d4;
  do {
    do {
      plVar2 = plVar11 + 4;
      if (plVar2 == (long *)(lVar10 + 0x100)) {
        if ((uVar12 & uVar8) != 0) {
          if (((*PTR_DAT_0437e418 & 1) == 0) &&
             (iVar7 = __cxa_guard_acquire(PTR_DAT_0437e418), iVar7 != 0)) {
            FUN_00100250(PTR_LAB_0437f2f8,PTR_DAT_0437e420,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_0437e418);
          }
          lVar10 = *(long *)PTR_DAT_0437e420;
          *(long *)PTR_DAT_0437f2f0 = lVar10;
          if (lVar10 != 0) {
            FUN_010cc20c(lVar10,0);
          }
        }
        return uVar8;
      }
      plVar1 = plVar11 + 5;
      plVar11 = plVar2;
    } while ((int)*plVar1 == 0);
LAB_01ed60d4:
    iVar7 = FUN_02c6849c(*(undefined8 *)(*plVar11 + 0x98));
    piVar4 = *(int **)(param_1 + 0x128);
    do {
      local_64 = iVar7;
      if (piVar4 == *(int **)(param_1 + 0x130)) {
        local_70 = 0xf9dcaff7b9a4a1b5;
        uVar6 = FUN_02c6f924(*(undefined8 *)(*plVar11 + 0x98));
        uVar9 = FUN_0165b1f8(&local_70,iVar7,uVar6,*(undefined8 *)(*(long *)(param_1 + 0x78) + 600),
                             &DAT_cbf29ce484222645,&DAT_cbf29ce484222645);
        if ((uVar9 & 1) != 0) {
          FUN_01ed6310(param_1 + 0x128,&local_64);
          local_e8 = FUN_01ed7404;
          local_f0 = &LAB_01ed7400;
          local_d8 = &LAB_01ed740c;
          local_e0 = &LAB_01ed7408;
          uVar8 = FUN_016698d0(&local_70,iVar7,uVar6,
                               *(undefined8 *)(*(long *)(param_1 + 0x78) + 600),
                               &DAT_cbf29ce484222645,&local_f0);
          pcVar5 = local_e8;
          if (local_e8 != (code *)0x0) {
            local_e0 = (undefined1 *)0x0;
            local_d8 = (undefined1 *)0x0;
            local_f0 = (undefined1 *)0x0;
            local_e8 = (code *)0x0;
            (*pcVar5)(auStack_d0);
          }
          uVar12 = uVar12 & (uVar8 ^ 1);
          uVar8 = 1;
        }
        break;
      }
      iVar3 = *piVar4;
      piVar4 = piVar4 + 1;
    } while (iVar3 != iVar7);
  } while( true );
}


