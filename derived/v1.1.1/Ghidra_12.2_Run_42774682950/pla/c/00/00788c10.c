/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00788c10; name: FUN_00788c10
 */


void FUN_00788c10(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  int iVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong *puVar7;
  int *piVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  byte local_80;
  undefined7 uStack_7f;
  ulong local_70;
  long *plStack_68;
  
  FUN_00799d30(&local_80,param_2 + 8);
  uVar1 = (ulong)&local_80 | 1;
  if ((local_80 & 1) != 0) {
    uVar1 = local_70;
  }
                    /* try { // try from 00788c58 to 00788c5f has its CatchHandler @ 00788e8c */
  FUN_00790d50(param_1,uVar1);
  if ((local_80 & 1) != 0) {
    (**(code **)(*plStack_68 + 0x18))
              (plStack_68,local_70,CONCAT71(uStack_7f,local_80) & 0xfffffffffffffffe,1);
  }
  puVar4 = PTR_PTR_043754a0;
  lVar11 = *(long *)(param_2 + 0x28);
  lVar2 = *(long *)(param_2 + 0x30);
  if (lVar11 != lVar2) {
    do {
      FUN_0061bb30(&local_80,lVar11 + 8,*(undefined8 *)puVar4);
      piVar8 = *(int **)(param_1 + 0x20);
      if (piVar8 == (int *)0x0) {
        iVar9 = *(int *)(param_1 + 0x1c);
LAB_00788d0c:
                    /* try { // try from 00788d10 to 00788ddf has its CatchHandler @ 00788e9c */
        FUN_0032bcac((undefined8 *)(param_1 + 0x10),iVar9 + 1);
        piVar8 = *(int **)(param_1 + 0x20);
        iVar9 = *piVar8;
LAB_00788d20:
        *piVar8 = iVar9 + 1;
        lVar10 = FUN_007aff44(*(undefined8 *)(param_1 + 0x10));
        iVar9 = *(int *)(param_1 + 0x18);
        *(int *)(param_1 + 0x18) = iVar9 + 1;
        *(long *)(*(long *)(param_1 + 0x20) + (long)iVar9 * 8 + 8) = lVar10;
      }
      else {
        iVar3 = *(int *)(param_1 + 0x18);
        iVar9 = *piVar8;
        if (iVar9 <= iVar3) {
          if (iVar9 == *(int *)(param_1 + 0x1c)) goto LAB_00788d0c;
          goto LAB_00788d20;
        }
        *(int *)(param_1 + 0x18) = iVar3 + 1;
        lVar10 = *(long *)(piVar8 + (long)iVar3 * 2 + 2);
      }
      uVar1 = (ulong)&local_80 | 1;
      if ((local_80 & 1) != 0) {
        uVar1 = local_70;
      }
      FUN_00790ef4(lVar10,uVar1);
      if (*(int *)(lVar11 + 0x30) == 1) {
        uVar5 = FUN_006e4ca4(lVar11 + 0x28);
        if (*(int *)(lVar10 + 0x24) == 2) {
          uVar6 = *(undefined8 *)(lVar10 + 0x18);
        }
        else {
                    /* try { // try from 00788e08 to 00788e2f has its CatchHandler @ 00788e9c */
          FUN_007ae44c(lVar10);
          puVar7 = (ulong *)(*(ulong *)(lVar10 + 8) & 0xfffffffffffffffe);
          *(undefined4 *)(lVar10 + 0x24) = 2;
          if ((*(ulong *)(lVar10 + 8) & 1) != 0) {
            puVar7 = (ulong *)*puVar7;
          }
          uVar6 = FUN_002e17cc(puVar7);
          *(undefined8 *)(lVar10 + 0x18) = uVar6;
        }
        FUN_002e03d4(uVar6,uVar5);
      }
      else if (*(int *)(lVar11 + 0x30) == 2) {
        uVar5 = FUN_006e4ca4(lVar11 + 0x28);
        if (*(int *)(lVar10 + 0x24) == 3) {
          uVar6 = *(undefined8 *)(lVar10 + 0x18);
        }
        else {
          FUN_007ae44c(lVar10);
          puVar7 = (ulong *)(*(ulong *)(lVar10 + 8) & 0xfffffffffffffffe);
          *(undefined4 *)(lVar10 + 0x24) = 3;
          if ((*(ulong *)(lVar10 + 8) & 1) != 0) {
            puVar7 = (ulong *)*puVar7;
          }
          uVar6 = FUN_002e17cc(puVar7);
          *(undefined8 *)(lVar10 + 0x18) = uVar6;
        }
        FUN_002e03d4(uVar6,uVar5);
      }
      if ((local_80 & 1) != 0) {
        (**(code **)(*plStack_68 + 0x18))
                  (plStack_68,local_70,CONCAT71(uStack_7f,local_80) & 0xfffffffffffffffe,1);
      }
      lVar11 = lVar11 + 0x38;
    } while (lVar2 != lVar11);
  }
  lVar11 = param_2 + 0x49;
  if ((*(byte *)(param_2 + 0x48) & 1) != 0) {
    lVar11 = *(long *)(param_2 + 0x58);
  }
                    /* try { // try from 00788e58 to 00788e5f has its CatchHandler @ 00788e80 */
  FUN_00791098(param_1,lVar11);
  return;
}


