/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00680f20; name: FUN_00680f20
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_00680f20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  int iVar2;
  ulong uVar3;
  ulong *puVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  undefined8 *puVar9;
  ulong local_70;
  long local_68;
  ulong local_60;
  long *plStack_58;
  
  uVar3 = FUN_002e2e80(PTR_FUN_04373078,0x20);
  if (uVar3 != 0) {
                    /* try { // try from 00680f60 to 00680f6b has its CatchHandler @ 0068137c */
    FUN_006903b4(uVar3,0);
  }
  if (*(int *)(uVar3 + 0x1c) == 1) {
    lVar6 = *(long *)(uVar3 + 0x10);
    lVar5 = *(long *)(lVar6 + 0x10);
  }
  else {
                    /* try { // try from 00680f88 to 00680fc7 has its CatchHandler @ 006813b0 */
    FUN_00690214(uVar3);
    *(undefined4 *)(uVar3 + 0x1c) = 1;
    puVar4 = (ulong *)(*(ulong *)(uVar3 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(uVar3 + 8) & 1) != 0) {
      puVar4 = (ulong *)*puVar4;
    }
    lVar6 = FUN_0069cf0c(puVar4);
    *(long *)(uVar3 + 0x10) = lVar6;
    lVar5 = *(long *)(lVar6 + 0x10);
  }
  if (lVar5 == 0) {
    puVar4 = (ulong *)(*(ulong *)(lVar6 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(lVar6 + 8) & 1) != 0) {
      puVar4 = (ulong *)*puVar4;
    }
    lVar5 = FUN_0069c8f0(puVar4);
    *(long *)(lVar6 + 0x10) = lVar5;
  }
  lVar6 = FUN_0064eaa8(param_3);
  plVar7 = (long *)(*(ulong *)(lVar5 + 8) & 0xfffffffffffffffe);
  if ((*(ulong *)(lVar5 + 8) & 1) != 0) {
    plVar7 = (long *)*plVar7;
  }
  if ((plVar7 == (long *)0x0) &&
     (puVar9 = *(undefined8 **)(lVar5 + 0x18), puVar9 != (undefined8 *)0x0)) {
    (**(code **)*puVar9)(puVar9);
    FUN_002e2ea0(PTR_LAB_04373088,puVar9);
  }
  if (lVar6 != 0) {
    puVar4 = (ulong *)(*(ulong *)(lVar6 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(lVar6 + 8) & 1) != 0) {
      puVar4 = (ulong *)*puVar4;
    }
    if ((ulong *)plVar7 != puVar4) {
                    /* try { // try from 0068102c to 0068109b has its CatchHandler @ 006813b0 */
      lVar6 = FUN_0032d170(plVar7,lVar6);
    }
  }
  *(long *)(lVar5 + 0x18) = lVar6;
  if (*(int *)(uVar3 + 0x1c) == 1) {
    lVar6 = *(long *)(uVar3 + 0x10);
    lVar5 = *(long *)(lVar6 + 0x10);
  }
  else {
    FUN_00690214(uVar3);
    *(undefined4 *)(uVar3 + 0x1c) = 1;
    puVar4 = (ulong *)(*(ulong *)(uVar3 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(uVar3 + 8) & 1) != 0) {
      puVar4 = (ulong *)*puVar4;
    }
    lVar6 = FUN_0069cf0c(puVar4);
    *(long *)(uVar3 + 0x10) = lVar6;
    lVar5 = *(long *)(lVar6 + 0x10);
  }
  if (lVar5 == 0) {
    puVar4 = (ulong *)(*(ulong *)(lVar6 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(lVar6 + 8) & 1) != 0) {
      puVar4 = (ulong *)*puVar4;
    }
    lVar5 = FUN_0069c8f0(puVar4);
    *(long *)(lVar6 + 0x10) = lVar5;
  }
  FUN_0064fd7c(&local_70,param_2);
  uVar1 = (ulong)&local_70 | 1;
  if ((local_70 & 1) != 0) {
    uVar1 = local_60;
  }
                    /* try { // try from 006810c8 to 006810cf has its CatchHandler @ 00681380 */
  FUN_0065afd8(lVar5,uVar1);
  if ((local_70 & 1) != 0) {
    (**(code **)(*plStack_58 + 0x18))(plStack_58,local_60,local_70 & 0xfffffffffffffffe,1);
  }
  if (*(int *)(uVar3 + 0x1c) == 1) {
    lVar6 = *(long *)(uVar3 + 0x10);
    lVar5 = *(long *)(lVar6 + 0x18);
  }
  else {
    FUN_00690214(uVar3);
    *(undefined4 *)(uVar3 + 0x1c) = 1;
    puVar4 = (ulong *)(*(ulong *)(uVar3 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(uVar3 + 8) & 1) != 0) {
      puVar4 = (ulong *)*puVar4;
    }
    lVar6 = FUN_0069cf0c(puVar4);
    *(long *)(uVar3 + 0x10) = lVar6;
    lVar5 = *(long *)(lVar6 + 0x18);
  }
  if (lVar5 == 0) {
    puVar4 = (ulong *)(*(ulong *)(lVar6 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(lVar6 + 8) & 1) != 0) {
      puVar4 = (ulong *)*puVar4;
    }
    lVar5 = FUN_00603dc4(puVar4);
    *(long *)(lVar6 + 0x18) = lVar5;
    iVar2 = *(int *)(uVar3 + 0x1c);
  }
  else {
    iVar2 = *(int *)(uVar3 + 0x1c);
  }
  if (iVar2 == 1) {
    lVar8 = *(long *)(uVar3 + 0x10);
    lVar6 = *(long *)(lVar8 + 0x10);
  }
  else {
    FUN_00690214(uVar3);
    *(undefined4 *)(uVar3 + 0x1c) = 1;
    puVar4 = (ulong *)(*(ulong *)(uVar3 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(uVar3 + 8) & 1) != 0) {
      puVar4 = (ulong *)*puVar4;
    }
    lVar8 = FUN_0069cf0c(puVar4);
    *(long *)(uVar3 + 0x10) = lVar8;
    lVar6 = *(long *)(lVar8 + 0x10);
  }
  if (lVar6 == 0) {
    puVar4 = (ulong *)(*(ulong *)(lVar8 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(lVar8 + 8) & 1) != 0) {
      puVar4 = (ulong *)*puVar4;
    }
    lVar6 = FUN_0069c8f0(puVar4);
    *(long *)(lVar8 + 0x10) = lVar6;
    lVar8 = *(long *)(lVar6 + 0x18);
  }
  else {
    lVar8 = *(long *)(lVar6 + 0x18);
  }
  if (lVar8 == 0) {
    puVar4 = (ulong *)(*(ulong *)(lVar6 + 8) & 0xfffffffffffffffe);
    if ((*(ulong *)(lVar6 + 8) & 1) != 0) {
      puVar4 = (ulong *)*puVar4;
    }
                    /* try { // try from 00681138 to 006811db has its CatchHandler @ 006813b0 */
    lVar8 = FUN_002e1a14(puVar4);
    *(long *)(lVar6 + 0x18) = lVar8;
  }
  FUN_006e345c(param_4,lVar5,lVar8,1);
  lVar5 = FUN_0064e8d8(param_3);
  local_70 = uVar3;
  if (lVar5 == 0) {
                    /* try { // try from 00681264 to 00681273 has its CatchHandler @ 00681318 */
    FUN_00680c4c(param_1,&local_70,1);
    uVar3 = local_70;
    lVar5 = local_68;
  }
  else {
    FUN_00680d7c(&local_68,param_2,param_3);
                    /* try { // try from 00681220 to 0068122f has its CatchHandler @ 00681328 */
    FUN_00680c4c(param_1,&local_70,2);
    uVar3 = local_70;
    lVar5 = 0;
    if (local_68 != 0) {
      FUN_00690a48(local_68);
      FUN_002e2ea0(PTR_LAB_04373088,local_68);
      local_68 = 0;
      uVar3 = local_70;
      lVar5 = local_68;
    }
  }
  local_68 = lVar5;
  if (uVar3 != 0) {
    local_70 = uVar3;
    FUN_00690a48(uVar3);
    FUN_002e2ea0(PTR_LAB_04373088,uVar3);
  }
  return;
}


