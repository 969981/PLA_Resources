/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0083a790; name: FUN_0083a790
 */


void FUN_0083a790(undefined8 param_1,int *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 uVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  uint uVar8;
  long lVar9;
  int iVar10;
  
  puVar1 = PTR_DAT_043773b8;
  iVar10 = *param_2;
  *(int *)(PTR_DAT_043773b8 + 0x3dc) = iVar10;
  puVar2 = PTR_DAT_043773c0;
  if (iVar10 == 0) {
    lVar5 = FUN_00855004(*(undefined8 *)PTR_DAT_043773c0);
    lVar9 = *(long *)(lVar5 + 0x98);
    puVar1[0x3f0] = *(undefined1 *)(lVar9 + 0xf8);
    puVar1[0x3f7] = *(undefined1 *)(lVar9 + 0x90);
    puVar3 = PTR_DAT_04377550;
    uVar4 = FUN_0082ab78(*(undefined8 *)PTR_DAT_04377550);
    lVar5 = *(long *)puVar3;
    puVar1[0x3d8] = uVar4;
    uVar6 = (**(code **)(**(long **)(lVar5 + 0x18) + 0x158))();
    if ((uVar6 & 1) != 0) {
      plVar7 = (long *)FUN_00855004(*(undefined8 *)puVar2);
      iVar10 = 0;
      uVar8 = 0;
      do {
        lVar5 = (**(code **)(*plVar7 + 0x60))(plVar7,uVar8);
        if ((lVar5 != 0 && lVar9 != lVar5) && (*(char *)(lVar5 + 0x90) == '\0')) {
          if (iVar10 < 0xf) {
            *(uint *)(puVar1 + (long)iVar10 * 4 + 0x3fc) = (uint)*(ushort *)(lVar5 + 0x38);
          }
          iVar10 = iVar10 + 1;
        }
        uVar8 = uVar8 + 1;
      } while ((uVar8 & 0xff) < 0x18);
      puVar1[0x438] = (char)iVar10;
    }
  }
  return;
}


