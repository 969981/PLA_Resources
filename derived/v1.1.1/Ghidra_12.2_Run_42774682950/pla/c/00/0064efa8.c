/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0064efa8; name: FUN_0064efa8
 */


void FUN_0064efa8(long *param_1,undefined8 param_2,long *param_3)

{
  int iVar1;
  int iVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong uVar5;
  int *piVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  byte local_60;
  undefined7 uStack_5f;
  ulong local_50;
  long *plStack_48;
  
  lVar8 = *param_1;
  if (lVar8 == 0) {
    lVar8 = FUN_002e2e80(PTR_FUN_04373078,0x20);
    if (lVar8 != 0) {
                    /* try { // try from 0064efe8 to 0064eff3 has its CatchHandler @ 0064f238 */
      FUN_00697848(lVar8,0);
    }
    *param_1 = lVar8;
  }
                    /* try { // try from 0064eff8 to 0064f05f has its CatchHandler @ 0064f270 */
  FUN_00697d28(lVar8);
  lVar8 = *param_1;
  if (*(int *)(lVar8 + 0x1c) == 1) {
    lVar9 = *(long *)(lVar8 + 0x10);
    lVar8 = *(long *)(lVar9 + 0x10);
  }
  else {
    FUN_006977cc(lVar8);
    *(undefined4 *)(lVar8 + 0x1c) = 1;
    puVar3 = (ulong *)(*(ulong *)(lVar8 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(lVar8 + 8) & 1) != 0) {
      puVar3 = (ulong *)*puVar3;
    }
    lVar9 = FUN_0069d42c(puVar3);
    *(long *)(lVar8 + 0x10) = lVar9;
    lVar8 = *(long *)(lVar9 + 0x10);
  }
  if (lVar8 == 0) {
    puVar3 = (ulong *)(*(ulong *)(lVar9 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(lVar9 + 8) & 1) != 0) {
      puVar3 = (ulong *)*puVar3;
    }
    lVar8 = FUN_0069c9bc(puVar3);
    *(long *)(lVar9 + 0x10) = lVar8;
  }
                    /* try { // try from 0064f074 to 0064f083 has its CatchHandler @ 0064f26c */
  FUN_00682b00(&local_60,*(undefined8 *)PTR_PTR_04375850,param_2);
  uVar5 = (ulong)&local_60 | 1;
  if ((local_60 & 1) != 0) {
    uVar5 = local_50;
  }
                    /* try { // try from 0064f098 to 0064f09f has its CatchHandler @ 0064f23c */
  FUN_0064f280(lVar8,uVar5);
  if ((local_60 & 1) != 0) {
    (**(code **)(*plStack_48 + 0x18))
              (plStack_48,local_50,CONCAT71(uStack_5f,local_60) & 0xfffffffffffffffe,1);
  }
  lVar8 = *param_3;
  lVar9 = param_3[1];
  if (lVar8 == lVar9) {
    return;
  }
  lVar7 = *param_1;
  if (*(int *)(lVar7 + 0x1c) != 1) goto LAB_0064f134;
LAB_0064f124:
  lVar10 = *(long *)(lVar7 + 0x10);
  lVar7 = *(long *)(lVar10 + 0x10);
  do {
    if (lVar7 == 0) {
      puVar3 = (ulong *)(*(ulong *)(lVar10 + 8) & 0xfffffffffffffffe);
      if ((*(ulong *)(lVar10 + 8) & 1) != 0) {
        puVar3 = (ulong *)*puVar3;
      }
      lVar7 = FUN_0069c9bc(puVar3);
      *(long *)(lVar10 + 0x10) = lVar7;
    }
    puVar3 = (ulong *)(lVar7 + 0x10);
    lVar10 = FUN_00680c3c(lVar8);
    uVar5 = *(ulong *)(lVar10 + 8);
    puVar4 = (ulong *)(uVar5 & 0xfffffffffffffffe);
    if ((uVar5 & 1) == 0) {
      if ((ulong *)*puVar3 != puVar4) goto LAB_0064f1a4;
LAB_0064f1c4:
      piVar6 = *(int **)(lVar7 + 0x20);
      if (piVar6 == (int *)0x0) goto LAB_0064f1a4;
      iVar1 = *piVar6;
      if (*(int *)(lVar7 + 0x1c) <= iVar1) goto LAB_0064f1a4;
      iVar2 = *(int *)(lVar7 + 0x18);
      if (iVar2 < iVar1) {
        *(undefined8 *)(piVar6 + (long)iVar1 * 2 + 2) =
             *(undefined8 *)(piVar6 + (long)iVar2 * 2 + 2);
      }
      *(long *)(piVar6 + (long)iVar2 * 2 + 2) = lVar10;
      *(int *)(lVar7 + 0x18) = iVar2 + 1;
      **(int **)(lVar7 + 0x20) = **(int **)(lVar7 + 0x20) + 1;
    }
    else {
      if (*puVar3 == *puVar4) goto LAB_0064f1c4;
LAB_0064f1a4:
      if ((uVar5 & 1) != 0) {
        puVar4 = (ulong *)*puVar4;
      }
      FUN_0064df44(puVar3,lVar10,puVar4);
    }
    lVar8 = lVar8 + 8;
    if (lVar9 == lVar8) {
      return;
    }
    lVar7 = *param_1;
    if (*(int *)(lVar7 + 0x1c) == 1) goto LAB_0064f124;
LAB_0064f134:
                    /* try { // try from 0064f134 to 0064f1af has its CatchHandler @ 0064f274 */
    FUN_006977cc(lVar7);
    puVar3 = (ulong *)(*(ulong *)(lVar7 + 8) & 0xfffffffffffffffe);
    *(undefined4 *)(lVar7 + 0x1c) = 1;
    if ((*(ulong *)(lVar7 + 8) & 1) != 0) {
      puVar3 = (ulong *)*puVar3;
    }
    lVar10 = FUN_0069d42c(puVar3);
    *(long *)(lVar7 + 0x10) = lVar10;
    lVar7 = *(long *)(lVar10 + 0x10);
  } while( true );
}


