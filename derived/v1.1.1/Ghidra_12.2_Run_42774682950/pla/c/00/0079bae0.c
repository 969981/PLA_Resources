/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0079bae0; name: FUN_0079bae0
 */


/* WARNING: Removing unreachable block (ram,0x0079bbd8) */

void FUN_0079bae0(long param_1,ulong param_2)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined1 auStack_78 [8];
  undefined8 *local_70;
  undefined8 local_68;
  long lStack_60;
  undefined8 local_58;
  
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + param_2 * 8);
  if ((lVar3 == 0) ||
     ((lVar5 = *(long *)(*(long *)(param_1 + 0x20) + (param_2 ^ 1) * 8), lVar3 != lVar5 &&
      (lVar5 == 0 || lVar5 != lVar3)))) {
    lVar3 = *(long *)(param_1 + 0x28);
    if (lVar3 != 0) goto LAB_0079bb2c;
LAB_0079bb9c:
    plVar1 = (long *)FUN_002ee6d0(0x20);
  }
  else {
    FUN_0030f640(&local_70,3,"external/com_google_protobuf/src\\google/protobuf/map.h",0x379);
                    /* try { // try from 0079bb70 to 0079bb83 has its CatchHandler @ 0079bd30 */
    uVar2 = FUN_0030f3ac(&local_70,
                         "CHECK failed: !TableEntryIsTree(b) && !TableEntryIsTree(b ^ 1): ");
                    /* try { // try from 0079bb84 to 0079bb8b has its CatchHandler @ 0079bd2c */
    FUN_0030f41c(auStack_78,uVar2);
    FUN_0030f658(&local_70);
    lVar3 = *(long *)(param_1 + 0x28);
    if (lVar3 == 0) goto LAB_0079bb9c;
LAB_0079bb2c:
    if (*(long *)(lVar3 + 0x70) != 0) {
      FUN_0032cf88(lVar3,0,0x20);
    }
    plVar1 = (long *)FUN_0032cea0(lVar3,0x20);
  }
  lStack_60 = *(long *)(param_1 + 0x28);
  local_70 = &local_68;
  *plVar1 = (long)local_70;
  plVar1[2] = lStack_60;
  plVar1[1] = 0;
  plVar1[3] = 0;
  *plVar1 = (long)(plVar1 + 1);
  local_58 = 0;
  local_68 = 0;
  FUN_0079ba04(&local_70,0);
  puVar6 = *(undefined8 **)(*(long *)(param_1 + 0x20) + param_2 * 8);
  if (puVar6 == (undefined8 *)0x0) {
    lVar3 = 0;
    puVar6 = *(undefined8 **)(*(long *)(param_1 + 0x20) + (param_2 ^ 1) * 8);
    if (puVar6 == (undefined8 *)0x0) goto LAB_0079bc98;
LAB_0079bc48:
    lVar5 = 0;
    do {
      local_70 = puVar6;
      FUN_0079be10(plVar1,&local_70,&local_70);
      puVar4 = (undefined8 *)puVar6[2];
      lVar5 = lVar5 + 1;
      puVar6[2] = 0;
      puVar6 = puVar4;
    } while (puVar4 != (undefined8 *)0x0);
    if (lVar5 + lVar3 == plVar1[3]) goto LAB_0079bce8;
  }
  else {
    lVar3 = 0;
    do {
      local_70 = puVar6;
      FUN_0079be10(plVar1,&local_70,&local_70);
      puVar4 = (undefined8 *)puVar6[2];
      lVar3 = lVar3 + 1;
      puVar6[2] = 0;
      puVar6 = puVar4;
    } while (puVar4 != (undefined8 *)0x0);
    puVar6 = *(undefined8 **)(*(long *)(param_1 + 0x20) + (param_2 ^ 1) * 8);
    if (puVar6 != (undefined8 *)0x0) goto LAB_0079bc48;
LAB_0079bc98:
    if (lVar3 == plVar1[3]) goto LAB_0079bce8;
  }
  FUN_0030f640(&local_70,3,"external/com_google_protobuf/src\\google/protobuf/map.h",900);
                    /* try { // try from 0079bcc4 to 0079bcd7 has its CatchHandler @ 0079bd28 */
  uVar2 = FUN_0030f3ac(&local_70,"CHECK failed: (count) == (tree->size()): ");
                    /* try { // try from 0079bcd8 to 0079bcdf has its CatchHandler @ 0079bd24 */
  FUN_0030f41c(auStack_78,uVar2);
  FUN_0030f658(&local_70);
LAB_0079bce8:
  *(long **)(*(long *)(param_1 + 0x20) + (param_2 ^ 1) * 8) = plVar1;
  *(long **)(*(long *)(param_1 + 0x20) + param_2 * 8) = plVar1;
  return;
}


