/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0037ea64; name: FUN_0037ea64
 */


void FUN_0037ea64(long param_1,ulong param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong *puVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 *puVar12;
  int iVar13;
  int iVar14;
  long *plVar15;
  long lVar16;
  long local_88;
  undefined *puStack_80;
  undefined ***local_78;
  undefined **local_70;
  long *plStack_68;
  
  lVar8 = *(long *)(param_1 + 0x10);
  lVar16 = *(long *)(lVar8 + 0x20);
  iVar13 = *(int *)(lVar16 + 0x6c);
  if (0 < iVar13) {
    lVar11 = 0;
    iVar14 = 0;
    puVar12 = (undefined8 *)(*(long *)(lVar16 + 0x30) + 0x20);
    if (*(int *)(*(long *)(lVar16 + 0x30) + 0x18) == 1) goto LAB_0037eae8;
    do {
      iVar13 = iVar14 * 4;
      iVar14 = iVar14 + 1;
      *(undefined4 *)(param_1 + (*(int *)(lVar8 + 8) + iVar13)) = 0;
      iVar13 = *(int *)(lVar16 + 0x6c);
      puVar10 = puVar12;
      do {
        lVar11 = lVar11 + 1;
        puVar12 = puVar10 + 6;
        if (iVar13 <= lVar11) goto LAB_0037eafc;
        if (*(int *)(puVar10 + 5) != 1) break;
LAB_0037eae8:
        puVar10 = puVar12;
      } while (*(char *)(*(long *)*puVar12 + 0x41) != '\0');
    } while( true );
  }
LAB_0037eafc:
  if (*(int *)(lVar8 + 0xc) != -1) {
    FUN_0032dd08(param_1 + *(int *)(lVar8 + 0xc),*(undefined8 *)(param_1 + 0x18));
  }
  puVar2 = PTR_DAT_04373ab0;
  puVar1 = PTR_LAB_04373a98;
  if (0 < *(int *)(lVar16 + 0x68)) {
    lVar11 = 0;
    lVar8 = 0;
    do {
      lVar4 = *(long *)(lVar16 + 0x28) + lVar11;
      iVar13 = *(int *)(*(long *)(*(long *)(param_1 + 0x10) + 0x28) + lVar8 * 4);
      lVar9 = *(long *)(lVar4 + 0x58);
      if ((lVar9 == 0) ||
         ((*(int *)(lVar9 + 0x18) == 1 && (*(char *)(**(long **)(lVar9 + 0x20) + 0x41) != '\0')))) {
        puVar3 = *(ulong **)(lVar4 + 0x30);
        if ((puVar3 != (ulong *)0x0) &&
           (puStack_80 = puVar1, local_88 = lVar4, *puVar3 != 0xffffffffffffffff)) {
          plStack_68 = &local_88;
          local_78 = &local_70;
          local_70 = &puStack_80;
          std::__call_once(puVar3,&local_78,(_func_void_void_ptr *)PTR_LAB_04373aa0);
        }
        uVar7 = *(uint *)(lVar4 + 0x38);
        if (*(int *)(puVar2 + (ulong)uVar7 * 4) - 1U < 10) {
          puVar12 = (undefined8 *)(param_1 + iVar13);
          switch(*(int *)(puVar2 + (ulong)uVar7 * 4)) {
          default:
            if (*(int *)(lVar4 + 0x3c) == 3) {
LAB_0037eb48:
              uVar6 = *(undefined8 *)(param_1 + 0x18);
              *puVar12 = 0;
              puVar12[1] = uVar6;
            }
            else {
              *(undefined4 *)puVar12 = *(undefined4 *)(lVar4 + 0x90);
            }
            break;
          case 2:
          case 4:
          case 5:
            if (*(int *)(lVar4 + 0x3c) == 3) goto LAB_0037eb48;
            *puVar12 = *(undefined8 *)(lVar4 + 0x90);
            break;
          case 7:
            if (*(int *)(lVar4 + 0x3c) == 3) goto LAB_0037eb48;
            *(undefined1 *)puVar12 = *(undefined1 *)(lVar4 + 0x90);
            break;
          case 8:
            if (*(int *)(lVar4 + 0x3c) == 3) goto LAB_0037eb48;
            lVar4 = FUN_0034484c(lVar4);
            *(undefined4 *)puVar12 = *(undefined4 *)(lVar4 + 0x10);
            break;
          case 9:
            if (*(int *)(lVar4 + 0x3c) == 3) {
LAB_0037ed38:
              uVar6 = *(undefined8 *)(param_1 + 0x18);
              puVar12[1] = 0;
              puVar12[2] = 0;
              *puVar12 = uVar6;
            }
            else {
              lVar9 = *(long *)(*(long *)(param_1 + 0x10) + 0x40);
              if ((lVar9 == param_1) || (lVar9 == 0)) {
                puVar10 = (undefined8 *)(lVar4 + 0x90);
              }
              else {
                puVar10 = (undefined8 *)
                          (lVar9 + *(int *)(*(long *)(*(long *)(param_1 + 0x10) + 0x28) + lVar8 * 4)
                          );
              }
              *puVar12 = *puVar10;
            }
            break;
          case 10:
            if (*(int *)(lVar4 + 0x3c) == 3) {
              puVar3 = *(ulong **)(lVar4 + 0x30);
              if (puVar3 != (ulong *)0x0) {
                puStack_80 = puVar1;
                local_88 = lVar4;
                if (*puVar3 != 0xffffffffffffffff) {
                  plStack_68 = &local_88;
                  local_78 = &local_70;
                  local_70 = &puStack_80;
                  std::__call_once(puVar3,&local_78,(_func_void_void_ptr *)PTR_LAB_04373aa0);
                }
                uVar7 = *(uint *)(lVar4 + 0x38);
              }
              if ((uVar7 != 0xb) || (uVar5 = FUN_00344344(lVar4), (uVar5 & 1) == 0))
              goto LAB_0037ed38;
              lVar9 = *(long *)(param_1 + 0x18);
              plVar15 = *(long **)(*(long *)(param_1 + 0x10) + 0x10);
              uVar6 = FUN_00342dac(lVar4);
              if ((param_2 & 1) == 0) {
                uVar6 = FUN_0037edac(plVar15,uVar6);
              }
              else {
                uVar6 = (**(code **)(*plVar15 + 0x10))(plVar15);
              }
              if (lVar9 == 0) {
                FUN_00395d74(puVar12);
              }
              else {
                FUN_00395e0c(puVar12,uVar6,*(undefined8 *)(param_1 + 0x18));
              }
            }
            else {
              *puVar12 = 0;
            }
          }
        }
      }
      lVar8 = lVar8 + 1;
      lVar11 = lVar11 + 0x98;
    } while (lVar8 < *(int *)(lVar16 + 0x68));
  }
  return;
}


