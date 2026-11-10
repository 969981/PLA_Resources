/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007a028c; name: FUN_007a028c
 */


void FUN_007a028c(long *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [48];
  long local_38;
  
  if ((long *)param_2[1] != param_1) {
    FUN_0030f640(auStack_70,3,"external/com_google_protobuf/src\\google/protobuf/map.h",0x28e);
                    /* try { // try from 007a02cc to 007a02df has its CatchHandler @ 007a04c8 */
    uVar1 = FUN_0030f3ac(auStack_70,"CHECK failed: (it.m_) == (this): ");
                    /* try { // try from 007a02e0 to 007a02e7 has its CatchHandler @ 007a04c4 */
    FUN_0030f41c(&local_38,uVar1);
    FUN_0030f658(auStack_70);
  }
  local_38 = 0;
  uVar2 = FUN_007a05f8(param_2,&local_38);
  uVar6 = param_2[2];
  lVar4 = param_1[4];
  uVar1 = *param_2;
  lVar5 = *(long *)(lVar4 + uVar6 * 8);
  if ((uVar2 & 1) == 0) {
    if ((lVar5 == 0) || (lVar5 != *(long *)(lVar4 + (uVar6 ^ 1) * 8))) {
      FUN_0030f640(auStack_70,3,"external/com_google_protobuf/src\\google/protobuf/map.h",0x299);
                    /* try { // try from 007a03bc to 007a03cf has its CatchHandler @ 007a04c0 */
      uVar3 = FUN_0030f3ac(auStack_70,"CHECK failed: TableEntryIsTree(b): ");
                    /* try { // try from 007a03d0 to 007a03d7 has its CatchHandler @ 007a04bc */
      FUN_0030f41c(auStack_78,uVar3);
      FUN_0030f658(auStack_70);
      lVar4 = param_1[4];
    }
    lVar4 = *(long *)(lVar4 + uVar6 * 8);
    FUN_007a07d4(lVar4,local_38 + 0x20);
    if (*(long *)(lVar4 + 0x18) == 0) {
      lVar5 = param_1[5];
      FUN_0079ba04(lVar4,*(undefined8 *)(lVar4 + 8));
      if (lVar5 == 0) {
        FUN_002ee710(lVar4);
      }
      *(undefined8 *)(param_1[4] + (uVar6 << 3 | 8)) = 0;
      *(undefined8 *)(param_1[4] + (uVar6 & 0xfffffffffffffffe) * 8) = 0;
      lVar4 = param_1[5];
      uVar6 = uVar6 & 0xfffffffffffffffe;
    }
    else {
      lVar4 = param_1[5];
    }
  }
  else {
    if ((lVar5 == 0) || (lVar5 == *(long *)(lVar4 + (uVar6 ^ 1) * 8))) {
      FUN_0030f640(auStack_70,3,"external/com_google_protobuf/src\\google/protobuf/map.h",0x294);
                    /* try { // try from 007a0340 to 007a0353 has its CatchHandler @ 007a04b8 */
      uVar3 = FUN_0030f3ac(auStack_70,"CHECK failed: TableEntryIsNonEmptyList(b): ");
                    /* try { // try from 007a0354 to 007a035b has its CatchHandler @ 007a04b4 */
      FUN_0030f41c(auStack_78,uVar3);
      FUN_0030f658(auStack_70);
      lVar4 = param_1[4];
    }
    uVar3 = FUN_007a07a0(param_1,uVar1,*(undefined8 *)(lVar4 + uVar6 * 8));
    *(undefined8 *)(param_1[4] + uVar6 * 8) = uVar3;
    lVar4 = param_1[5];
  }
  if (lVar4 == 0) {
    FUN_002ee710(uVar1);
  }
  *param_1 = *param_1 + -1;
  if ((uVar6 == param_1[3]) && (uVar6 < (ulong)param_1[1])) {
    do {
      if (*(long *)(param_1[4] + uVar6 * 8) != 0) {
        return;
      }
      uVar6 = uVar6 + 1;
      param_1[3] = uVar6;
    } while (uVar6 < (ulong)param_1[1]);
  }
  return;
}


