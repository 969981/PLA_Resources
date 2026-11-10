/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 006813dc; name: FUN_006813dc
 */


void FUN_006813dc(long *param_1,undefined8 param_2,int *param_3)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  undefined1 *puVar4;
  ulong *puVar5;
  ulong *puVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  byte local_60;
  undefined7 uStack_5f;
  ulong local_58;
  ulong local_50;
  long *plStack_48;
  undefined8 local_38;
  
  lVar3 = FUN_002e2e80(PTR_FUN_04373078,0x20);
  if (lVar3 != 0) {
                    /* try { // try from 00681414 to 0068141f has its CatchHandler @ 006816d0 */
    FUN_006903b4(lVar3,0);
  }
  if (*(int *)(lVar3 + 0x1c) == 4) {
    uVar9 = *(undefined8 *)(lVar3 + 0x10);
  }
  else {
                    /* try { // try from 00681434 to 00681453 has its CatchHandler @ 00681718 */
    FUN_00690214(lVar3);
    *(undefined4 *)(lVar3 + 0x1c) = 4;
    puVar5 = (ulong *)(*(ulong *)(lVar3 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(lVar3 + 8) & 1) != 0) {
      puVar5 = (ulong *)*puVar5;
    }
    uVar9 = FUN_0069d118(puVar5);
    *(undefined8 *)(lVar3 + 0x10) = uVar9;
  }
  FUN_0064fd7c(&local_60,param_2);
  uVar1 = (ulong)&local_60 | 1;
  if ((local_60 & 1) != 0) {
    uVar1 = local_50;
  }
                    /* try { // try from 00681480 to 00681487 has its CatchHandler @ 006816e8 */
  FUN_00681724(uVar9,uVar1);
  if ((local_60 & 1) != 0) {
    (**(code **)(*plStack_48 + 0x18))
              (plStack_48,local_50,CONCAT71(uStack_5f,local_60) & 0xfffffffffffffffe,1);
  }
  if (*param_3 != 2) {
    if (*param_3 != 1) goto LAB_00681688;
    if (*(int *)(lVar3 + 0x1c) == 4) {
      lVar7 = *(long *)(lVar3 + 0x10);
      lVar8 = *(long *)(lVar7 + 0x18);
      if (lVar8 != 0) goto LAB_006814d8;
LAB_00681564:
      puVar5 = (ulong *)(*(ulong *)(lVar7 + 8) & 0xfffffffffffffffe);
      if ((*(ulong *)(lVar7 + 8) & 1) != 0) {
        puVar5 = (ulong *)*puVar5;
      }
      lVar8 = FUN_0069d1e0(puVar5);
      *(long *)(lVar7 + 0x18) = lVar8;
      iVar2 = *(int *)(lVar8 + 0x1c);
    }
    else {
                    /* try { // try from 00681534 to 0068158f has its CatchHandler @ 00681718 */
      FUN_00690214(lVar3);
      *(undefined4 *)(lVar3 + 0x1c) = 4;
      puVar5 = (ulong *)(*(ulong *)(lVar3 + 8) & 0xfffffffffffffffe);
      if ((*(ulong *)(lVar3 + 8) & 1) != 0) {
        puVar5 = (ulong *)*puVar5;
      }
      lVar7 = FUN_0069d118(puVar5);
      *(long *)(lVar3 + 0x10) = lVar7;
      lVar8 = *(long *)(lVar7 + 0x18);
      if (lVar8 == 0) goto LAB_00681564;
LAB_006814d8:
      iVar2 = *(int *)(lVar8 + 0x1c);
    }
    if (iVar2 != 1) {
      FUN_00695a7c(lVar8);
      *(undefined4 *)(lVar8 + 0x1c) = 1;
    }
    *(undefined1 *)(lVar8 + 0x10) = 1;
    goto LAB_00681688;
  }
  local_38 = *(undefined8 *)(param_3 + 2);
  FUN_006ddf40(&local_60,&local_38);
  if (*(int *)(lVar3 + 0x1c) == 4) {
    lVar8 = *(long *)(lVar3 + 0x10);
    lVar7 = *(long *)(lVar8 + 0x18);
    if (lVar7 != 0) goto LAB_00681514;
LAB_006815d4:
    puVar5 = (ulong *)(*(ulong *)(lVar8 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(lVar8 + 8) & 1) != 0) {
      puVar5 = (ulong *)*puVar5;
    }
    lVar7 = FUN_0069d1e0(puVar5);
    *(long *)(lVar8 + 0x18) = lVar7;
    if (*(int *)(lVar7 + 0x1c) != 2) goto LAB_006815f8;
LAB_00681520:
    puVar4 = *(undefined1 **)(lVar7 + 0x10);
    puVar5 = (ulong *)(*(ulong *)(puVar4 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(puVar4 + 8) & 1) != 0) goto LAB_00681650;
LAB_00681628:
    puVar6 = (ulong *)(local_58 & 0xfffffffffffffffe);
    if ((local_58 & 1) == 0) goto LAB_00681634;
LAB_00681660:
    if (puVar5 == (ulong *)*puVar6) goto LAB_0068166c;
LAB_0068163c:
                    /* try { // try from 0068163c to 0068167f has its CatchHandler @ 006816cc */
    FUN_00602a14(puVar4,&local_60);
  }
  else {
                    /* try { // try from 006815a4 to 00681617 has its CatchHandler @ 006816d4 */
    FUN_00690214(lVar3);
    *(undefined4 *)(lVar3 + 0x1c) = 4;
    puVar5 = (ulong *)(*(ulong *)(lVar3 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(lVar3 + 8) & 1) != 0) {
      puVar5 = (ulong *)*puVar5;
    }
    lVar8 = FUN_0069d118(puVar5);
    *(long *)(lVar3 + 0x10) = lVar8;
    lVar7 = *(long *)(lVar8 + 0x18);
    if (lVar7 == 0) goto LAB_006815d4;
LAB_00681514:
    if (*(int *)(lVar7 + 0x1c) == 2) goto LAB_00681520;
LAB_006815f8:
    FUN_00695a7c(lVar7);
    *(undefined4 *)(lVar7 + 0x1c) = 2;
    puVar5 = (ulong *)(*(ulong *)(lVar7 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(lVar7 + 8) & 1) != 0) {
      puVar5 = (ulong *)*puVar5;
    }
    puVar4 = (undefined1 *)FUN_00602b5c(puVar5);
    *(undefined1 **)(lVar7 + 0x10) = puVar4;
    puVar5 = (ulong *)(*(ulong *)(puVar4 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(puVar4 + 8) & 1) == 0) goto LAB_00681628;
LAB_00681650:
    puVar5 = (ulong *)*puVar5;
    puVar6 = (ulong *)(local_58 & 0xfffffffffffffffe);
    if ((local_58 & 1) != 0) goto LAB_00681660;
LAB_00681634:
    if (puVar5 != puVar6) goto LAB_0068163c;
LAB_0068166c:
    if (puVar4 != &local_60) {
      FUN_00602a74(puVar4,&local_60);
    }
  }
  FUN_00602294(&local_60);
LAB_00681688:
  *param_1 = lVar3;
  return;
}


